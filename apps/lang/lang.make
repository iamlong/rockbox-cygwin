#             __________               __   ___.
#   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
#   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
#   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
#   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
#                     \/            \/     \/    \/            \/
# $Id$
#

LANGS := $(call preprocess, $(APPSDIR)/lang/SOURCES)
LANGOBJ := $(LANGS:$(ROOTDIR)/%.lang=$(BUILDDIR)/%.lng)
#$(warning LANGOBJ: $(LANGOBJ))
VOICEOBJ := $(LANGS:$(ROOTDIR)/%.lang=$(BUILDDIR)/%.vstrings)
#$(warning VOICEOBJ: $(VOICEOBJ))
LANG_O = $(BUILDDIR)/lang/lang_core.o

CLEANOBJS += $(BUILDDIR)/lang/max_language_size.h $(BUILDDIR)/lang/lang*

# $(BUILDDIR)/apps/lang must exist before we create dependencies on it,
# otherwise make will simply ignore those dependencies.
# Therefore we create it here.
#Below are the modifications special for cygwin
DUMMY := $(shell mkdir -p $(BUILDDIR)/apps/lang)
DUMMY := $(shell mkdir -p $(BUILDDIR)/lang)
DUMMY := $(shell for f in `cat $(BUILDDIR)/apps/features`; do feat="$$feat:$$f" ; done; \
             perl $(TOOLSDIR)/genlang -p=$(BUILDDIR)/lang -t=$$feat $(APPSDIR)/lang/$(LANGUAGE).lang)
DUMMY := $(shell cp $(APPSDIR)/lang/english* $(BUILDDIR)/apps/lang)
DUMMY := $(shell cp $(APPSDIR)/lang/chinese* $(BUILDDIR)/apps/lang)
DUMMY1 := $(shell ls -ln $(BUILDDIR)/apps/lang | awk '{print $$5-10}' | sort -n | tail -1)
DUMMY := $(shell echo "\#define MAX_LANGUAGE_SIZE $(DUMMY1)" | cat > $(BUILDDIR)/lang/max_language_size.h)

# Calculate the maximum language size. Currently based on the file size
# of the largest lng file. Subtract 10 due to HEADER_SIZE and 
# SUBHEADER_SIZE.
# TODO: In the future generate this file within genlang or another script
# in order to only calculate the maximum size based on the core strings.
$(BUILDDIR)/lang/max_language_size.h: $(LANGOBJ) $(BUILDDIR)/apps/lang/voicestrings.zip
	$(call PRINTS,GEN $(subst $(BUILDDIR)/,,$@))
	$(warning A)
	$(SILENT)echo "#define MAX_LANGUAGE_SIZE `ls -ln $(BUILDDIR)/apps/lang/*.lng | awk '{print $$5-10}' | sort -n | tail -1`" > $@

$(BUILDDIR)/lang/lang_core.o: $(APPSDIR)/lang/$(LANGUAGE).lang $(BUILDDIR)/apps/features
	$(SILENT)for f in `cat $(BUILDDIR)/apps/features`; do feat="$$feat:$$f" ; done; \
		perl -s $(TOOLSDIR)/genlang -p=$(BUILDDIR)/lang -t=$(MODELNAME)$$feat $<
	$(warning B)
	$(call PRINTS,CC lang_core.c)$(CC) $(CFLAGS) -c $(call convpath, $(BUILDDIR)/lang/lang_core.c) -o $(call convpath, $@)

$(BUILDDIR)/lang/lang.h: $(BUILDDIR)/lang/lang_core.o

$(BUILDDIR)/%.lng $(BUILDDIR)/%.vstrings: $(ROOTDIR)/%.lang $(BUILDDIR)/apps/genlang-features
	$(call PRINTS,GENLANG $(subst $(ROOTDIR)/,,$<))
	$(warning C)
	$(SILENT)mkdir -p $(dir $@)
	$(SILENT)$(TOOLSDIR)/genlang -e=$(APPSDIR)/lang/english.lang -t=$(MODELNAME):`cat $(BUILDDIR)/apps/genlang-features` -i=$(TARGET_ID) -b=$*.lng -c=$*.vstrings $<

$(BUILDDIR)/apps/lang/voicestrings.zip: $(VOICEOBJ)
	$(call PRINTS,ZIP $(subst $(BUILDDIR)/,,$@))
	$(warning D)
	$(SILENT)zip -9 -q $@ $(subst $(BUILDDIR)/,,$^)
