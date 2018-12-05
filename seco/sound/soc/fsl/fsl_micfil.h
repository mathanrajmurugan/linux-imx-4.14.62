/*
 * fsl_micfil.h - PDM Microphone Interface for the NXP i.MX SoC
 *
 * Copyright (C) 2018 NXP
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */

#ifndef _FSL_MICFIL_H
#define _FSL_MICFIL_H

/* MICFIL Register Map */
#define REG_MICFIL_CTRL1		0x00
#define REG_MICFIL_CTRL2		0x04
#define REG_MICFIL_STAT			0x08
#define REG_MICFIL_FIFO_CTRL		0x10
#define REG_MICFIL_FIFO_STAT		0x14
#define REG_MICFIL_DATACH0		0x24
#define REG_MICFIL_DATACH1		0x28
#define REG_MICFIL_DATACH2		0x2C
#define REG_MICFIL_DATACH3		0x30
#define REG_MICFIL_DATACH4		0x34
#define REG_MICFIL_DATACH5		0x38
#define REG_MICFIL_DATACH6		0x3C
#define REG_MICFIL_DATACH7		0x40
#define REG_MICFIL_DC_CTRL		0x64
#define REG_MICFIL_OUT_CTRL		0x74
#define REG_MICFIL_OUT_STAT		0x7C
#define REG_MICFIL_VAD0_CTRL1		0x90
#define REG_MICFIL_VAD0_CTRL2		0x94
#define REG_MICFIL_VAD0_STAT		0x98
#define REG_MICFIL_VAD0_SCONFIG		0x9C
#define REG_MICFIL_VAD0_NCONFIG		0xA0
#define REG_MICFIL_VAD0_NDATA		0xA4
#define REG_MICFIL_VAD0_ZCD		0xA8

/* MICFIL Control Register 1 -- REG_MICFILL_CTRL1 0x00 */
#define MICFIL_CTRL1_MDIS_SHIFT		31
#define MICFIL_CTRL1_MDIS_MASK		BIT(MICFIL_CTRL1_MDIS_SHIFT)
#define MICFIL_CTRL1_MDIS		BIT(MICFIL_CTRL1_MDIS_SHIFT)
#define MICFIL_CTRL1_DOZEN_SHIFT	30
#define MICFIL_CTRL1_DOZEN_MASK		BIT(MICFIL_CTRL1_DOZEN_SHIFT)
#define MICFIL_CTRL1_DOZEN		BIT(MICFIL_CTRL1_DOZEN_SHIFT)
#define MICFIL_CTRL1_PDMIEN_SHIFT	29
#define MICFIL_CTRL1_PDMIEN_MASK	BIT(MICFIL_CTRL1_PDMIEN_SHIFT)
#define MICFIL_CTRL1_PDMIEN		BIT(MICFIL_CTRL1_PDMIEN_SHIFT)
#define MICFIL_CTRL1_DBG_SHIFT		28
#define MICFIL_CTRL1_DBG_MASK		BIT(MICFIL_CTRL1_DBG_SHIFT)
#define MICFIL_CTRL1_DBG		BIT(MICFIL_CTRL1_DBG_SHIFT)
#define MICFIL_CTRL1_SRES_SHIFT		27
#define MICFIL_CTRL1_SRES_MASK		BIT(MICFIL_CTRL1_SRES_SHIFT)
#define MICFIL_CTRL1_SRES		BIT(MICFIL_CTRL1_SRES_SHIFT)
#define MICFIL_CTRL1_DBGE_SHIFT		26
#define MICFIL_CTRL1_DBGE_MASK		BIT(MICFIL_CTRL1_DBGE_SHIFT)
#define MICFIL_CTRL1_DBGE		BIT(MICFIL_CTRL1_DBGE_SHIFT)
#define MICFIL_CTRL1_DISEL_SHIFT	24
#define MICFIL_CTRL1_DISEL_WIDTH	2
#define MICFIL_CTRL1_DISEL_MASK		((BIT(MICFIL_CTRL1_DISEL_WIDTH) - 1) \
					 << MICFIL_CTRL1_DISEL_SHIFT)
#define MICFIL_CTRL1_DISEL(v)		(((v) << MICFIL_CTRL1_DISEL_SHIFT) \
					 & MICFIL_CTRL1_DISEL_MASK)
#define MICFIL_CTRL1_ERREN_SHIFT	23
#define MICFIL_CTRL1_ERREN_MASK		BIT(MICFIL_CTRL1_ERREN_SHIFT)
#define MICFIL_CTRL1_ERREN		BIT(MICFIL_CTRL1_ERREN_SHIFT)
#define MICFIL_CTRL1_CHEN_SHIFT		0
#define MICFIL_CTRL1_CHEN_WIDTH		8
#define MICFIL_CTRL1_CHEN_MASK(x)	(BIT(x) << MICFIL_CTRL1_CHEN_SHIFT)
#define MICFIL_CTRL1_CHEN(x)		(MICFIL_CTRL1_CHEN_MASK(x))

/* MICFIL Control Register 2 -- REG_MICFILL_CTRL2 0x04 */
#define MICFIL_CTRL2_QSEL_SHIFT		25
#define MICFIL_CTRL2_QSEL_WIDTH		3
#define MICFIL_CTRL2_QSEL_MASK		((BIT(MICFIL_CTRL2_QSEL_WIDTH) - 1) \
					 << MICFIL_CTRL2_QSEL_SHIFT)
#define MICFIL_HIGH_QUALITY		BIT(MICFIL_CTRL2_QSEL_SHIFT)
#define MICFIL_MEDIUM_QUALITY		(0 << MICFIL_CTRL2_QSEL_SHIFT)
#define MICFIL_LOW_QUALITY		(7 << MICFIL_CTRL2_QSEL_SHIFT)
#define MICFIL_VLOW0_QUALITY		(6 << MICFIL_CTRL2_QSEL_SHIFT)
#define MICFIL_VLOW1_QUALITY		(5 << MICFIL_CTRL2_QSEL_SHIFT)
#define MICFIL_VLOW2_QUALITY		(4 << MICFIL_CTRL2_QSEL_SHIFT)

#define MICFIL_CTRL2_CICOSR_SHIFT	16
#define MICFIL_CTRL2_CICOSR_WIDTH	4
#define MICFIL_CTRL2_CICOSR_MASK	((BIT(MICFIL_CTRL2_CICOSR_WIDTH) - 1) \
					 << MICFIL_CTRL2_CICOSR_SHIFT)
#define MICFIL_CTRL2_CICOSR(v)		(((v) << MICFIL_CTRL2_CICOSR_SHIFT) \
					 & MICFIL_CTRL2_CICOSR_MASK)
#define MICFIL_CTRL2_CLKDIV_SHIFT	0
#define MICFIL_CTRL2_CLKDIV_WIDTH	8
#define MICFIL_CTRL2_CLKDIV_MASK	((BIT(MICFIL_CTRL2_CLKDIV_WIDTH) - 1) \
					 << MICFIL_CTRL2_CLKDIV_SHIFT)
#define MICFIL_CTRL2_CLKDIV(v)		(((v) << MICFIL_CTRL2_CLKDIV_SHIFT) \
					 & MICFIL_CTRL2_CLKDIV_MASK)

/* MICFIL Status Register -- REG_MICFIL_STAT 0x08 */
#define MICFIL_STAT_BSY_FIL_SHIFT	31
#define MICFIL_STAT_BSY_FIL_MASK	BIT(MICFIL_STAT_BSY_FIL_SHIFT)
#define MICFIL_STAT_BSY_FIL		BIT(MICFIL_STAT_BSY_FIL_SHIFT)
#define MICFIL_STAT_FIR_RDY_SHIFT	30
#define MICFIL_STAT_FIR_RDY_MASK	BIT(MICFIL_STAT_FIR_RDY_SHIFT)
#define MICFIL_STAT_FIR_RDY		BIT(MICFIL_STAT_FIR_RDY_SHIFT)
#define MICFIL_STAT_LOWFREQF_SHIFT	29
#define MICFIL_STAT_LOWFREQF_MASK	BIT(MICFIL_STAT_LOWFREQF_SHIFT)
#define MICFIL_STAT_LOWFREQF		BIT(MICFIL_STAT_LOWFREQF_SHIFT)
#define MICFIL_STAT_CHXF_SHIFT(v)	(v)
#define MICFIL_STAT_CHXF_MASK(v)	BIT(MICFIL_STAT_CHXF_SHIFT(v))
#define MICFIL_STAT_CHXF(v)		BIT(MICFIL_STAT_CHXF_SHIFT(v))

/* MICFIL FIFO Control Register -- REG_MICFIL_FIFO_CTRL 0x10 */
#define MICFIL_FIFO_CTRL_FIFOWMK_SHIFT	0
#define MICFIL_FIFO_CTRL_FIFOWMK_WIDTH	3
#define MICFIL_FIFO_CTRL_FIFOWMK_MASK	((BIT(MICFIL_FIFO_CTRL_FIFOWMK_WIDTH) - 1) \
					 << MICFIL_FIFO_CTRL_FIFOWMK_SHIFT)
#define MICFIL_FIFO_CTRL_FIFOWMK(v)	(((v) << MICFIL_FIFO_CTRL_FIFOWMK_SHIFT) \
					 & MICFIL_FIFO_CTRL_FIFOWMK_MASK)

/* MICFIL FIFO Status Register -- REG_MICFIL_FIFO_STAT 0x14 */
#define MICFIL_FIFO_STAT_FIFOX_OVER_SHIFT(v)	(v)
#define MICFIL_FIFO_STAT_FIFOX_OVER_MASK(v)	BIT(MICFIL_FIFO_STAT_FIFOX_OVER_SHIFT(v))
#define MICFIL_FIFO_STAT_FIFOX_UNDER_SHIFT(v)	((v) + 8)
#define MICFIL_FIFO_STAT_FIFOX_UNDER_MASK(v)	BIT(MICFIL_FIFO_STAT_FIFOX_UNDER_SHIFT(v))

/* MICFIL HWVAD0 Control 1 Register -- REG_MICFIL_VAD0_CTRL1*/
#define MICFIL_VAD0_CTRL1_CHSEL_SHIFT	24
#define MICFIL_VAD0_CTRL1_CHSEL_WIDTH	3
#define MICFIL_VAD0_CTRL1_CHSEL_MASK	((BIT(MICFIL_VAD0_CTRL1_CHSEL_WIDTH) - 1) \
					 << MICFIL_VAD0_CTRL1_CHSEL_SHIFT)
#define MICFIL_VAD0_CTRL1_CHSEL(v)	((((1 << (v)) - 1) << MICFIL_VAD0_CTRL1_CHSEL_SHIFT) \
					 & MICFIL_VAD0_CTRL1_CHSEL_MASK)
#define MICFIL_VAD0_CTRL1_CICOSR_SHIFT	16
#define MICFIL_VAD0_CTRL1_CICOSR_WIDTH	4
#define MICFIL_VAD0_CTRL1_CICOSR_MASK	((BIT(MICFIL_VAD0_CTRL1_CICOSR_WIDTH) - 1) \
					 << MICFIL_VAD0_CTRL1_CICOSR_SHIFT)
#define MICFIL_VAD0_CTRL1_CICOSR(v)	(((v) << MICFIL_VAD0_CTRL1_CICOSR_SHIFT) \
					 & MICFIL_VAD0_CTRL1_CICOSR_MASK)
#define MICFIL_VAD0_CTRL1_INITT_SHIFT	8
#define MICFIL_VAD0_CTRL1_INITT_WIDTH	5
#define MICFIL_VAD0_CTRL1_INITT_MASK	((BIT(MICFIL_VAD0_CTRL1_INITT_WIDTH) - 1) \
					 << MICFIL_VAD0_CTRL1_INITT_SHIFT)
#define MICFIL_VAD0_CTRL1_INITT(v)	(((v) << MICFIL_VAD0_CTRL1_INITT_SHIFT) \
					 & MICFIL_VAD0_CTRL1_INITT_MASK)
#define MICFIL_VAD0_CTRL1_ST10_SHIFT	4
#define MICFIL_VAD0_CTRL1_ST10_MASK	BIT(MICFIL_VAD0_CTRL1_ST10_SHIFT)
#define MICFIL_VAD0_CTRL1_ST10		BIT(MICFIL_VAD0_CTRL1_ST10_SHIFT)
#define MICFIL_VAD0_CTRL1_ERIE_SHIFT	3
#define MICFIL_VAD0_CTRL1_ERIE_MASK	BIT(MICFIL_VAD0_CTRL1_ERIE_SHIFT)
#define MICFIL_VAD0_CTRL1_ERIE		BIT(MICFIL_VAD0_CTRL1_ERIE_SHIFT)
#define MICFIL_VAD0_CTRL1_IE_SHIFT	2
#define MICFIL_VAD0_CTRL1_IE_MASK	BIT(MICFIL_VAD0_CTRL1_IE_SHIFT)
#define MICFIL_VAD0_CTRL1_IE		BIT(MICFIL_VAD0_CTRL1_IE_SHIFT)
#define MICFIL_VAD0_CTRL1_RST_SHIFT	1
#define MICFIL_VAD0_CTRL1_RST_MASK	BIT(MICFIL_VAD0_CTRL1_RST_SHIFT)
#define MICFIL_VAD0_CTRL1_RST		BIT(MICFIL_VAD0_CTRL1_RST_SHIFT)
#define MICFIL_VAD0_CTRL1_EN_SHIFT	0
#define MICFIL_VAD0_CTRL1_EN_MASK	BIT(MICFIL_VAD0_CTRL1_EN_SHIFT)
#define MICFIL_VAD0_CTRL1_EN		BIT(MICFIL_VAD0_CTRL1_EN_SHIFT)

/* MICFIL HWVAD0 Control 2 Register -- REG_MICFIL_VAD0_CTRL2*/
#define MICFIL_VAD0_CTRL2_FRENDIS_SHIFT	31
#define MICFIL_VAD0_CTRL2_FRENDIS_MASK	BIT(MICFIL_VAD0_CTRL2_FRENDIS_SHIFT)
#define MICFIL_VAD0_CTRL2_FRENDIS	BIT(MICFIL_VAD0_CTRL2_FRENDIS_SHIFT)
#define MICFIL_VAD0_CTRL2_PREFEN_SHIFT	30
#define MICFIL_VAD0_CTRL2_PREFEN_MASK	BIT(MICFIL_VAD0_CTRL2_PREFEN_SHIFT)
#define MICFIL_VAD0_CTRL2_PREFEN	BIT(MICFIL_VAD0_CTRL2_PREFEN_SHIFT)
#define MICFIL_VAD0_CTRL2_FOUTDIS_SHIFT	28
#define MICFIL_VAD0_CTRL2_FOUTDIS_MASK	BIT(MICFIL_VAD0_CTRL2_FOUTDIS_SHIFT)
#define MICFIL_VAD0_CTRL2_FOUTDIS	BIT(MICFIL_VAD0_CTRL2_FOUTDIS_SHIFT)
#define MICFIL_VAD0_CTRL2_FRAMET_SHIFT	16
#define MICFIL_VAD0_CTRL2_FRAMET_WIDTH	6
#define MICFIL_VAD0_CTRL2_FRAMET_MASK	((BIT(MICFIL_VAD0_CTRL2_FRAMET_WIDTH) - 1) \
					 << MICFIL_VAD0_CTRL2_FRAMET_SHIFT)
#define MICFIL_VAD0_CTRL2_FRAMET(v)	(((v) << MICFIL_VAD0_CTRL2_FRAMET_SHIFT) \
					 & MICFIL_VAD0_CTRL2_FRAMET_MASK)
#define MICFIL_VAD0_CTRL2_INPGAIN_SHIFT	8
#define MICFIL_VAD0_CTRL2_INPGAIN_WIDTH	4
#define MICFIL_VAD0_CTRL2_INPGAIN_MASK	((BIT(MICFIL_VAD0_CTRL2_INPGAIN_WIDTH) - 1) \
					 << MICFIL_VAD0_CTRL2_INPGAIN_SHIFT)
#define MICFIL_VAD0_CTRL2_INPGAIN(v)	(((v) << MICFIL_VAD0_CTRL2_INPGAIN_SHIFT) \
					& MICFIL_VAD0_CTRL2_INPGAIN_MASK)
#define MICFIL_VAD0_CTRL2_HPF_SHIFT	0
#define MICFIL_VAD0_CTRL2_HPF_WIDTH	2
#define MICFIL_VAD0_CTRL2_HPF_MASK	((BIT(MICFIL_VAD0_CTRL2_HPF_WIDTH) - 1) \
					 << MICFIL_VAD0_CTRL2_HPF_SHIFT)
#define MICFIL_VAD0_CTRL2_HPF(v)	(((v) << MICFIL_VAD0_CTRL2_HPF_SHIFT) \
					 & MICFIL_VAD0_CTRL2_HPF_MASK)

/* MICFIL HWVAD0 Signal CONFIG Register -- REG_MICFIL_VAD0_SCONFIG */
#define MICFIL_VAD0_SCONFIG_SFILEN_SHIFT	31
#define MICFIL_VAD0_SCONFIG_SFILEN_MASK		BIT(MICFIL_VAD0_SCONFIG_SFILEN_SHIFT)
#define MICFIL_VAD0_SCONFIG_SFILEN		BIT(MICFIL_VAD0_SCONFIG_SFILEN_SHIFT)
#define MICFIL_VAD0_SCONFIG_SMAXEN_SHIFT	30
#define MICFIL_VAD0_SCONFIG_SMAXEN_MASK		BIT(MICFIL_VAD0_SCONFIG_SMAXEN_SHIFT)
#define MICFIL_VAD0_SCONFIG_SMAXEN		BIT(MICFIL_VAD0_SCONFIG_SMAXEN_SHIFT)
#define MICFIL_VAD0_SCONFIG_SGAIN_SHIFT		0
#define MICFIL_VAD0_SCONFIG_SGAIN_WIDTH		4
#define MICFIL_VAD0_SCONFIG_SGAIN_MASK		((BIT(MICFIL_VAD0_SCONFIG_SGAIN_WIDTH) - 1) \
						<< MICFIL_VAD0_SCONFIG_SGAIN_SHIFT)
#define MICFIL_VAD0_SCONFIG_SGAIN(v)		(((v) << MICFIL_VAD0_SCONFIG_SGAIN_SHIFT) \
						 & MICFIL_VAD0_SCONFIG_SGAIN_MASK)

/* MICFIL HWVAD0 Noise CONFIG Register -- REG_MICFIL_VAD0_NCONFIG */
#define MICFIL_VAD0_NCONFIG_NFILAUT_SHIFT	31
#define MICFIL_VAD0_NCONFIG_NFILAUT_MASK	BIT(MICFIL_VAD0_NCONFIG_NFILAUT_SHIFT)
#define MICFIL_VAD0_NCONFIG_NFILAUT		BIT(MICFIL_VAD0_NCONFIG_NFILAUT_SHIFT)
#define MICFIL_VAD0_NCONFIG_NMINEN_SHIFT	30
#define MICFIL_VAD0_NCONFIG_NMINEN_MASK		BIT(MICFIL_VAD0_NCONFIG_NMINEN_SHIFT)
#define MICFIL_VAD0_NCONFIG_NMINEN		BIT(MICFIL_VAD0_NCONFIG_NMINEN_SHIFT)
#define MICFIL_VAD0_NCONFIG_NDECEN_SHIFT	29
#define MICFIL_VAD0_NCONFIG_NDECEN_MASK		BIT(MICFIL_VAD0_NCONFIG_NDECEN_SHIFT)
#define MICFIL_VAD0_NCONFIG_NDECEN		BIT(MICFIL_VAD0_NCONFIG_NDECEN_SHIFT)
#define MICFIL_VAD0_NCONFIG_NOREN_SHIFT		28
#define MICFIL_VAD0_NCONFIG_NOREN		BIT(MICFIL_VAD0_NCONFIG_NOREN_SHIFT)
#define MICFIL_VAD0_NCONFIG_NFILADJ_SHIFT	8
#define MICFIL_VAD0_NCONFIG_NFILADJ_WIDTH	5
#define MICFIL_VAD0_NCONFIG_NFILADJ_MASK	((BIT(MICFIL_VAD0_NCONFIG_NFILADJ_WIDTH) - 1) \
						 << MICFIL_VAD0_NCONFIG_NFILADJ_SHIFT)
#define MICFIL_VAD0_NCONFIG_NFILADJ(v)		(((v) << MICFIL_VAD0_NCONFIG_NFILADJ_SHIFT) \
						 & MICFIL_VAD0_NCONFIG_NFILADJ_MASK)
#define MICFIL_VAD0_NCONFIG_NGAIN_SHIFT		0
#define MICFIL_VAD0_NCONFIG_NGAIN_WIDTH		4
#define MICFIL_VAD0_NCONFIG_NGAIN_MASK		((BIT(MICFIL_VAD0_NCONFIG_NGAIN_WIDTH) - 1) \
						 << MICFIL_VAD0_NCONFIG_NGAIN_SHIFT)
#define MICFIL_VAD0_NCONFIG_NGAIN(v)		(((v) << MICFIL_VAD0_NCONFIG_NGAIN_SHIFT) \
						 & MICFIL_VAD0_NCONFIG_NGAIN_MASK)

/* MICFIL HWVAD0 Zero-Crossing Detector - REG_MICFIL_VAD0_ZCD */
#define MICFIL_VAD0_ZCD_ZCDTH_SHIFT	16
#define MICFIL_VAD0_ZCD_ZCDTH_WIDTH	10
#define MICFIL_VAD0_ZCD_ZCDTH_MASK	((BIT(MICFIL_VAD0_ZCD_ZCDTH_WIDTH) - 1) \
					 << MICFIL_VAD0_ZCD_ZCDTH_SHIFT)
#define MICFIL_VAD0_ZCD_ZCDTH(v)	(((v) << MICFIL_VAD0_ZCD_ZCDTH_SHIFT)\
					 & MICFIL_VAD0_ZCD_ZCDTH_MASK)
#define MICFIL_VAD0_ZCD_ZCDADJ_SHIFT	8
#define MICFIL_VAD0_ZCD_ZCDADJ_WIDTH	4
#define MICFIL_VAD0_ZCD_ZCDADJ_MASK	((BIT(MICFIL_VAD0_ZCD_ZCDADJ_WIDTH) - 1)\
					 << MICFIL_VAD0_ZCD_ZCDADJ_SHIFT)
#define MICFIL_VAD0_ZCD_ZCDADJ(v)	(((v) << MICFIL_VAD0_ZCD_ZCDADJ_SHIFT)\
					 & MICFIL_VAD0_ZCD_ZCDADJ_MASK)
#define MICFIL_VAD0_ZCD_ZCDAND_SHIFT	4
#define MICFIL_VAD0_ZCD_ZCDAND_MASK	BIT(MICFIL_VAD0_ZCD_ZCDAND_SHIFT)
#define MICFIL_VAD0_ZCD_ZCDAND		BIT(MICFIL_VAD0_ZCD_ZCDAND_SHIFT)
#define MICFIL_VAD0_ZCD_ZCDAUT_SHIFT	2
#define MICFIL_VAD0_ZCD_ZCDAUT_MASK	BIT(MICFIL_VAD0_ZCD_ZCDAUT_SHIFT)
#define MICFIL_VAD0_ZCD_ZCDAUT		BIT(MICFIL_VAD0_ZCD_ZCDAUT_SHIFT)
#define MICFIL_VAD0_ZCD_ZCDEN_SHIFT	0
#define MICFIL_VAD0_ZCD_ZCDEN_MASK	BIT(MICFIL_VAD0_ZCD_ZCDEN_SHIFT)
#define MICFIL_VAD0_ZCD_ZCDEN		BIT(MICFIL_VAD0_ZCD_ZCDEN_SHIFT)

/* MICFIL HWVAD0 Status Register - REG_MICFIL_VAD0_STAT */
#define MICFIL_VAD0_STAT_INITF_SHIFT	31
#define MICFIL_VAD0_STAT_INITF_MASK	BIT(MICFIL_VAD0_STAT_INITF_SHIFT)
#define MICFIL_VAD0_STAT_INITF		BIT(MICFIL_VAD0_STAT_INITF_SHIFT)
#define MICFIL_VAD0_STAT_INSATF_SHIFT	16
#define MICFIL_VAD0_STAT_INSATF_MASK	BIT(MICFIL_VAD0_STAT_INSATF_SHIFT)
#define MICFIL_VAD0_STAT_INSATF		BIT(MICFIL_VAD0_STAT_INSATF_SHIFT)
#define MICFIL_VAD0_STAT_EF_SHIFT	15
#define MICFIL_VAD0_STAT_EF_MASK	BIT(MICFIL_VAD0_STAT_EF_SHIFT)
#define MICFIL_VAD0_STAT_EF		BIT(MICFIL_VAD0_STAT_EF_SHIFT)
#define MICFIL_VAD0_STAT_IF_SHIFT	0
#define MICFIL_VAD0_STAT_IF_MASK	BIT(MICFIL_VAD0_STAT_IF_SHIFT)
#define MICFIL_VAD0_STAT_IF		BIT(MICFIL_VAD0_STAT_IF_SHIFT)

/* HWVAD Constants */
#define MICFIL_HWVAD_ENVELOPE_MODE	0
#define MICFIL_HWVAD_ENERGY_MODE	1
#define MICFIL_HWVAD_INIT_FRAMES	10
#define MICFIL_HWVAD_INPGAIN		0
#define MICFIL_HWVAD_SGAIN		6
#define MICFIL_HWVAD_NGAIN		3
#define MICFIL_HWVAD_NFILADJ		0
#define MICFIL_HWVAD_ZCDADJ		(1 << (MICFIL_VAD0_ZCD_ZCDADJ_WIDTH - 2))
#define MICFIL_HWVAD_ZCDTH		10	/* initial threshold value */
#define MICFIL_HWVAD_ZCDOR		0
#define MICFIL_HWVAD_ZCDAND		1
#define MICFIL_HWVAD_ZCD_MANUAL		0
#define MICFIL_HWVAD_ZCD_AUTO		1
#define MICFIL_HWVAD_HPF_BYPASS		0
#define MICFIL_HWVAD_HPF_1750HZ		1
#define MICFIL_HWVAD_HPF_215HZ		2
#define MICFIL_HWVAD_HPF_102HZ		3
#define MICFIL_HWVAD_FRAMET_DEFAULT	10

/* MICFIL Output Control Register */
#define MICFIL_OUTGAIN_CHX_SHIFT(v)	(4 * (v))

/* Constants */
#define MICFIL_DMA_IRQ_DISABLED(v)	((v) & MICFIL_CTRL1_DISEL_MASK)
#define MICFIL_DMA_ENABLED(v)		((0x1 << MICFIL_CTRL1_DISEL_SHIFT) \
					 == ((v) & MICFIL_CTRL1_DISEL_MASK))
#define MICFIL_IRQ_ENABLED(v)		((0x2 << MICFIL_CTRL1_DISEL_SHIFT) \
					 == ((v) & MICFIL_CTRL1_DISEL_MASK))
#define MICFIL_OUTPUT_CHANNELS		8
#define MICFIL_FIFO_NUM			8

#define FIFO_PTRWID			3
#define FIFO_LEN			BIT(FIFO_PTRWID)

#define MICFIL_IRQ_LINES		4
#define MICFIL_MAX_RETRY		25
#define MICFIL_SLEEP_MIN		90000 /* in us */
#define MICFIL_SLEEP_MAX		100000 /* in us */
#define MICFIL_DMA_MAXBURST_RX		6
#define MICFIL_CTRL2_OSR_DEFAULT	(0 << MICFIL_CTRL2_CICOSR_SHIFT)
#define MICFIL_DEFAULT_RATE		48000

/* States of micfil */
#define RECORDING_OFF_HWVAD_OFF		0
#define RECORDING_OFF_HWVAD_ON		1
#define RECORDING_ON_HWVAD_OFF		2

#endif /* _FSL_MICFIL_H */
