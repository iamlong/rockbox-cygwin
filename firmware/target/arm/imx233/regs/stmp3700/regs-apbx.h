/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.8
 * XML versions: stmp3700:3.2.0
 *
 * Copyright (C) 2013 by Amaury Pouly
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __HEADERGEN__STMP3700__APBX__H__
#define __HEADERGEN__STMP3700__APBX__H__

#define REGS_APBX_BASE (0x80024000)

#define REGS_APBX_VERSION "3.2.0"

/**
 * Register: HW_APBX_CTRL0
 * Address: 0
 * SCT: yes
*/
#define HW_APBX_CTRL0                           (*(volatile unsigned long *)(REGS_APBX_BASE + 0x0 + 0x0))
#define HW_APBX_CTRL0_SET                       (*(volatile unsigned long *)(REGS_APBX_BASE + 0x0 + 0x4))
#define HW_APBX_CTRL0_CLR                       (*(volatile unsigned long *)(REGS_APBX_BASE + 0x0 + 0x8))
#define HW_APBX_CTRL0_TOG                       (*(volatile unsigned long *)(REGS_APBX_BASE + 0x0 + 0xc))
#define BP_APBX_CTRL0_SFTRST                    31
#define BM_APBX_CTRL0_SFTRST                    0x80000000
#define BF_APBX_CTRL0_SFTRST(v)                 (((v) << 31) & 0x80000000)
#define BP_APBX_CTRL0_CLKGATE                   30
#define BM_APBX_CTRL0_CLKGATE                   0x40000000
#define BF_APBX_CTRL0_CLKGATE(v)                (((v) << 30) & 0x40000000)
#define BP_APBX_CTRL0_RESET_CHANNEL             16
#define BM_APBX_CTRL0_RESET_CHANNEL             0xff0000
#define BV_APBX_CTRL0_RESET_CHANNEL__AUDIOIN    0x1
#define BV_APBX_CTRL0_RESET_CHANNEL__AUDIOOUT   0x2
#define BV_APBX_CTRL0_RESET_CHANNEL__SPDIF_TX   0x4
#define BV_APBX_CTRL0_RESET_CHANNEL__SAIF2      0x4
#define BV_APBX_CTRL0_RESET_CHANNEL__I2C        0x8
#define BV_APBX_CTRL0_RESET_CHANNEL__SAIF1      0x10
#define BV_APBX_CTRL0_RESET_CHANNEL__DRI        0x20
#define BV_APBX_CTRL0_RESET_CHANNEL__UART_RX    0x40
#define BV_APBX_CTRL0_RESET_CHANNEL__IRDA_RX    0x40
#define BV_APBX_CTRL0_RESET_CHANNEL__UART_TX    0x80
#define BV_APBX_CTRL0_RESET_CHANNEL__IRDA_TX    0x80
#define BF_APBX_CTRL0_RESET_CHANNEL(v)          (((v) << 16) & 0xff0000)
#define BF_APBX_CTRL0_RESET_CHANNEL_V(v)        ((BV_APBX_CTRL0_RESET_CHANNEL__##v << 16) & 0xff0000)
#define BP_APBX_CTRL0_FREEZE_CHANNEL            0
#define BM_APBX_CTRL0_FREEZE_CHANNEL            0xff
#define BV_APBX_CTRL0_FREEZE_CHANNEL__AUDIOIN   0x1
#define BV_APBX_CTRL0_FREEZE_CHANNEL__AUDIOOUT  0x2
#define BV_APBX_CTRL0_FREEZE_CHANNEL__SPDIF_TX  0x4
#define BV_APBX_CTRL0_FREEZE_CHANNEL__SAIF2     0x4
#define BV_APBX_CTRL0_FREEZE_CHANNEL__I2C       0x8
#define BV_APBX_CTRL0_FREEZE_CHANNEL__SAIF1     0x10
#define BV_APBX_CTRL0_FREEZE_CHANNEL__DRI       0x20
#define BV_APBX_CTRL0_FREEZE_CHANNEL__UART_RX   0x40
#define BV_APBX_CTRL0_FREEZE_CHANNEL__IRDA_RX   0x40
#define BV_APBX_CTRL0_FREEZE_CHANNEL__UART_TX   0x80
#define BV_APBX_CTRL0_FREEZE_CHANNEL__IRDA_TX   0x80
#define BF_APBX_CTRL0_FREEZE_CHANNEL(v)         (((v) << 0) & 0xff)
#define BF_APBX_CTRL0_FREEZE_CHANNEL_V(v)       ((BV_APBX_CTRL0_FREEZE_CHANNEL__##v << 0) & 0xff)

/**
 * Register: HW_APBX_CTRL1
 * Address: 0x10
 * SCT: yes
*/
#define HW_APBX_CTRL1                       (*(volatile unsigned long *)(REGS_APBX_BASE + 0x10 + 0x0))
#define HW_APBX_CTRL1_SET                   (*(volatile unsigned long *)(REGS_APBX_BASE + 0x10 + 0x4))
#define HW_APBX_CTRL1_CLR                   (*(volatile unsigned long *)(REGS_APBX_BASE + 0x10 + 0x8))
#define HW_APBX_CTRL1_TOG                   (*(volatile unsigned long *)(REGS_APBX_BASE + 0x10 + 0xc))
#define BP_APBX_CTRL1_CH_AHB_ERROR_IRQ      16
#define BM_APBX_CTRL1_CH_AHB_ERROR_IRQ      0xff0000
#define BF_APBX_CTRL1_CH_AHB_ERROR_IRQ(v)   (((v) << 16) & 0xff0000)
#define BP_APBX_CTRL1_CH_CMDCMPLT_IRQ_EN    8
#define BM_APBX_CTRL1_CH_CMDCMPLT_IRQ_EN    0xff00
#define BF_APBX_CTRL1_CH_CMDCMPLT_IRQ_EN(v) (((v) << 8) & 0xff00)
#define BP_APBX_CTRL1_CH_CMDCMPLT_IRQ       0
#define BM_APBX_CTRL1_CH_CMDCMPLT_IRQ       0xff
#define BF_APBX_CTRL1_CH_CMDCMPLT_IRQ(v)    (((v) << 0) & 0xff)

/**
 * Register: HW_APBX_DEVSEL
 * Address: 0x20
 * SCT: no
*/
#define HW_APBX_DEVSEL                  (*(volatile unsigned long *)(REGS_APBX_BASE + 0x20))
#define BP_APBX_DEVSEL_CH7              28
#define BM_APBX_DEVSEL_CH7              0xf0000000
#define BV_APBX_DEVSEL_CH7__USE_UART    0x0
#define BV_APBX_DEVSEL_CH7__USE_IRDA    0x1
#define BF_APBX_DEVSEL_CH7(v)           (((v) << 28) & 0xf0000000)
#define BF_APBX_DEVSEL_CH7_V(v)         ((BV_APBX_DEVSEL_CH7__##v << 28) & 0xf0000000)
#define BP_APBX_DEVSEL_CH6              24
#define BM_APBX_DEVSEL_CH6              0xf000000
#define BV_APBX_DEVSEL_CH6__USE_UART    0x0
#define BV_APBX_DEVSEL_CH6__USE_IRDA    0x1
#define BF_APBX_DEVSEL_CH6(v)           (((v) << 24) & 0xf000000)
#define BF_APBX_DEVSEL_CH6_V(v)         ((BV_APBX_DEVSEL_CH6__##v << 24) & 0xf000000)
#define BP_APBX_DEVSEL_CH5              20
#define BM_APBX_DEVSEL_CH5              0xf00000
#define BF_APBX_DEVSEL_CH5(v)           (((v) << 20) & 0xf00000)
#define BP_APBX_DEVSEL_CH4              16
#define BM_APBX_DEVSEL_CH4              0xf0000
#define BF_APBX_DEVSEL_CH4(v)           (((v) << 16) & 0xf0000)
#define BP_APBX_DEVSEL_CH3              12
#define BM_APBX_DEVSEL_CH3              0xf000
#define BF_APBX_DEVSEL_CH3(v)           (((v) << 12) & 0xf000)
#define BP_APBX_DEVSEL_CH2              8
#define BM_APBX_DEVSEL_CH2              0xf00
#define BV_APBX_DEVSEL_CH2__USE_SPDIF   0x0
#define BV_APBX_DEVSEL_CH2__USE_SAIF2   0x1
#define BF_APBX_DEVSEL_CH2(v)           (((v) << 8) & 0xf00)
#define BF_APBX_DEVSEL_CH2_V(v)         ((BV_APBX_DEVSEL_CH2__##v << 8) & 0xf00)
#define BP_APBX_DEVSEL_CH1              4
#define BM_APBX_DEVSEL_CH1              0xf0
#define BF_APBX_DEVSEL_CH1(v)           (((v) << 4) & 0xf0)
#define BP_APBX_DEVSEL_CH0              0
#define BM_APBX_DEVSEL_CH0              0xf
#define BF_APBX_DEVSEL_CH0(v)           (((v) << 0) & 0xf)

/**
 * Register: HW_APBX_CHn_CURCMDAR
 * Address: 0x40+n*0x70
 * SCT: no
*/
#define HW_APBX_CHn_CURCMDAR(n)             (*(volatile unsigned long *)(REGS_APBX_BASE + 0x40+(n)*0x70))
#define BP_APBX_CHn_CURCMDAR_CMD_ADDR       0
#define BM_APBX_CHn_CURCMDAR_CMD_ADDR       0xffffffff
#define BF_APBX_CHn_CURCMDAR_CMD_ADDR(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_APBX_CHn_NXTCMDAR
 * Address: 0x50+n*0x70
 * SCT: no
*/
#define HW_APBX_CHn_NXTCMDAR(n)             (*(volatile unsigned long *)(REGS_APBX_BASE + 0x50+(n)*0x70))
#define BP_APBX_CHn_NXTCMDAR_CMD_ADDR       0
#define BM_APBX_CHn_NXTCMDAR_CMD_ADDR       0xffffffff
#define BF_APBX_CHn_NXTCMDAR_CMD_ADDR(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_APBX_CHn_CMD
 * Address: 0x60+n*0x70
 * SCT: no
*/
#define HW_APBX_CHn_CMD(n)                      (*(volatile unsigned long *)(REGS_APBX_BASE + 0x60+(n)*0x70))
#define BP_APBX_CHn_CMD_XFER_COUNT              16
#define BM_APBX_CHn_CMD_XFER_COUNT              0xffff0000
#define BF_APBX_CHn_CMD_XFER_COUNT(v)           (((v) << 16) & 0xffff0000)
#define BP_APBX_CHn_CMD_CMDWORDS                12
#define BM_APBX_CHn_CMD_CMDWORDS                0xf000
#define BF_APBX_CHn_CMD_CMDWORDS(v)             (((v) << 12) & 0xf000)
#define BP_APBX_CHn_CMD_WAIT4ENDCMD             7
#define BM_APBX_CHn_CMD_WAIT4ENDCMD             0x80
#define BF_APBX_CHn_CMD_WAIT4ENDCMD(v)          (((v) << 7) & 0x80)
#define BP_APBX_CHn_CMD_SEMAPHORE               6
#define BM_APBX_CHn_CMD_SEMAPHORE               0x40
#define BF_APBX_CHn_CMD_SEMAPHORE(v)            (((v) << 6) & 0x40)
#define BP_APBX_CHn_CMD_IRQONCMPLT              3
#define BM_APBX_CHn_CMD_IRQONCMPLT              0x8
#define BF_APBX_CHn_CMD_IRQONCMPLT(v)           (((v) << 3) & 0x8)
#define BP_APBX_CHn_CMD_CHAIN                   2
#define BM_APBX_CHn_CMD_CHAIN                   0x4
#define BF_APBX_CHn_CMD_CHAIN(v)                (((v) << 2) & 0x4)
#define BP_APBX_CHn_CMD_COMMAND                 0
#define BM_APBX_CHn_CMD_COMMAND                 0x3
#define BV_APBX_CHn_CMD_COMMAND__NO_DMA_XFER    0x0
#define BV_APBX_CHn_CMD_COMMAND__DMA_WRITE      0x1
#define BV_APBX_CHn_CMD_COMMAND__DMA_READ       0x2
#define BF_APBX_CHn_CMD_COMMAND(v)              (((v) << 0) & 0x3)
#define BF_APBX_CHn_CMD_COMMAND_V(v)            ((BV_APBX_CHn_CMD_COMMAND__##v << 0) & 0x3)

/**
 * Register: HW_APBX_CHn_BAR
 * Address: 0x70+n*0x70
 * SCT: no
*/
#define HW_APBX_CHn_BAR(n)          (*(volatile unsigned long *)(REGS_APBX_BASE + 0x70+(n)*0x70))
#define BP_APBX_CHn_BAR_ADDRESS     0
#define BM_APBX_CHn_BAR_ADDRESS     0xffffffff
#define BF_APBX_CHn_BAR_ADDRESS(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_APBX_CHn_SEMA
 * Address: 0x80+n*0x70
 * SCT: no
*/
#define HW_APBX_CHn_SEMA(n)                 (*(volatile unsigned long *)(REGS_APBX_BASE + 0x80+(n)*0x70))
#define BP_APBX_CHn_SEMA_PHORE              16
#define BM_APBX_CHn_SEMA_PHORE              0xff0000
#define BF_APBX_CHn_SEMA_PHORE(v)           (((v) << 16) & 0xff0000)
#define BP_APBX_CHn_SEMA_INCREMENT_SEMA     0
#define BM_APBX_CHn_SEMA_INCREMENT_SEMA     0xff
#define BF_APBX_CHn_SEMA_INCREMENT_SEMA(v)  (((v) << 0) & 0xff)

/**
 * Register: HW_APBX_CHn_DEBUG1
 * Address: 0x90+n*0x70
 * SCT: no
*/
#define HW_APBX_CHn_DEBUG1(n)                           (*(volatile unsigned long *)(REGS_APBX_BASE + 0x90+(n)*0x70))
#define BP_APBX_CHn_DEBUG1_REQ                          31
#define BM_APBX_CHn_DEBUG1_REQ                          0x80000000
#define BF_APBX_CHn_DEBUG1_REQ(v)                       (((v) << 31) & 0x80000000)
#define BP_APBX_CHn_DEBUG1_BURST                        30
#define BM_APBX_CHn_DEBUG1_BURST                        0x40000000
#define BF_APBX_CHn_DEBUG1_BURST(v)                     (((v) << 30) & 0x40000000)
#define BP_APBX_CHn_DEBUG1_KICK                         29
#define BM_APBX_CHn_DEBUG1_KICK                         0x20000000
#define BF_APBX_CHn_DEBUG1_KICK(v)                      (((v) << 29) & 0x20000000)
#define BP_APBX_CHn_DEBUG1_END                          28
#define BM_APBX_CHn_DEBUG1_END                          0x10000000
#define BF_APBX_CHn_DEBUG1_END(v)                       (((v) << 28) & 0x10000000)
#define BP_APBX_CHn_DEBUG1_NEXTCMDADDRVALID             24
#define BM_APBX_CHn_DEBUG1_NEXTCMDADDRVALID             0x1000000
#define BF_APBX_CHn_DEBUG1_NEXTCMDADDRVALID(v)          (((v) << 24) & 0x1000000)
#define BP_APBX_CHn_DEBUG1_RD_FIFO_EMPTY                23
#define BM_APBX_CHn_DEBUG1_RD_FIFO_EMPTY                0x800000
#define BF_APBX_CHn_DEBUG1_RD_FIFO_EMPTY(v)             (((v) << 23) & 0x800000)
#define BP_APBX_CHn_DEBUG1_RD_FIFO_FULL                 22
#define BM_APBX_CHn_DEBUG1_RD_FIFO_FULL                 0x400000
#define BF_APBX_CHn_DEBUG1_RD_FIFO_FULL(v)              (((v) << 22) & 0x400000)
#define BP_APBX_CHn_DEBUG1_WR_FIFO_EMPTY                21
#define BM_APBX_CHn_DEBUG1_WR_FIFO_EMPTY                0x200000
#define BF_APBX_CHn_DEBUG1_WR_FIFO_EMPTY(v)             (((v) << 21) & 0x200000)
#define BP_APBX_CHn_DEBUG1_WR_FIFO_FULL                 20
#define BM_APBX_CHn_DEBUG1_WR_FIFO_FULL                 0x100000
#define BF_APBX_CHn_DEBUG1_WR_FIFO_FULL(v)              (((v) << 20) & 0x100000)
#define BP_APBX_CHn_DEBUG1_STATEMACHINE                 0
#define BM_APBX_CHn_DEBUG1_STATEMACHINE                 0x1f
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__IDLE           0x0
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__REQ_CMD1       0x1
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__REQ_CMD3       0x2
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__REQ_CMD2       0x3
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__XFER_DECODE    0x4
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__REQ_WAIT       0x5
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__REQ_CMD4       0x6
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__PIO_REQ        0x7
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__READ_FLUSH     0x8
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__READ_WAIT      0x9
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__WRITE          0xc
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__READ_REQ       0xd
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__CHECK_CHAIN    0xe
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__XFER_COMPLETE  0xf
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__WAIT_END       0x15
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__WRITE_WAIT     0x1c
#define BV_APBX_CHn_DEBUG1_STATEMACHINE__CHECK_WAIT     0x1e
#define BF_APBX_CHn_DEBUG1_STATEMACHINE(v)              (((v) << 0) & 0x1f)
#define BF_APBX_CHn_DEBUG1_STATEMACHINE_V(v)            ((BV_APBX_CHn_DEBUG1_STATEMACHINE__##v << 0) & 0x1f)

/**
 * Register: HW_APBX_CHn_DEBUG2
 * Address: 0xa0+n*0x70
 * SCT: no
*/
#define HW_APBX_CHn_DEBUG2(n)           (*(volatile unsigned long *)(REGS_APBX_BASE + 0xa0+(n)*0x70))
#define BP_APBX_CHn_DEBUG2_APB_BYTES    16
#define BM_APBX_CHn_DEBUG2_APB_BYTES    0xffff0000
#define BF_APBX_CHn_DEBUG2_APB_BYTES(v) (((v) << 16) & 0xffff0000)
#define BP_APBX_CHn_DEBUG2_AHB_BYTES    0
#define BM_APBX_CHn_DEBUG2_AHB_BYTES    0xffff
#define BF_APBX_CHn_DEBUG2_AHB_BYTES(v) (((v) << 0) & 0xffff)

/**
 * Register: HW_APBX_VERSION
 * Address: 0x3f0
 * SCT: no
*/
#define HW_APBX_VERSION             (*(volatile unsigned long *)(REGS_APBX_BASE + 0x3f0))
#define BP_APBX_VERSION_MAJOR       24
#define BM_APBX_VERSION_MAJOR       0xff000000
#define BF_APBX_VERSION_MAJOR(v)    (((v) << 24) & 0xff000000)
#define BP_APBX_VERSION_MINOR       16
#define BM_APBX_VERSION_MINOR       0xff0000
#define BF_APBX_VERSION_MINOR(v)    (((v) << 16) & 0xff0000)
#define BP_APBX_VERSION_STEP        0
#define BM_APBX_VERSION_STEP        0xffff
#define BF_APBX_VERSION_STEP(v)     (((v) << 0) & 0xffff)

#endif /* __HEADERGEN__STMP3700__APBX__H__ */
