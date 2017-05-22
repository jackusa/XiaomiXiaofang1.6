/*
 ***************************************************************************
 * Ralink Tech Inc.
 * 4F, No. 2 Technology	5th	Rd.
 * Science-based Industrial	Park
 * Hsin-chu, Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2004, Ralink Technology, Inc.
 *
 * All rights reserved.	Ralink's source	code is	an unpublished work	and	the
 * use of a	copyright notice does not imply	otherwise. This	source code
 * contains	confidential trade secret material of Ralink Tech. Any attemp
 * or participation	in deciphering,	decoding, reverse engineering or in	any
 * way altering	the	source code	is stricitly prohibited, unless	the	prior
 * written consent of Ralink Technology, Inc. is obtained.
 ***************************************************************************

	Module Name:
	rtmp_phy.h

	Abstract:
	Ralink Wireless Chip PHY(BBP/RF) related definition & structures

	Revision History:
	Who			When		  What
	--------	----------	  ----------------------------------------------
*/

#ifndef __RTMP_PHY_H__
#define __RTMP_PHY_H__


#include "mac_ral/rf_ctrl.h"
#ifdef RLT_MAC
#include "phy/rlt_phy.h"
#endif /* RLT_MAC */

/*
	RF sections
*/
#define RF_R00			0
#define RF_R01			1
#define RF_R02			2
#define RF_R03			3
#define RF_R04			4
#define RF_R05			5
#define RF_R06			6
#define RF_R07			7
#define RF_R08			8
#define RF_R09			9
#define RF_R10			10
#define RF_R11			11
#define RF_R12			12
#define RF_R13			13
#define RF_R14			14
#define RF_R15			15
#define RF_R16			16
#define RF_R17			17
#define RF_R18			18
#define RF_R19			19
#define RF_R20			20
#define RF_R21			21
#define RF_R22			22
#define RF_R23			23
#define RF_R24			24
#define RF_R25			25
#define RF_R26			26
#define RF_R27			27
#define RF_R28			28
#define RF_R29			29
#define RF_R30			30
#define RF_R31			31
#define	RF_R32			32
#define	RF_R33			33
#define	RF_R34			34
#define	RF_R35			35
#define	RF_R36			36
#define	RF_R37			37
#define	RF_R38			38
#define	RF_R39			39
#define	RF_R40			40
#define	RF_R41			41
#define	RF_R42			42
#define	RF_R43			43
#define	RF_R44			44
#define	RF_R45			45
#define	RF_R46			46
#define	RF_R47			47
#define	RF_R48			48
#define	RF_R49			49
#define	RF_R50			50
#define	RF_R51			51
#define	RF_R52			52
#define	RF_R53			53
#define	RF_R54			54
#define	RF_R55			55
#define	RF_R56			56
#define	RF_R57			57
#define	RF_R58			58
#define	RF_R59			59
#define	RF_R60			60
#define	RF_R61			61
#define	RF_R62			62
#define	RF_R63			63
#define	RF_R64			64
#define	RF_R65			65
#define	RF_R66			66
#define	RF_R67			67
#define	RF_R68			68
#define	RF_R69			69
#define	RF_R70			70
#define	RF_R71			71
#define	RF_R72			72
#define	RF_R73			73
#define	RF_R74			74
#define	RF_R75			75
#define	RF_R126			126
#define	RF_R127			127


/* value domain of pAd->RfIcType */
#define RFIC_2820                   1       /* 2.4G 2T3R */
#define RFIC_2850                   2       /* 2.4G/5G 2T3R */
#define RFIC_2720                   3       /* 2.4G 1T2R */
#define RFIC_2750                   4       /* 2.4G/5G 1T2R */
#define RFIC_3020                   5       /* 2.4G 1T1R */
#define RFIC_2020                   6       /* 2.4G B/G */
#define RFIC_3021                   7       /* 2.4G 1T2R */
#define RFIC_3022                   8       /* 2.4G 2T2R */
#define RFIC_3052                   9       /* 2.4G/5G 2T2R */
#define RFIC_2853					10		/* 2.4G.5G 3T3R */
#define RFIC_3320                   11      /* 2.4G 1T1R with PA (RT3350/RT3370/RT3390) */
#define RFIC_3322                   12      /* 2.4G 2T2R with PA (RT3352/RT3371/RT3372/RT3391/RT3392) */
#define RFIC_3053                   13      /* 2.4G/5G 3T3R (RT3883/RT3563/RT3573/RT3593/RT3662) */
#define RFIC_3853                   13      /* 2.4G/5G 3T3R (RT3883/RT3563/RT3573/RT3593/RT3662) */
#define RFIC_5592			14	 /* 2.4G/5G */
#define RFIC_UNKNOWN				0xff

#define RFIC_IS_5G_BAND(__pAd)			\
	((__pAd->RfIcType == RFIC_2850) ||	\
	(__pAd->RfIcType == RFIC_2750) ||	\
	(__pAd->RfIcType == RFIC_3052) ||	\
	(__pAd->RfIcType == RFIC_2853) ||	\
	(__pAd->RfIcType == RFIC_3053) ||	\
	(__pAd->RfIcType == RFIC_3853) ||	\
	(__pAd->RfIcType == RFIC_5592) ||	\
	(__pAd->RfIcType == RFIC_UNKNOWN))

/*
	BBP sections
*/
#define BBP_R0			0  /* version */
#define BBP_R1			1  /* TSSI */
#define BBP_R2			2  /* TX configure */
#define BBP_R3			3
#define BBP_R4			4
#define BBP_R5			5
#define BBP_R6			6
#define BBP_R10			10 /* Rate report */
#define BBP_R14			14 /* RX configure */
#define BBP_R16			16
#define BBP_R17			17 /* RX sensibility */
#define BBP_R18			18
#define BBP_R20			20
#define BBP_R21			21
#define BBP_R22			22
#define BBP_R23			23
#define BBP_R24			24
#define BBP_R25			25
#define BBP_R26			26
#define BBP_R27			27
#define BBP_R31			31
#define BBP_R47			47
#define BBP_R49			49 /*TSSI */
#define BBP_R50			50
#define BBP_R51			51
#define BBP_R52			52
#define BBP_R53			53
#define BBP_R54			54
#define BBP_R55			55
#define BBP_R57			57
#define BBP_R58			58
#define BBP_R60			60
#define BBP_R61			61
#define BBP_R62			62 /* Rx SQ0 Threshold HIGH */
#define BBP_R63			63
#define BBP_R64			64
#define BBP_R65			65
#define BBP_R66			66
#define BBP_R67			67
#define BBP_R68			68
#define BBP_R69			69
#define BBP_R70			70 /* Rx AGC SQ CCK Xcorr threshold */
#define BBP_R73			73
#define BBP_R74			74
#define BBP_R75			75
#define BBP_R76			76
#define BBP_R77			77
#define BBP_R78			78
#define BBP_R79			79
#define BBP_R80			80
#define BBP_R81			81
#define BBP_R82			82
#define BBP_R83			83
#define BBP_R84			84
#define BBP_R85			85
#define BBP_R86			86
#define BBP_R87			87
#define BBP_R88			88
#define BBP_R91			91
#define BBP_R92			92
#define BBP_R94			94 /* Tx Gain Control */
#define BBP_R95			95
#define BBP_R98			98
#define BBP_R99			99
#define BBP_R101		101
#define BBP_R103		103
#define BBP_R104		104
#define BBP_R105		105
#define BBP_R106		106
#define BBP_R107		107
#define BBP_R108		108
#define BBP_R109		109
#define BBP_R110		110
#define BBP_R113		113
#define BBP_R114		114
#define BBP_R115		115
#define BBP_R116		116
#define BBP_R117		117
#define BBP_R118		118
#define BBP_R119		119
#define BBP_R120		120
#define BBP_R121		121
#define BBP_R122		122
#define BBP_R123		123
#define BBP_R126		126
#define BBP_R127		127
#define BBP_R128		128
#define BBP_R129		129
#define BBP_R130		130
#define BBP_R131		131
#define BBP_R133		133
#define BBP_R134		134
#define BBP_R135		135
#define BBP_R137		137
#define BBP_R138		138 /* add by johnli, RF power sequence setup, ADC dynamic on/off control */
#define BBP_R140		140
#define BBP_R141		141
#define BBP_R142		142
#define BBP_R143		143
#define BBP_R148		148
#define BBP_R150		150
#define BBP_R151		151
#define BBP_R152		152
#define BBP_R153		153
#define BBP_R154		154
#define BBP_R155		155
#define BBP_R158		158 /* Calibration register are accessed through R158 and R159 */
#define BBP_R159		159
#define BBP_R160		160 /* Tx BF control */
#define BBP_R161		161
#define BBP_R162		162
#define BBP_R163		163
#define BBP_R164		164
#define BBP_R165		165
#define BBP_R166		166
#define BBP_R167		167

#define BBP_R173		173
#define BBP_R174		174
#define BBP_R175		175
#define BBP_R176		176
#define BBP_R177		177
#define BBP_R178		178
#define BBP_R179		179
#define BBP_R180		180
#define BBP_R181		181
#define BBP_R182		182
#define BBP_R184		184
#define BBP_R185		185
#define BBP_R186		186
#define BBP_R187		187
#define BBP_R188		188
#define BBP_R189		189
#define BBP_R190		190
#define BBP_R191		191
#define BBP_R195		195
#define BBP_R196		196
#define BBP_R241		241
#define BBP_R242		242
#define BBP_R244		244
#define BBP_R250		250
#define BBP_R253		253
#define BBP_R254		254
#define BBP_R255		255

#define BBPR94_DEFAULT	0x06 /* Add 1 value will gain 1db */

typedef enum{
	RX_CHAIN_0 = 1<<0,
	RX_CHAIN_1 = 1<<1,
	RX_CHAIN_2 = 1<<2,
	RX_CHAIN_ALL = 0xf
}RX_CHAIN_IDX;

#ifdef RT_BIG_ENDIAN
typedef union _BBP_R47_STRUC {
	struct
	{
		UCHAR	Adc6On:1;
		UCHAR	Reserved:2; 
		UCHAR	TssiMode:2;
		UCHAR	TssiUpdateReq:1;
		UCHAR	TssiReportSel:2;
	} field;

	UCHAR		byte;
} BBP_R47_STRUC, *PBBP_R47_STRUC;
#else
typedef union _BBP_R47_STRUC {
	struct
	{
		UCHAR	TssiReportSel:2;
		UCHAR	TssiUpdateReq:1;
		UCHAR	TssiMode:2;
		UCHAR	Reserved:2; 
		UCHAR	Adc6On:1;
	} field;
	
	UCHAR		byte;
} BBP_R47_STRUC, *PBBP_R47_STRUC;
#endif

/* */
/* BBP R49 TSSI (Transmit Signal Strength Indicator) */
/* */
#ifdef RT_BIG_ENDIAN
typedef union _BBP_R49_STRUC {
	struct
	{
		UCHAR	adc5_in_sel:1; /* 0: TSSI (from the external components, old version), 1: PSI (internal components, new version - RT3390) */
		UCHAR	bypassTSSIAverage:1; /* 0: the average TSSI (the average of the 16 samples), 1: the current TSSI */
		UCHAR	Reserved:1; /* Reserved field */
		UCHAR	TSSI:5; /* TSSI value */
	} field;

	UCHAR		byte;
} BBP_R49_STRUC, *PBBP_R49_STRUC;
#else
typedef union _BBP_R49_STRUC {
	struct
	{
		UCHAR	TSSI:5; /* TSSI value */
		UCHAR	Reserved:1; /* Reserved field */
		UCHAR	bypassTSSIAverage:1; /* 0: the average TSSI (the average of the 16 samples), 1: the current TSSI */
		UCHAR	adc5_in_sel:1; /* 0: TSSI (from the external components, old version), 1: PSI (internal components, new version - RT3390) */
	} field;
	
	UCHAR		byte;
} BBP_R49_STRUC, *PBBP_R49_STRUC;
#endif

/* */
/* BBP R105 (FEQ control, MLD control and SIG remodulation) */
/* */
#ifdef RT_BIG_ENDIAN
typedef union _BBP_R105_STRUC {
	struct
	{
		UCHAR	Reserve1:4; /* Reserved field */
		UCHAR	EnableSIGRemodulation:1; /* Enable the channel estimation updates based on remodulation of L-SIG and HT-SIG symbols. */
		UCHAR	MLDFor2Stream:1; /* Apply Maximum Likelihood Detection (MLD) for 2 stream case (reserved field if single RX) */
		UCHAR	IndependentFeedForwardCompensation:1; /* Apply independent feed-forward compensation for independent stream. */
		UCHAR	DetectSIGOnPrimaryChannelOnly:1; /* Under 40 MHz band, detect SIG on primary channel only. */
	} field;

	UCHAR		byte;
} BBP_R105_STRUC, *PBBP_R105_STRUC;
#else
typedef union _BBP_R105_STRUC {
	struct
	{
		UCHAR	DetectSIGOnPrimaryChannelOnly:1; /* Under 40 MHz band, detect SIG on primary channel only. */
		UCHAR	IndependentFeedForwardCompensation:1; /* Apply independent feed-forward compensation for independent stream. */
		UCHAR	MLDFor2Stream:1; /* Apply Maximum Likelihood Detection (MLD) for 2 stream case (reserved field if single RX) */
		UCHAR	EnableSIGRemodulation:1; /* Enable the channel estimation updates based on remodulation of L-SIG and HT-SIG symbols. */
		UCHAR	Reserve1:4; /* Reserved field */
	} field;
	
	UCHAR		byte;
} BBP_R105_STRUC, *PBBP_R105_STRUC;
#endif

/* */
/* BBP R106 (GI remover) */
/* */
#ifdef RT_BIG_ENDIAN
typedef union _BBP_R106_STRUC {
	struct
	{
		UCHAR	EnableLowPowerFSD:1; /* enable/disable the low power FSD */
		UCHAR	ShortGI_Offset40:4; /* Delay GI remover when the short GI is detected in 40MHz band (40M sampling rate) */
		UCHAR	ShortGI_Offset20:3; /* Delay GI remover when the short GI is detected in 20MHz band (20M sampling rate) */
	} field;

	UCHAR		byte;
} BBP_R106_STRUC, *PBBP_R106_STRUC;
#else
typedef union _BBP_R106_STRUC {
	struct
	{
		UCHAR	ShortGI_Offset20:3; /* Delay GI remover when the short GI is detected in 20MHz band (20M sampling rate) */
		UCHAR	ShortGI_Offset40:4; /* Delay GI remover when the short GI is detected in 40MHz band (40M sampling rate) */
		UCHAR	EnableLowPowerFSD:1; /* enable/disable the low power FSD */
	} field;
	
	UCHAR		byte;
} BBP_R106_STRUC, *PBBP_R106_STRUC;
#endif

/* */
/* BBP R109 (Tx power control in 0.1dB step) */
/* */
#ifdef RT_BIG_ENDIAN
typedef union _BBP_R109_STRUC {
	struct
	{
		UCHAR	Tx1PowerCtrl:4; /* Tx1 power control in 0.1dB step (valid: 0~10) */
		UCHAR	Tx0PowerCtrl:4; /* Tx0 power control in 0.1dB step (valid: 0~10) */
	} field;

	UCHAR		byte;
} BBP_R109_STRUC, *PBBP_R109_STRUC;
#else
typedef union _BBP_R109_STRUC {
	struct
	{
		UCHAR	Tx0PowerCtrl:4; /* Tx0 power control in 0.1dB step (valid: 0~10) */
		UCHAR	Tx1PowerCtrl:4; /* Tx0 power control in 0.1dB step (valid: 0~10) */
	} field;
	
	UCHAR		byte;
} BBP_R109_STRUC, *PBBP_R109_STRUC;
#endif

/* */
/* BBP R110 (Tx power control in 0.1dB step) */
/* */
#ifdef RT_BIG_ENDIAN
typedef union _BBP_R110_STRUC {
	struct
	{
		UCHAR	Tx2PowerCtrl:4; /* Tx2 power control in 0.1dB step (valid: 0~10) */
		UCHAR	AllTxPowerCtrl:4; /* All transmitters' fine power control in 0.1dB (valid: 0~10) */
	} field;

	UCHAR		byte;
} BBP_R110_STRUC, *PBBP_R110_STRUC;
#else
typedef union _BBP_R110_STRUC {
	struct
	{
		UCHAR	AllTxPowerCtrl:4; /* All transmitters' fine power control in 0.1dB (valid: 0~10) */
		UCHAR	Tx2PowerCtrl:4; /* Tx2 power control in 0.1dB step (valid: 0~10) */
	} field;
	
	UCHAR		byte;
} BBP_R110_STRUC, *PBBP_R110_STRUC;
#endif

/* */
/* BBP R179 (Test config #1) */
/* */
#ifdef RT_BIG_ENDIAN
typedef union _BBP_R179_STRUC {
	struct
	{
		UCHAR	DataIndex1:8; /* Data index #1 */
	} field;

	UCHAR		byte;
} BBP_R179_STRUC, *PBBP_R179_STRUC;
#else
typedef union _BBP_R179_STRUC {
	struct
	{
		UCHAR	DataIndex1:8; /* Data index #1 */
	} field;
	
	UCHAR		byte;
} BBP_R179_STRUC, *PBBP_R179_STRUC;
#endif /* RT_BIG_ENDIAN */

/* */
/* BBP R180 (Test config #2) */
/* */
#ifdef RT_BIG_ENDIAN
typedef union _BBP_R180_STRUC {
	struct
	{
		UCHAR	DataIndex2:8; /* Data index #2 */
	} field;

	UCHAR		byte;
} BBP_R180_STRUC, *PBBP_R180_STRUC;
#else
typedef union _BBP_R180_STRUC {
	struct
	{
		UCHAR	DataIndex2:8; /* Data index #2 */
	} field;
	
	UCHAR		byte;
} BBP_R180_STRUC, *PBBP_R180_STRUC;
#endif /* RT_BIG_ENDIAN */

/* */
/* BBP R182 (Test data port) */
/* */
#ifdef RT_BIG_ENDIAN
typedef union _BBP_R182_STRUC {
	struct
	{
		UCHAR	DataArray:8; /* Data array indexed by BBP R179 and R180 */
	} field;

	UCHAR		byte;
} BBP_R182_STRUC, *PBBP_R182_STRUC;
#else
typedef union _BBP_R182_STRUC {
	struct
	{
		UCHAR	DataArray:8; /* Data array indexed by BBP R179 and R180 */
	} field;
	
	UCHAR		byte;
} BBP_R182_STRUC, *PBBP_R182_STRUC;
#endif /* RT_BIG_ENDIAN */

#ifdef RTMP_RBUS_SUPPORT
/* TODO: for this definition, need to modify it!! */
	/*#define MAX_BBP_ID	255 */
	#define MAX_BBP_ID	200
	#define MAX_BBP_MSG_SIZE	4096

#if defined(RT3352) || defined(RT5350)
	#undef MAX_BBP_ID
	#define MAX_BBP_ID	255
#endif /* RT3352 */
#else
#if defined(RT5370) || defined(RT5390) || defined(RT3290) //for hw antenna diversity (PPAD)
	#define MAX_BBP_ID	255
#elif defined(RT30xx)
	/* edit by johnli, RF power sequence setup, add BBP R138 for ADC dynamic on/off control */
#ifdef RT5592
	#define MAX_BBP_ID	255
#else
	#define MAX_BBP_ID	185
#endif
#elif defined(RT2883)
	#define MAX_BBP_ID	180
#else
	#define MAX_BBP_ID	136
#endif /* RT30xx */

	#define MAX_BBP_MSG_SIZE	2048
#endif /* RTMP_RBUS_SUPPORT */


#ifdef RT5572
#undef MAX_BBP_ID
#define MAX_BBP_ID	248
#undef MAX_BBP_MSG_SIZE
#define MAX_BBP_MSG_SIZE 4096
#endif


/* */
/* BBP & RF are using indirect access. Before write any value into it. */
/* We have to make sure there is no outstanding command pending via checking busy bit. */
/* */
#define MAX_BUSY_COUNT  100         /* Number of retry before failing access BBP & RF indirect register */

/*#define PHY_TR_SWITCH_TIME          5  // usec */

/*#define BBP_R17_LOW_SENSIBILITY     0x50 */
/*#define BBP_R17_MID_SENSIBILITY     0x41 */
/*#define BBP_R17_DYNAMIC_UP_BOUND    0x40 */

#define RSSI_FOR_VERY_LOW_SENSIBILITY   -35
#define RSSI_FOR_LOW_SENSIBILITY		-58
#define RSSI_FOR_MID_LOW_SENSIBILITY	-65 /*-80*/
#define RSSI_FOR_MID_SENSIBILITY		-90

/*****************************************************************************
	RF register Read/Write marco definition
 *****************************************************************************/
#ifdef RTMP_MAC_PCI
#define RTMP_RF_IO_WRITE32(_A, _V)                  \
{                                                   					\
	if ((_A)->bPCIclkOff == FALSE) 	                \
	{												\
		RF_CSR_CFG0_STRUC  _value;                          \
		ULONG           _busyCnt = 0;                    \
											\
		do {                                            \
			RTMP_IO_READ32((_A), RF_CSR_CFG0, &_value.word);  \
			if (_value.field.Busy == IDLE)               \
				break;                                  \
			_busyCnt++;                                  \
		}while (_busyCnt < MAX_BUSY_COUNT);			\
		if(_busyCnt < MAX_BUSY_COUNT)                   \
		{                                               \
			RTMP_IO_WRITE32((_A), RF_CSR_CFG0, (_V));          \
    		}                                               \
    	}								\
    if ((_A)->ShowRf)					\
    {									\
    	printk("RF:%x\n", _V);			\
	}									\
}
#endif /* RTMP_MAC_PCI */

#ifdef RTMP_MAC_USB
#define RTMP_RF_IO_WRITE32(_A, _V)                 RTUSBWriteRFRegister(_A, _V)
#endif /* RTMP_MAC_USB */


/*****************************************************************************
	BBP register Read/Write marco definitions.
	we read/write the bbp value by register's ID. 
	Generate PER to test BA
 *****************************************************************************/
#ifdef RTMP_MAC_PCI
/*
	basic marco for BBP read operation. 
	_pAd: the data structure pointer of RTMP_ADAPTER
	_bbpID : the bbp register ID
	_pV: data pointer used to save the value of queried bbp register.
	_bViaMCU: if we need access the bbp via the MCU.
*/
#ifdef RELASE_INCLUDE
/*
	The RTMP_PCIE_PS_L3_BBP_IO_READ8 is used to support PCIE power-saving solution3.
	"brc =AsicSendCommandToMcuBBP" is used to avoid any muc command is executed during
	RF_OFF command.
*/
#endif /* RELASE_INCLUDE */

	
#ifdef CONFIG_STA_SUPPORT
#define IS_SUPPORT_PCIE_PS_L3(_pAd) (((_pAd)->OpMode == OPMODE_STA) &&\
	(IS_RT3090((_pAd)) || IS_RT3572((_pAd)) || IS_RT3390((_pAd)) || IS_RT3593((_pAd)) || IS_RT5390((_pAd)) || IS_RT5392((_pAd)) || IS_RT3290((_pAd))) && \
	((_pAd)->StaCfg.PSControl.field.rt30xxPowerMode == 3)&& \
	((_pAd)->StaCfg.PSControl.field.EnableNewPS == TRUE)) 
	
#define RTMP_PCIE_PS_L3_BBP_IO_READ8(_pAd, _bbpID, _pV, _bViaMCU)			\
	do{															\
	BBP_CSR_CFG_STRUC	BbpCsr;									\
	int					_busyCnt, _secCnt, _regID;					\
	BOOLEAN					brc;									\
	ULONG __IrqFlags = 0;										\
																\
	if ((_bViaMCU) == TRUE) \
	RTMP_MAC_SHR_MSEL_PROTECT_LOCK(_pAd, __IrqFlags);			\
	_regID = ((_bViaMCU) == TRUE ? H2M_BBP_AGENT : BBP_CSR_CFG);	\
	BbpCsr.field.Busy = IDLE;										\
	if (((_pAd)->bPCIclkOff == FALSE)								\
		&& (((_pAd)->LastMCUCmd== WAKE_MCU_CMD) || ((_pAd)->LastMCUCmd==0x72))\
		&& ((_pAd)->brt30xxBanMcuCmd == FALSE))					\
	{															\
		for (_busyCnt=0; _busyCnt<MAX_BUSY_COUNT; _busyCnt++)	\
		{														\
			RTMP_IO_READ32(_pAd, _regID, &BbpCsr.word);			\
			if (BbpCsr.field.Busy == BUSY)                 					\
				continue;                                               				\
			BbpCsr.word = 0;										\
			BbpCsr.field.fRead = 1;									\
			BbpCsr.field.BBP_RW_MODE = 1;							\
			BbpCsr.field.Busy = 1;									\
			BbpCsr.field.RegNum = _bbpID;                       			\
			RTMP_IO_WRITE32(_pAd, _regID, BbpCsr.word);			\
			if ((_bViaMCU) == TRUE)								\
			{													\
				brc =AsicSendCommandToMcuBBP(_pAd, 0x80, 0xff, 0x0, 0x0, FALSE); \
				/*RTMPusecDelay(1000);*/							\
			}							\
	               if (brc == TRUE) 										\
			{                                                 								\
				for (_secCnt=0; _secCnt<MAX_BUSY_COUNT; _secCnt++)       	\
				{														\
					RTMP_IO_READ32(_pAd, _regID, &BbpCsr.word); 	\
					if (BbpCsr.field.Busy == IDLE)							\
						break;											\
				}														\
				if ((BbpCsr.field.Busy == IDLE) &&							\
				(BbpCsr.field.RegNum == _bbpID))                					\
				{																\
					*(_pV) = (UCHAR)BbpCsr.field.Value;							\
					break;														\
				}																\
			}																\
			else 																\
			{																\
				BbpCsr.field.Busy = 0;											\
				RTMP_IO_WRITE32(_pAd, _regID, BbpCsr.word);				\
			}																\
		}																	\
	}	\
	if ((BbpCsr.field.Busy == BUSY) || ((_pAd)->bPCIclkOff == TRUE))				\
	{																	\
	                DBGPRINT_ERR(("RTMP_PCIE_PS_L3_BBP_IO_READ8(viaMCU=%d) read R%d fail(reason:clk=%d,busy=%x)\n", (_bViaMCU), _bbpID,(_pAd)->bPCIclkOff ,BbpCsr.field.Busy));      \
			*(_pV) = (_pAd)->BbpWriteLatch[_bbpID];               \
	}																	\
	if ((_bViaMCU) == TRUE) \
	RTMP_MAC_SHR_MSEL_PROTECT_UNLOCK(_pAd, __IrqFlags);	\
}while(0)
#else
#define IS_SUPPORT_PCIE_PS_L3(_pAd) FALSE
#define RTMP_PCIE_PS_L3_BBP_IO_READ8(_pAd, _bbpID, _pV, _bViaMCU)
#endif /* CONFIG_STA_SUPPORT */

#define _RTMP_BBP_IO_READ8(_pAd, _bbpID, _pV, _bViaMCU)			\
	do{															\
		BBP_CSR_CFG_STRUC  BbpCsr;								\
		int   _busyCnt, _secCnt, _regID;                               			\
		ULONG __IrqFlags = 0;									\
																\
		if ((_bViaMCU) == TRUE) \
		RTMP_MAC_SHR_MSEL_PROTECT_LOCK(_pAd, __IrqFlags);		\
		_regID = ((_bViaMCU) == TRUE ? H2M_BBP_AGENT : BBP_CSR_CFG);	\
		for (_busyCnt=0; _busyCnt<MAX_BUSY_COUNT; _busyCnt++)      \
		{                                                   							\
			RTMP_IO_READ32(_pAd, _regID, &BbpCsr.word);     	\
			if (BbpCsr.field.Busy == BUSY)                  \
				continue;                                               \
			BbpCsr.word = 0;                                \
			BbpCsr.field.fRead = 1;                         \
			BbpCsr.field.BBP_RW_MODE = 1;                         \
			BbpCsr.field.Busy = 1;                          \
			BbpCsr.field.RegNum = _bbpID;                       \
			RTMP_IO_WRITE32(_pAd, _regID, BbpCsr.word);     \
			if ((_bViaMCU) == TRUE)							\
			{													\
				AsicSendCommandToMcuBBP(_pAd, 0x80, 0xff, 0x0, 0x0, FALSE); \
				/*RTMPusecDelay(1000);*/	\
			}							\
			for (_secCnt=0; _secCnt<MAX_BUSY_COUNT; _secCnt++)       \
			{                                               \
				RTMP_IO_READ32(_pAd, _regID, &BbpCsr.word); \
				if (BbpCsr.field.Busy == IDLE)              \
					break;                                  \
			}                                               \
			if ((BbpCsr.field.Busy == IDLE) &&              \
				(BbpCsr.field.RegNum == _bbpID))                \
			{                                               \
				*(_pV) = (UCHAR)BbpCsr.field.Value;         \
				break;                                      \
			}                                               \
		}                                                   \
		if (BbpCsr.field.Busy == BUSY)                      \
		{                                                   \
			DBGPRINT_ERR(("BBP(viaMCU=%d) read R%d fail\n", (_bViaMCU), _bbpID));      \
			*(_pV) = (_pAd)->BbpWriteLatch[_bbpID];               \
			if ((_bViaMCU) == TRUE)				\
			{									\
				RTMP_IO_READ32(_pAd, _regID, &BbpCsr.word);				\
				BbpCsr.field.Busy = 0;                          \
				RTMP_IO_WRITE32(_pAd, _regID, BbpCsr.word);				\
			}				\
		}													\
		if ((_bViaMCU) == TRUE) \
		RTMP_MAC_SHR_MSEL_PROTECT_UNLOCK(_pAd, __IrqFlags);	\
	}while(0)

#ifndef MT7601
/*
	This marco used for the BBP read operation which didn't need via MCU.
*/
#define BBP_IO_READ8_BY_REG_ID(_A, _I, _pV)			\
	RTMP_BBP_IO_READ8((_A), (_I), (_pV), TRUE)
#endif /* MT7601 */

/*
	This marco used for the BBP read operation which need via MCU.
	But for some chipset which didn't have mcu (e.g., RBUS based chipset), we
	will use this function too and didn't access the bbp register via the MCU.
*/
#define _RTMP_BBP_IO_READ8_BY_REG_ID(_A, _I, _pV)			\
	do{														\
		if (IS_RT8592(_A))\
			break;\
		if (IS_RT65XX(_A))\
			break;\
		if ((_A)->bPCIclkOff == FALSE)                     				\
		{													\
			if ((_A)->infType == RTMP_DEV_INF_RBUS)			\
				RTMP_BBP_IO_READ8((_A), (_I), (_pV), FALSE);	\
			else												\
				if(IS_SUPPORT_PCIE_PS_L3((_A)))				\
					RTMP_PCIE_PS_L3_BBP_IO_READ8((_A), (_I), (_pV), TRUE);	\
				else												\
					RTMP_BBP_IO_READ8((_A), (_I), (_pV), TRUE);	\
		}													\
	}while(0)

/*
	basic marco for BBP write operation. 
	_pAd: the data structure pointer of RTMP_ADAPTER
	_bbpID : the bbp register ID
	_pV: data used to save the value of queried bbp register.
	_bViaMCU: if we need access the bbp via the MCU.
*/
#ifdef CONFIG_STA_SUPPORT
#define RTMP_PCIE_PS_L3_BBP_IO_WRITE8(_pAd, _bbpID, _pV, _bViaMCU)				\
	do{											\
		BBP_CSR_CFG_STRUC  BbpCsr;							\
		int             k, _busyCnt=0, _regID;						\
		BOOLEAN					brc;					\
		ULONG				__IrqFlags = 0;						\
		if ((_bViaMCU) == TRUE) \
		RTMP_MAC_SHR_MSEL_PROTECT_LOCK(_pAd, __IrqFlags);		\
		_regID = ((_bViaMCU) == TRUE ? H2M_BBP_AGENT : BBP_CSR_CFG);			\
			if (((_pAd)->bPCIclkOff == FALSE)					\
			&& ((_pAd)->brt30xxBanMcuCmd == FALSE))								\
			{																	\
				if (_pAd->AccessBBPFailCount > 20)								\
				{																\
					AsicResetBBPAgent(_pAd);									\
					_pAd->AccessBBPFailCount = 0;								\
				}																\
				for (_busyCnt=1; _busyCnt<MAX_BUSY_COUNT; _busyCnt++)  \
				{                                                  						 \
					RTMP_IO_READ32((_pAd), _regID, &BbpCsr.word);     \
					if ((BbpCsr.field.Busy == BUSY) && (_busyCnt % 10 == 0))	\
					{															\
						BbpCsr.field.Busy = IDLE;								\
						RTMP_IO_WRITE32(_pAd, H2M_BBP_AGENT, BbpCsr.word);		\
						continue;                                   \
					}												\
					BbpCsr.word = 0;                                \
					BbpCsr.field.fRead = 0;                         \
					BbpCsr.field.BBP_RW_MODE = 1;                         \
					BbpCsr.field.Busy = 1;                          \
					BbpCsr.field.Value = _pV;                        \
					BbpCsr.field.RegNum = _bbpID;                       \
					RTMP_IO_WRITE32((_pAd), _regID, BbpCsr.word);     \
					if ((_bViaMCU) == TRUE)									\
					{														\
						brc =AsicSendCommandToMcuBBP(_pAd, 0x80, 0xff, 0x0, 0x0, FALSE);		\
						if ((_pAd)->OpMode == OPMODE_AP)						\
							RTMPusecDelay(1000);							\
					}														\
					if (brc == TRUE) 											\
					{														\
						for (k=0; k<MAX_BUSY_COUNT; k++)								\
						{																\
							BbpCsr.field.Busy = BUSY;											\
							RTMP_IO_READ32(_pAd, H2M_BBP_AGENT, &BbpCsr.word);			\
							if (BbpCsr.field.Busy == IDLE)								\
								break;													\
						}																\
						if ((BbpCsr.field.Busy == BUSY))										\
						{																	\
							DBGPRINT_ERR(("Check BBP write R%d=0x%x fail\n", _bbpID, BbpCsr.word));	\
						}						\
						(_pAd)->BbpWriteLatch[_bbpID] = _pV;                   		\
					}														\
					else 													\
					{														\
						BbpCsr.field.Busy = 0;									\
						RTMP_IO_WRITE32(_pAd, _regID, BbpCsr.word);	\
					}								\
					break;													\
				}  	\
			}		\
			else 										\
			{																	\
				DBGPRINT_ERR(("  brt30xxBanMcuCmd = %d. Write BBP %d \n",  (_pAd)->brt30xxBanMcuCmd, (_regID)));	\
			}																	\
		if ((_busyCnt == MAX_BUSY_COUNT) || ((_pAd)->bPCIclkOff == TRUE))			\
			{																	\
				if (_busyCnt == MAX_BUSY_COUNT)					\
				(_pAd)->AccessBBPFailCount++;					\
				DBGPRINT_ERR(("BBP write R%d=0x%x fail. BusyCnt= %d.bPCIclkOff = %d. \n", _regID, BbpCsr.word, _busyCnt, (_pAd)->bPCIclkOff ));	\
			}																	\
		if ((_bViaMCU) == TRUE) \
		RTMP_MAC_SHR_MSEL_PROTECT_UNLOCK(_pAd, __IrqFlags);	\
	}while(0)
#else
#define RTMP_PCIE_PS_L3_BBP_IO_WRITE8(_pAd, _bbpID, _pV, _bViaMCU)
#endif /* CONFIG_STA_SUPPORT */

#define _RTMP_BBP_IO_WRITE8(_pAd, _bbpID, _pV, _bViaMCU)			\
	do{															\
		BBP_CSR_CFG_STRUC  BbpCsr;                             \
		int             _busyCnt=0, _regID;                               			\
		BOOLEAN					brc;			\
		ULONG				__IrqFlags = 0;						\
																\
		if ((_bViaMCU) == TRUE) \
		RTMP_MAC_SHR_MSEL_PROTECT_LOCK(_pAd, __IrqFlags);		\
		_regID = ((_bViaMCU) == TRUE ? H2M_BBP_AGENT : BBP_CSR_CFG);	\
		for (_busyCnt=1; _busyCnt<MAX_BUSY_COUNT; _busyCnt++)  \
		{                                                   \
			RTMP_IO_READ32((_pAd), _regID, &BbpCsr.word);     \
			if (BbpCsr.field.Busy == BUSY)                  \
			{\
					if ( ((_bViaMCU) == TRUE) && ((_busyCnt % 20) == 0)) \
					{\
						BbpCsr.field.Busy = IDLE;\
						RTMP_IO_WRITE32(_pAd, H2M_BBP_AGENT, BbpCsr.word);\
					}\
				continue;                                   \
			}\
			BbpCsr.word = 0;                                \
			BbpCsr.field.fRead = 0;                         \
			BbpCsr.field.BBP_RW_MODE = 1;                         \
			BbpCsr.field.Busy = 1;                          \
			BbpCsr.field.Value = _pV;                        \
			BbpCsr.field.RegNum = _bbpID;                       \
			RTMP_IO_WRITE32((_pAd), _regID, BbpCsr.word);     \
			if ((_bViaMCU) == TRUE)									\
			{														\
				brc = AsicSendCommandToMcuBBP(_pAd, 0x80, 0xff, 0x0, 0x0, FALSE);		\
				if ((_pAd)->OpMode == OPMODE_AP)						\
					RTMPusecDelay(1000);							\
				if (brc == FALSE) \
				{ \
					BbpCsr.field.Busy = IDLE;											\
					RTMP_IO_WRITE32((_pAd), H2M_BBP_AGENT, BbpCsr.word);				\
				} \
			}														\
			(_pAd)->BbpWriteLatch[_bbpID] = _pV;                   			\
			break;													\
		}                                                   								\
		if (_busyCnt == MAX_BUSY_COUNT)                      					\
		{                                                   								\
			DBGPRINT_ERR(("BBP write R%d fail\n", _bbpID));     			\
			if((_bViaMCU) == TRUE)									\
			{														\
				RTMP_IO_READ32(_pAd, H2M_BBP_AGENT, &BbpCsr.word);	\
				BbpCsr.field.Busy = 0;                          					\
				RTMP_IO_WRITE32(_pAd, H2M_BBP_AGENT, BbpCsr.word);	\
			}														\
		}                                                   								\
		if ((_bViaMCU) == TRUE) \
		RTMP_MAC_SHR_MSEL_PROTECT_UNLOCK(_pAd, __IrqFlags);	\
	}while(0)

#ifndef MT7601
/*
	This marco used for the BBP write operation which didn't need via MCU.
*/
#define BBP_IO_WRITE8_BY_REG_ID(_A, _I, _pV)			\
	RTMP_BBP_IO_WRITE8((_A), (_I), (_pV), FALSE)
#endif /* MT7601 */

/*
	This marco used for the BBP write operation which need via MCU.
	But for some chipset which didn't have mcu (e.g., RBUS based chipset), we
	will use this function too and didn't access the bbp register via the MCU.
*/
#define _RTMP_BBP_IO_WRITE8_BY_REG_ID(_A, _I, _pV)			\
	do{														\
		if (IS_RT8592(_A))\
			break;\
		if (IS_RT65XX(_A))\
			break;\
		if ((_A)->bPCIclkOff == FALSE)                     				\
		{													\
			if ((_A)->infType == RTMP_DEV_INF_RBUS)			\
				RTMP_BBP_IO_WRITE8((_A), (_I), (_pV), FALSE);	\
			else												\
				if(IS_SUPPORT_PCIE_PS_L3((_A)))				\
					RTMP_PCIE_PS_L3_BBP_IO_WRITE8((_A), (_I), (_pV), TRUE);	\
				else												\
				RTMP_BBP_IO_WRITE8((_A), (_I), (_pV), TRUE);	\
		}													\
	}while(0)

#ifndef VENDOR_FEATURE3_SUPPORT
#ifndef MT7601
#define RTMP_BBP_IO_READ8				_RTMP_BBP_IO_READ8
#define RTMP_BBP_IO_READ8_BY_REG_ID	_RTMP_BBP_IO_READ8_BY_REG_ID
#define RTMP_BBP_IO_WRITE8				_RTMP_BBP_IO_WRITE8
#define RTMP_BBP_IO_WRITE8_BY_REG_ID	_RTMP_BBP_IO_WRITE8_BY_REG_ID
#endif /* MT7601 */
#endif /* VENDOR_FEATURE3_SUPPORT */

/* 
	Hardware Periodic Timer interrupt setting.
	Pre-TBTT is 6ms before TBTT interrupt. 1~10 ms is reasonable.
*/
#define RTMP_HW_TIMER_INT_SET(_pAd, _V)					\
	{													\
		UINT32 temp;									\
		RTMP_IO_READ32(_pAd, INT_TIMER_CFG, &temp);		\
		temp &= 0x0000ffff;								\
		temp |= _V << 20; 								\
		RTMP_IO_WRITE32(_pAd, INT_TIMER_CFG, temp);		\
	}

/* Enable Hardware Periodic Timer interrupt */
#define RTMP_HW_TIMER_INT_ENABLE(_pAd)					\
	{													\
		UINT32 temp;									\
		RTMP_IO_READ32(pAd, INT_TIMER_EN, &temp);		\
		temp |=0x2;										\
		RTMP_IO_WRITE32(pAd, INT_TIMER_EN, temp);		\
	}

/* Disable Hardware Periodic Timer interrupt */
#define RTMP_HW_TIMER_INT_DISABLE(_pAd)					\
	{													\
		UINT32 temp;									\
		RTMP_IO_READ32(pAd, INT_TIMER_EN, &temp);		\
		temp &=~(0x2);									\
		RTMP_IO_WRITE32(pAd, INT_TIMER_EN, temp);		\
	}
#endif /* RTMP_MAC_PCI */
	
#ifdef CARRIER_DETECTION_SUPPORT
/*TONE_RADAR_DETECT_V2*/
#define RTMP_CARRIER_IO_READ8(_A, _I, _V)               \
{                                                       \
	RTMP_BBP_IO_WRITE8_BY_REG_ID(_A, BBP_R184, _I);          \
	RTMP_BBP_IO_READ8_BY_REG_ID(_A, BBP_R185, _V);           \
}
#define RTMP_CARRIER_IO_WRITE8(_A, _I, _V)              \
{                                                       \
	RTMP_BBP_IO_WRITE8_BY_REG_ID(_A, BBP_R184, _I);          \
	RTMP_BBP_IO_WRITE8_BY_REG_ID(_A, BBP_R185, _V);          \
}
#endif /* CARRIER_DETECTION_SUPPORT */

#ifdef DFS_SUPPORT
#define RTMP_DFS_IO_READ8(_A, _I, _V)                   \
{                                                       \
	RTMP_BBP_IO_WRITE8_BY_REG_ID(_A, BBP_R140, _I);          \
	RTMP_BBP_IO_READ8_BY_REG_ID(_A, BBP_R141, _V);           \
}

#define RTMP_DFS_IO_WRITE8(_A, _I, _V)                  \
{                                                       \
	RTMP_BBP_IO_WRITE8_BY_REG_ID(_A, BBP_R140, _I);          \
	RTMP_BBP_IO_WRITE8_BY_REG_ID(_A, BBP_R141, _V);          \
}
#endif /*DFS_SUPPORT*/

#ifdef RTMP_MAC_USB
#ifndef MT7601
#define RTMP_BBP_IO_READ8_BY_REG_ID(_A, _I, _pV)   RTUSBReadBBPRegister(_A, _I, _pV)
#define RTMP_BBP_IO_WRITE8_BY_REG_ID(_A, _I, _V)   RTUSBWriteBBPRegister(_A, _I, _V)
#define BBP_IO_WRITE8_BY_REG_ID(_A, _I, _V)			RTUSBWriteBBPRegister(_A, _I, _V)
#define BBP_IO_READ8_BY_REG_ID(_A, _I, _pV)   		RTUSBReadBBPRegister(_A, _I, _pV)
#endif /* MT7601 */
#endif /* RTMP_MAC_USB */

#ifdef MT7601
NDIS_STATUS MT7601_BBP_write(
	IN struct _RTMP_ADAPTER *pAd,
	IN UCHAR regID,
	IN UCHAR value);

NDIS_STATUS MT7601_BBP_read(
	IN struct _RTMP_ADAPTER *pAd,
	IN UCHAR regID,
	IN UCHAR *pValue);

#define RTMP_BBP_IO_READ8_BY_REG_ID(_A, _I, _pV)	MT7601_BBP_read(_A, _I, _pV)
#define RTMP_BBP_IO_WRITE8_BY_REG_ID(_A, _I, _V)	MT7601_BBP_write(_A, _I, _V)
#define BBP_IO_WRITE8_BY_REG_ID(_A, _I, _V)			MT7601_BBP_write(_A, _I, _V)
#define BBP_IO_READ8_BY_REG_ID(_A, _I, _pV)			MT7601_BBP_read(_A, _I, _pV)
#endif /* MT7601 */



#if defined(RT30xx) || defined(MT7601)
#ifdef ANT_DIVERSITY_SUPPORT
/*Need to collect each ant's rssi concurrently */
/*rssi1 is report to pair2 Ant and rss2 is reprot to pair1 Ant when 4 Ant */
#ifdef CONFIG_AP_SUPPORT
#ifdef RELEASE_EXCLUDE
/* AP will increase the RSSI sample from STA's Data From, and calculate the Avg. RSSI
 * when needed. In some embedded system, if we divide negative integer the result is 
 * in-correct. So we convert the negative integer to positive by adding 256.
 */
#endif /* RELEASE_EXCLUDE */
#define AP_COLLECT_RX_ANTENNA_AVERAGE_RSSI(_pAd, _rssi1, _rssi2, _group)					\
{																				\
	LONG	AvgRssi;															\
	UCHAR	UsedAnt;															\
	if (_pAd->RxAnt.EvaluatePeriod == 0)									\
		UsedAnt = _pAd->RxAnt.Pair1PrimaryRxAnt;							\
	else																	\
		UsedAnt = _pAd->RxAnt.Pair1SecondaryRxAnt;							\
	if(_group == 0)                                                                                          \
	{                                                                                                                           \
		AvgRssi = _pAd->RxAnt.Pair1AvgRssiGroup1[UsedAnt];						\
		AvgRssi = AvgRssi + (256 + _rssi1);						                                    \
		_pAd->RxAnt.Pair1AvgRssiGroup1[UsedAnt] = AvgRssi;						\
	}                                                                                                                           \
	else                                                                                                                    \
	{                                                                                                                           \
		AvgRssi = _pAd->RxAnt.Pair1AvgRssiGroup2[UsedAnt];						\
		AvgRssi = AvgRssi + (256 + _rssi1);						                                    \
		_pAd->RxAnt.Pair1AvgRssiGroup2[UsedAnt] = AvgRssi;						\
	}                                                                                                                           \
	_pAd->RxAnt.RcvPktNum[UsedAnt]++;								\
}
#endif /* CONFIG_AP_SUPPORT */

#ifdef CONFIG_STA_SUPPORT
#ifdef RELEASE_EXCLUDE
/* STA will get the Avg. RSSI from Mgmt Frame and Peer AP Beacon.
 * The reason to use moving average is prevent STA switch antenna back and forth quickly
 * to cause antenna switching hourly.
 */
#endif /* RELEASE_EXCLUDE */
#define STA_COLLECT_RX_ANTENNA_AVERAGE_RSSI(_pAd, _rssi1, _rssi2)					\
{																				\
	SHORT	AvgRssi;															\
	UCHAR	UsedAnt;															\
	if (_pAd->RxAnt.EvaluatePeriod == 0)									\
	{																		\
		UsedAnt = _pAd->RxAnt.Pair1PrimaryRxAnt;							\
		AvgRssi = _pAd->RxAnt.Pair1AvgRssi[UsedAnt];						\
		if (AvgRssi < 0)													\
			AvgRssi = AvgRssi - (AvgRssi >> 3) + _rssi1;					\
		else																\
			AvgRssi = _rssi1 << 3;											\
		_pAd->RxAnt.Pair1AvgRssi[UsedAnt] = AvgRssi;						\
	}																		\
	else																	\
	{																		\
		UsedAnt = _pAd->RxAnt.Pair1SecondaryRxAnt;							\
		AvgRssi = _pAd->RxAnt.Pair1AvgRssi[UsedAnt];						\
		if ((AvgRssi < 0) && (_pAd->RxAnt.FirstPktArrivedWhenEvaluate))		\
			AvgRssi = AvgRssi - (AvgRssi >> 3) + _rssi1;					\
		else																\
		{																	\
			_pAd->RxAnt.FirstPktArrivedWhenEvaluate = TRUE;					\
			AvgRssi = _rssi1 << 3;											\
		}																	\
		_pAd->RxAnt.Pair1AvgRssi[UsedAnt] = AvgRssi;						\
		_pAd->RxAnt.RcvPktNumWhenEvaluate++;								\
	}																		\
}
#endif /* CONFIG_STA_SUPPORT */
#endif /* ANT_DIVERSITY_SUPPORT */

#define RTMP_ASIC_MMPS_DISABLE(_pAd)							\
	do{															\
		UCHAR _bbpData = 0;											\
		UINT32 _macData;											\
		/* disable MMPS BBP control register */						\
		RTMP_BBP_IO_READ8_BY_REG_ID(_pAd, BBP_R3, &_bbpData);	\
		_bbpData &= ~(0x04);										\
		RTMP_BBP_IO_WRITE8_BY_REG_ID(_pAd, BBP_R3, _bbpData);	\
																\
		/* disable MMPS MAC control register */						\
		RTMP_IO_READ32(_pAd, 0x1210, &_macData);				\
		_macData &= ~(0x09);										\
		RTMP_IO_WRITE32(_pAd, 0x1210, _macData);				\
	}while(0)


#define RTMP_ASIC_MMPS_ENABLE(_pAd)							\
	do{															\
		UCHAR _bbpData = 0;										\
		UINT32 _macData;											\
		/* enable MMPS BBP control register */						\
		RTMP_BBP_IO_READ8_BY_REG_ID(_pAd, BBP_R3, &_bbpData);	\
		_bbpData |= (0x04);								\
		RTMP_BBP_IO_WRITE8_BY_REG_ID(_pAd, BBP_R3, _bbpData);	\
																\
		/* enable MMPS MAC control register */						\
		RTMP_IO_READ32(_pAd, 0x1210, &_macData);				\
		_macData |= (0x09);										\
		RTMP_IO_WRITE32(_pAd, 0x1210, _macData);				\
	}while(0)
#endif /*  defined(RT30xx) || defined(MT7601) */


struct _RMTP_ADAPTER;

INT rtmp_bbp_set_bw(struct _RTMP_ADAPTER *pAd, INT bw);
INT rtmp_bbp_set_ctrlch(struct _RTMP_ADAPTER *pAd, INT ext_ch);
INT rtmp_bbp_set_rxpath(struct _RTMP_ADAPTER *pAd, INT rxpath);
INT rtmp_bbp_set_txdac(struct _RTMP_ADAPTER *pAd, INT tx_dac);
INT rtmp_bbp_set_mmps(struct _RTMP_ADAPTER *pAd, BOOLEAN ReduceCorePower);
INT rtmp_bbp_is_ready(struct _RTMP_ADAPTER *pAd);
INT rtmp_bbp_set_agc(struct _RTMP_ADAPTER *pAd, UCHAR agc, RX_CHAIN_IDX idx);
INT rtmp_bbp_get_agc(struct _RTMP_ADAPTER *pAd, CHAR *agc, RX_CHAIN_IDX idx);
INT rtmp_bbp_set_filter_coefficient_ctrl(struct _RTMP_ADAPTER *pAd, UCHAR Channel);
UCHAR rtmp_bbp_get_random_seed(struct _RTMP_ADAPTER *pAd);

NDIS_STATUS NICInitBBP(struct _RTMP_ADAPTER *pAd);

#endif /* __RTMP_PHY_H__ */
