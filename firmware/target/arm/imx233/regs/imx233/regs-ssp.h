/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.8
 * XML versions: imx233:3.2.0
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
#ifndef __HEADERGEN__IMX233__SSP__H__
#define __HEADERGEN__IMX233__SSP__H__

#define REGS_SSP_BASE(i) ((i) == 1 ? 0x80010000 : 0x80034000)

#define REGS_SSP_VERSION "3.2.0"

/**
 * Register: HW_SSP_CTRL0
 * Address: 0
 * SCT: yes
*/
#define HW_SSP_CTRL0(d)                     (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x0 + 0x0))
#define HW_SSP_CTRL0_SET(d)                 (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x0 + 0x4))
#define HW_SSP_CTRL0_CLR(d)                 (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x0 + 0x8))
#define HW_SSP_CTRL0_TOG(d)                 (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x0 + 0xc))
#define BP_SSP_CTRL0_SFTRST                 31
#define BM_SSP_CTRL0_SFTRST                 0x80000000
#define BF_SSP_CTRL0_SFTRST(v)              (((v) << 31) & 0x80000000)
#define BP_SSP_CTRL0_CLKGATE                30
#define BM_SSP_CTRL0_CLKGATE                0x40000000
#define BF_SSP_CTRL0_CLKGATE(v)             (((v) << 30) & 0x40000000)
#define BP_SSP_CTRL0_RUN                    29
#define BM_SSP_CTRL0_RUN                    0x20000000
#define BF_SSP_CTRL0_RUN(v)                 (((v) << 29) & 0x20000000)
#define BP_SSP_CTRL0_SDIO_IRQ_CHECK         28
#define BM_SSP_CTRL0_SDIO_IRQ_CHECK         0x10000000
#define BF_SSP_CTRL0_SDIO_IRQ_CHECK(v)      (((v) << 28) & 0x10000000)
#define BP_SSP_CTRL0_LOCK_CS                27
#define BM_SSP_CTRL0_LOCK_CS                0x8000000
#define BF_SSP_CTRL0_LOCK_CS(v)             (((v) << 27) & 0x8000000)
#define BP_SSP_CTRL0_IGNORE_CRC             26
#define BM_SSP_CTRL0_IGNORE_CRC             0x4000000
#define BF_SSP_CTRL0_IGNORE_CRC(v)          (((v) << 26) & 0x4000000)
#define BP_SSP_CTRL0_READ                   25
#define BM_SSP_CTRL0_READ                   0x2000000
#define BF_SSP_CTRL0_READ(v)                (((v) << 25) & 0x2000000)
#define BP_SSP_CTRL0_DATA_XFER              24
#define BM_SSP_CTRL0_DATA_XFER              0x1000000
#define BF_SSP_CTRL0_DATA_XFER(v)           (((v) << 24) & 0x1000000)
#define BP_SSP_CTRL0_BUS_WIDTH              22
#define BM_SSP_CTRL0_BUS_WIDTH              0xc00000
#define BV_SSP_CTRL0_BUS_WIDTH__ONE_BIT     0x0
#define BV_SSP_CTRL0_BUS_WIDTH__FOUR_BIT    0x1
#define BV_SSP_CTRL0_BUS_WIDTH__EIGHT_BIT   0x2
#define BF_SSP_CTRL0_BUS_WIDTH(v)           (((v) << 22) & 0xc00000)
#define BF_SSP_CTRL0_BUS_WIDTH_V(v)         ((BV_SSP_CTRL0_BUS_WIDTH__##v << 22) & 0xc00000)
#define BP_SSP_CTRL0_WAIT_FOR_IRQ           21
#define BM_SSP_CTRL0_WAIT_FOR_IRQ           0x200000
#define BF_SSP_CTRL0_WAIT_FOR_IRQ(v)        (((v) << 21) & 0x200000)
#define BP_SSP_CTRL0_WAIT_FOR_CMD           20
#define BM_SSP_CTRL0_WAIT_FOR_CMD           0x100000
#define BF_SSP_CTRL0_WAIT_FOR_CMD(v)        (((v) << 20) & 0x100000)
#define BP_SSP_CTRL0_LONG_RESP              19
#define BM_SSP_CTRL0_LONG_RESP              0x80000
#define BF_SSP_CTRL0_LONG_RESP(v)           (((v) << 19) & 0x80000)
#define BP_SSP_CTRL0_CHECK_RESP             18
#define BM_SSP_CTRL0_CHECK_RESP             0x40000
#define BF_SSP_CTRL0_CHECK_RESP(v)          (((v) << 18) & 0x40000)
#define BP_SSP_CTRL0_GET_RESP               17
#define BM_SSP_CTRL0_GET_RESP               0x20000
#define BF_SSP_CTRL0_GET_RESP(v)            (((v) << 17) & 0x20000)
#define BP_SSP_CTRL0_ENABLE                 16
#define BM_SSP_CTRL0_ENABLE                 0x10000
#define BF_SSP_CTRL0_ENABLE(v)              (((v) << 16) & 0x10000)
#define BP_SSP_CTRL0_XFER_COUNT             0
#define BM_SSP_CTRL0_XFER_COUNT             0xffff
#define BF_SSP_CTRL0_XFER_COUNT(v)          (((v) << 0) & 0xffff)

/**
 * Register: HW_SSP_CMD0
 * Address: 0x10
 * SCT: yes
*/
#define HW_SSP_CMD0(d)                              (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x10 + 0x0))
#define HW_SSP_CMD0_SET(d)                          (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x10 + 0x4))
#define HW_SSP_CMD0_CLR(d)                          (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x10 + 0x8))
#define HW_SSP_CMD0_TOG(d)                          (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x10 + 0xc))
#define BP_SSP_CMD0_RSVD0                           23
#define BM_SSP_CMD0_RSVD0                           0xff800000
#define BF_SSP_CMD0_RSVD0(v)                        (((v) << 23) & 0xff800000)
#define BP_SSP_CMD0_SLOW_CLKING_EN                  22
#define BM_SSP_CMD0_SLOW_CLKING_EN                  0x400000
#define BF_SSP_CMD0_SLOW_CLKING_EN(v)               (((v) << 22) & 0x400000)
#define BP_SSP_CMD0_CONT_CLKING_EN                  21
#define BM_SSP_CMD0_CONT_CLKING_EN                  0x200000
#define BF_SSP_CMD0_CONT_CLKING_EN(v)               (((v) << 21) & 0x200000)
#define BP_SSP_CMD0_APPEND_8CYC                     20
#define BM_SSP_CMD0_APPEND_8CYC                     0x100000
#define BF_SSP_CMD0_APPEND_8CYC(v)                  (((v) << 20) & 0x100000)
#define BP_SSP_CMD0_BLOCK_SIZE                      16
#define BM_SSP_CMD0_BLOCK_SIZE                      0xf0000
#define BF_SSP_CMD0_BLOCK_SIZE(v)                   (((v) << 16) & 0xf0000)
#define BP_SSP_CMD0_BLOCK_COUNT                     8
#define BM_SSP_CMD0_BLOCK_COUNT                     0xff00
#define BF_SSP_CMD0_BLOCK_COUNT(v)                  (((v) << 8) & 0xff00)
#define BP_SSP_CMD0_CMD                             0
#define BM_SSP_CMD0_CMD                             0xff
#define BV_SSP_CMD0_CMD__MMC_GO_IDLE_STATE          0x0
#define BV_SSP_CMD0_CMD__MMC_SEND_OP_COND           0x1
#define BV_SSP_CMD0_CMD__MMC_ALL_SEND_CID           0x2
#define BV_SSP_CMD0_CMD__MMC_SET_RELATIVE_ADDR      0x3
#define BV_SSP_CMD0_CMD__MMC_SET_DSR                0x4
#define BV_SSP_CMD0_CMD__MMC_RESERVED_5             0x5
#define BV_SSP_CMD0_CMD__MMC_SWITCH                 0x6
#define BV_SSP_CMD0_CMD__MMC_SELECT_DESELECT_CARD   0x7
#define BV_SSP_CMD0_CMD__MMC_SEND_EXT_CSD           0x8
#define BV_SSP_CMD0_CMD__MMC_SEND_CSD               0x9
#define BV_SSP_CMD0_CMD__MMC_SEND_CID               0xa
#define BV_SSP_CMD0_CMD__MMC_READ_DAT_UNTIL_STOP    0xb
#define BV_SSP_CMD0_CMD__MMC_STOP_TRANSMISSION      0xc
#define BV_SSP_CMD0_CMD__MMC_SEND_STATUS            0xd
#define BV_SSP_CMD0_CMD__MMC_BUSTEST_R              0xe
#define BV_SSP_CMD0_CMD__MMC_GO_INACTIVE_STATE      0xf
#define BV_SSP_CMD0_CMD__MMC_SET_BLOCKLEN           0x10
#define BV_SSP_CMD0_CMD__MMC_READ_SINGLE_BLOCK      0x11
#define BV_SSP_CMD0_CMD__MMC_READ_MULTIPLE_BLOCK    0x12
#define BV_SSP_CMD0_CMD__MMC_BUSTEST_W              0x13
#define BV_SSP_CMD0_CMD__MMC_WRITE_DAT_UNTIL_STOP   0x14
#define BV_SSP_CMD0_CMD__MMC_SET_BLOCK_COUNT        0x17
#define BV_SSP_CMD0_CMD__MMC_WRITE_BLOCK            0x18
#define BV_SSP_CMD0_CMD__MMC_WRITE_MULTIPLE_BLOCK   0x19
#define BV_SSP_CMD0_CMD__MMC_PROGRAM_CID            0x1a
#define BV_SSP_CMD0_CMD__MMC_PROGRAM_CSD            0x1b
#define BV_SSP_CMD0_CMD__MMC_SET_WRITE_PROT         0x1c
#define BV_SSP_CMD0_CMD__MMC_CLR_WRITE_PROT         0x1d
#define BV_SSP_CMD0_CMD__MMC_SEND_WRITE_PROT        0x1e
#define BV_SSP_CMD0_CMD__MMC_ERASE_GROUP_START      0x23
#define BV_SSP_CMD0_CMD__MMC_ERASE_GROUP_END        0x24
#define BV_SSP_CMD0_CMD__MMC_ERASE                  0x26
#define BV_SSP_CMD0_CMD__MMC_FAST_IO                0x27
#define BV_SSP_CMD0_CMD__MMC_GO_IRQ_STATE           0x28
#define BV_SSP_CMD0_CMD__MMC_LOCK_UNLOCK            0x2a
#define BV_SSP_CMD0_CMD__MMC_APP_CMD                0x37
#define BV_SSP_CMD0_CMD__MMC_GEN_CMD                0x38
#define BV_SSP_CMD0_CMD__SD_GO_IDLE_STATE           0x0
#define BV_SSP_CMD0_CMD__SD_ALL_SEND_CID            0x2
#define BV_SSP_CMD0_CMD__SD_SEND_RELATIVE_ADDR      0x3
#define BV_SSP_CMD0_CMD__SD_SET_DSR                 0x4
#define BV_SSP_CMD0_CMD__SD_IO_SEND_OP_COND         0x5
#define BV_SSP_CMD0_CMD__SD_SELECT_DESELECT_CARD    0x7
#define BV_SSP_CMD0_CMD__SD_SEND_CSD                0x9
#define BV_SSP_CMD0_CMD__SD_SEND_CID                0xa
#define BV_SSP_CMD0_CMD__SD_STOP_TRANSMISSION       0xc
#define BV_SSP_CMD0_CMD__SD_SEND_STATUS             0xd
#define BV_SSP_CMD0_CMD__SD_GO_INACTIVE_STATE       0xf
#define BV_SSP_CMD0_CMD__SD_SET_BLOCKLEN            0x10
#define BV_SSP_CMD0_CMD__SD_READ_SINGLE_BLOCK       0x11
#define BV_SSP_CMD0_CMD__SD_READ_MULTIPLE_BLOCK     0x12
#define BV_SSP_CMD0_CMD__SD_WRITE_BLOCK             0x18
#define BV_SSP_CMD0_CMD__SD_WRITE_MULTIPLE_BLOCK    0x19
#define BV_SSP_CMD0_CMD__SD_PROGRAM_CSD             0x1b
#define BV_SSP_CMD0_CMD__SD_SET_WRITE_PROT          0x1c
#define BV_SSP_CMD0_CMD__SD_CLR_WRITE_PROT          0x1d
#define BV_SSP_CMD0_CMD__SD_SEND_WRITE_PROT         0x1e
#define BV_SSP_CMD0_CMD__SD_ERASE_WR_BLK_START      0x20
#define BV_SSP_CMD0_CMD__SD_ERASE_WR_BLK_END        0x21
#define BV_SSP_CMD0_CMD__SD_ERASE_GROUP_START       0x23
#define BV_SSP_CMD0_CMD__SD_ERASE_GROUP_END         0x24
#define BV_SSP_CMD0_CMD__SD_ERASE                   0x26
#define BV_SSP_CMD0_CMD__SD_LOCK_UNLOCK             0x2a
#define BV_SSP_CMD0_CMD__SD_IO_RW_DIRECT            0x34
#define BV_SSP_CMD0_CMD__SD_IO_RW_EXTENDED          0x35
#define BV_SSP_CMD0_CMD__SD_APP_CMD                 0x37
#define BV_SSP_CMD0_CMD__SD_GEN_CMD                 0x38
#define BF_SSP_CMD0_CMD(v)                          (((v) << 0) & 0xff)
#define BF_SSP_CMD0_CMD_V(v)                        ((BV_SSP_CMD0_CMD__##v << 0) & 0xff)

/**
 * Register: HW_SSP_CMD1
 * Address: 0x20
 * SCT: no
*/
#define HW_SSP_CMD1(d)          (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x20))
#define BP_SSP_CMD1_CMD_ARG     0
#define BM_SSP_CMD1_CMD_ARG     0xffffffff
#define BF_SSP_CMD1_CMD_ARG(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_SSP_COMPREF
 * Address: 0x30
 * SCT: no
*/
#define HW_SSP_COMPREF(d)           (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x30))
#define BP_SSP_COMPREF_REFERENCE    0
#define BM_SSP_COMPREF_REFERENCE    0xffffffff
#define BF_SSP_COMPREF_REFERENCE(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_SSP_COMPMASK
 * Address: 0x40
 * SCT: no
*/
#define HW_SSP_COMPMASK(d)      (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x40))
#define BP_SSP_COMPMASK_MASK    0
#define BM_SSP_COMPMASK_MASK    0xffffffff
#define BF_SSP_COMPMASK_MASK(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_SSP_TIMING
 * Address: 0x50
 * SCT: no
*/
#define HW_SSP_TIMING(d)                (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x50))
#define BP_SSP_TIMING_TIMEOUT           16
#define BM_SSP_TIMING_TIMEOUT           0xffff0000
#define BF_SSP_TIMING_TIMEOUT(v)        (((v) << 16) & 0xffff0000)
#define BP_SSP_TIMING_CLOCK_DIVIDE      8
#define BM_SSP_TIMING_CLOCK_DIVIDE      0xff00
#define BF_SSP_TIMING_CLOCK_DIVIDE(v)   (((v) << 8) & 0xff00)
#define BP_SSP_TIMING_CLOCK_RATE        0
#define BM_SSP_TIMING_CLOCK_RATE        0xff
#define BF_SSP_TIMING_CLOCK_RATE(v)     (((v) << 0) & 0xff)

/**
 * Register: HW_SSP_CTRL1
 * Address: 0x60
 * SCT: yes
*/
#define HW_SSP_CTRL1(d)                         (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x60 + 0x0))
#define HW_SSP_CTRL1_SET(d)                     (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x60 + 0x4))
#define HW_SSP_CTRL1_CLR(d)                     (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x60 + 0x8))
#define HW_SSP_CTRL1_TOG(d)                     (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x60 + 0xc))
#define BP_SSP_CTRL1_SDIO_IRQ                   31
#define BM_SSP_CTRL1_SDIO_IRQ                   0x80000000
#define BF_SSP_CTRL1_SDIO_IRQ(v)                (((v) << 31) & 0x80000000)
#define BP_SSP_CTRL1_SDIO_IRQ_EN                30
#define BM_SSP_CTRL1_SDIO_IRQ_EN                0x40000000
#define BF_SSP_CTRL1_SDIO_IRQ_EN(v)             (((v) << 30) & 0x40000000)
#define BP_SSP_CTRL1_RESP_ERR_IRQ               29
#define BM_SSP_CTRL1_RESP_ERR_IRQ               0x20000000
#define BF_SSP_CTRL1_RESP_ERR_IRQ(v)            (((v) << 29) & 0x20000000)
#define BP_SSP_CTRL1_RESP_ERR_IRQ_EN            28
#define BM_SSP_CTRL1_RESP_ERR_IRQ_EN            0x10000000
#define BF_SSP_CTRL1_RESP_ERR_IRQ_EN(v)         (((v) << 28) & 0x10000000)
#define BP_SSP_CTRL1_RESP_TIMEOUT_IRQ           27
#define BM_SSP_CTRL1_RESP_TIMEOUT_IRQ           0x8000000
#define BF_SSP_CTRL1_RESP_TIMEOUT_IRQ(v)        (((v) << 27) & 0x8000000)
#define BP_SSP_CTRL1_RESP_TIMEOUT_IRQ_EN        26
#define BM_SSP_CTRL1_RESP_TIMEOUT_IRQ_EN        0x4000000
#define BF_SSP_CTRL1_RESP_TIMEOUT_IRQ_EN(v)     (((v) << 26) & 0x4000000)
#define BP_SSP_CTRL1_DATA_TIMEOUT_IRQ           25
#define BM_SSP_CTRL1_DATA_TIMEOUT_IRQ           0x2000000
#define BF_SSP_CTRL1_DATA_TIMEOUT_IRQ(v)        (((v) << 25) & 0x2000000)
#define BP_SSP_CTRL1_DATA_TIMEOUT_IRQ_EN        24
#define BM_SSP_CTRL1_DATA_TIMEOUT_IRQ_EN        0x1000000
#define BF_SSP_CTRL1_DATA_TIMEOUT_IRQ_EN(v)     (((v) << 24) & 0x1000000)
#define BP_SSP_CTRL1_DATA_CRC_IRQ               23
#define BM_SSP_CTRL1_DATA_CRC_IRQ               0x800000
#define BF_SSP_CTRL1_DATA_CRC_IRQ(v)            (((v) << 23) & 0x800000)
#define BP_SSP_CTRL1_DATA_CRC_IRQ_EN            22
#define BM_SSP_CTRL1_DATA_CRC_IRQ_EN            0x400000
#define BF_SSP_CTRL1_DATA_CRC_IRQ_EN(v)         (((v) << 22) & 0x400000)
#define BP_SSP_CTRL1_FIFO_UNDERRUN_IRQ          21
#define BM_SSP_CTRL1_FIFO_UNDERRUN_IRQ          0x200000
#define BF_SSP_CTRL1_FIFO_UNDERRUN_IRQ(v)       (((v) << 21) & 0x200000)
#define BP_SSP_CTRL1_FIFO_UNDERRUN_EN           20
#define BM_SSP_CTRL1_FIFO_UNDERRUN_EN           0x100000
#define BF_SSP_CTRL1_FIFO_UNDERRUN_EN(v)        (((v) << 20) & 0x100000)
#define BP_SSP_CTRL1_CEATA_CCS_ERR_IRQ          19
#define BM_SSP_CTRL1_CEATA_CCS_ERR_IRQ          0x80000
#define BF_SSP_CTRL1_CEATA_CCS_ERR_IRQ(v)       (((v) << 19) & 0x80000)
#define BP_SSP_CTRL1_CEATA_CCS_ERR_IRQ_EN       18
#define BM_SSP_CTRL1_CEATA_CCS_ERR_IRQ_EN       0x40000
#define BF_SSP_CTRL1_CEATA_CCS_ERR_IRQ_EN(v)    (((v) << 18) & 0x40000)
#define BP_SSP_CTRL1_RECV_TIMEOUT_IRQ           17
#define BM_SSP_CTRL1_RECV_TIMEOUT_IRQ           0x20000
#define BF_SSP_CTRL1_RECV_TIMEOUT_IRQ(v)        (((v) << 17) & 0x20000)
#define BP_SSP_CTRL1_RECV_TIMEOUT_IRQ_EN        16
#define BM_SSP_CTRL1_RECV_TIMEOUT_IRQ_EN        0x10000
#define BF_SSP_CTRL1_RECV_TIMEOUT_IRQ_EN(v)     (((v) << 16) & 0x10000)
#define BP_SSP_CTRL1_FIFO_OVERRUN_IRQ           15
#define BM_SSP_CTRL1_FIFO_OVERRUN_IRQ           0x8000
#define BF_SSP_CTRL1_FIFO_OVERRUN_IRQ(v)        (((v) << 15) & 0x8000)
#define BP_SSP_CTRL1_FIFO_OVERRUN_IRQ_EN        14
#define BM_SSP_CTRL1_FIFO_OVERRUN_IRQ_EN        0x4000
#define BF_SSP_CTRL1_FIFO_OVERRUN_IRQ_EN(v)     (((v) << 14) & 0x4000)
#define BP_SSP_CTRL1_DMA_ENABLE                 13
#define BM_SSP_CTRL1_DMA_ENABLE                 0x2000
#define BF_SSP_CTRL1_DMA_ENABLE(v)              (((v) << 13) & 0x2000)
#define BP_SSP_CTRL1_CEATA_CCS_ERR_EN           12
#define BM_SSP_CTRL1_CEATA_CCS_ERR_EN           0x1000
#define BF_SSP_CTRL1_CEATA_CCS_ERR_EN(v)        (((v) << 12) & 0x1000)
#define BP_SSP_CTRL1_SLAVE_OUT_DISABLE          11
#define BM_SSP_CTRL1_SLAVE_OUT_DISABLE          0x800
#define BF_SSP_CTRL1_SLAVE_OUT_DISABLE(v)       (((v) << 11) & 0x800)
#define BP_SSP_CTRL1_PHASE                      10
#define BM_SSP_CTRL1_PHASE                      0x400
#define BF_SSP_CTRL1_PHASE(v)                   (((v) << 10) & 0x400)
#define BP_SSP_CTRL1_POLARITY                   9
#define BM_SSP_CTRL1_POLARITY                   0x200
#define BF_SSP_CTRL1_POLARITY(v)                (((v) << 9) & 0x200)
#define BP_SSP_CTRL1_SLAVE_MODE                 8
#define BM_SSP_CTRL1_SLAVE_MODE                 0x100
#define BF_SSP_CTRL1_SLAVE_MODE(v)              (((v) << 8) & 0x100)
#define BP_SSP_CTRL1_WORD_LENGTH                4
#define BM_SSP_CTRL1_WORD_LENGTH                0xf0
#define BV_SSP_CTRL1_WORD_LENGTH__RESERVED0     0x0
#define BV_SSP_CTRL1_WORD_LENGTH__RESERVED1     0x1
#define BV_SSP_CTRL1_WORD_LENGTH__RESERVED2     0x2
#define BV_SSP_CTRL1_WORD_LENGTH__FOUR_BITS     0x3
#define BV_SSP_CTRL1_WORD_LENGTH__EIGHT_BITS    0x7
#define BV_SSP_CTRL1_WORD_LENGTH__SIXTEEN_BITS  0xf
#define BF_SSP_CTRL1_WORD_LENGTH(v)             (((v) << 4) & 0xf0)
#define BF_SSP_CTRL1_WORD_LENGTH_V(v)           ((BV_SSP_CTRL1_WORD_LENGTH__##v << 4) & 0xf0)
#define BP_SSP_CTRL1_SSP_MODE                   0
#define BM_SSP_CTRL1_SSP_MODE                   0xf
#define BV_SSP_CTRL1_SSP_MODE__SPI              0x0
#define BV_SSP_CTRL1_SSP_MODE__SSI              0x1
#define BV_SSP_CTRL1_SSP_MODE__SD_MMC           0x3
#define BV_SSP_CTRL1_SSP_MODE__MS               0x4
#define BV_SSP_CTRL1_SSP_MODE__CE_ATA           0x7
#define BF_SSP_CTRL1_SSP_MODE(v)                (((v) << 0) & 0xf)
#define BF_SSP_CTRL1_SSP_MODE_V(v)              ((BV_SSP_CTRL1_SSP_MODE__##v << 0) & 0xf)

/**
 * Register: HW_SSP_DATA
 * Address: 0x70
 * SCT: no
*/
#define HW_SSP_DATA(d)      (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x70))
#define BP_SSP_DATA_DATA    0
#define BM_SSP_DATA_DATA    0xffffffff
#define BF_SSP_DATA_DATA(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_SSP_SDRESP0
 * Address: 0x80
 * SCT: no
*/
#define HW_SSP_SDRESP0(d)       (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x80))
#define BP_SSP_SDRESP0_RESP0    0
#define BM_SSP_SDRESP0_RESP0    0xffffffff
#define BF_SSP_SDRESP0_RESP0(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_SSP_SDRESP1
 * Address: 0x90
 * SCT: no
*/
#define HW_SSP_SDRESP1(d)       (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x90))
#define BP_SSP_SDRESP1_RESP1    0
#define BM_SSP_SDRESP1_RESP1    0xffffffff
#define BF_SSP_SDRESP1_RESP1(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_SSP_SDRESP2
 * Address: 0xa0
 * SCT: no
*/
#define HW_SSP_SDRESP2(d)       (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0xa0))
#define BP_SSP_SDRESP2_RESP2    0
#define BM_SSP_SDRESP2_RESP2    0xffffffff
#define BF_SSP_SDRESP2_RESP2(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_SSP_SDRESP3
 * Address: 0xb0
 * SCT: no
*/
#define HW_SSP_SDRESP3(d)       (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0xb0))
#define BP_SSP_SDRESP3_RESP3    0
#define BM_SSP_SDRESP3_RESP3    0xffffffff
#define BF_SSP_SDRESP3_RESP3(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_SSP_STATUS
 * Address: 0xc0
 * SCT: no
*/
#define HW_SSP_STATUS(d)                    (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0xc0))
#define BP_SSP_STATUS_PRESENT               31
#define BM_SSP_STATUS_PRESENT               0x80000000
#define BF_SSP_STATUS_PRESENT(v)            (((v) << 31) & 0x80000000)
#define BP_SSP_STATUS_MS_PRESENT            30
#define BM_SSP_STATUS_MS_PRESENT            0x40000000
#define BF_SSP_STATUS_MS_PRESENT(v)         (((v) << 30) & 0x40000000)
#define BP_SSP_STATUS_SD_PRESENT            29
#define BM_SSP_STATUS_SD_PRESENT            0x20000000
#define BF_SSP_STATUS_SD_PRESENT(v)         (((v) << 29) & 0x20000000)
#define BP_SSP_STATUS_CARD_DETECT           28
#define BM_SSP_STATUS_CARD_DETECT           0x10000000
#define BF_SSP_STATUS_CARD_DETECT(v)        (((v) << 28) & 0x10000000)
#define BP_SSP_STATUS_RSVD3                 22
#define BM_SSP_STATUS_RSVD3                 0xfc00000
#define BF_SSP_STATUS_RSVD3(v)              (((v) << 22) & 0xfc00000)
#define BP_SSP_STATUS_DMASENSE              21
#define BM_SSP_STATUS_DMASENSE              0x200000
#define BF_SSP_STATUS_DMASENSE(v)           (((v) << 21) & 0x200000)
#define BP_SSP_STATUS_DMATERM               20
#define BM_SSP_STATUS_DMATERM               0x100000
#define BF_SSP_STATUS_DMATERM(v)            (((v) << 20) & 0x100000)
#define BP_SSP_STATUS_DMAREQ                19
#define BM_SSP_STATUS_DMAREQ                0x80000
#define BF_SSP_STATUS_DMAREQ(v)             (((v) << 19) & 0x80000)
#define BP_SSP_STATUS_DMAEND                18
#define BM_SSP_STATUS_DMAEND                0x40000
#define BF_SSP_STATUS_DMAEND(v)             (((v) << 18) & 0x40000)
#define BP_SSP_STATUS_SDIO_IRQ              17
#define BM_SSP_STATUS_SDIO_IRQ              0x20000
#define BF_SSP_STATUS_SDIO_IRQ(v)           (((v) << 17) & 0x20000)
#define BP_SSP_STATUS_RESP_CRC_ERR          16
#define BM_SSP_STATUS_RESP_CRC_ERR          0x10000
#define BF_SSP_STATUS_RESP_CRC_ERR(v)       (((v) << 16) & 0x10000)
#define BP_SSP_STATUS_RESP_ERR              15
#define BM_SSP_STATUS_RESP_ERR              0x8000
#define BF_SSP_STATUS_RESP_ERR(v)           (((v) << 15) & 0x8000)
#define BP_SSP_STATUS_RESP_TIMEOUT          14
#define BM_SSP_STATUS_RESP_TIMEOUT          0x4000
#define BF_SSP_STATUS_RESP_TIMEOUT(v)       (((v) << 14) & 0x4000)
#define BP_SSP_STATUS_DATA_CRC_ERR          13
#define BM_SSP_STATUS_DATA_CRC_ERR          0x2000
#define BF_SSP_STATUS_DATA_CRC_ERR(v)       (((v) << 13) & 0x2000)
#define BP_SSP_STATUS_TIMEOUT               12
#define BM_SSP_STATUS_TIMEOUT               0x1000
#define BF_SSP_STATUS_TIMEOUT(v)            (((v) << 12) & 0x1000)
#define BP_SSP_STATUS_RECV_TIMEOUT_STAT     11
#define BM_SSP_STATUS_RECV_TIMEOUT_STAT     0x800
#define BF_SSP_STATUS_RECV_TIMEOUT_STAT(v)  (((v) << 11) & 0x800)
#define BP_SSP_STATUS_CEATA_CCS_ERR         10
#define BM_SSP_STATUS_CEATA_CCS_ERR         0x400
#define BF_SSP_STATUS_CEATA_CCS_ERR(v)      (((v) << 10) & 0x400)
#define BP_SSP_STATUS_FIFO_OVRFLW           9
#define BM_SSP_STATUS_FIFO_OVRFLW           0x200
#define BF_SSP_STATUS_FIFO_OVRFLW(v)        (((v) << 9) & 0x200)
#define BP_SSP_STATUS_FIFO_FULL             8
#define BM_SSP_STATUS_FIFO_FULL             0x100
#define BF_SSP_STATUS_FIFO_FULL(v)          (((v) << 8) & 0x100)
#define BP_SSP_STATUS_RSVD1                 6
#define BM_SSP_STATUS_RSVD1                 0xc0
#define BF_SSP_STATUS_RSVD1(v)              (((v) << 6) & 0xc0)
#define BP_SSP_STATUS_FIFO_EMPTY            5
#define BM_SSP_STATUS_FIFO_EMPTY            0x20
#define BF_SSP_STATUS_FIFO_EMPTY(v)         (((v) << 5) & 0x20)
#define BP_SSP_STATUS_FIFO_UNDRFLW          4
#define BM_SSP_STATUS_FIFO_UNDRFLW          0x10
#define BF_SSP_STATUS_FIFO_UNDRFLW(v)       (((v) << 4) & 0x10)
#define BP_SSP_STATUS_CMD_BUSY              3
#define BM_SSP_STATUS_CMD_BUSY              0x8
#define BF_SSP_STATUS_CMD_BUSY(v)           (((v) << 3) & 0x8)
#define BP_SSP_STATUS_DATA_BUSY             2
#define BM_SSP_STATUS_DATA_BUSY             0x4
#define BF_SSP_STATUS_DATA_BUSY(v)          (((v) << 2) & 0x4)
#define BP_SSP_STATUS_RSVD0                 1
#define BM_SSP_STATUS_RSVD0                 0x2
#define BF_SSP_STATUS_RSVD0(v)              (((v) << 1) & 0x2)
#define BP_SSP_STATUS_BUSY                  0
#define BM_SSP_STATUS_BUSY                  0x1
#define BF_SSP_STATUS_BUSY(v)               (((v) << 0) & 0x1)

/**
 * Register: HW_SSP_DEBUG
 * Address: 0x100
 * SCT: no
*/
#define HW_SSP_DEBUG(d)                     (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x100))
#define BP_SSP_DEBUG_DATACRC_ERR            28
#define BM_SSP_DEBUG_DATACRC_ERR            0xf0000000
#define BF_SSP_DEBUG_DATACRC_ERR(v)         (((v) << 28) & 0xf0000000)
#define BP_SSP_DEBUG_DATA_STALL             27
#define BM_SSP_DEBUG_DATA_STALL             0x8000000
#define BF_SSP_DEBUG_DATA_STALL(v)          (((v) << 27) & 0x8000000)
#define BP_SSP_DEBUG_DAT_SM                 24
#define BM_SSP_DEBUG_DAT_SM                 0x7000000
#define BV_SSP_DEBUG_DAT_SM__DSM_IDLE       0x0
#define BV_SSP_DEBUG_DAT_SM__DSM_WORD       0x2
#define BV_SSP_DEBUG_DAT_SM__DSM_CRC1       0x3
#define BV_SSP_DEBUG_DAT_SM__DSM_CRC2       0x4
#define BV_SSP_DEBUG_DAT_SM__DSM_END        0x5
#define BF_SSP_DEBUG_DAT_SM(v)              (((v) << 24) & 0x7000000)
#define BF_SSP_DEBUG_DAT_SM_V(v)            ((BV_SSP_DEBUG_DAT_SM__##v << 24) & 0x7000000)
#define BP_SSP_DEBUG_MSTK_SM                20
#define BM_SSP_DEBUG_MSTK_SM                0xf00000
#define BV_SSP_DEBUG_MSTK_SM__MSTK_IDLE     0x0
#define BV_SSP_DEBUG_MSTK_SM__MSTK_CKON     0x1
#define BV_SSP_DEBUG_MSTK_SM__MSTK_BS1      0x2
#define BV_SSP_DEBUG_MSTK_SM__MSTK_TPC      0x3
#define BV_SSP_DEBUG_MSTK_SM__MSTK_BS2      0x4
#define BV_SSP_DEBUG_MSTK_SM__MSTK_HDSHK    0x5
#define BV_SSP_DEBUG_MSTK_SM__MSTK_BS3      0x6
#define BV_SSP_DEBUG_MSTK_SM__MSTK_RW       0x7
#define BV_SSP_DEBUG_MSTK_SM__MSTK_CRC1     0x8
#define BV_SSP_DEBUG_MSTK_SM__MSTK_CRC2     0x9
#define BV_SSP_DEBUG_MSTK_SM__MSTK_BS0      0xa
#define BV_SSP_DEBUG_MSTK_SM__MSTK_END1     0xb
#define BV_SSP_DEBUG_MSTK_SM__MSTK_END2W    0xc
#define BV_SSP_DEBUG_MSTK_SM__MSTK_END2R    0xd
#define BV_SSP_DEBUG_MSTK_SM__MSTK_DONE     0xe
#define BF_SSP_DEBUG_MSTK_SM(v)             (((v) << 20) & 0xf00000)
#define BF_SSP_DEBUG_MSTK_SM_V(v)           ((BV_SSP_DEBUG_MSTK_SM__##v << 20) & 0xf00000)
#define BP_SSP_DEBUG_CMD_OE                 19
#define BM_SSP_DEBUG_CMD_OE                 0x80000
#define BF_SSP_DEBUG_CMD_OE(v)              (((v) << 19) & 0x80000)
#define BP_SSP_DEBUG_DMA_SM                 16
#define BM_SSP_DEBUG_DMA_SM                 0x70000
#define BV_SSP_DEBUG_DMA_SM__DMA_IDLE       0x0
#define BV_SSP_DEBUG_DMA_SM__DMA_DMAREQ     0x1
#define BV_SSP_DEBUG_DMA_SM__DMA_DMAACK     0x2
#define BV_SSP_DEBUG_DMA_SM__DMA_STALL      0x3
#define BV_SSP_DEBUG_DMA_SM__DMA_BUSY       0x4
#define BV_SSP_DEBUG_DMA_SM__DMA_DONE       0x5
#define BV_SSP_DEBUG_DMA_SM__DMA_COUNT      0x6
#define BF_SSP_DEBUG_DMA_SM(v)              (((v) << 16) & 0x70000)
#define BF_SSP_DEBUG_DMA_SM_V(v)            ((BV_SSP_DEBUG_DMA_SM__##v << 16) & 0x70000)
#define BP_SSP_DEBUG_MMC_SM                 12
#define BM_SSP_DEBUG_MMC_SM                 0xf000
#define BV_SSP_DEBUG_MMC_SM__MMC_IDLE       0x0
#define BV_SSP_DEBUG_MMC_SM__MMC_CMD        0x1
#define BV_SSP_DEBUG_MMC_SM__MMC_TRC        0x2
#define BV_SSP_DEBUG_MMC_SM__MMC_RESP       0x3
#define BV_SSP_DEBUG_MMC_SM__MMC_RPRX       0x4
#define BV_SSP_DEBUG_MMC_SM__MMC_TX         0x5
#define BV_SSP_DEBUG_MMC_SM__MMC_CTOK       0x6
#define BV_SSP_DEBUG_MMC_SM__MMC_RX         0x7
#define BV_SSP_DEBUG_MMC_SM__MMC_CCS        0x8
#define BV_SSP_DEBUG_MMC_SM__MMC_PUP        0x9
#define BV_SSP_DEBUG_MMC_SM__MMC_WAIT       0xa
#define BF_SSP_DEBUG_MMC_SM(v)              (((v) << 12) & 0xf000)
#define BF_SSP_DEBUG_MMC_SM_V(v)            ((BV_SSP_DEBUG_MMC_SM__##v << 12) & 0xf000)
#define BP_SSP_DEBUG_CMD_SM                 10
#define BM_SSP_DEBUG_CMD_SM                 0xc00
#define BV_SSP_DEBUG_CMD_SM__CSM_IDLE       0x0
#define BV_SSP_DEBUG_CMD_SM__CSM_INDEX      0x1
#define BV_SSP_DEBUG_CMD_SM__CSM_ARG        0x2
#define BV_SSP_DEBUG_CMD_SM__CSM_CRC        0x3
#define BF_SSP_DEBUG_CMD_SM(v)              (((v) << 10) & 0xc00)
#define BF_SSP_DEBUG_CMD_SM_V(v)            ((BV_SSP_DEBUG_CMD_SM__##v << 10) & 0xc00)
#define BP_SSP_DEBUG_SSP_CMD                9
#define BM_SSP_DEBUG_SSP_CMD                0x200
#define BF_SSP_DEBUG_SSP_CMD(v)             (((v) << 9) & 0x200)
#define BP_SSP_DEBUG_SSP_RESP               8
#define BM_SSP_DEBUG_SSP_RESP               0x100
#define BF_SSP_DEBUG_SSP_RESP(v)            (((v) << 8) & 0x100)
#define BP_SSP_DEBUG_SSP_RXD                0
#define BM_SSP_DEBUG_SSP_RXD                0xff
#define BF_SSP_DEBUG_SSP_RXD(v)             (((v) << 0) & 0xff)

/**
 * Register: HW_SSP_VERSION
 * Address: 0x110
 * SCT: no
*/
#define HW_SSP_VERSION(d)       (*(volatile unsigned long *)(REGS_SSP_BASE(d) + 0x110))
#define BP_SSP_VERSION_MAJOR    24
#define BM_SSP_VERSION_MAJOR    0xff000000
#define BF_SSP_VERSION_MAJOR(v) (((v) << 24) & 0xff000000)
#define BP_SSP_VERSION_MINOR    16
#define BM_SSP_VERSION_MINOR    0xff0000
#define BF_SSP_VERSION_MINOR(v) (((v) << 16) & 0xff0000)
#define BP_SSP_VERSION_STEP     0
#define BM_SSP_VERSION_STEP     0xffff
#define BF_SSP_VERSION_STEP(v)  (((v) << 0) & 0xffff)

#endif /* __HEADERGEN__IMX233__SSP__H__ */
