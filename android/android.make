#             __________               __   ___.
#   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
#   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
#   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
#   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
#                     \/            \/     \/    \/            \/
# $Id$
#

PACKAGE=org.rockbox
PACKAGE_PATH=org/rockbox
BINLIB_DIR=$(BUILDDIR)/libs/$(ANDROID_ARCH)
ANDROID_DIR=$(ROOTDIR)/android

# this is a glibc compatibility hack to provide a get_nprocs() replacement.
# The NDK ships cpu-features.c which has a compatible function android_getCpuCount()
CPUFEAT = $(ANDROID_NDK_PATH)/sources/android/cpufeatures
CPUFEAT_BUILD = $(BUILDDIR)
INCLUDES += -I$(call convpath, $(CPUFEAT))
OTHER_SRC += $(CPUFEAT)/cpu-features.c
CLEANOBJS += $(CPUFEAT_BUILD)/cpu-features.o
$(CPUFEAT_BUILD)/cpu-features.o: $(CPUFEAT)/cpu-features.c
	$(SILENT)mkdir -p $(dir $@)
	$(call PRINTS,CC $(subst $(CPUFEAT)/,,$<))$(CC) -o $(call convpath, $@) -c $(call convpath, $^) $(GCCOPTS) -Wno-unused

.SECONDEXPANSION: # $$(JAVA_OBJ) is not populated until after this
.SECONDEXPANSION: # $$(OBJ) is not populated until after this
.PHONY: apk classes clean dex dirs libs jar

# API version
ANDROID_PLATFORM_VERSION=19
ANDROID_PLATFORM=$(ANDROID_SDK_PATH)/platforms/android-$(ANDROID_PLATFORM_VERSION)

# android tools
BUILD_TOOLS_VERSION=$(notdir $(firstword $(wildcard $(ANDROID_SDK_PATH)/build-tools/$(ANDROID_PLATFORM_VERSION).*)))
AAPT=$(ANDROID_SDK_PATH)/build-tools/$(BUILD_TOOLS_VERSION)/aapt
DX=$(ANDROID_SDK_PATH)/build-tools/$(BUILD_TOOLS_VERSION)/dx.bat
ZIPALIGN=$(ANDROID_SDK_PATH)/build-tools/$(BUILD_TOOLS_VERSION)/zipalign
KEYSTORE=$(HOME)/.android/debug.keystore
ADB=$(ANDROID_SDK_PATH)/platform-tools/adb
BUILDAPK=$(ANDROID_DIR)/buildapk.sh

CLASSPATH   := $(BUILDDIR)/bin/classes

MANIFEST	:= $(BUILDDIR)/bin/AndroidManifest.xml
MANIFEST_SRC	:= $(ANDROID_DIR)/AndroidManifest.xml

R_JAVA		:= $(BUILDDIR)/gen/$(PACKAGE_PATH)/R.java
R_OBJ		:= $(CLASSPATH)/$(PACKAGE_PATH)/R.class

JAVA_SRC	:= $(wildcard $(ANDROID_DIR)/src/$(PACKAGE_PATH)/*.java)
JAVA_SRC	+= $(wildcard $(ANDROID_DIR)/src/$(PACKAGE_PATH)/Helper/*.java)
JAVA_SRC	+= $(wildcard $(ANDROID_DIR)/src/$(PACKAGE_PATH)/widgets/*.java)
JAVA_SRC	+= $(wildcard $(ANDROID_DIR)/src/$(PACKAGE_PATH)/monitors/*.java)

java2class = $(addsuffix .class,$(basename $(subst $(ANDROID_DIR)/src,$(CLASSPATH),$(1))))

JAVA_OBJ	:= $(call java2class,$(JAVA_SRC))


LIBS		:= $(BINLIB_DIR)/$(BINARY) $(BINLIB_DIR)/libmisc.so
LIBS 		+= $(addprefix $(BINLIB_DIR)/lib,$(patsubst %.codec,%.so,$(notdir $(CODECS))))

TEMP_APK	:= $(BUILDDIR)/bin/_rockbox.apk
TEMP_APK2	:= $(BUILDDIR)/bin/__rockbox.apk
DEX			:= $(BUILDDIR)/bin/classes.dex
JAR			:= $(BUILDDIR)/bin/classes.jar
AP_			:= $(BUILDDIR)/bin/resources.ap_
APK			:= $(BUILDDIR)/rockbox.apk

_DIRS		:= $(BUILDDIR)/___/$(PACKAGE_PATH)
DIRS		+= $(subst ___,gen,$(_DIRS))
DIRS		+= $(subst ___,data,$(_DIRS))
DIRS		+= $(BUILDDIR)/libs/$(ANDROID_ARCH)
DIRS		+= $(CPUFEAT_BUILD)
DIRS		+= $(CLASSPATH)

RES		:= $(wildcard $(ANDROID_DIR)/res/*/*)

CLEANOBJS += bin gen libs data

JAVAC_OPTS += -source 1.6 -target 1.6 -implicit:none  -Xlint:deprecation -classpath "$(shell cygpath -pm $(ANDROID_PLATFORM)/android.jar:$(CLASSPATH))"

.PHONY:
$(MANIFEST): $(MANIFEST_SRC) $(DIRS)
	$(call PRINTS,MANIFEST $(@F))sed -e 's/versionName="1.0"/versionName="$(SVNVERSION)"/;s/screenOrientation="portrait"/screenOrientation="$(LCDORIENTATION)"/' $(MANIFEST_SRC) > $(MANIFEST)

$(R_JAVA) $(AP_): $(MANIFEST) $(RES) | $(DIRS)
	$(call PRINTS,AAPT $(subst $(BUILDDIR)/,,$@))$(AAPT) package -f -m \
		-J $(call convpath, $(BUILDDIR)/gen) -M $(call convpath, $(MANIFEST)) -S $(call convpath, $(ANDROID_DIR)/res) \
		-I $(call convpath, $(ANDROID_PLATFORM)/android.jar) -F $(call convpath, $(AP_))
		
$(CLASSPATH)/$(PACKAGE_PATH)/R.class: $(R_JAVA)
	$(call PRINTS,JAVAC $(subst $(ROOTDIR)/,,$<))javac -d $(BUILDDIR)/bin \
		$(JAVAC_OPTS) -sourcepath $(ANDROID_DIR)/gen $<

$(CLASSPATH)/$(PACKAGE_PATH)/%.class: $(ANDROID_DIR)/src/$(PACKAGE_PATH)/%.java $(CLASSPATH)/$(PACKAGE_PATH)/R.class
	$(call PRINTS,JAVAC $(subst $(ROOTDIR)/,,$<))javac -d $(CLASSPATH) \
		$(JAVAC_OPTS) -sourcepath $(ANDROID_DIR)/src $<

$(JAR): $(JAVA_SRC) $(R_JAVA)
	$(call PRINTS,JAVAC $(subst $(ROOTDIR)/,,$?))javac -d $(call convpath, $(CLASSPATH)) \
		$(JAVAC_OPTS) -sourcepath "$(call convpath, $(ANDROID_DIR)/src);$(call convpath, $(ANDROID_DIR)/gen)" $(call convpath, $?)
	$(call PRINTS,JAR $(subst $(BUILDDIR)/,,$@))jar cf $(call convpath, $(JAR)) -C $(call convpath, $(CLASSPATH)) org

jar: $(JAR)

$(DEX): $(JAR)
	@echo "Checking for deleted class files" && $(foreach obj,$(JAVA_OBJ) $(R_OBJ), \
		(test -f $(obj) || (echo "$(obj) is missing. Run 'make classes' to fix." && false)) && ) true
	$(call PRINTS,DX $(subst $(BUILDDIR)/,,$@))$(DX) --dex --output=$(call convpath, $@) $(call convpath, $<)

dex: $(DEX)

classes: $(R_OBJ) $(JAVA_OBJ)


$(BUILDDIR)/$(BINARY): $$(OBJ) $(FIRMLIB) $(VOICESPEEXLIB) $(CORE_LIBS) $(CPUFEAT_BUILD)/cpu-features.o
	$(call PRINTS,LD $(BINARY))$(CC) -o $(call convpath, $@) $(call convpath, $^) $(LDOPTS) $(GLOBAL_LDOPTS) -Wl,-Map,$(call convpath, $(BUILDDIR)/rockbox.map)
	$(call PRINTS,OC $(@F))$(call objcopy,$(call convpath,$@),$(call convpath,$@))

$(BINLIB_DIR)/$(BINARY): $(BUILDDIR)/$(BINARY)
	$(call PRINTS,CP $(BINARY))cp $^ $@

$(BINLIB_DIR)/libmisc.so: $(BUILDDIR)/rockbox.zip
	$(call PRINTS,CP rockbox.zip)cp $^ $@

$(BINLIB_DIR)/lib%.so: $(RBCODEC_BLD)/codecs/%.codec
	$(call PRINTS,CP $(@F))cp $^ $@

libs: $(DIRS) $(LIBS)

$(TEMP_APK): $(AP_) $(LIBS) $(DEX) | $(DIRS)
	$(call PRINTS,APK $(subst $(BUILDDIR)/,,$@))$(BUILDAPK) $(BUILDDIR) $(notdir $@) $(BUILD_TOOLS_VERSION) 

$(KEYSTORE):
	$(SILENT)mkdir -p $(HOME)/.android
	$(call PRINTS,KEYTOOL debug.keystore)keytool -genkey \
		-alias androiddebugkey -keystore $(call convpath,$@) \
		-storepass android -keypass android -validity 365 \
		-sigalg MD5withRSA -keyalg RSA -keysize 1024 \
		-dname "CN=Android Debug,O=Android,C=US"

ifdef NODEPS
$(APK): $(TEMP_APK) $(KEYSTORE)
else
$(APK): $(TEMP_APK) $(BUILDDIR)/rockbox.zip $(KEYSTORE)
endif
	$(SILENT)rm -f $@
	$(call PRINTS,SIGN $(subst $(BUILDDIR)/,,$@))jarsigner \
		-keystore "$(call convpath,$(KEYSTORE))" -storepass "android" -keypass "android" \
		-signedjar $(call convpath,$(TEMP_APK2)) $(call convpath,$(TEMP_APK)) "androiddebugkey" \
		-sigalg MD5withRSA -digestalg SHA1
	$(SILENT)$(ZIPALIGN) -v 4 $(call convpath, $(TEMP_APK2)) $(call convpath,$@) > /dev/null

$(DIRS):
	$(SILENT)mkdir -p $@

dirs: $(DIRS)

apk: $(APK)

install: apk
	$(SILENT)$(ADB) install -r $(APK)

launch:
	$(SILENT)echo 'am start -a android.intent.action.MAIN -n org.rockbox/.RockboxActivity; exit' | $(ADB) shell >/dev/null
