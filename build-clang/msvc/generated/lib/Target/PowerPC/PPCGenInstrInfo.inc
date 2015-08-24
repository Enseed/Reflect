/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace PPC {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    STATEPOINT	= 20,
    LOCAL_ESCAPE	= 21,
    FAULTING_LOAD_OP	= 22,
    ADD4	= 23,
    ADD4TLS	= 24,
    ADD4o	= 25,
    ADD8	= 26,
    ADD8TLS	= 27,
    ADD8TLS_	= 28,
    ADD8o	= 29,
    ADDC	= 30,
    ADDC8	= 31,
    ADDC8o	= 32,
    ADDCo	= 33,
    ADDE	= 34,
    ADDE8	= 35,
    ADDE8o	= 36,
    ADDEo	= 37,
    ADDI	= 38,
    ADDI8	= 39,
    ADDIC	= 40,
    ADDIC8	= 41,
    ADDICo	= 42,
    ADDIS	= 43,
    ADDIS8	= 44,
    ADDISdtprelHA	= 45,
    ADDISdtprelHA32	= 46,
    ADDISgotTprelHA	= 47,
    ADDIStlsgdHA	= 48,
    ADDIStlsldHA	= 49,
    ADDIStocHA	= 50,
    ADDIdtprelL	= 51,
    ADDIdtprelL32	= 52,
    ADDItlsgdL	= 53,
    ADDItlsgdL32	= 54,
    ADDItlsgdLADDR	= 55,
    ADDItlsgdLADDR32	= 56,
    ADDItlsldL	= 57,
    ADDItlsldL32	= 58,
    ADDItlsldLADDR	= 59,
    ADDItlsldLADDR32	= 60,
    ADDItocL	= 61,
    ADDME	= 62,
    ADDME8	= 63,
    ADDME8o	= 64,
    ADDMEo	= 65,
    ADDZE	= 66,
    ADDZE8	= 67,
    ADDZE8o	= 68,
    ADDZEo	= 69,
    ADJCALLSTACKDOWN	= 70,
    ADJCALLSTACKUP	= 71,
    AND	= 72,
    AND8	= 73,
    AND8o	= 74,
    ANDC	= 75,
    ANDC8	= 76,
    ANDC8o	= 77,
    ANDCo	= 78,
    ANDISo	= 79,
    ANDISo8	= 80,
    ANDIo	= 81,
    ANDIo8	= 82,
    ANDIo_1_EQ_BIT	= 83,
    ANDIo_1_EQ_BIT8	= 84,
    ANDIo_1_GT_BIT	= 85,
    ANDIo_1_GT_BIT8	= 86,
    ANDo	= 87,
    ATOMIC_CMP_SWAP_I16	= 88,
    ATOMIC_CMP_SWAP_I32	= 89,
    ATOMIC_CMP_SWAP_I64	= 90,
    ATOMIC_CMP_SWAP_I8	= 91,
    ATOMIC_LOAD_ADD_I16	= 92,
    ATOMIC_LOAD_ADD_I32	= 93,
    ATOMIC_LOAD_ADD_I64	= 94,
    ATOMIC_LOAD_ADD_I8	= 95,
    ATOMIC_LOAD_AND_I16	= 96,
    ATOMIC_LOAD_AND_I32	= 97,
    ATOMIC_LOAD_AND_I64	= 98,
    ATOMIC_LOAD_AND_I8	= 99,
    ATOMIC_LOAD_NAND_I16	= 100,
    ATOMIC_LOAD_NAND_I32	= 101,
    ATOMIC_LOAD_NAND_I64	= 102,
    ATOMIC_LOAD_NAND_I8	= 103,
    ATOMIC_LOAD_OR_I16	= 104,
    ATOMIC_LOAD_OR_I32	= 105,
    ATOMIC_LOAD_OR_I64	= 106,
    ATOMIC_LOAD_OR_I8	= 107,
    ATOMIC_LOAD_SUB_I16	= 108,
    ATOMIC_LOAD_SUB_I32	= 109,
    ATOMIC_LOAD_SUB_I64	= 110,
    ATOMIC_LOAD_SUB_I8	= 111,
    ATOMIC_LOAD_XOR_I16	= 112,
    ATOMIC_LOAD_XOR_I32	= 113,
    ATOMIC_LOAD_XOR_I64	= 114,
    ATOMIC_LOAD_XOR_I8	= 115,
    ATOMIC_SWAP_I16	= 116,
    ATOMIC_SWAP_I32	= 117,
    ATOMIC_SWAP_I64	= 118,
    ATOMIC_SWAP_I8	= 119,
    ATTN	= 120,
    B	= 121,
    BA	= 122,
    BC	= 123,
    BCC	= 124,
    BCCA	= 125,
    BCCCTR	= 126,
    BCCCTR8	= 127,
    BCCCTRL	= 128,
    BCCCTRL8	= 129,
    BCCL	= 130,
    BCCLA	= 131,
    BCCLR	= 132,
    BCCLRL	= 133,
    BCCTR	= 134,
    BCCTR8	= 135,
    BCCTR8n	= 136,
    BCCTRL	= 137,
    BCCTRL8	= 138,
    BCCTRL8n	= 139,
    BCCTRLn	= 140,
    BCCTRn	= 141,
    BCL	= 142,
    BCLR	= 143,
    BCLRL	= 144,
    BCLRLn	= 145,
    BCLRn	= 146,
    BCLalways	= 147,
    BCLn	= 148,
    BCTR	= 149,
    BCTR8	= 150,
    BCTRL	= 151,
    BCTRL8	= 152,
    BCTRL8_LDinto_toc	= 153,
    BCn	= 154,
    BDNZ	= 155,
    BDNZ8	= 156,
    BDNZA	= 157,
    BDNZAm	= 158,
    BDNZAp	= 159,
    BDNZL	= 160,
    BDNZLA	= 161,
    BDNZLAm	= 162,
    BDNZLAp	= 163,
    BDNZLR	= 164,
    BDNZLR8	= 165,
    BDNZLRL	= 166,
    BDNZLRLm	= 167,
    BDNZLRLp	= 168,
    BDNZLRm	= 169,
    BDNZLRp	= 170,
    BDNZLm	= 171,
    BDNZLp	= 172,
    BDNZm	= 173,
    BDNZp	= 174,
    BDZ	= 175,
    BDZ8	= 176,
    BDZA	= 177,
    BDZAm	= 178,
    BDZAp	= 179,
    BDZL	= 180,
    BDZLA	= 181,
    BDZLAm	= 182,
    BDZLAp	= 183,
    BDZLR	= 184,
    BDZLR8	= 185,
    BDZLRL	= 186,
    BDZLRLm	= 187,
    BDZLRLp	= 188,
    BDZLRm	= 189,
    BDZLRp	= 190,
    BDZLm	= 191,
    BDZLp	= 192,
    BDZm	= 193,
    BDZp	= 194,
    BL	= 195,
    BL8	= 196,
    BL8_NOP	= 197,
    BL8_NOP_TLS	= 198,
    BL8_TLS	= 199,
    BL8_TLS_	= 200,
    BLA	= 201,
    BLA8	= 202,
    BLA8_NOP	= 203,
    BLR	= 204,
    BLR8	= 205,
    BLRL	= 206,
    BL_TLS	= 207,
    BPERMD	= 208,
    BRINC	= 209,
    CLRBHRB	= 210,
    CLRLSLDI	= 211,
    CLRLSLDIo	= 212,
    CLRLSLWI	= 213,
    CLRLSLWIo	= 214,
    CLRRDI	= 215,
    CLRRDIo	= 216,
    CLRRWI	= 217,
    CLRRWIo	= 218,
    CMPB	= 219,
    CMPB8	= 220,
    CMPD	= 221,
    CMPDI	= 222,
    CMPLD	= 223,
    CMPLDI	= 224,
    CMPLW	= 225,
    CMPLWI	= 226,
    CMPW	= 227,
    CMPWI	= 228,
    CNTLZD	= 229,
    CNTLZDo	= 230,
    CNTLZW	= 231,
    CNTLZW8	= 232,
    CNTLZW8o	= 233,
    CNTLZWo	= 234,
    CR6SET	= 235,
    CR6UNSET	= 236,
    CRAND	= 237,
    CRANDC	= 238,
    CREQV	= 239,
    CRNAND	= 240,
    CRNOR	= 241,
    CROR	= 242,
    CRORC	= 243,
    CRSET	= 244,
    CRUNSET	= 245,
    CRXOR	= 246,
    DCBA	= 247,
    DCBF	= 248,
    DCBI	= 249,
    DCBST	= 250,
    DCBT	= 251,
    DCBTCT	= 252,
    DCBTDS	= 253,
    DCBTST	= 254,
    DCBTSTCT	= 255,
    DCBTSTDS	= 256,
    DCBTSTT	= 257,
    DCBTSTx	= 258,
    DCBTT	= 259,
    DCBTx	= 260,
    DCBZ	= 261,
    DCBZL	= 262,
    DCCCI	= 263,
    DIVD	= 264,
    DIVDE	= 265,
    DIVDEU	= 266,
    DIVDEUo	= 267,
    DIVDEo	= 268,
    DIVDU	= 269,
    DIVDUo	= 270,
    DIVDo	= 271,
    DIVW	= 272,
    DIVWE	= 273,
    DIVWEU	= 274,
    DIVWEUo	= 275,
    DIVWEo	= 276,
    DIVWU	= 277,
    DIVWUo	= 278,
    DIVWo	= 279,
    DSS	= 280,
    DSSALL	= 281,
    DST	= 282,
    DST64	= 283,
    DSTST	= 284,
    DSTST64	= 285,
    DSTSTT	= 286,
    DSTSTT64	= 287,
    DSTT	= 288,
    DSTT64	= 289,
    DYNALLOC	= 290,
    DYNALLOC8	= 291,
    EH_SjLj_LongJmp32	= 292,
    EH_SjLj_LongJmp64	= 293,
    EH_SjLj_SetJmp32	= 294,
    EH_SjLj_SetJmp64	= 295,
    EH_SjLj_Setup	= 296,
    EQV	= 297,
    EQV8	= 298,
    EQV8o	= 299,
    EQVo	= 300,
    EVABS	= 301,
    EVADDIW	= 302,
    EVADDSMIAAW	= 303,
    EVADDSSIAAW	= 304,
    EVADDUMIAAW	= 305,
    EVADDUSIAAW	= 306,
    EVADDW	= 307,
    EVAND	= 308,
    EVANDC	= 309,
    EVCMPEQ	= 310,
    EVCMPGTS	= 311,
    EVCMPGTU	= 312,
    EVCMPLTS	= 313,
    EVCMPLTU	= 314,
    EVCNTLSW	= 315,
    EVCNTLZW	= 316,
    EVDIVWS	= 317,
    EVDIVWU	= 318,
    EVEQV	= 319,
    EVEXTSB	= 320,
    EVEXTSH	= 321,
    EVLDD	= 322,
    EVLDDX	= 323,
    EVLDH	= 324,
    EVLDHX	= 325,
    EVLDW	= 326,
    EVLDWX	= 327,
    EVLHHESPLAT	= 328,
    EVLHHESPLATX	= 329,
    EVLHHOSSPLAT	= 330,
    EVLHHOSSPLATX	= 331,
    EVLHHOUSPLAT	= 332,
    EVLHHOUSPLATX	= 333,
    EVLWHE	= 334,
    EVLWHEX	= 335,
    EVLWHOS	= 336,
    EVLWHOSX	= 337,
    EVLWHOU	= 338,
    EVLWHOUX	= 339,
    EVLWHSPLAT	= 340,
    EVLWHSPLATX	= 341,
    EVLWWSPLAT	= 342,
    EVLWWSPLATX	= 343,
    EVMERGEHI	= 344,
    EVMERGEHILO	= 345,
    EVMERGELO	= 346,
    EVMERGELOHI	= 347,
    EVMHEGSMFAA	= 348,
    EVMHEGSMFAN	= 349,
    EVMHEGSMIAA	= 350,
    EVMHEGSMIAN	= 351,
    EVMHEGUMIAA	= 352,
    EVMHEGUMIAN	= 353,
    EVMHESMF	= 354,
    EVMHESMFA	= 355,
    EVMHESMFAAW	= 356,
    EVMHESMFANW	= 357,
    EVMHESMI	= 358,
    EVMHESMIA	= 359,
    EVMHESMIAAW	= 360,
    EVMHESMIANW	= 361,
    EVMHESSF	= 362,
    EVMHESSFA	= 363,
    EVMHESSFAAW	= 364,
    EVMHESSFANW	= 365,
    EVMHESSIAAW	= 366,
    EVMHESSIANW	= 367,
    EVMHEUMI	= 368,
    EVMHEUMIA	= 369,
    EVMHEUMIAAW	= 370,
    EVMHEUMIANW	= 371,
    EVMHEUSIAAW	= 372,
    EVMHEUSIANW	= 373,
    EVMHOGSMFAA	= 374,
    EVMHOGSMFAN	= 375,
    EVMHOGSMIAA	= 376,
    EVMHOGSMIAN	= 377,
    EVMHOGUMIAA	= 378,
    EVMHOGUMIAN	= 379,
    EVMHOSMF	= 380,
    EVMHOSMFA	= 381,
    EVMHOSMFAAW	= 382,
    EVMHOSMFANW	= 383,
    EVMHOSMI	= 384,
    EVMHOSMIA	= 385,
    EVMHOSMIAAW	= 386,
    EVMHOSMIANW	= 387,
    EVMHOSSF	= 388,
    EVMHOSSFA	= 389,
    EVMHOSSFAAW	= 390,
    EVMHOSSFANW	= 391,
    EVMHOSSIAAW	= 392,
    EVMHOSSIANW	= 393,
    EVMHOUMI	= 394,
    EVMHOUMIA	= 395,
    EVMHOUMIAAW	= 396,
    EVMHOUMIANW	= 397,
    EVMHOUSIAAW	= 398,
    EVMHOUSIANW	= 399,
    EVMRA	= 400,
    EVMWHSMF	= 401,
    EVMWHSMFA	= 402,
    EVMWHSMI	= 403,
    EVMWHSMIA	= 404,
    EVMWHSSF	= 405,
    EVMWHSSFA	= 406,
    EVMWHUMI	= 407,
    EVMWHUMIA	= 408,
    EVMWLSMIAAW	= 409,
    EVMWLSMIANW	= 410,
    EVMWLSSIAAW	= 411,
    EVMWLSSIANW	= 412,
    EVMWLUMI	= 413,
    EVMWLUMIA	= 414,
    EVMWLUMIAAW	= 415,
    EVMWLUMIANW	= 416,
    EVMWLUSIAAW	= 417,
    EVMWLUSIANW	= 418,
    EVMWSMF	= 419,
    EVMWSMFA	= 420,
    EVMWSMFAA	= 421,
    EVMWSMFAN	= 422,
    EVMWSMI	= 423,
    EVMWSMIA	= 424,
    EVMWSMIAA	= 425,
    EVMWSMIAN	= 426,
    EVMWSSF	= 427,
    EVMWSSFA	= 428,
    EVMWSSFAA	= 429,
    EVMWSSFAN	= 430,
    EVMWUMI	= 431,
    EVMWUMIA	= 432,
    EVMWUMIAA	= 433,
    EVMWUMIAN	= 434,
    EVNAND	= 435,
    EVNEG	= 436,
    EVNOR	= 437,
    EVOR	= 438,
    EVORC	= 439,
    EVRLW	= 440,
    EVRLWI	= 441,
    EVRNDW	= 442,
    EVSLW	= 443,
    EVSLWI	= 444,
    EVSPLATFI	= 445,
    EVSPLATI	= 446,
    EVSRWIS	= 447,
    EVSRWIU	= 448,
    EVSRWS	= 449,
    EVSRWU	= 450,
    EVSTDD	= 451,
    EVSTDDX	= 452,
    EVSTDH	= 453,
    EVSTDHX	= 454,
    EVSTDW	= 455,
    EVSTDWX	= 456,
    EVSTWHE	= 457,
    EVSTWHEX	= 458,
    EVSTWHO	= 459,
    EVSTWHOX	= 460,
    EVSTWWE	= 461,
    EVSTWWEX	= 462,
    EVSTWWO	= 463,
    EVSTWWOX	= 464,
    EVSUBFSMIAAW	= 465,
    EVSUBFSSIAAW	= 466,
    EVSUBFUMIAAW	= 467,
    EVSUBFUSIAAW	= 468,
    EVSUBFW	= 469,
    EVSUBIFW	= 470,
    EVXOR	= 471,
    EXTLDI	= 472,
    EXTLDIo	= 473,
    EXTLWI	= 474,
    EXTLWIo	= 475,
    EXTRDI	= 476,
    EXTRDIo	= 477,
    EXTRWI	= 478,
    EXTRWIo	= 479,
    EXTSB	= 480,
    EXTSB8	= 481,
    EXTSB8_32_64	= 482,
    EXTSB8o	= 483,
    EXTSBo	= 484,
    EXTSH	= 485,
    EXTSH8	= 486,
    EXTSH8_32_64	= 487,
    EXTSH8o	= 488,
    EXTSHo	= 489,
    EXTSW	= 490,
    EXTSW_32_64	= 491,
    EXTSW_32_64o	= 492,
    EXTSWo	= 493,
    EnforceIEIO	= 494,
    FABSD	= 495,
    FABSDo	= 496,
    FABSS	= 497,
    FABSSo	= 498,
    FADD	= 499,
    FADDS	= 500,
    FADDSo	= 501,
    FADDo	= 502,
    FADDrtz	= 503,
    FCFID	= 504,
    FCFIDS	= 505,
    FCFIDSo	= 506,
    FCFIDU	= 507,
    FCFIDUS	= 508,
    FCFIDUSo	= 509,
    FCFIDUo	= 510,
    FCFIDo	= 511,
    FCMPUD	= 512,
    FCMPUS	= 513,
    FCPSGND	= 514,
    FCPSGNDo	= 515,
    FCPSGNS	= 516,
    FCPSGNSo	= 517,
    FCTID	= 518,
    FCTIDUZ	= 519,
    FCTIDUZo	= 520,
    FCTIDZ	= 521,
    FCTIDZo	= 522,
    FCTIDo	= 523,
    FCTIW	= 524,
    FCTIWUZ	= 525,
    FCTIWUZo	= 526,
    FCTIWZ	= 527,
    FCTIWZo	= 528,
    FCTIWo	= 529,
    FDIV	= 530,
    FDIVS	= 531,
    FDIVSo	= 532,
    FDIVo	= 533,
    FMADD	= 534,
    FMADDS	= 535,
    FMADDSo	= 536,
    FMADDo	= 537,
    FMR	= 538,
    FMRo	= 539,
    FMSUB	= 540,
    FMSUBS	= 541,
    FMSUBSo	= 542,
    FMSUBo	= 543,
    FMUL	= 544,
    FMULS	= 545,
    FMULSo	= 546,
    FMULo	= 547,
    FNABSD	= 548,
    FNABSDo	= 549,
    FNABSS	= 550,
    FNABSSo	= 551,
    FNEGD	= 552,
    FNEGDo	= 553,
    FNEGS	= 554,
    FNEGSo	= 555,
    FNMADD	= 556,
    FNMADDS	= 557,
    FNMADDSo	= 558,
    FNMADDo	= 559,
    FNMSUB	= 560,
    FNMSUBS	= 561,
    FNMSUBSo	= 562,
    FNMSUBo	= 563,
    FRE	= 564,
    FRES	= 565,
    FRESo	= 566,
    FREo	= 567,
    FRIMD	= 568,
    FRIMDo	= 569,
    FRIMS	= 570,
    FRIMSo	= 571,
    FRIND	= 572,
    FRINDo	= 573,
    FRINS	= 574,
    FRINSo	= 575,
    FRIPD	= 576,
    FRIPDo	= 577,
    FRIPS	= 578,
    FRIPSo	= 579,
    FRIZD	= 580,
    FRIZDo	= 581,
    FRIZS	= 582,
    FRIZSo	= 583,
    FRSP	= 584,
    FRSPo	= 585,
    FRSQRTE	= 586,
    FRSQRTES	= 587,
    FRSQRTESo	= 588,
    FRSQRTEo	= 589,
    FSELD	= 590,
    FSELDo	= 591,
    FSELS	= 592,
    FSELSo	= 593,
    FSQRT	= 594,
    FSQRTS	= 595,
    FSQRTSo	= 596,
    FSQRTo	= 597,
    FSUB	= 598,
    FSUBS	= 599,
    FSUBSo	= 600,
    FSUBo	= 601,
    GETtlsADDR	= 602,
    GETtlsADDR32	= 603,
    GETtlsldADDR	= 604,
    GETtlsldADDR32	= 605,
    ICBI	= 606,
    ICBT	= 607,
    ICCCI	= 608,
    INSLWI	= 609,
    INSLWIo	= 610,
    INSRDI	= 611,
    INSRDIo	= 612,
    INSRWI	= 613,
    INSRWIo	= 614,
    ISEL	= 615,
    ISEL8	= 616,
    ISYNC	= 617,
    LA	= 618,
    LAx	= 619,
    LBARX	= 620,
    LBARXL	= 621,
    LBZ	= 622,
    LBZ8	= 623,
    LBZCIX	= 624,
    LBZU	= 625,
    LBZU8	= 626,
    LBZUX	= 627,
    LBZUX8	= 628,
    LBZX	= 629,
    LBZX8	= 630,
    LD	= 631,
    LDARX	= 632,
    LDARXL	= 633,
    LDBRX	= 634,
    LDCIX	= 635,
    LDU	= 636,
    LDUX	= 637,
    LDX	= 638,
    LDgotTprelL	= 639,
    LDgotTprelL32	= 640,
    LDtoc	= 641,
    LDtocBA	= 642,
    LDtocCPT	= 643,
    LDtocJTI	= 644,
    LDtocL	= 645,
    LFD	= 646,
    LFDU	= 647,
    LFDUX	= 648,
    LFDX	= 649,
    LFIWAX	= 650,
    LFIWZX	= 651,
    LFS	= 652,
    LFSU	= 653,
    LFSUX	= 654,
    LFSX	= 655,
    LHA	= 656,
    LHA8	= 657,
    LHARX	= 658,
    LHARXL	= 659,
    LHAU	= 660,
    LHAU8	= 661,
    LHAUX	= 662,
    LHAUX8	= 663,
    LHAX	= 664,
    LHAX8	= 665,
    LHBRX	= 666,
    LHBRX8	= 667,
    LHZ	= 668,
    LHZ8	= 669,
    LHZCIX	= 670,
    LHZU	= 671,
    LHZU8	= 672,
    LHZUX	= 673,
    LHZUX8	= 674,
    LHZX	= 675,
    LHZX8	= 676,
    LI	= 677,
    LI8	= 678,
    LIS	= 679,
    LIS8	= 680,
    LMW	= 681,
    LSWI	= 682,
    LVEBX	= 683,
    LVEHX	= 684,
    LVEWX	= 685,
    LVSL	= 686,
    LVSR	= 687,
    LVX	= 688,
    LVXL	= 689,
    LWA	= 690,
    LWARX	= 691,
    LWARXL	= 692,
    LWAUX	= 693,
    LWAX	= 694,
    LWAX_32	= 695,
    LWA_32	= 696,
    LWBRX	= 697,
    LWBRX8	= 698,
    LWZ	= 699,
    LWZ8	= 700,
    LWZCIX	= 701,
    LWZU	= 702,
    LWZU8	= 703,
    LWZUX	= 704,
    LWZUX8	= 705,
    LWZX	= 706,
    LWZX8	= 707,
    LWZtoc	= 708,
    LXSDX	= 709,
    LXSIWAX	= 710,
    LXSIWZX	= 711,
    LXSSPX	= 712,
    LXVD2X	= 713,
    LXVDSX	= 714,
    LXVW4X	= 715,
    MBAR	= 716,
    MCRF	= 717,
    MCRFS	= 718,
    MFBHRBE	= 719,
    MFCR	= 720,
    MFCR8	= 721,
    MFCTR	= 722,
    MFCTR8	= 723,
    MFDCR	= 724,
    MFFS	= 725,
    MFFSo	= 726,
    MFLR	= 727,
    MFLR8	= 728,
    MFMSR	= 729,
    MFOCRF	= 730,
    MFOCRF8	= 731,
    MFSPR	= 732,
    MFSPR8	= 733,
    MFSR	= 734,
    MFSRIN	= 735,
    MFTB	= 736,
    MFTB8	= 737,
    MFVRSAVE	= 738,
    MFVRSAVEv	= 739,
    MFVSCR	= 740,
    MFVSRD	= 741,
    MFVSRWZ	= 742,
    MSYNC	= 743,
    MTCRF	= 744,
    MTCRF8	= 745,
    MTCTR	= 746,
    MTCTR8	= 747,
    MTCTR8loop	= 748,
    MTCTRloop	= 749,
    MTDCR	= 750,
    MTFSB0	= 751,
    MTFSB1	= 752,
    MTFSF	= 753,
    MTFSFI	= 754,
    MTFSFIo	= 755,
    MTFSFb	= 756,
    MTFSFo	= 757,
    MTLR	= 758,
    MTLR8	= 759,
    MTMSR	= 760,
    MTMSRD	= 761,
    MTOCRF	= 762,
    MTOCRF8	= 763,
    MTSPR	= 764,
    MTSPR8	= 765,
    MTSR	= 766,
    MTSRIN	= 767,
    MTVRSAVE	= 768,
    MTVRSAVEv	= 769,
    MTVSCR	= 770,
    MTVSRD	= 771,
    MTVSRWA	= 772,
    MTVSRWZ	= 773,
    MULHD	= 774,
    MULHDU	= 775,
    MULHDUo	= 776,
    MULHDo	= 777,
    MULHW	= 778,
    MULHWU	= 779,
    MULHWUo	= 780,
    MULHWo	= 781,
    MULLD	= 782,
    MULLDo	= 783,
    MULLI	= 784,
    MULLI8	= 785,
    MULLW	= 786,
    MULLWo	= 787,
    MoveGOTtoLR	= 788,
    MovePCtoLR	= 789,
    MovePCtoLR8	= 790,
    NAND	= 791,
    NAND8	= 792,
    NAND8o	= 793,
    NANDo	= 794,
    NEG	= 795,
    NEG8	= 796,
    NEG8o	= 797,
    NEGo	= 798,
    NOP	= 799,
    NOP_GT_PWR6	= 800,
    NOP_GT_PWR7	= 801,
    NOR	= 802,
    NOR8	= 803,
    NOR8o	= 804,
    NORo	= 805,
    OR	= 806,
    OR8	= 807,
    OR8o	= 808,
    ORC	= 809,
    ORC8	= 810,
    ORC8o	= 811,
    ORCo	= 812,
    ORI	= 813,
    ORI8	= 814,
    ORIS	= 815,
    ORIS8	= 816,
    ORo	= 817,
    POPCNTD	= 818,
    POPCNTW	= 819,
    PPC32GOT	= 820,
    PPC32PICGOT	= 821,
    QVALIGNI	= 822,
    QVALIGNIb	= 823,
    QVALIGNIs	= 824,
    QVESPLATI	= 825,
    QVESPLATIb	= 826,
    QVESPLATIs	= 827,
    QVFABS	= 828,
    QVFABSs	= 829,
    QVFADD	= 830,
    QVFADDS	= 831,
    QVFADDSs	= 832,
    QVFCFID	= 833,
    QVFCFIDS	= 834,
    QVFCFIDU	= 835,
    QVFCFIDUS	= 836,
    QVFCFIDb	= 837,
    QVFCMPEQ	= 838,
    QVFCMPEQb	= 839,
    QVFCMPEQbs	= 840,
    QVFCMPGT	= 841,
    QVFCMPGTb	= 842,
    QVFCMPGTbs	= 843,
    QVFCMPLT	= 844,
    QVFCMPLTb	= 845,
    QVFCMPLTbs	= 846,
    QVFCPSGN	= 847,
    QVFCPSGNs	= 848,
    QVFCTID	= 849,
    QVFCTIDU	= 850,
    QVFCTIDUZ	= 851,
    QVFCTIDZ	= 852,
    QVFCTIDb	= 853,
    QVFCTIW	= 854,
    QVFCTIWU	= 855,
    QVFCTIWUZ	= 856,
    QVFCTIWZ	= 857,
    QVFLOGICAL	= 858,
    QVFLOGICALb	= 859,
    QVFLOGICALs	= 860,
    QVFMADD	= 861,
    QVFMADDS	= 862,
    QVFMADDSs	= 863,
    QVFMR	= 864,
    QVFMRb	= 865,
    QVFMRs	= 866,
    QVFMSUB	= 867,
    QVFMSUBS	= 868,
    QVFMSUBSs	= 869,
    QVFMUL	= 870,
    QVFMULS	= 871,
    QVFMULSs	= 872,
    QVFNABS	= 873,
    QVFNABSs	= 874,
    QVFNEG	= 875,
    QVFNEGs	= 876,
    QVFNMADD	= 877,
    QVFNMADDS	= 878,
    QVFNMADDSs	= 879,
    QVFNMSUB	= 880,
    QVFNMSUBS	= 881,
    QVFNMSUBSs	= 882,
    QVFPERM	= 883,
    QVFPERMs	= 884,
    QVFRE	= 885,
    QVFRES	= 886,
    QVFRESs	= 887,
    QVFRIM	= 888,
    QVFRIMs	= 889,
    QVFRIN	= 890,
    QVFRINs	= 891,
    QVFRIP	= 892,
    QVFRIPs	= 893,
    QVFRIZ	= 894,
    QVFRIZs	= 895,
    QVFRSP	= 896,
    QVFRSPs	= 897,
    QVFRSQRTE	= 898,
    QVFRSQRTES	= 899,
    QVFRSQRTESs	= 900,
    QVFSEL	= 901,
    QVFSELb	= 902,
    QVFSELbb	= 903,
    QVFSELbs	= 904,
    QVFSUB	= 905,
    QVFSUBS	= 906,
    QVFSUBSs	= 907,
    QVFTSTNAN	= 908,
    QVFTSTNANb	= 909,
    QVFTSTNANbs	= 910,
    QVFXMADD	= 911,
    QVFXMADDS	= 912,
    QVFXMUL	= 913,
    QVFXMULS	= 914,
    QVFXXCPNMADD	= 915,
    QVFXXCPNMADDS	= 916,
    QVFXXMADD	= 917,
    QVFXXMADDS	= 918,
    QVFXXNPMADD	= 919,
    QVFXXNPMADDS	= 920,
    QVGPCI	= 921,
    QVLFCDUX	= 922,
    QVLFCDUXA	= 923,
    QVLFCDX	= 924,
    QVLFCDXA	= 925,
    QVLFCSUX	= 926,
    QVLFCSUXA	= 927,
    QVLFCSX	= 928,
    QVLFCSXA	= 929,
    QVLFCSXs	= 930,
    QVLFDUX	= 931,
    QVLFDUXA	= 932,
    QVLFDX	= 933,
    QVLFDXA	= 934,
    QVLFDXb	= 935,
    QVLFIWAX	= 936,
    QVLFIWAXA	= 937,
    QVLFIWZX	= 938,
    QVLFIWZXA	= 939,
    QVLFSUX	= 940,
    QVLFSUXA	= 941,
    QVLFSX	= 942,
    QVLFSXA	= 943,
    QVLFSXb	= 944,
    QVLFSXs	= 945,
    QVLPCLDX	= 946,
    QVLPCLSX	= 947,
    QVLPCLSXint	= 948,
    QVLPCRDX	= 949,
    QVLPCRSX	= 950,
    QVSTFCDUX	= 951,
    QVSTFCDUXA	= 952,
    QVSTFCDUXI	= 953,
    QVSTFCDUXIA	= 954,
    QVSTFCDX	= 955,
    QVSTFCDXA	= 956,
    QVSTFCDXI	= 957,
    QVSTFCDXIA	= 958,
    QVSTFCSUX	= 959,
    QVSTFCSUXA	= 960,
    QVSTFCSUXI	= 961,
    QVSTFCSUXIA	= 962,
    QVSTFCSX	= 963,
    QVSTFCSXA	= 964,
    QVSTFCSXI	= 965,
    QVSTFCSXIA	= 966,
    QVSTFCSXs	= 967,
    QVSTFDUX	= 968,
    QVSTFDUXA	= 969,
    QVSTFDUXI	= 970,
    QVSTFDUXIA	= 971,
    QVSTFDX	= 972,
    QVSTFDXA	= 973,
    QVSTFDXI	= 974,
    QVSTFDXIA	= 975,
    QVSTFDXb	= 976,
    QVSTFIWX	= 977,
    QVSTFIWXA	= 978,
    QVSTFSUX	= 979,
    QVSTFSUXA	= 980,
    QVSTFSUXI	= 981,
    QVSTFSUXIA	= 982,
    QVSTFSUXs	= 983,
    QVSTFSX	= 984,
    QVSTFSXA	= 985,
    QVSTFSXI	= 986,
    QVSTFSXIA	= 987,
    QVSTFSXs	= 988,
    RESTORE_CR	= 989,
    RESTORE_CRBIT	= 990,
    RESTORE_VRSAVE	= 991,
    RFCI	= 992,
    RFDI	= 993,
    RFEBB	= 994,
    RFI	= 995,
    RFID	= 996,
    RFMCI	= 997,
    RLDCL	= 998,
    RLDCLo	= 999,
    RLDCR	= 1000,
    RLDCRo	= 1001,
    RLDIC	= 1002,
    RLDICL	= 1003,
    RLDICL_32_64	= 1004,
    RLDICLo	= 1005,
    RLDICR	= 1006,
    RLDICRo	= 1007,
    RLDICo	= 1008,
    RLDIMI	= 1009,
    RLDIMIo	= 1010,
    RLWIMI	= 1011,
    RLWIMI8	= 1012,
    RLWIMI8o	= 1013,
    RLWIMIbm	= 1014,
    RLWIMIo	= 1015,
    RLWIMIobm	= 1016,
    RLWINM	= 1017,
    RLWINM8	= 1018,
    RLWINM8o	= 1019,
    RLWINMbm	= 1020,
    RLWINMo	= 1021,
    RLWINMobm	= 1022,
    RLWNM	= 1023,
    RLWNM8	= 1024,
    RLWNM8o	= 1025,
    RLWNMbm	= 1026,
    RLWNMo	= 1027,
    RLWNMobm	= 1028,
    ROTRDI	= 1029,
    ROTRDIo	= 1030,
    ROTRWI	= 1031,
    ROTRWIo	= 1032,
    ReadTB	= 1033,
    SC	= 1034,
    SELECT_CC_F4	= 1035,
    SELECT_CC_F8	= 1036,
    SELECT_CC_I4	= 1037,
    SELECT_CC_I8	= 1038,
    SELECT_CC_QBRC	= 1039,
    SELECT_CC_QFRC	= 1040,
    SELECT_CC_QSRC	= 1041,
    SELECT_CC_VRRC	= 1042,
    SELECT_CC_VSFRC	= 1043,
    SELECT_CC_VSRC	= 1044,
    SELECT_CC_VSSRC	= 1045,
    SELECT_F4	= 1046,
    SELECT_F8	= 1047,
    SELECT_I4	= 1048,
    SELECT_I8	= 1049,
    SELECT_QBRC	= 1050,
    SELECT_QFRC	= 1051,
    SELECT_QSRC	= 1052,
    SELECT_VRRC	= 1053,
    SELECT_VSFRC	= 1054,
    SELECT_VSRC	= 1055,
    SELECT_VSSRC	= 1056,
    SLBIA	= 1057,
    SLBIE	= 1058,
    SLBMFEE	= 1059,
    SLBMTE	= 1060,
    SLD	= 1061,
    SLDI	= 1062,
    SLDIo	= 1063,
    SLDo	= 1064,
    SLW	= 1065,
    SLW8	= 1066,
    SLW8o	= 1067,
    SLWI	= 1068,
    SLWIo	= 1069,
    SLWo	= 1070,
    SPILL_CR	= 1071,
    SPILL_CRBIT	= 1072,
    SPILL_VRSAVE	= 1073,
    SRAD	= 1074,
    SRADI	= 1075,
    SRADIo	= 1076,
    SRADo	= 1077,
    SRAW	= 1078,
    SRAWI	= 1079,
    SRAWIo	= 1080,
    SRAWo	= 1081,
    SRD	= 1082,
    SRDI	= 1083,
    SRDIo	= 1084,
    SRDo	= 1085,
    SRW	= 1086,
    SRW8	= 1087,
    SRW8o	= 1088,
    SRWI	= 1089,
    SRWIo	= 1090,
    SRWo	= 1091,
    STB	= 1092,
    STB8	= 1093,
    STBCIX	= 1094,
    STBCX	= 1095,
    STBU	= 1096,
    STBU8	= 1097,
    STBUX	= 1098,
    STBUX8	= 1099,
    STBX	= 1100,
    STBX8	= 1101,
    STD	= 1102,
    STDBRX	= 1103,
    STDCIX	= 1104,
    STDCX	= 1105,
    STDU	= 1106,
    STDUX	= 1107,
    STDX	= 1108,
    STFD	= 1109,
    STFDU	= 1110,
    STFDUX	= 1111,
    STFDX	= 1112,
    STFIWX	= 1113,
    STFS	= 1114,
    STFSU	= 1115,
    STFSUX	= 1116,
    STFSX	= 1117,
    STH	= 1118,
    STH8	= 1119,
    STHBRX	= 1120,
    STHCIX	= 1121,
    STHCX	= 1122,
    STHU	= 1123,
    STHU8	= 1124,
    STHUX	= 1125,
    STHUX8	= 1126,
    STHX	= 1127,
    STHX8	= 1128,
    STMW	= 1129,
    STSWI	= 1130,
    STVEBX	= 1131,
    STVEHX	= 1132,
    STVEWX	= 1133,
    STVX	= 1134,
    STVXL	= 1135,
    STW	= 1136,
    STW8	= 1137,
    STWBRX	= 1138,
    STWCIX	= 1139,
    STWCX	= 1140,
    STWU	= 1141,
    STWU8	= 1142,
    STWUX	= 1143,
    STWUX8	= 1144,
    STWX	= 1145,
    STWX8	= 1146,
    STXSDX	= 1147,
    STXSIWX	= 1148,
    STXSSPX	= 1149,
    STXVD2X	= 1150,
    STXVW4X	= 1151,
    SUBF	= 1152,
    SUBF8	= 1153,
    SUBF8o	= 1154,
    SUBFC	= 1155,
    SUBFC8	= 1156,
    SUBFC8o	= 1157,
    SUBFCo	= 1158,
    SUBFE	= 1159,
    SUBFE8	= 1160,
    SUBFE8o	= 1161,
    SUBFEo	= 1162,
    SUBFIC	= 1163,
    SUBFIC8	= 1164,
    SUBFME	= 1165,
    SUBFME8	= 1166,
    SUBFME8o	= 1167,
    SUBFMEo	= 1168,
    SUBFZE	= 1169,
    SUBFZE8	= 1170,
    SUBFZE8o	= 1171,
    SUBFZEo	= 1172,
    SUBFo	= 1173,
    SUBI	= 1174,
    SUBIC	= 1175,
    SUBICo	= 1176,
    SUBIS	= 1177,
    SYNC	= 1178,
    TABORT	= 1179,
    TABORTDC	= 1180,
    TABORTDCI	= 1181,
    TABORTWC	= 1182,
    TABORTWCI	= 1183,
    TAILB	= 1184,
    TAILB8	= 1185,
    TAILBA	= 1186,
    TAILBA8	= 1187,
    TAILBCTR	= 1188,
    TAILBCTR8	= 1189,
    TBEGIN	= 1190,
    TCHECK	= 1191,
    TCHECK_RET	= 1192,
    TCRETURNai	= 1193,
    TCRETURNai8	= 1194,
    TCRETURNdi	= 1195,
    TCRETURNdi8	= 1196,
    TCRETURNri	= 1197,
    TCRETURNri8	= 1198,
    TD	= 1199,
    TDI	= 1200,
    TEND	= 1201,
    TLBIA	= 1202,
    TLBIE	= 1203,
    TLBIEL	= 1204,
    TLBIVAX	= 1205,
    TLBLD	= 1206,
    TLBLI	= 1207,
    TLBRE	= 1208,
    TLBRE2	= 1209,
    TLBSX	= 1210,
    TLBSX2	= 1211,
    TLBSX2D	= 1212,
    TLBSYNC	= 1213,
    TLBWE	= 1214,
    TLBWE2	= 1215,
    TRAP	= 1216,
    TRECHKPT	= 1217,
    TRECLAIM	= 1218,
    TSR	= 1219,
    TW	= 1220,
    TWI	= 1221,
    UPDATE_VRSAVE	= 1222,
    UpdateGBR	= 1223,
    VADDCUQ	= 1224,
    VADDCUW	= 1225,
    VADDECUQ	= 1226,
    VADDEUQM	= 1227,
    VADDFP	= 1228,
    VADDSBS	= 1229,
    VADDSHS	= 1230,
    VADDSWS	= 1231,
    VADDUBM	= 1232,
    VADDUBS	= 1233,
    VADDUDM	= 1234,
    VADDUHM	= 1235,
    VADDUHS	= 1236,
    VADDUQM	= 1237,
    VADDUWM	= 1238,
    VADDUWS	= 1239,
    VAND	= 1240,
    VANDC	= 1241,
    VAVGSB	= 1242,
    VAVGSH	= 1243,
    VAVGSW	= 1244,
    VAVGUB	= 1245,
    VAVGUH	= 1246,
    VAVGUW	= 1247,
    VBPERMQ	= 1248,
    VCFSX	= 1249,
    VCFSX_0	= 1250,
    VCFUX	= 1251,
    VCFUX_0	= 1252,
    VCIPHER	= 1253,
    VCIPHERLAST	= 1254,
    VCLZB	= 1255,
    VCLZD	= 1256,
    VCLZH	= 1257,
    VCLZW	= 1258,
    VCMPBFP	= 1259,
    VCMPBFPo	= 1260,
    VCMPEQFP	= 1261,
    VCMPEQFPo	= 1262,
    VCMPEQUB	= 1263,
    VCMPEQUBo	= 1264,
    VCMPEQUD	= 1265,
    VCMPEQUDo	= 1266,
    VCMPEQUH	= 1267,
    VCMPEQUHo	= 1268,
    VCMPEQUW	= 1269,
    VCMPEQUWo	= 1270,
    VCMPGEFP	= 1271,
    VCMPGEFPo	= 1272,
    VCMPGTFP	= 1273,
    VCMPGTFPo	= 1274,
    VCMPGTSB	= 1275,
    VCMPGTSBo	= 1276,
    VCMPGTSD	= 1277,
    VCMPGTSDo	= 1278,
    VCMPGTSH	= 1279,
    VCMPGTSHo	= 1280,
    VCMPGTSW	= 1281,
    VCMPGTSWo	= 1282,
    VCMPGTUB	= 1283,
    VCMPGTUBo	= 1284,
    VCMPGTUD	= 1285,
    VCMPGTUDo	= 1286,
    VCMPGTUH	= 1287,
    VCMPGTUHo	= 1288,
    VCMPGTUW	= 1289,
    VCMPGTUWo	= 1290,
    VCTSXS	= 1291,
    VCTSXS_0	= 1292,
    VCTUXS	= 1293,
    VCTUXS_0	= 1294,
    VEQV	= 1295,
    VEXPTEFP	= 1296,
    VGBBD	= 1297,
    VLOGEFP	= 1298,
    VMADDFP	= 1299,
    VMAXFP	= 1300,
    VMAXSB	= 1301,
    VMAXSD	= 1302,
    VMAXSH	= 1303,
    VMAXSW	= 1304,
    VMAXUB	= 1305,
    VMAXUD	= 1306,
    VMAXUH	= 1307,
    VMAXUW	= 1308,
    VMHADDSHS	= 1309,
    VMHRADDSHS	= 1310,
    VMINFP	= 1311,
    VMINSB	= 1312,
    VMINSD	= 1313,
    VMINSH	= 1314,
    VMINSW	= 1315,
    VMINUB	= 1316,
    VMINUD	= 1317,
    VMINUH	= 1318,
    VMINUW	= 1319,
    VMLADDUHM	= 1320,
    VMRGEW	= 1321,
    VMRGHB	= 1322,
    VMRGHH	= 1323,
    VMRGHW	= 1324,
    VMRGLB	= 1325,
    VMRGLH	= 1326,
    VMRGLW	= 1327,
    VMRGOW	= 1328,
    VMSUMMBM	= 1329,
    VMSUMSHM	= 1330,
    VMSUMSHS	= 1331,
    VMSUMUBM	= 1332,
    VMSUMUHM	= 1333,
    VMSUMUHS	= 1334,
    VMULESB	= 1335,
    VMULESH	= 1336,
    VMULESW	= 1337,
    VMULEUB	= 1338,
    VMULEUH	= 1339,
    VMULEUW	= 1340,
    VMULOSB	= 1341,
    VMULOSH	= 1342,
    VMULOSW	= 1343,
    VMULOUB	= 1344,
    VMULOUH	= 1345,
    VMULOUW	= 1346,
    VMULUWM	= 1347,
    VNAND	= 1348,
    VNCIPHER	= 1349,
    VNCIPHERLAST	= 1350,
    VNMSUBFP	= 1351,
    VNOR	= 1352,
    VOR	= 1353,
    VORC	= 1354,
    VPERM	= 1355,
    VPERMXOR	= 1356,
    VPKPX	= 1357,
    VPKSDSS	= 1358,
    VPKSDUS	= 1359,
    VPKSHSS	= 1360,
    VPKSHUS	= 1361,
    VPKSWSS	= 1362,
    VPKSWUS	= 1363,
    VPKUDUM	= 1364,
    VPKUDUS	= 1365,
    VPKUHUM	= 1366,
    VPKUHUS	= 1367,
    VPKUWUM	= 1368,
    VPKUWUS	= 1369,
    VPMSUMB	= 1370,
    VPMSUMD	= 1371,
    VPMSUMH	= 1372,
    VPMSUMW	= 1373,
    VPOPCNTB	= 1374,
    VPOPCNTD	= 1375,
    VPOPCNTH	= 1376,
    VPOPCNTW	= 1377,
    VREFP	= 1378,
    VRFIM	= 1379,
    VRFIN	= 1380,
    VRFIP	= 1381,
    VRFIZ	= 1382,
    VRLB	= 1383,
    VRLD	= 1384,
    VRLH	= 1385,
    VRLW	= 1386,
    VRSQRTEFP	= 1387,
    VSBOX	= 1388,
    VSEL	= 1389,
    VSHASIGMAD	= 1390,
    VSHASIGMAW	= 1391,
    VSL	= 1392,
    VSLB	= 1393,
    VSLD	= 1394,
    VSLDOI	= 1395,
    VSLH	= 1396,
    VSLO	= 1397,
    VSLW	= 1398,
    VSPLTB	= 1399,
    VSPLTH	= 1400,
    VSPLTISB	= 1401,
    VSPLTISH	= 1402,
    VSPLTISW	= 1403,
    VSPLTW	= 1404,
    VSR	= 1405,
    VSRAB	= 1406,
    VSRAD	= 1407,
    VSRAH	= 1408,
    VSRAW	= 1409,
    VSRB	= 1410,
    VSRD	= 1411,
    VSRH	= 1412,
    VSRO	= 1413,
    VSRW	= 1414,
    VSUBCUQ	= 1415,
    VSUBCUW	= 1416,
    VSUBECUQ	= 1417,
    VSUBEUQM	= 1418,
    VSUBFP	= 1419,
    VSUBSBS	= 1420,
    VSUBSHS	= 1421,
    VSUBSWS	= 1422,
    VSUBUBM	= 1423,
    VSUBUBS	= 1424,
    VSUBUDM	= 1425,
    VSUBUHM	= 1426,
    VSUBUHS	= 1427,
    VSUBUQM	= 1428,
    VSUBUWM	= 1429,
    VSUBUWS	= 1430,
    VSUM2SWS	= 1431,
    VSUM4SBS	= 1432,
    VSUM4SHS	= 1433,
    VSUM4UBS	= 1434,
    VSUMSWS	= 1435,
    VUPKHPX	= 1436,
    VUPKHSB	= 1437,
    VUPKHSH	= 1438,
    VUPKHSW	= 1439,
    VUPKLPX	= 1440,
    VUPKLSB	= 1441,
    VUPKLSH	= 1442,
    VUPKLSW	= 1443,
    VXOR	= 1444,
    V_SET0	= 1445,
    V_SET0B	= 1446,
    V_SET0H	= 1447,
    V_SETALLONES	= 1448,
    V_SETALLONESB	= 1449,
    V_SETALLONESH	= 1450,
    WAIT	= 1451,
    WRTEE	= 1452,
    WRTEEI	= 1453,
    XOR	= 1454,
    XOR8	= 1455,
    XOR8o	= 1456,
    XORI	= 1457,
    XORI8	= 1458,
    XORIS	= 1459,
    XORIS8	= 1460,
    XORo	= 1461,
    XSABSDP	= 1462,
    XSADDDP	= 1463,
    XSADDSP	= 1464,
    XSCMPODP	= 1465,
    XSCMPUDP	= 1466,
    XSCPSGNDP	= 1467,
    XSCVDPSP	= 1468,
    XSCVDPSPN	= 1469,
    XSCVDPSXDS	= 1470,
    XSCVDPSXWS	= 1471,
    XSCVDPUXDS	= 1472,
    XSCVDPUXWS	= 1473,
    XSCVSPDP	= 1474,
    XSCVSPDPN	= 1475,
    XSCVSXDDP	= 1476,
    XSCVSXDSP	= 1477,
    XSCVUXDDP	= 1478,
    XSCVUXDSP	= 1479,
    XSDIVDP	= 1480,
    XSDIVSP	= 1481,
    XSMADDADP	= 1482,
    XSMADDASP	= 1483,
    XSMADDMDP	= 1484,
    XSMADDMSP	= 1485,
    XSMAXDP	= 1486,
    XSMINDP	= 1487,
    XSMSUBADP	= 1488,
    XSMSUBASP	= 1489,
    XSMSUBMDP	= 1490,
    XSMSUBMSP	= 1491,
    XSMULDP	= 1492,
    XSMULSP	= 1493,
    XSNABSDP	= 1494,
    XSNEGDP	= 1495,
    XSNMADDADP	= 1496,
    XSNMADDASP	= 1497,
    XSNMADDMDP	= 1498,
    XSNMADDMSP	= 1499,
    XSNMSUBADP	= 1500,
    XSNMSUBASP	= 1501,
    XSNMSUBMDP	= 1502,
    XSNMSUBMSP	= 1503,
    XSRDPI	= 1504,
    XSRDPIC	= 1505,
    XSRDPIM	= 1506,
    XSRDPIP	= 1507,
    XSRDPIZ	= 1508,
    XSREDP	= 1509,
    XSRESP	= 1510,
    XSRSQRTEDP	= 1511,
    XSRSQRTESP	= 1512,
    XSSQRTDP	= 1513,
    XSSQRTSP	= 1514,
    XSSUBDP	= 1515,
    XSSUBSP	= 1516,
    XSTDIVDP	= 1517,
    XSTSQRTDP	= 1518,
    XVABSDP	= 1519,
    XVABSSP	= 1520,
    XVADDDP	= 1521,
    XVADDSP	= 1522,
    XVCMPEQDP	= 1523,
    XVCMPEQDPo	= 1524,
    XVCMPEQSP	= 1525,
    XVCMPEQSPo	= 1526,
    XVCMPGEDP	= 1527,
    XVCMPGEDPo	= 1528,
    XVCMPGESP	= 1529,
    XVCMPGESPo	= 1530,
    XVCMPGTDP	= 1531,
    XVCMPGTDPo	= 1532,
    XVCMPGTSP	= 1533,
    XVCMPGTSPo	= 1534,
    XVCPSGNDP	= 1535,
    XVCPSGNSP	= 1536,
    XVCVDPSP	= 1537,
    XVCVDPSXDS	= 1538,
    XVCVDPSXWS	= 1539,
    XVCVDPUXDS	= 1540,
    XVCVDPUXWS	= 1541,
    XVCVSPDP	= 1542,
    XVCVSPSXDS	= 1543,
    XVCVSPSXWS	= 1544,
    XVCVSPUXDS	= 1545,
    XVCVSPUXWS	= 1546,
    XVCVSXDDP	= 1547,
    XVCVSXDSP	= 1548,
    XVCVSXWDP	= 1549,
    XVCVSXWSP	= 1550,
    XVCVUXDDP	= 1551,
    XVCVUXDSP	= 1552,
    XVCVUXWDP	= 1553,
    XVCVUXWSP	= 1554,
    XVDIVDP	= 1555,
    XVDIVSP	= 1556,
    XVMADDADP	= 1557,
    XVMADDASP	= 1558,
    XVMADDMDP	= 1559,
    XVMADDMSP	= 1560,
    XVMAXDP	= 1561,
    XVMAXSP	= 1562,
    XVMINDP	= 1563,
    XVMINSP	= 1564,
    XVMSUBADP	= 1565,
    XVMSUBASP	= 1566,
    XVMSUBMDP	= 1567,
    XVMSUBMSP	= 1568,
    XVMULDP	= 1569,
    XVMULSP	= 1570,
    XVNABSDP	= 1571,
    XVNABSSP	= 1572,
    XVNEGDP	= 1573,
    XVNEGSP	= 1574,
    XVNMADDADP	= 1575,
    XVNMADDASP	= 1576,
    XVNMADDMDP	= 1577,
    XVNMADDMSP	= 1578,
    XVNMSUBADP	= 1579,
    XVNMSUBASP	= 1580,
    XVNMSUBMDP	= 1581,
    XVNMSUBMSP	= 1582,
    XVRDPI	= 1583,
    XVRDPIC	= 1584,
    XVRDPIM	= 1585,
    XVRDPIP	= 1586,
    XVRDPIZ	= 1587,
    XVREDP	= 1588,
    XVRESP	= 1589,
    XVRSPI	= 1590,
    XVRSPIC	= 1591,
    XVRSPIM	= 1592,
    XVRSPIP	= 1593,
    XVRSPIZ	= 1594,
    XVRSQRTEDP	= 1595,
    XVRSQRTESP	= 1596,
    XVSQRTDP	= 1597,
    XVSQRTSP	= 1598,
    XVSUBDP	= 1599,
    XVSUBSP	= 1600,
    XVTDIVDP	= 1601,
    XVTDIVSP	= 1602,
    XVTSQRTDP	= 1603,
    XVTSQRTSP	= 1604,
    XXLAND	= 1605,
    XXLANDC	= 1606,
    XXLEQV	= 1607,
    XXLNAND	= 1608,
    XXLNOR	= 1609,
    XXLOR	= 1610,
    XXLORC	= 1611,
    XXLORf	= 1612,
    XXLXOR	= 1613,
    XXMRGHW	= 1614,
    XXMRGLW	= 1615,
    XXPERMDI	= 1616,
    XXSEL	= 1617,
    XXSLDWI	= 1618,
    XXSPLTW	= 1619,
    gBC	= 1620,
    gBCA	= 1621,
    gBCCTR	= 1622,
    gBCCTRL	= 1623,
    gBCL	= 1624,
    gBCLA	= 1625,
    gBCLR	= 1626,
    gBCLRL	= 1627,
    INSTRUCTION_LIST_END = 1628
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_IntSimple	= 1,
    IIC_IntGeneral	= 2,
    IIC_BrB	= 3,
    IIC_VecFP	= 4,
    IIC_IntCompare	= 5,
    IIC_BrCR	= 6,
    IIC_LdStDCBF	= 7,
    IIC_LdStLoad	= 8,
    IIC_IntDivD	= 9,
    IIC_IntDivW	= 10,
    IIC_FPGeneral	= 11,
    IIC_FPAddSub	= 12,
    IIC_FPCompare	= 13,
    IIC_FPDivD	= 14,
    IIC_FPDivS	= 15,
    IIC_FPFused	= 16,
    IIC_FPSqrtD	= 17,
    IIC_FPSqrtS	= 18,
    IIC_LdStICBI	= 19,
    IIC_IntISEL	= 20,
    IIC_SprISYNC	= 21,
    IIC_LdStLWARX	= 22,
    IIC_LdStLoadUpd	= 23,
    IIC_LdStLoadUpdX	= 24,
    IIC_LdStLD	= 25,
    IIC_LdStLDARX	= 26,
    IIC_LdStLDU	= 27,
    IIC_LdStLDUX	= 28,
    IIC_LdStLFD	= 29,
    IIC_LdStLFDU	= 30,
    IIC_LdStLFDUX	= 31,
    IIC_LdStLHA	= 32,
    IIC_LdStLHAU	= 33,
    IIC_LdStLHAUX	= 34,
    IIC_LdStLMW	= 35,
    IIC_LdStLWA	= 36,
    IIC_BrMCR	= 37,
    IIC_SprMFCR	= 38,
    IIC_SprMFSPR	= 39,
    IIC_IntMFFS	= 40,
    IIC_SprMFMSR	= 41,
    IIC_SprMFCRF	= 42,
    IIC_SprMFSR	= 43,
    IIC_SprMFTB	= 44,
    IIC_LdStStore	= 45,
    IIC_VecGeneral	= 46,
    IIC_LdStSync	= 47,
    IIC_BrMCRX	= 48,
    IIC_SprMTSPR	= 49,
    IIC_IntMTFSB0	= 50,
    IIC_SprMTMSR	= 51,
    IIC_SprMTMSRD	= 52,
    IIC_SprMTSR	= 53,
    IIC_IntMulHW	= 54,
    IIC_IntMulHWU	= 55,
    IIC_IntMulHD	= 56,
    IIC_IntMulLI	= 57,
    IIC_VecPerm	= 58,
    IIC_LdStSTFD	= 59,
    IIC_LdStSTFDU	= 60,
    IIC_SprRFI	= 61,
    IIC_IntRFID	= 62,
    IIC_IntRotateD	= 63,
    IIC_IntRotateDI	= 64,
    IIC_IntRotate	= 65,
    IIC_SprSLBIA	= 66,
    IIC_SprSLBIE	= 67,
    IIC_SprSLBMFEE	= 68,
    IIC_SprSLBMTE	= 69,
    IIC_IntShift	= 70,
    IIC_LdStSTWCX	= 71,
    IIC_LdStStoreUpd	= 72,
    IIC_LdStSTD	= 73,
    IIC_LdStSTDCX	= 74,
    IIC_LdStSTDU	= 75,
    IIC_LdStSTDUX	= 76,
    IIC_IntTrapD	= 77,
    IIC_SprTLBIA	= 78,
    IIC_SprTLBIE	= 79,
    IIC_SprTLBIEL	= 80,
    IIC_SprTLBSYNC	= 81,
    IIC_IntTrapW	= 82,
    IIC_VecFPCompare	= 83,
    SCHED_LIST_END = 84
  };
} // End Sched namespace
} // End PPC namespace
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Descriptors                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { PPC::CR0, 0 };
static const uint16_t ImplicitList2[] = { PPC::CARRY, 0 };
static const uint16_t ImplicitList3[] = { PPC::CARRY, PPC::CR0, 0 };
static const uint16_t ImplicitList4[] = { PPC::X0, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::LR8, PPC::CTR8, PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, 0 };
static const uint16_t ImplicitList5[] = { PPC::R0, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::LR, PPC::CTR, PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, 0 };
static const uint16_t ImplicitList6[] = { PPC::R1, 0 };
static const uint16_t ImplicitList7[] = { PPC::CTR, 0 };
static const uint16_t ImplicitList8[] = { PPC::CTR8, 0 };
static const uint16_t ImplicitList9[] = { PPC::CTR, PPC::RM, 0 };
static const uint16_t ImplicitList10[] = { PPC::LR, 0 };
static const uint16_t ImplicitList11[] = { PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList12[] = { PPC::LR8, 0 };
static const uint16_t ImplicitList13[] = { PPC::RM, 0 };
static const uint16_t ImplicitList14[] = { PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList15[] = { PPC::LR8, PPC::X2, 0 };
static const uint16_t ImplicitList16[] = { PPC::CTR, PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList17[] = { PPC::CTR8, PPC::LR8, PPC::RM, 0 };
static const uint16_t ImplicitList18[] = { PPC::LR8, PPC::RM, 0 };
static const uint16_t ImplicitList19[] = { PPC::CR1EQ, 0 };
static const uint16_t ImplicitList20[] = { PPC::X1, 0 };
static const uint16_t ImplicitList21[] = { PPC::CR1, 0 };
static const uint16_t ImplicitList22[] = { PPC::X0, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::LR8, PPC::CTR8, PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, 0 };
static const uint16_t ImplicitList23[] = { PPC::R0, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::LR, PPC::CTR, PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, 0 };
static const uint16_t ImplicitList24[] = { PPC::CR6, 0 };
static const uint16_t ImplicitList25[] = { PPC::LR, PPC::CTR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo67[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo68[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo76[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo80[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QBRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::QSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo170[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo171[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo174[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo176[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { PPC::CRRC0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { PPC::CRRC0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { PPC::CRRC0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { PPC::CRRC0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { PPC::CTRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { PPC::CTRRC8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo196[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo197[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo205[] = { { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo206[] = { { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo207[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSFRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo208[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo209[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo210[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo211[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo212[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo213[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo214[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo215[] = { { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VSRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo216[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo217[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc PPCInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #21 = LOCAL_ESCAPE
  { 22,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #22 = FAULTING_LOAD_OP
  { 23,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #23 = ADD4
  { 24,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #24 = ADD4TLS
  { 25,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #25 = ADD4o
  { 26,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #26 = ADD8
  { 27,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #27 = ADD8TLS
  { 28,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #28 = ADD8TLS_
  { 29,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #29 = ADD8o
  { 30,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0xcULL, nullptr, ImplicitList2, OperandInfo12, -1 ,nullptr },  // Inst #30 = ADDC
  { 31,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0xcULL, nullptr, ImplicitList2, OperandInfo14, -1 ,nullptr },  // Inst #31 = ADDC8
  { 32,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0xcULL, nullptr, ImplicitList3, OperandInfo14, -1 ,nullptr },  // Inst #32 = ADDC8o
  { 33,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0xcULL, nullptr, ImplicitList3, OperandInfo12, -1 ,nullptr },  // Inst #33 = ADDCo
  { 34,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo12, -1 ,nullptr },  // Inst #34 = ADDE
  { 35,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14, -1 ,nullptr },  // Inst #35 = ADDE8
  { 36,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14, -1 ,nullptr },  // Inst #36 = ADDE8o
  { 37,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo12, -1 ,nullptr },  // Inst #37 = ADDEo
  { 38,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #38 = ADDI
  { 39,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #39 = ADDI8
  { 40,	3,	1,	4,	2,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo13, -1 ,nullptr },  // Inst #40 = ADDIC
  { 41,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo15, -1 ,nullptr },  // Inst #41 = ADDIC8
  { 42,	3,	1,	4,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, ImplicitList3, OperandInfo13, -1 ,nullptr },  // Inst #42 = ADDICo
  { 43,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #43 = ADDIS
  { 44,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #44 = ADDIS8
  { 45,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #45 = ADDISdtprelHA
  { 46,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #46 = ADDISdtprelHA32
  { 47,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #47 = ADDISgotTprelHA
  { 48,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #48 = ADDIStlsgdHA
  { 49,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = ADDIStlsldHA
  { 50,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #50 = ADDIStocHA
  { 51,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #51 = ADDIdtprelL
  { 52,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #52 = ADDIdtprelL32
  { 53,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #53 = ADDItlsgdL
  { 54,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #54 = ADDItlsgdL32
  { 55,	4,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo18, -1 ,nullptr },  // Inst #55 = ADDItlsgdLADDR
  { 56,	4,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList5, OperandInfo19, -1 ,nullptr },  // Inst #56 = ADDItlsgdLADDR32
  { 57,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #57 = ADDItlsldL
  { 58,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #58 = ADDItlsldL32
  { 59,	4,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo18, -1 ,nullptr },  // Inst #59 = ADDItlsldLADDR
  { 60,	4,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList5, OperandInfo19, -1 ,nullptr },  // Inst #60 = ADDItlsldLADDR32
  { 61,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #61 = ADDItocL
  { 62,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo20, -1 ,nullptr },  // Inst #62 = ADDME
  { 63,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo21, -1 ,nullptr },  // Inst #63 = ADDME8
  { 64,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo21, -1 ,nullptr },  // Inst #64 = ADDME8o
  { 65,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo20, -1 ,nullptr },  // Inst #65 = ADDMEo
  { 66,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo20, -1 ,nullptr },  // Inst #66 = ADDZE
  { 67,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo21, -1 ,nullptr },  // Inst #67 = ADDZE8
  { 68,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo21, -1 ,nullptr },  // Inst #68 = ADDZE8o
  { 69,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo20, -1 ,nullptr },  // Inst #69 = ADDZEo
  { 70,	1,	0,	4,	0,	0, 0x0ULL, ImplicitList6, ImplicitList6, OperandInfo5, -1 ,nullptr },  // Inst #70 = ADJCALLSTACKDOWN
  { 71,	2,	0,	4,	0,	0, 0x0ULL, ImplicitList6, ImplicitList6, OperandInfo7, -1 ,nullptr },  // Inst #71 = ADJCALLSTACKUP
  { 72,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #72 = AND
  { 73,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #73 = AND8
  { 74,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #74 = AND8o
  { 75,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #75 = ANDC
  { 76,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #76 = ANDC8
  { 77,	3,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #77 = ANDC8o
  { 78,	3,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #78 = ANDCo
  { 79,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #79 = ANDISo
  { 80,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #80 = ANDISo8
  { 81,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #81 = ANDIo
  { 82,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo15, -1 ,nullptr },  // Inst #82 = ANDIo8
  { 83,	2,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #83 = ANDIo_1_EQ_BIT
  { 84,	2,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #84 = ANDIo_1_EQ_BIT8
  { 85,	2,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #85 = ANDIo_1_GT_BIT
  { 86,	2,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #86 = ANDIo_1_GT_BIT8
  { 87,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #87 = ANDo
  { 88,	5,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #88 = ATOMIC_CMP_SWAP_I16
  { 89,	5,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #89 = ATOMIC_CMP_SWAP_I32
  { 90,	5,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo25, -1 ,nullptr },  // Inst #90 = ATOMIC_CMP_SWAP_I64
  { 91,	5,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo24, -1 ,nullptr },  // Inst #91 = ATOMIC_CMP_SWAP_I8
  { 92,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #92 = ATOMIC_LOAD_ADD_I16
  { 93,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #93 = ATOMIC_LOAD_ADD_I32
  { 94,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #94 = ATOMIC_LOAD_ADD_I64
  { 95,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #95 = ATOMIC_LOAD_ADD_I8
  { 96,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #96 = ATOMIC_LOAD_AND_I16
  { 97,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #97 = ATOMIC_LOAD_AND_I32
  { 98,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #98 = ATOMIC_LOAD_AND_I64
  { 99,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #99 = ATOMIC_LOAD_AND_I8
  { 100,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #100 = ATOMIC_LOAD_NAND_I16
  { 101,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #101 = ATOMIC_LOAD_NAND_I32
  { 102,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #102 = ATOMIC_LOAD_NAND_I64
  { 103,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #103 = ATOMIC_LOAD_NAND_I8
  { 104,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #104 = ATOMIC_LOAD_OR_I16
  { 105,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #105 = ATOMIC_LOAD_OR_I32
  { 106,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #106 = ATOMIC_LOAD_OR_I64
  { 107,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #107 = ATOMIC_LOAD_OR_I8
  { 108,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #108 = ATOMIC_LOAD_SUB_I16
  { 109,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #109 = ATOMIC_LOAD_SUB_I32
  { 110,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #110 = ATOMIC_LOAD_SUB_I64
  { 111,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #111 = ATOMIC_LOAD_SUB_I8
  { 112,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #112 = ATOMIC_LOAD_XOR_I16
  { 113,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #113 = ATOMIC_LOAD_XOR_I32
  { 114,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #114 = ATOMIC_LOAD_XOR_I64
  { 115,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #115 = ATOMIC_LOAD_XOR_I8
  { 116,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #116 = ATOMIC_SWAP_I16
  { 117,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #117 = ATOMIC_SWAP_I32
  { 118,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #118 = ATOMIC_SWAP_I64
  { 119,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #119 = ATOMIC_SWAP_I8
  { 120,	0,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #120 = ATTN
  { 121,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x38ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #121 = B
  { 122,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #122 = BA
  { 123,	2,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x38ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #123 = BC
  { 124,	3,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #124 = BCC
  { 125,	3,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #125 = BCCA
  { 126,	2,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #126 = BCCCTR
  { 127,	2,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #127 = BCCCTR8
  { 128,	2,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo30, -1 ,nullptr },  // Inst #128 = BCCCTRL
  { 129,	2,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList12, OperandInfo30, -1 ,nullptr },  // Inst #129 = BCCCTRL8
  { 130,	3,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo29, -1 ,nullptr },  // Inst #130 = BCCL
  { 131,	3,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo29, -1 ,nullptr },  // Inst #131 = BCCLA
  { 132,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #132 = BCCLR
  { 133,	2,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList10, OperandInfo30, -1 ,nullptr },  // Inst #133 = BCCLRL
  { 134,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #134 = BCCTR
  { 135,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #135 = BCCTR8
  { 136,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #136 = BCCTR8n
  { 137,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo31, -1 ,nullptr },  // Inst #137 = BCCTRL
  { 138,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList12, OperandInfo31, -1 ,nullptr },  // Inst #138 = BCCTRL8
  { 139,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList12, OperandInfo31, -1 ,nullptr },  // Inst #139 = BCCTRL8n
  { 140,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo31, -1 ,nullptr },  // Inst #140 = BCCTRLn
  { 141,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #141 = BCCTRn
  { 142,	2,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo28, -1 ,nullptr },  // Inst #142 = BCL
  { 143,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #143 = BCLR
  { 144,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList10, OperandInfo31, -1 ,nullptr },  // Inst #144 = BCLRL
  { 145,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList10, OperandInfo31, -1 ,nullptr },  // Inst #145 = BCLRLn
  { 146,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #146 = BCLRn
  { 147,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo5, -1 ,nullptr },  // Inst #147 = BCLalways
  { 148,	2,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo28, -1 ,nullptr },  // Inst #148 = BCLn
  { 149,	0,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, nullptr, nullptr, -1 ,nullptr },  // Inst #149 = BCTR
  { 150,	0,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, nullptr, nullptr, -1 ,nullptr },  // Inst #150 = BCTR8
  { 151,	0,	0,	4,	3,	0|(1ULL<<MCID::Call), 0x38ULL, ImplicitList9, ImplicitList10, nullptr, -1 ,nullptr },  // Inst #151 = BCTRL
  { 152,	0,	0,	4,	3,	0|(1ULL<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList12, nullptr, -1 ,nullptr },  // Inst #152 = BCTRL8
  { 153,	2,	0,	8,	3,	0|(1ULL<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList15, OperandInfo32, -1 ,nullptr },  // Inst #153 = BCTRL8_LDinto_toc
  { 154,	2,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x38ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #154 = BCn
  { 155,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #155 = BDNZ
  { 156,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, ImplicitList8, OperandInfo5, -1 ,nullptr },  // Inst #156 = BDNZ8
  { 157,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #157 = BDNZA
  { 158,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #158 = BDNZAm
  { 159,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #159 = BDNZAp
  { 160,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #160 = BDNZL
  { 161,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #161 = BDNZLA
  { 162,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #162 = BDNZLAm
  { 163,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #163 = BDNZLAp
  { 164,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #164 = BDNZLR
  { 165,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList17, ImplicitList8, nullptr, -1 ,nullptr },  // Inst #165 = BDNZLR8
  { 166,	0,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #166 = BDNZLRL
  { 167,	0,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #167 = BDNZLRLm
  { 168,	0,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #168 = BDNZLRLp
  { 169,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #169 = BDNZLRm
  { 170,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #170 = BDNZLRp
  { 171,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #171 = BDNZLm
  { 172,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #172 = BDNZLp
  { 173,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #173 = BDNZm
  { 174,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #174 = BDNZp
  { 175,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #175 = BDZ
  { 176,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, ImplicitList8, OperandInfo5, -1 ,nullptr },  // Inst #176 = BDZ8
  { 177,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #177 = BDZA
  { 178,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #178 = BDZAm
  { 179,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #179 = BDZAp
  { 180,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #180 = BDZL
  { 181,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #181 = BDZLA
  { 182,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #182 = BDZLAm
  { 183,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #183 = BDZLAp
  { 184,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #184 = BDZLR
  { 185,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList17, ImplicitList8, nullptr, -1 ,nullptr },  // Inst #185 = BDZLR8
  { 186,	0,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #186 = BDZLRL
  { 187,	0,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #187 = BDZLRLm
  { 188,	0,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #188 = BDZLRLp
  { 189,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #189 = BDZLRm
  { 190,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, nullptr, -1 ,nullptr },  // Inst #190 = BDZLRp
  { 191,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #191 = BDZLm
  { 192,	1,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #192 = BDZLp
  { 193,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #193 = BDZm
  { 194,	1,	0,	4,	3,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList7, OperandInfo5, -1 ,nullptr },  // Inst #194 = BDZp
  { 195,	1,	0,	4,	3,	0|(1ULL<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo5, -1 ,nullptr },  // Inst #195 = BL
  { 196,	1,	0,	4,	3,	0|(1ULL<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo5, -1 ,nullptr },  // Inst #196 = BL8
  { 197,	1,	0,	8,	3,	0|(1ULL<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo5, -1 ,nullptr },  // Inst #197 = BL8_NOP
  { 198,	2,	0,	8,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo7, -1 ,nullptr },  // Inst #198 = BL8_NOP_TLS
  { 199,	2,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo7, -1 ,nullptr },  // Inst #199 = BL8_TLS
  { 200,	2,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo7, -1 ,nullptr },  // Inst #200 = BL8_TLS_
  { 201,	1,	0,	4,	3,	0|(1ULL<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo5, -1 ,nullptr },  // Inst #201 = BLA
  { 202,	1,	0,	4,	3,	0|(1ULL<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo5, -1 ,nullptr },  // Inst #202 = BLA8
  { 203,	1,	0,	8,	3,	0|(1ULL<<MCID::Call), 0x38ULL, ImplicitList13, ImplicitList12, OperandInfo5, -1 ,nullptr },  // Inst #203 = BLA8_NOP
  { 204,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x38ULL, ImplicitList14, nullptr, nullptr, -1 ,nullptr },  // Inst #204 = BLR
  { 205,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x38ULL, ImplicitList18, nullptr, nullptr, -1 ,nullptr },  // Inst #205 = BLR8
  { 206,	0,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList10, nullptr, -1 ,nullptr },  // Inst #206 = BLRL
  { 207,	2,	0,	4,	3,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList10, OperandInfo7, -1 ,nullptr },  // Inst #207 = BL_TLS
  { 208,	3,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #208 = BPERMD
  { 209,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #209 = BRINC
  { 210,	0,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #210 = CLRBHRB
  { 211,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #211 = CLRLSLDI
  { 212,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #212 = CLRLSLDIo
  { 213,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #213 = CLRLSLWI
  { 214,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #214 = CLRLSLWIo
  { 215,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #215 = CLRRDI
  { 216,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #216 = CLRRDIo
  { 217,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #217 = CLRRWI
  { 218,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #218 = CLRRWIo
  { 219,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #219 = CMPB
  { 220,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #220 = CMPB8
  { 221,	3,	1,	4,	5,	0|(1ULL<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #221 = CMPD
  { 222,	3,	1,	4,	5,	0|(1ULL<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #222 = CMPDI
  { 223,	3,	1,	4,	5,	0|(1ULL<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #223 = CMPLD
  { 224,	3,	1,	4,	5,	0|(1ULL<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #224 = CMPLDI
  { 225,	3,	1,	4,	5,	0|(1ULL<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #225 = CMPLW
  { 226,	3,	1,	4,	5,	0|(1ULL<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #226 = CMPLWI
  { 227,	3,	1,	4,	5,	0|(1ULL<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #227 = CMPW
  { 228,	3,	1,	4,	5,	0|(1ULL<<MCID::Compare), 0x8ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #228 = CMPWI
  { 229,	2,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #229 = CNTLZD
  { 230,	2,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #230 = CNTLZDo
  { 231,	2,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #231 = CNTLZW
  { 232,	2,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #232 = CNTLZW8
  { 233,	2,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #233 = CNTLZW8o
  { 234,	2,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #234 = CNTLZWo
  { 235,	0,	0,	4,	6,	0, 0x0ULL, nullptr, ImplicitList19, nullptr, -1 ,nullptr },  // Inst #235 = CR6SET
  { 236,	0,	0,	4,	6,	0, 0x0ULL, nullptr, ImplicitList19, nullptr, -1 ,nullptr },  // Inst #236 = CR6UNSET
  { 237,	3,	1,	4,	6,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #237 = CRAND
  { 238,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #238 = CRANDC
  { 239,	3,	1,	4,	6,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #239 = CREQV
  { 240,	3,	1,	4,	6,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #240 = CRNAND
  { 241,	3,	1,	4,	6,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #241 = CRNOR
  { 242,	3,	1,	4,	6,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #242 = CROR
  { 243,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #243 = CRORC
  { 244,	1,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #244 = CRSET
  { 245,	1,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #245 = CRUNSET
  { 246,	3,	1,	4,	6,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #246 = CRXOR
  { 247,	2,	0,	4,	7,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #247 = DCBA
  { 248,	2,	0,	4,	7,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #248 = DCBF
  { 249,	2,	0,	4,	7,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #249 = DCBI
  { 250,	2,	0,	4,	7,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #250 = DCBST
  { 251,	3,	0,	4,	7,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #251 = DCBT
  { 252,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #252 = DCBTCT
  { 253,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #253 = DCBTDS
  { 254,	3,	0,	4,	7,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #254 = DCBTST
  { 255,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #255 = DCBTSTCT
  { 256,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #256 = DCBTSTDS
  { 257,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #257 = DCBTSTT
  { 258,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #258 = DCBTSTx
  { 259,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #259 = DCBTT
  { 260,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #260 = DCBTx
  { 261,	2,	0,	4,	7,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #261 = DCBZ
  { 262,	2,	0,	4,	7,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #262 = DCBZL
  { 263,	2,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #263 = DCCCI
  { 264,	3,	1,	4,	9,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #264 = DIVD
  { 265,	3,	1,	4,	9,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #265 = DIVDE
  { 266,	3,	1,	4,	9,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #266 = DIVDEU
  { 267,	3,	1,	4,	9,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #267 = DIVDEUo
  { 268,	3,	1,	4,	9,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #268 = DIVDEo
  { 269,	3,	1,	4,	9,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #269 = DIVDU
  { 270,	3,	1,	4,	9,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #270 = DIVDUo
  { 271,	3,	1,	4,	9,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #271 = DIVDo
  { 272,	3,	1,	4,	10,	0, 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #272 = DIVW
  { 273,	3,	1,	4,	10,	0, 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #273 = DIVWE
  { 274,	3,	1,	4,	10,	0, 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #274 = DIVWEU
  { 275,	3,	1,	4,	10,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #275 = DIVWEUo
  { 276,	3,	1,	4,	10,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #276 = DIVWEo
  { 277,	3,	1,	4,	10,	0, 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #277 = DIVWU
  { 278,	3,	1,	4,	10,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #278 = DIVWUo
  { 279,	3,	1,	4,	10,	0, 0xdULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #279 = DIVWo
  { 280,	1,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, PPC::DeprecatedDST ,nullptr },  // Inst #280 = DSS
  { 281,	0,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, PPC::DeprecatedDST ,nullptr },  // Inst #281 = DSSALL
  { 282,	3,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, PPC::DeprecatedDST ,nullptr },  // Inst #282 = DST
  { 283,	3,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, PPC::DeprecatedDST ,nullptr },  // Inst #283 = DST64
  { 284,	3,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, PPC::DeprecatedDST ,nullptr },  // Inst #284 = DSTST
  { 285,	3,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, PPC::DeprecatedDST ,nullptr },  // Inst #285 = DSTST64
  { 286,	3,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, PPC::DeprecatedDST ,nullptr },  // Inst #286 = DSTSTT
  { 287,	3,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, PPC::DeprecatedDST ,nullptr },  // Inst #287 = DSTSTT64
  { 288,	3,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, PPC::DeprecatedDST ,nullptr },  // Inst #288 = DSTT
  { 289,	3,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, PPC::DeprecatedDST ,nullptr },  // Inst #289 = DSTT64
  { 290,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList6, ImplicitList6, OperandInfo45, -1 ,nullptr },  // Inst #290 = DYNALLOC
  { 291,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList20, ImplicitList20, OperandInfo46, -1 ,nullptr },  // Inst #291 = DYNALLOC8
  { 292,	1,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #292 = EH_SjLj_LongJmp32
  { 293,	1,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #293 = EH_SjLj_LongJmp64
  { 294,	2,	1,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo47, -1 ,nullptr },  // Inst #294 = EH_SjLj_SetJmp32
  { 295,	2,	1,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo47, -1 ,nullptr },  // Inst #295 = EH_SjLj_SetJmp64
  { 296,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #296 = EH_SjLj_Setup
  { 297,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #297 = EQV
  { 298,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #298 = EQV8
  { 299,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #299 = EQV8o
  { 300,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #300 = EQVo
  { 301,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #301 = EVABS
  { 302,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #302 = EVADDIW
  { 303,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #303 = EVADDSMIAAW
  { 304,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #304 = EVADDSSIAAW
  { 305,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #305 = EVADDUMIAAW
  { 306,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #306 = EVADDUSIAAW
  { 307,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #307 = EVADDW
  { 308,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #308 = EVAND
  { 309,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #309 = EVANDC
  { 310,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #310 = EVCMPEQ
  { 311,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #311 = EVCMPGTS
  { 312,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #312 = EVCMPGTU
  { 313,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #313 = EVCMPLTS
  { 314,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #314 = EVCMPLTU
  { 315,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #315 = EVCNTLSW
  { 316,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #316 = EVCNTLZW
  { 317,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #317 = EVDIVWS
  { 318,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #318 = EVDIVWU
  { 319,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #319 = EVEQV
  { 320,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #320 = EVEXTSB
  { 321,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #321 = EVEXTSH
  { 322,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #322 = EVLDD
  { 323,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #323 = EVLDDX
  { 324,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #324 = EVLDH
  { 325,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #325 = EVLDHX
  { 326,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #326 = EVLDW
  { 327,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #327 = EVLDWX
  { 328,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #328 = EVLHHESPLAT
  { 329,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #329 = EVLHHESPLATX
  { 330,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #330 = EVLHHOSSPLAT
  { 331,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #331 = EVLHHOSSPLATX
  { 332,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #332 = EVLHHOUSPLAT
  { 333,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #333 = EVLHHOUSPLATX
  { 334,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #334 = EVLWHE
  { 335,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #335 = EVLWHEX
  { 336,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #336 = EVLWHOS
  { 337,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #337 = EVLWHOSX
  { 338,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #338 = EVLWHOU
  { 339,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #339 = EVLWHOUX
  { 340,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #340 = EVLWHSPLAT
  { 341,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #341 = EVLWHSPLATX
  { 342,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #342 = EVLWWSPLAT
  { 343,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #343 = EVLWWSPLATX
  { 344,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #344 = EVMERGEHI
  { 345,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #345 = EVMERGEHILO
  { 346,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #346 = EVMERGELO
  { 347,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #347 = EVMERGELOHI
  { 348,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #348 = EVMHEGSMFAA
  { 349,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #349 = EVMHEGSMFAN
  { 350,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #350 = EVMHEGSMIAA
  { 351,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #351 = EVMHEGSMIAN
  { 352,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #352 = EVMHEGUMIAA
  { 353,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #353 = EVMHEGUMIAN
  { 354,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #354 = EVMHESMF
  { 355,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #355 = EVMHESMFA
  { 356,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #356 = EVMHESMFAAW
  { 357,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #357 = EVMHESMFANW
  { 358,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #358 = EVMHESMI
  { 359,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #359 = EVMHESMIA
  { 360,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #360 = EVMHESMIAAW
  { 361,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #361 = EVMHESMIANW
  { 362,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #362 = EVMHESSF
  { 363,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #363 = EVMHESSFA
  { 364,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #364 = EVMHESSFAAW
  { 365,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #365 = EVMHESSFANW
  { 366,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #366 = EVMHESSIAAW
  { 367,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #367 = EVMHESSIANW
  { 368,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #368 = EVMHEUMI
  { 369,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #369 = EVMHEUMIA
  { 370,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #370 = EVMHEUMIAAW
  { 371,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #371 = EVMHEUMIANW
  { 372,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #372 = EVMHEUSIAAW
  { 373,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #373 = EVMHEUSIANW
  { 374,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #374 = EVMHOGSMFAA
  { 375,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #375 = EVMHOGSMFAN
  { 376,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #376 = EVMHOGSMIAA
  { 377,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #377 = EVMHOGSMIAN
  { 378,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #378 = EVMHOGUMIAA
  { 379,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #379 = EVMHOGUMIAN
  { 380,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #380 = EVMHOSMF
  { 381,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #381 = EVMHOSMFA
  { 382,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #382 = EVMHOSMFAAW
  { 383,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #383 = EVMHOSMFANW
  { 384,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #384 = EVMHOSMI
  { 385,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #385 = EVMHOSMIA
  { 386,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #386 = EVMHOSMIAAW
  { 387,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #387 = EVMHOSMIANW
  { 388,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #388 = EVMHOSSF
  { 389,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #389 = EVMHOSSFA
  { 390,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #390 = EVMHOSSFAAW
  { 391,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #391 = EVMHOSSFANW
  { 392,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #392 = EVMHOSSIAAW
  { 393,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #393 = EVMHOSSIANW
  { 394,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #394 = EVMHOUMI
  { 395,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #395 = EVMHOUMIA
  { 396,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #396 = EVMHOUMIAAW
  { 397,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #397 = EVMHOUMIANW
  { 398,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #398 = EVMHOUSIAAW
  { 399,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #399 = EVMHOUSIANW
  { 400,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #400 = EVMRA
  { 401,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #401 = EVMWHSMF
  { 402,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #402 = EVMWHSMFA
  { 403,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #403 = EVMWHSMI
  { 404,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #404 = EVMWHSMIA
  { 405,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #405 = EVMWHSSF
  { 406,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #406 = EVMWHSSFA
  { 407,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #407 = EVMWHUMI
  { 408,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #408 = EVMWHUMIA
  { 409,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #409 = EVMWLSMIAAW
  { 410,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #410 = EVMWLSMIANW
  { 411,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #411 = EVMWLSSIAAW
  { 412,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #412 = EVMWLSSIANW
  { 413,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #413 = EVMWLUMI
  { 414,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #414 = EVMWLUMIA
  { 415,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #415 = EVMWLUMIAAW
  { 416,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #416 = EVMWLUMIANW
  { 417,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #417 = EVMWLUSIAAW
  { 418,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #418 = EVMWLUSIANW
  { 419,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #419 = EVMWSMF
  { 420,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #420 = EVMWSMFA
  { 421,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #421 = EVMWSMFAA
  { 422,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #422 = EVMWSMFAN
  { 423,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #423 = EVMWSMI
  { 424,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #424 = EVMWSMIA
  { 425,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #425 = EVMWSMIAA
  { 426,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #426 = EVMWSMIAN
  { 427,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #427 = EVMWSSF
  { 428,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #428 = EVMWSSFA
  { 429,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #429 = EVMWSSFAA
  { 430,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #430 = EVMWSSFAN
  { 431,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #431 = EVMWUMI
  { 432,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #432 = EVMWUMIA
  { 433,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #433 = EVMWUMIAA
  { 434,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #434 = EVMWUMIAN
  { 435,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #435 = EVNAND
  { 436,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #436 = EVNEG
  { 437,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #437 = EVNOR
  { 438,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #438 = EVOR
  { 439,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #439 = EVORC
  { 440,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #440 = EVRLW
  { 441,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #441 = EVRLWI
  { 442,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #442 = EVRNDW
  { 443,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #443 = EVSLW
  { 444,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #444 = EVSLWI
  { 445,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #445 = EVSPLATFI
  { 446,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #446 = EVSPLATI
  { 447,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #447 = EVSRWIS
  { 448,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #448 = EVSRWIU
  { 449,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #449 = EVSRWS
  { 450,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #450 = EVSRWU
  { 451,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #451 = EVSTDD
  { 452,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #452 = EVSTDDX
  { 453,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #453 = EVSTDH
  { 454,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #454 = EVSTDHX
  { 455,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #455 = EVSTDW
  { 456,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #456 = EVSTDWX
  { 457,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #457 = EVSTWHE
  { 458,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #458 = EVSTWHEX
  { 459,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #459 = EVSTWHO
  { 460,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #460 = EVSTWHOX
  { 461,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #461 = EVSTWWE
  { 462,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #462 = EVSTWWEX
  { 463,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #463 = EVSTWWO
  { 464,	3,	0,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #464 = EVSTWWOX
  { 465,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #465 = EVSUBFSMIAAW
  { 466,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #466 = EVSUBFSSIAAW
  { 467,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #467 = EVSUBFUMIAAW
  { 468,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #468 = EVSUBFUSIAAW
  { 469,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #469 = EVSUBFW
  { 470,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #470 = EVSUBIFW
  { 471,	3,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #471 = EVXOR
  { 472,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #472 = EXTLDI
  { 473,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #473 = EXTLDIo
  { 474,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #474 = EXTLWI
  { 475,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #475 = EXTLWIo
  { 476,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #476 = EXTRDI
  { 477,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #477 = EXTRDIo
  { 478,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #478 = EXTRWI
  { 479,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #479 = EXTRWIo
  { 480,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #480 = EXTSB
  { 481,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #481 = EXTSB8
  { 482,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #482 = EXTSB8_32_64
  { 483,	2,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #483 = EXTSB8o
  { 484,	2,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #484 = EXTSBo
  { 485,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #485 = EXTSH
  { 486,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #486 = EXTSH8
  { 487,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #487 = EXTSH8_32_64
  { 488,	2,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #488 = EXTSH8o
  { 489,	2,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #489 = EXTSHo
  { 490,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #490 = EXTSW
  { 491,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #491 = EXTSW_32_64
  { 492,	2,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo51, -1 ,nullptr },  // Inst #492 = EXTSW_32_64o
  { 493,	2,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #493 = EXTSWo
  { 494,	0,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #494 = EnforceIEIO
  { 495,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #495 = FABSD
  { 496,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #496 = FABSDo
  { 497,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #497 = FABSS
  { 498,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #498 = FABSSo
  { 499,	3,	1,	4,	12,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #499 = FADD
  { 500,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #500 = FADDS
  { 501,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo55, -1 ,nullptr },  // Inst #501 = FADDSo
  { 502,	3,	1,	4,	12,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo54, -1 ,nullptr },  // Inst #502 = FADDo
  { 503,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #503 = FADDrtz
  { 504,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #504 = FCFID
  { 505,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #505 = FCFIDS
  { 506,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo56, -1 ,nullptr },  // Inst #506 = FCFIDSo
  { 507,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #507 = FCFIDU
  { 508,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #508 = FCFIDUS
  { 509,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo56, -1 ,nullptr },  // Inst #509 = FCFIDUSo
  { 510,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #510 = FCFIDUo
  { 511,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #511 = FCFIDo
  { 512,	3,	1,	4,	13,	0|(1ULL<<MCID::Compare), 0x18ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #512 = FCMPUD
  { 513,	3,	1,	4,	13,	0|(1ULL<<MCID::Compare), 0x18ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #513 = FCMPUS
  { 514,	3,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #514 = FCPSGND
  { 515,	3,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo54, -1 ,nullptr },  // Inst #515 = FCPSGNDo
  { 516,	3,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #516 = FCPSGNS
  { 517,	3,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo55, -1 ,nullptr },  // Inst #517 = FCPSGNSo
  { 518,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #518 = FCTID
  { 519,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #519 = FCTIDUZ
  { 520,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #520 = FCTIDUZo
  { 521,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #521 = FCTIDZ
  { 522,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #522 = FCTIDZo
  { 523,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #523 = FCTIDo
  { 524,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #524 = FCTIW
  { 525,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #525 = FCTIWUZ
  { 526,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #526 = FCTIWUZo
  { 527,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #527 = FCTIWZ
  { 528,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #528 = FCTIWZo
  { 529,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #529 = FCTIWo
  { 530,	3,	1,	4,	14,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #530 = FDIV
  { 531,	3,	1,	4,	15,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #531 = FDIVS
  { 532,	3,	1,	4,	15,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo55, -1 ,nullptr },  // Inst #532 = FDIVSo
  { 533,	3,	1,	4,	14,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo54, -1 ,nullptr },  // Inst #533 = FDIVo
  { 534,	4,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #534 = FMADD
  { 535,	4,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #535 = FMADDS
  { 536,	4,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo60, -1 ,nullptr },  // Inst #536 = FMADDSo
  { 537,	4,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo59, -1 ,nullptr },  // Inst #537 = FMADDo
  { 538,	2,	1,	4,	11,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #538 = FMR
  { 539,	2,	1,	4,	11,	0, 0x0ULL, nullptr, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #539 = FMRo
  { 540,	4,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #540 = FMSUB
  { 541,	4,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #541 = FMSUBS
  { 542,	4,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo60, -1 ,nullptr },  // Inst #542 = FMSUBSo
  { 543,	4,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo59, -1 ,nullptr },  // Inst #543 = FMSUBo
  { 544,	3,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #544 = FMUL
  { 545,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #545 = FMULS
  { 546,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo55, -1 ,nullptr },  // Inst #546 = FMULSo
  { 547,	3,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo54, -1 ,nullptr },  // Inst #547 = FMULo
  { 548,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #548 = FNABSD
  { 549,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #549 = FNABSDo
  { 550,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #550 = FNABSS
  { 551,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #551 = FNABSSo
  { 552,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #552 = FNEGD
  { 553,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #553 = FNEGDo
  { 554,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #554 = FNEGS
  { 555,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #555 = FNEGSo
  { 556,	4,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #556 = FNMADD
  { 557,	4,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #557 = FNMADDS
  { 558,	4,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo60, -1 ,nullptr },  // Inst #558 = FNMADDSo
  { 559,	4,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo59, -1 ,nullptr },  // Inst #559 = FNMADDo
  { 560,	4,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #560 = FNMSUB
  { 561,	4,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #561 = FNMSUBS
  { 562,	4,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo60, -1 ,nullptr },  // Inst #562 = FNMSUBSo
  { 563,	4,	1,	4,	16,	0|(1ULL<<MCID::Commutable), 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo59, -1 ,nullptr },  // Inst #563 = FNMSUBo
  { 564,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #564 = FRE
  { 565,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #565 = FRES
  { 566,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #566 = FRESo
  { 567,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #567 = FREo
  { 568,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #568 = FRIMD
  { 569,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #569 = FRIMDo
  { 570,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #570 = FRIMS
  { 571,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #571 = FRIMSo
  { 572,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #572 = FRIND
  { 573,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #573 = FRINDo
  { 574,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #574 = FRINS
  { 575,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #575 = FRINSo
  { 576,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #576 = FRIPD
  { 577,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #577 = FRIPDo
  { 578,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #578 = FRIPS
  { 579,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #579 = FRIPSo
  { 580,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #580 = FRIZD
  { 581,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #581 = FRIZDo
  { 582,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #582 = FRIZS
  { 583,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #583 = FRIZSo
  { 584,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #584 = FRSP
  { 585,	2,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo56, -1 ,nullptr },  // Inst #585 = FRSPo
  { 586,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #586 = FRSQRTE
  { 587,	2,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #587 = FRSQRTES
  { 588,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #588 = FRSQRTESo
  { 589,	2,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #589 = FRSQRTEo
  { 590,	4,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #590 = FSELD
  { 591,	4,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo59, -1 ,nullptr },  // Inst #591 = FSELDo
  { 592,	4,	1,	4,	11,	0, 0x18ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #592 = FSELS
  { 593,	4,	1,	4,	11,	0, 0x18ULL, nullptr, ImplicitList21, OperandInfo61, -1 ,nullptr },  // Inst #593 = FSELSo
  { 594,	2,	1,	4,	17,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #594 = FSQRT
  { 595,	2,	1,	4,	18,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #595 = FSQRTS
  { 596,	2,	1,	4,	18,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo53, -1 ,nullptr },  // Inst #596 = FSQRTSo
  { 597,	2,	1,	4,	17,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo52, -1 ,nullptr },  // Inst #597 = FSQRTo
  { 598,	3,	1,	4,	12,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #598 = FSUB
  { 599,	3,	1,	4,	11,	0, 0x18ULL, ImplicitList13, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #599 = FSUBS
  { 600,	3,	1,	4,	11,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo55, -1 ,nullptr },  // Inst #600 = FSUBSo
  { 601,	3,	1,	4,	12,	0, 0x18ULL, ImplicitList13, ImplicitList21, OperandInfo54, -1 ,nullptr },  // Inst #601 = FSUBo
  { 602,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList22, OperandInfo15, -1 ,nullptr },  // Inst #602 = GETtlsADDR
  { 603,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList23, OperandInfo13, -1 ,nullptr },  // Inst #603 = GETtlsADDR32
  { 604,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList22, OperandInfo15, -1 ,nullptr },  // Inst #604 = GETtlsldADDR
  { 605,	3,	1,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList23, OperandInfo13, -1 ,nullptr },  // Inst #605 = GETtlsldADDR32
  { 606,	2,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #606 = ICBI
  { 607,	3,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #607 = ICBT
  { 608,	2,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #608 = ICCCI
  { 609,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #609 = INSLWI
  { 610,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #610 = INSLWIo
  { 611,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #611 = INSRDI
  { 612,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #612 = INSRDIo
  { 613,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #613 = INSRWI
  { 614,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #614 = INSRWIo
  { 615,	4,	1,	4,	20,	0|(1ULL<<MCID::Select), 0x8ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #615 = ISEL
  { 616,	4,	1,	4,	20,	0|(1ULL<<MCID::Select), 0x8ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #616 = ISEL8
  { 617,	0,	0,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #617 = ISYNC
  { 618,	3,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #618 = LA
  { 619,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #619 = LAx
  { 620,	3,	1,	4,	22,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #620 = LBARX
  { 621,	3,	1,	4,	22,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #621 = LBARXL
  { 622,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #622 = LBZ
  { 623,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #623 = LBZ8
  { 624,	3,	1,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #624 = LBZCIX
  { 625,	4,	2,	4,	23,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #625 = LBZU
  { 626,	4,	2,	4,	23,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #626 = LBZU8
  { 627,	4,	2,	4,	24,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #627 = LBZUX
  { 628,	4,	2,	4,	24,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #628 = LBZUX8
  { 629,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #629 = LBZX
  { 630,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #630 = LBZX8
  { 631,	3,	1,	4,	25,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #631 = LD
  { 632,	3,	1,	4,	26,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #632 = LDARX
  { 633,	3,	1,	4,	26,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #633 = LDARXL
  { 634,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #634 = LDBRX
  { 635,	3,	1,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #635 = LDCIX
  { 636,	4,	2,	4,	27,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #636 = LDU
  { 637,	4,	2,	4,	28,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #637 = LDUX
  { 638,	3,	1,	4,	25,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #638 = LDX
  { 639,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #639 = LDgotTprelL
  { 640,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #640 = LDgotTprelL32
  { 641,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #641 = LDtoc
  { 642,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #642 = LDtocBA
  { 643,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #643 = LDtocCPT
  { 644,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #644 = LDtocJTI
  { 645,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #645 = LDtocL
  { 646,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #646 = LFD
  { 647,	4,	2,	4,	30,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #647 = LFDU
  { 648,	4,	2,	4,	31,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #648 = LFDUX
  { 649,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #649 = LFDX
  { 650,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #650 = LFIWAX
  { 651,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #651 = LFIWZX
  { 652,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #652 = LFS
  { 653,	4,	2,	4,	30,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #653 = LFSU
  { 654,	4,	2,	4,	31,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #654 = LFSUX
  { 655,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #655 = LFSX
  { 656,	3,	1,	4,	32,	0|(1ULL<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #656 = LHA
  { 657,	3,	1,	4,	32,	0|(1ULL<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #657 = LHA8
  { 658,	3,	1,	4,	22,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #658 = LHARX
  { 659,	3,	1,	4,	22,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #659 = LHARXL
  { 660,	4,	2,	4,	33,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #660 = LHAU
  { 661,	4,	2,	4,	33,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #661 = LHAU8
  { 662,	4,	2,	4,	34,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #662 = LHAUX
  { 663,	4,	2,	4,	34,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #663 = LHAUX8
  { 664,	3,	1,	4,	32,	0|(1ULL<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #664 = LHAX
  { 665,	3,	1,	4,	32,	0|(1ULL<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #665 = LHAX8
  { 666,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #666 = LHBRX
  { 667,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #667 = LHBRX8
  { 668,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #668 = LHZ
  { 669,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #669 = LHZ8
  { 670,	3,	1,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #670 = LHZCIX
  { 671,	4,	2,	4,	23,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #671 = LHZU
  { 672,	4,	2,	4,	23,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #672 = LHZU8
  { 673,	4,	2,	4,	24,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #673 = LHZUX
  { 674,	4,	2,	4,	24,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #674 = LHZUX8
  { 675,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #675 = LHZX
  { 676,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #676 = LHZX8
  { 677,	2,	1,	4,	1,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #677 = LI
  { 678,	2,	1,	4,	1,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #678 = LI8
  { 679,	2,	1,	4,	1,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #679 = LIS
  { 680,	2,	1,	4,	1,	0|(1ULL<<MCID::MoveImm)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x8ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #680 = LIS8
  { 681,	3,	1,	4,	35,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #681 = LMW
  { 682,	3,	1,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #682 = LSWI
  { 683,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #683 = LVEBX
  { 684,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #684 = LVEHX
  { 685,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #685 = LVEWX
  { 686,	3,	1,	4,	8,	0, 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #686 = LVSL
  { 687,	3,	1,	4,	8,	0, 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #687 = LVSR
  { 688,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #688 = LVX
  { 689,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #689 = LVXL
  { 690,	3,	1,	4,	36,	0|(1ULL<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #690 = LWA
  { 691,	3,	1,	4,	22,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #691 = LWARX
  { 692,	3,	1,	4,	22,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #692 = LWARXL
  { 693,	4,	2,	4,	34,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #693 = LWAUX
  { 694,	3,	1,	4,	32,	0|(1ULL<<MCID::MayLoad), 0x14ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #694 = LWAX
  { 695,	3,	1,	4,	32,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x14ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #695 = LWAX_32
  { 696,	3,	1,	4,	36,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x14ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #696 = LWA_32
  { 697,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #697 = LWBRX
  { 698,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #698 = LWBRX8
  { 699,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #699 = LWZ
  { 700,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #700 = LWZ8
  { 701,	3,	1,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #701 = LWZCIX
  { 702,	4,	2,	4,	23,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #702 = LWZU
  { 703,	4,	2,	4,	23,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #703 = LWZU8
  { 704,	4,	2,	4,	24,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #704 = LWZUX
  { 705,	4,	2,	4,	24,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #705 = LWZUX8
  { 706,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #706 = LWZX
  { 707,	3,	1,	4,	8,	0|(1ULL<<MCID::MayLoad), 0x10ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #707 = LWZX8
  { 708,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #708 = LWZtoc
  { 709,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #709 = LXSDX
  { 710,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #710 = LXSIWAX
  { 711,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #711 = LXSIWZX
  { 712,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #712 = LXSSPX
  { 713,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #713 = LXVD2X
  { 714,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #714 = LXVDSX
  { 715,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #715 = LXVW4X
  { 716,	1,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #716 = MBAR
  { 717,	2,	1,	4,	37,	0, 0x21ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #717 = MCRF
  { 718,	2,	1,	4,	37,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #718 = MCRFS
  { 719,	3,	1,	4,	3,	0, 0x1ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #719 = MFBHRBE
  { 720,	1,	1,	4,	38,	0, 0x20ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #720 = MFCR
  { 721,	1,	1,	4,	38,	0, 0x20ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #721 = MFCR8
  { 722,	1,	1,	4,	39,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList7, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #722 = MFCTR
  { 723,	1,	1,	4,	39,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList8, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #723 = MFCTR8
  { 724,	2,	1,	4,	39,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #724 = MFDCR
  { 725,	1,	1,	4,	40,	0, 0x1aULL, ImplicitList13, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #725 = MFFS
  { 726,	1,	1,	4,	40,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList13, ImplicitList21, OperandInfo92, -1 ,nullptr },  // Inst #726 = MFFSo
  { 727,	1,	1,	4,	39,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList10, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #727 = MFLR
  { 728,	1,	1,	4,	39,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList12, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #728 = MFLR8
  { 729,	1,	1,	4,	41,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #729 = MFMSR
  { 730,	2,	1,	4,	42,	0|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x21ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #730 = MFOCRF
  { 731,	2,	1,	4,	42,	0|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x21ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #731 = MFOCRF8
  { 732,	2,	1,	4,	39,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #732 = MFSPR
  { 733,	2,	1,	4,	39,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #733 = MFSPR8
  { 734,	2,	1,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #734 = MFSR
  { 735,	2,	1,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #735 = MFSRIN
  { 736,	2,	1,	4,	44,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #736 = MFTB
  { 737,	1,	1,	4,	44,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #737 = MFTB8
  { 738,	1,	1,	4,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #738 = MFVRSAVE
  { 739,	2,	1,	4,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #739 = MFVRSAVEv
  { 740,	1,	1,	4,	45,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #740 = MFVSCR
  { 741,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #741 = MFVSRD
  { 742,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #742 = MFVSRWZ
  { 743,	0,	0,	4,	47,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #743 = MSYNC
  { 744,	2,	0,	4,	48,	0, 0x20ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #744 = MTCRF
  { 745,	2,	0,	4,	48,	0, 0x20ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #745 = MTCRF8
  { 746,	1,	0,	4,	49,	0, 0x9ULL, nullptr, ImplicitList7, OperandInfo90, -1 ,nullptr },  // Inst #746 = MTCTR
  { 747,	1,	0,	4,	49,	0, 0x9ULL, nullptr, ImplicitList8, OperandInfo91, -1 ,nullptr },  // Inst #747 = MTCTR8
  { 748,	1,	0,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList8, OperandInfo91, -1 ,nullptr },  // Inst #748 = MTCTR8loop
  { 749,	1,	0,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList7, OperandInfo90, -1 ,nullptr },  // Inst #749 = MTCTRloop
  { 750,	2,	0,	4,	49,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #750 = MTDCR
  { 751,	1,	0,	4,	50,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList13, ImplicitList13, OperandInfo5, -1 ,nullptr },  // Inst #751 = MTFSB0
  { 752,	1,	0,	4,	50,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList13, ImplicitList13, OperandInfo5, -1 ,nullptr },  // Inst #752 = MTFSB1
  { 753,	4,	0,	4,	40,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #753 = MTFSF
  { 754,	3,	1,	4,	40,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #754 = MTFSFI
  { 755,	3,	1,	4,	40,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #755 = MTFSFIo
  { 756,	2,	0,	4,	50,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList13, ImplicitList13, OperandInfo102, -1 ,nullptr },  // Inst #756 = MTFSFb
  { 757,	4,	0,	4,	40,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #757 = MTFSFo
  { 758,	1,	0,	4,	49,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList10, OperandInfo90, -1 ,nullptr },  // Inst #758 = MTLR
  { 759,	1,	0,	4,	49,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x9ULL, nullptr, ImplicitList12, OperandInfo91, -1 ,nullptr },  // Inst #759 = MTLR8
  { 760,	2,	0,	4,	51,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #760 = MTMSR
  { 761,	2,	0,	4,	52,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #761 = MTMSRD
  { 762,	2,	1,	4,	48,	0, 0x21ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #762 = MTOCRF
  { 763,	2,	1,	4,	48,	0, 0x21ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #763 = MTOCRF8
  { 764,	2,	0,	4,	49,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #764 = MTSPR
  { 765,	2,	0,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #765 = MTSPR8
  { 766,	2,	0,	4,	53,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #766 = MTSR
  { 767,	2,	0,	4,	53,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #767 = MTSRIN
  { 768,	1,	0,	4,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0xaULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #768 = MTVRSAVE
  { 769,	2,	1,	4,	2,	0|(1ULL<<MCID::UnmodeledSideEffects), 0xaULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #769 = MTVRSAVEv
  { 770,	1,	0,	4,	8,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #770 = MTVSCR
  { 771,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #771 = MTVSRD
  { 772,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #772 = MTVSRWA
  { 773,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #773 = MTVSRWZ
  { 774,	3,	1,	4,	54,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #774 = MULHD
  { 775,	3,	1,	4,	55,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #775 = MULHDU
  { 776,	3,	1,	4,	55,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #776 = MULHDUo
  { 777,	3,	1,	4,	54,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #777 = MULHDo
  { 778,	3,	1,	4,	54,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #778 = MULHW
  { 779,	3,	1,	4,	55,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #779 = MULHWU
  { 780,	3,	1,	4,	55,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #780 = MULHWUo
  { 781,	3,	1,	4,	54,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #781 = MULHWo
  { 782,	3,	1,	4,	56,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #782 = MULLD
  { 783,	3,	1,	4,	56,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #783 = MULLDo
  { 784,	3,	1,	4,	57,	0, 0x8ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #784 = MULLI
  { 785,	3,	1,	4,	57,	0, 0x8ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #785 = MULLI8
  { 786,	3,	1,	4,	54,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #786 = MULLW
  { 787,	3,	1,	4,	54,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #787 = MULLWo
  { 788,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, ImplicitList10, nullptr, -1 ,nullptr },  // Inst #788 = MoveGOTtoLR
  { 789,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, ImplicitList10, nullptr, -1 ,nullptr },  // Inst #789 = MovePCtoLR
  { 790,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, ImplicitList12, nullptr, -1 ,nullptr },  // Inst #790 = MovePCtoLR8
  { 791,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #791 = NAND
  { 792,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #792 = NAND8
  { 793,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #793 = NAND8o
  { 794,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #794 = NANDo
  { 795,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #795 = NEG
  { 796,	2,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #796 = NEG8
  { 797,	2,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo21, -1 ,nullptr },  // Inst #797 = NEG8o
  { 798,	2,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #798 = NEGo
  { 799,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #799 = NOP
  { 800,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #800 = NOP_GT_PWR6
  { 801,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #801 = NOP_GT_PWR7
  { 802,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #802 = NOR
  { 803,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #803 = NOR8
  { 804,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #804 = NOR8o
  { 805,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #805 = NORo
  { 806,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #806 = OR
  { 807,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #807 = OR8
  { 808,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #808 = OR8o
  { 809,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #809 = ORC
  { 810,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #810 = ORC8
  { 811,	3,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #811 = ORC8o
  { 812,	3,	1,	4,	1,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #812 = ORCo
  { 813,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #813 = ORI
  { 814,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #814 = ORI8
  { 815,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #815 = ORIS
  { 816,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #816 = ORIS8
  { 817,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #817 = ORo
  { 818,	2,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #818 = POPCNTD
  { 819,	2,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #819 = POPCNTW
  { 820,	1,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #820 = PPC32GOT
  { 821,	2,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #821 = PPC32PICGOT
  { 822,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #822 = QVALIGNI
  { 823,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #823 = QVALIGNIb
  { 824,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #824 = QVALIGNIs
  { 825,	3,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #825 = QVESPLATI
  { 826,	3,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #826 = QVESPLATIb
  { 827,	3,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #827 = QVESPLATIs
  { 828,	2,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #828 = QVFABS
  { 829,	2,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #829 = QVFABSs
  { 830,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #830 = QVFADD
  { 831,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #831 = QVFADDS
  { 832,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #832 = QVFADDSs
  { 833,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #833 = QVFCFID
  { 834,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #834 = QVFCFIDS
  { 835,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #835 = QVFCFIDU
  { 836,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #836 = QVFCFIDUS
  { 837,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118, -1 ,nullptr },  // Inst #837 = QVFCFIDb
  { 838,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #838 = QVFCMPEQ
  { 839,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #839 = QVFCMPEQb
  { 840,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #840 = QVFCMPEQbs
  { 841,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #841 = QVFCMPGT
  { 842,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #842 = QVFCMPGTb
  { 843,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #843 = QVFCMPGTbs
  { 844,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #844 = QVFCMPLT
  { 845,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #845 = QVFCMPLTb
  { 846,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #846 = QVFCMPLTbs
  { 847,	3,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #847 = QVFCPSGN
  { 848,	3,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #848 = QVFCPSGNs
  { 849,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #849 = QVFCTID
  { 850,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #850 = QVFCTIDU
  { 851,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #851 = QVFCTIDUZ
  { 852,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #852 = QVFCTIDZ
  { 853,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118, -1 ,nullptr },  // Inst #853 = QVFCTIDb
  { 854,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #854 = QVFCTIW
  { 855,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #855 = QVFCTIWU
  { 856,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #856 = QVFCTIWUZ
  { 857,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #857 = QVFCTIWZ
  { 858,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #858 = QVFLOGICAL
  { 859,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #859 = QVFLOGICALb
  { 860,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #860 = QVFLOGICALs
  { 861,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #861 = QVFMADD
  { 862,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #862 = QVFMADDS
  { 863,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #863 = QVFMADDSs
  { 864,	2,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #864 = QVFMR
  { 865,	2,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo118, -1 ,nullptr },  // Inst #865 = QVFMRb
  { 866,	2,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #866 = QVFMRs
  { 867,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #867 = QVFMSUB
  { 868,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #868 = QVFMSUBS
  { 869,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #869 = QVFMSUBSs
  { 870,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #870 = QVFMUL
  { 871,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #871 = QVFMULS
  { 872,	3,	1,	4,	11,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #872 = QVFMULSs
  { 873,	2,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #873 = QVFNABS
  { 874,	2,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #874 = QVFNABSs
  { 875,	2,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #875 = QVFNEG
  { 876,	2,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #876 = QVFNEGs
  { 877,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #877 = QVFNMADD
  { 878,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #878 = QVFNMADDS
  { 879,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #879 = QVFNMADDSs
  { 880,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #880 = QVFNMSUB
  { 881,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #881 = QVFNMSUBS
  { 882,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #882 = QVFNMSUBSs
  { 883,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #883 = QVFPERM
  { 884,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #884 = QVFPERMs
  { 885,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #885 = QVFRE
  { 886,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #886 = QVFRES
  { 887,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #887 = QVFRESs
  { 888,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #888 = QVFRIM
  { 889,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #889 = QVFRIMs
  { 890,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #890 = QVFRIN
  { 891,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #891 = QVFRINs
  { 892,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #892 = QVFRIP
  { 893,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #893 = QVFRIPs
  { 894,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #894 = QVFRIZ
  { 895,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #895 = QVFRIZs
  { 896,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #896 = QVFRSP
  { 897,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #897 = QVFRSPs
  { 898,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #898 = QVFRSQRTE
  { 899,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #899 = QVFRSQRTES
  { 900,	2,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #900 = QVFRSQRTESs
  { 901,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #901 = QVFSEL
  { 902,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #902 = QVFSELb
  { 903,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #903 = QVFSELbb
  { 904,	4,	1,	4,	58,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #904 = QVFSELbs
  { 905,	3,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #905 = QVFSUB
  { 906,	3,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #906 = QVFSUBS
  { 907,	3,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #907 = QVFSUBSs
  { 908,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #908 = QVFTSTNAN
  { 909,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #909 = QVFTSTNANb
  { 910,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #910 = QVFTSTNANbs
  { 911,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #911 = QVFXMADD
  { 912,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #912 = QVFXMADDS
  { 913,	3,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #913 = QVFXMUL
  { 914,	3,	1,	4,	11,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #914 = QVFXMULS
  { 915,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #915 = QVFXXCPNMADD
  { 916,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #916 = QVFXXCPNMADDS
  { 917,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #917 = QVFXXMADD
  { 918,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #918 = QVFXXMADDS
  { 919,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #919 = QVFXXNPMADD
  { 920,	4,	1,	4,	16,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #920 = QVFXXNPMADDS
  { 921,	2,	1,	4,	58,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, ImplicitList13, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #921 = QVGPCI
  { 922,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #922 = QVLFCDUX
  { 923,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #923 = QVLFCDUXA
  { 924,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #924 = QVLFCDX
  { 925,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #925 = QVLFCDXA
  { 926,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #926 = QVLFCSUX
  { 927,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #927 = QVLFCSUXA
  { 928,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #928 = QVLFCSX
  { 929,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #929 = QVLFCSXA
  { 930,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #930 = QVLFCSXs
  { 931,	4,	2,	4,	30,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #931 = QVLFDUX
  { 932,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #932 = QVLFDUXA
  { 933,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #933 = QVLFDX
  { 934,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #934 = QVLFDXA
  { 935,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #935 = QVLFDXb
  { 936,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #936 = QVLFIWAX
  { 937,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #937 = QVLFIWAXA
  { 938,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #938 = QVLFIWZX
  { 939,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #939 = QVLFIWZXA
  { 940,	4,	2,	4,	30,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #940 = QVLFSUX
  { 941,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #941 = QVLFSUXA
  { 942,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #942 = QVLFSX
  { 943,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #943 = QVLFSXA
  { 944,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #944 = QVLFSXb
  { 945,	3,	1,	4,	29,	0|(1ULL<<MCID::MayLoad), 0x0ULL, ImplicitList13, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #945 = QVLFSXs
  { 946,	3,	1,	4,	29,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #946 = QVLPCLDX
  { 947,	3,	1,	4,	29,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #947 = QVLPCLSX
  { 948,	2,	1,	4,	29,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #948 = QVLPCLSXint
  { 949,	3,	1,	4,	29,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #949 = QVLPCRDX
  { 950,	3,	1,	4,	29,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #950 = QVLPCRSX
  { 951,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #951 = QVSTFCDUX
  { 952,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #952 = QVSTFCDUXA
  { 953,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #953 = QVSTFCDUXI
  { 954,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #954 = QVSTFCDUXIA
  { 955,	3,	0,	4,	59,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #955 = QVSTFCDX
  { 956,	3,	0,	4,	59,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #956 = QVSTFCDXA
  { 957,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #957 = QVSTFCDXI
  { 958,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #958 = QVSTFCDXIA
  { 959,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #959 = QVSTFCSUX
  { 960,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #960 = QVSTFCSUXA
  { 961,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #961 = QVSTFCSUXI
  { 962,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #962 = QVSTFCSUXIA
  { 963,	3,	0,	4,	59,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #963 = QVSTFCSX
  { 964,	3,	0,	4,	59,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #964 = QVSTFCSXA
  { 965,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #965 = QVSTFCSXI
  { 966,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #966 = QVSTFCSXIA
  { 967,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #967 = QVSTFCSXs
  { 968,	4,	1,	4,	60,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #968 = QVSTFDUX
  { 969,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #969 = QVSTFDUXA
  { 970,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #970 = QVSTFDUXI
  { 971,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #971 = QVSTFDUXIA
  { 972,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #972 = QVSTFDX
  { 973,	3,	0,	4,	59,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #973 = QVSTFDXA
  { 974,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #974 = QVSTFDXI
  { 975,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #975 = QVSTFDXIA
  { 976,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #976 = QVSTFDXb
  { 977,	3,	0,	4,	59,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #977 = QVSTFIWX
  { 978,	3,	0,	4,	59,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #978 = QVSTFIWXA
  { 979,	4,	1,	4,	60,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo136, -1 ,nullptr },  // Inst #979 = QVSTFSUX
  { 980,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #980 = QVSTFSUXA
  { 981,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #981 = QVSTFSUXI
  { 982,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #982 = QVSTFSUXIA
  { 983,	4,	1,	4,	60,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #983 = QVSTFSUXs
  { 984,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #984 = QVSTFSX
  { 985,	3,	0,	4,	59,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #985 = QVSTFSXA
  { 986,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #986 = QVSTFSXI
  { 987,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #987 = QVSTFSXIA
  { 988,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #988 = QVSTFSXs
  { 989,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #989 = RESTORE_CR
  { 990,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #990 = RESTORE_CRBIT
  { 991,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #991 = RESTORE_VRSAVE
  { 992,	0,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #992 = RFCI
  { 993,	0,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #993 = RFDI
  { 994,	1,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #994 = RFEBB
  { 995,	0,	0,	4,	61,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #995 = RFI
  { 996,	0,	0,	4,	62,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #996 = RFID
  { 997,	0,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #997 = RFMCI
  { 998,	4,	1,	4,	63,	0, 0x8ULL, nullptr, nullptr, OperandInfo140, -1 ,nullptr },  // Inst #998 = RLDCL
  { 999,	4,	1,	4,	63,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo140, -1 ,nullptr },  // Inst #999 = RLDCLo
  { 1000,	4,	1,	4,	63,	0, 0x8ULL, nullptr, nullptr, OperandInfo140, -1 ,nullptr },  // Inst #1000 = RLDCR
  { 1001,	4,	1,	4,	63,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo140, -1 ,nullptr },  // Inst #1001 = RLDCRo
  { 1002,	4,	1,	4,	64,	0, 0x8ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1002 = RLDIC
  { 1003,	4,	1,	4,	64,	0, 0x8ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1003 = RLDICL
  { 1004,	4,	1,	4,	64,	0, 0x8ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #1004 = RLDICL_32_64
  { 1005,	4,	1,	4,	64,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #1005 = RLDICLo
  { 1006,	4,	1,	4,	64,	0, 0x8ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1006 = RLDICR
  { 1007,	4,	1,	4,	64,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #1007 = RLDICRo
  { 1008,	4,	1,	4,	64,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #1008 = RLDICo
  { 1009,	5,	1,	4,	64,	0, 0x8ULL, nullptr, nullptr, OperandInfo142, -1 ,nullptr },  // Inst #1009 = RLDIMI
  { 1010,	5,	1,	4,	64,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo142, -1 ,nullptr },  // Inst #1010 = RLDIMIo
  { 1011,	6,	1,	4,	65,	0|(1ULL<<MCID::Commutable), 0xcULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #1011 = RLWIMI
  { 1012,	6,	1,	4,	65,	0, 0xcULL, nullptr, nullptr, OperandInfo144, -1 ,nullptr },  // Inst #1012 = RLWIMI8
  { 1013,	6,	1,	4,	65,	0, 0xcULL, nullptr, ImplicitList1, OperandInfo144, -1 ,nullptr },  // Inst #1013 = RLWIMI8o
  { 1014,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #1014 = RLWIMIbm
  { 1015,	6,	1,	4,	65,	0|(1ULL<<MCID::Commutable), 0xcULL, nullptr, ImplicitList1, OperandInfo143, -1 ,nullptr },  // Inst #1015 = RLWIMIo
  { 1016,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #1016 = RLWIMIobm
  { 1017,	5,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo146, -1 ,nullptr },  // Inst #1017 = RLWINM
  { 1018,	5,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo147, -1 ,nullptr },  // Inst #1018 = RLWINM8
  { 1019,	5,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo147, -1 ,nullptr },  // Inst #1019 = RLWINM8o
  { 1020,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #1020 = RLWINMbm
  { 1021,	5,	1,	4,	2,	0, 0xcULL, nullptr, ImplicitList1, OperandInfo146, -1 ,nullptr },  // Inst #1021 = RLWINMo
  { 1022,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #1022 = RLWINMobm
  { 1023,	5,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo148, -1 ,nullptr },  // Inst #1023 = RLWNM
  { 1024,	5,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo149, -1 ,nullptr },  // Inst #1024 = RLWNM8
  { 1025,	5,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo149, -1 ,nullptr },  // Inst #1025 = RLWNM8o
  { 1026,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #1026 = RLWNMbm
  { 1027,	5,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo148, -1 ,nullptr },  // Inst #1027 = RLWNMo
  { 1028,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #1028 = RLWNMobm
  { 1029,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1029 = ROTRDI
  { 1030,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1030 = ROTRDIo
  { 1031,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1031 = ROTRWI
  { 1032,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1032 = ROTRWIo
  { 1033,	2,	2,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1033 = ReadTB
  { 1034,	1,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1034 = SC
  { 1035,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo150, -1 ,nullptr },  // Inst #1035 = SELECT_CC_F4
  { 1036,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo151, -1 ,nullptr },  // Inst #1036 = SELECT_CC_F8
  { 1037,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo152, -1 ,nullptr },  // Inst #1037 = SELECT_CC_I4
  { 1038,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo153, -1 ,nullptr },  // Inst #1038 = SELECT_CC_I8
  { 1039,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo154, -1 ,nullptr },  // Inst #1039 = SELECT_CC_QBRC
  { 1040,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo155, -1 ,nullptr },  // Inst #1040 = SELECT_CC_QFRC
  { 1041,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo156, -1 ,nullptr },  // Inst #1041 = SELECT_CC_QSRC
  { 1042,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo157, -1 ,nullptr },  // Inst #1042 = SELECT_CC_VRRC
  { 1043,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo151, -1 ,nullptr },  // Inst #1043 = SELECT_CC_VSFRC
  { 1044,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo158, -1 ,nullptr },  // Inst #1044 = SELECT_CC_VSRC
  { 1045,	5,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo150, -1 ,nullptr },  // Inst #1045 = SELECT_CC_VSSRC
  { 1046,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo159, -1 ,nullptr },  // Inst #1046 = SELECT_F4
  { 1047,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo160, -1 ,nullptr },  // Inst #1047 = SELECT_F8
  { 1048,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo161, -1 ,nullptr },  // Inst #1048 = SELECT_I4
  { 1049,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo162, -1 ,nullptr },  // Inst #1049 = SELECT_I8
  { 1050,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo163, -1 ,nullptr },  // Inst #1050 = SELECT_QBRC
  { 1051,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo164, -1 ,nullptr },  // Inst #1051 = SELECT_QFRC
  { 1052,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList13, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1052 = SELECT_QSRC
  { 1053,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #1053 = SELECT_VRRC
  { 1054,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo160, -1 ,nullptr },  // Inst #1054 = SELECT_VSFRC
  { 1055,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1055 = SELECT_VSRC
  { 1056,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x2ULL, nullptr, nullptr, OperandInfo159, -1 ,nullptr },  // Inst #1056 = SELECT_VSSRC
  { 1057,	0,	0,	4,	66,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1057 = SLBIA
  { 1058,	1,	0,	4,	67,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #1058 = SLBIE
  { 1059,	2,	1,	4,	68,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1059 = SLBMFEE
  { 1060,	2,	0,	4,	69,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1060 = SLBMTE
  { 1061,	3,	1,	4,	63,	0, 0x8ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1061 = SLD
  { 1062,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1062 = SLDI
  { 1063,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1063 = SLDIo
  { 1064,	3,	1,	4,	63,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo168, -1 ,nullptr },  // Inst #1064 = SLDo
  { 1065,	3,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1065 = SLW
  { 1066,	3,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1066 = SLW8
  { 1067,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #1067 = SLW8o
  { 1068,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1068 = SLWI
  { 1069,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1069 = SLWIo
  { 1070,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #1070 = SLWo
  { 1071,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #1071 = SPILL_CR
  { 1072,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #1072 = SPILL_CRBIT
  { 1073,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #1073 = SPILL_VRSAVE
  { 1074,	3,	1,	4,	63,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo168, -1 ,nullptr },  // Inst #1074 = SRAD
  { 1075,	3,	1,	4,	64,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo15, -1 ,nullptr },  // Inst #1075 = SRADI
  { 1076,	3,	1,	4,	64,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo15, -1 ,nullptr },  // Inst #1076 = SRADIo
  { 1077,	3,	1,	4,	63,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo168, -1 ,nullptr },  // Inst #1077 = SRADo
  { 1078,	3,	1,	4,	70,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo12, -1 ,nullptr },  // Inst #1078 = SRAW
  { 1079,	3,	1,	4,	70,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo13, -1 ,nullptr },  // Inst #1079 = SRAWI
  { 1080,	3,	1,	4,	70,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo13, -1 ,nullptr },  // Inst #1080 = SRAWIo
  { 1081,	3,	1,	4,	70,	0, 0x8ULL, nullptr, ImplicitList3, OperandInfo12, -1 ,nullptr },  // Inst #1081 = SRAWo
  { 1082,	3,	1,	4,	63,	0, 0x8ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1082 = SRD
  { 1083,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1083 = SRDI
  { 1084,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1084 = SRDIo
  { 1085,	3,	1,	4,	63,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo168, -1 ,nullptr },  // Inst #1085 = SRDo
  { 1086,	3,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1086 = SRW
  { 1087,	3,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1087 = SRW8
  { 1088,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #1088 = SRW8o
  { 1089,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1089 = SRWI
  { 1090,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1090 = SRWIo
  { 1091,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #1091 = SRWo
  { 1092,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #1092 = STB
  { 1093,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1093 = STB8
  { 1094,	3,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1094 = STBCIX
  { 1095,	3,	0,	4,	71,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #1095 = STBCX
  { 1096,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1096 = STBU
  { 1097,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1097 = STBU8
  { 1098,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1098 = STBUX
  { 1099,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1099 = STBUX8
  { 1100,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1100 = STBX
  { 1101,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1101 = STBX8
  { 1102,	3,	0,	4,	73,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1102 = STD
  { 1103,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1103 = STDBRX
  { 1104,	3,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1104 = STDCIX
  { 1105,	3,	0,	4,	74,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo70, -1 ,nullptr },  // Inst #1105 = STDCX
  { 1106,	4,	1,	4,	75,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1106 = STDU
  { 1107,	4,	1,	4,	76,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1107 = STDUX
  { 1108,	3,	0,	4,	73,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1108 = STDX
  { 1109,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #1109 = STFD
  { 1110,	4,	1,	4,	60,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1110 = STFDU
  { 1111,	4,	1,	4,	60,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1111 = STFDUX
  { 1112,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1112 = STFDX
  { 1113,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1113 = STFIWX
  { 1114,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1114 = STFS
  { 1115,	4,	1,	4,	60,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1115 = STFSU
  { 1116,	4,	1,	4,	60,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo176, -1 ,nullptr },  // Inst #1116 = STFSUX
  { 1117,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #1117 = STFSX
  { 1118,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #1118 = STH
  { 1119,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1119 = STH8
  { 1120,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1120 = STHBRX
  { 1121,	3,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1121 = STHCIX
  { 1122,	3,	0,	4,	71,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #1122 = STHCX
  { 1123,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1123 = STHU
  { 1124,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1124 = STHU8
  { 1125,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1125 = STHUX
  { 1126,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1126 = STHUX8
  { 1127,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1127 = STHX
  { 1128,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1128 = STHX8
  { 1129,	3,	0,	4,	35,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #1129 = STMW
  { 1130,	3,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1130 = STSWI
  { 1131,	3,	0,	4,	45,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #1131 = STVEBX
  { 1132,	3,	0,	4,	45,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #1132 = STVEHX
  { 1133,	3,	0,	4,	45,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #1133 = STVEWX
  { 1134,	3,	0,	4,	45,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #1134 = STVX
  { 1135,	3,	0,	4,	45,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #1135 = STVXL
  { 1136,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #1136 = STW
  { 1137,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1137 = STW8
  { 1138,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1138 = STWBRX
  { 1139,	3,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1139 = STWCIX
  { 1140,	3,	0,	4,	71,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, ImplicitList1, OperandInfo64, -1 ,nullptr },  // Inst #1140 = STWCX
  { 1141,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1141 = STWU
  { 1142,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x10ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1142 = STWU8
  { 1143,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1143 = STWUX
  { 1144,	4,	1,	4,	72,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1144 = STWUX8
  { 1145,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1145 = STWX
  { 1146,	3,	0,	4,	45,	0|(1ULL<<MCID::MayStore), 0x14ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1146 = STWX8
  { 1147,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #1147 = STXSDX
  { 1148,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #1148 = STXSIWX
  { 1149,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #1149 = STXSSPX
  { 1150,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #1150 = STXVD2X
  { 1151,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x0ULL, ImplicitList13, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #1151 = STXVW4X
  { 1152,	3,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1152 = SUBF
  { 1153,	3,	1,	4,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1153 = SUBF8
  { 1154,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #1154 = SUBF8o
  { 1155,	3,	1,	4,	2,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo12, -1 ,nullptr },  // Inst #1155 = SUBFC
  { 1156,	3,	1,	4,	2,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo14, -1 ,nullptr },  // Inst #1156 = SUBFC8
  { 1157,	3,	1,	4,	2,	0, 0xcULL, nullptr, ImplicitList2, OperandInfo14, -1 ,nullptr },  // Inst #1157 = SUBFC8o
  { 1158,	3,	1,	4,	2,	0, 0xcULL, nullptr, ImplicitList3, OperandInfo12, -1 ,nullptr },  // Inst #1158 = SUBFCo
  { 1159,	3,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo12, -1 ,nullptr },  // Inst #1159 = SUBFE
  { 1160,	3,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14, -1 ,nullptr },  // Inst #1160 = SUBFE8
  { 1161,	3,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14, -1 ,nullptr },  // Inst #1161 = SUBFE8o
  { 1162,	3,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo12, -1 ,nullptr },  // Inst #1162 = SUBFEo
  { 1163,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo13, -1 ,nullptr },  // Inst #1163 = SUBFIC
  { 1164,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList2, OperandInfo15, -1 ,nullptr },  // Inst #1164 = SUBFIC8
  { 1165,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo20, -1 ,nullptr },  // Inst #1165 = SUBFME
  { 1166,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo21, -1 ,nullptr },  // Inst #1166 = SUBFME8
  { 1167,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo21, -1 ,nullptr },  // Inst #1167 = SUBFME8o
  { 1168,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo20, -1 ,nullptr },  // Inst #1168 = SUBFMEo
  { 1169,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo20, -1 ,nullptr },  // Inst #1169 = SUBFZE
  { 1170,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo21, -1 ,nullptr },  // Inst #1170 = SUBFZE8
  { 1171,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo21, -1 ,nullptr },  // Inst #1171 = SUBFZE8o
  { 1172,	2,	1,	4,	2,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo20, -1 ,nullptr },  // Inst #1172 = SUBFZEo
  { 1173,	3,	1,	4,	2,	0, 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #1173 = SUBFo
  { 1174,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1174 = SUBI
  { 1175,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1175 = SUBIC
  { 1176,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1176 = SUBICo
  { 1177,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1177 = SUBIS
  { 1178,	1,	0,	4,	47,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1178 = SYNC
  { 1179,	2,	1,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo177, -1 ,nullptr },  // Inst #1179 = TABORT
  { 1180,	4,	1,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo178, -1 ,nullptr },  // Inst #1180 = TABORTDC
  { 1181,	4,	1,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #1181 = TABORTDCI
  { 1182,	4,	1,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo178, -1 ,nullptr },  // Inst #1182 = TABORTWC
  { 1183,	4,	1,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #1183 = TABORTWCI
  { 1184,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1184 = TAILB
  { 1185,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1185 = TAILB8
  { 1186,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1186 = TAILBA
  { 1187,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1187 = TAILBA8
  { 1188,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, nullptr, nullptr, -1 ,nullptr },  // Inst #1188 = TAILBCTR
  { 1189,	0,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, nullptr, nullptr, -1 ,nullptr },  // Inst #1189 = TAILBCTR8
  { 1190,	2,	1,	4,	49,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1190 = TBEGIN
  { 1191,	1,	0,	4,	49,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1191 = TCHECK
  { 1192,	1,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1192 = TCHECK_RET
  { 1193,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1193 = TCRETURNai
  { 1194,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1194 = TCRETURNai8
  { 1195,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1195 = TCRETURNdi
  { 1196,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1196 = TCRETURNdi8
  { 1197,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #1197 = TCRETURNri
  { 1198,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList13, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #1198 = TCRETURNri8
  { 1199,	3,	0,	4,	77,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo185, -1 ,nullptr },  // Inst #1199 = TD
  { 1200,	3,	0,	4,	77,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1200 = TDI
  { 1201,	2,	1,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1201 = TEND
  { 1202,	0,	0,	4,	78,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1202 = TLBIA
  { 1203,	2,	0,	4,	79,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1203 = TLBIE
  { 1204,	1,	0,	4,	80,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #1204 = TLBIEL
  { 1205,	2,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1205 = TLBIVAX
  { 1206,	1,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #1206 = TLBLD
  { 1207,	1,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #1207 = TLBLI
  { 1208,	0,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1208 = TLBRE
  { 1209,	3,	1,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #1209 = TLBRE2
  { 1210,	2,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1210 = TLBSX
  { 1211,	3,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1211 = TLBSX2
  { 1212,	3,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1212 = TLBSX2D
  { 1213,	0,	0,	4,	81,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1213 = TLBSYNC
  { 1214,	0,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1214 = TLBWE
  { 1215,	3,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #1215 = TLBWE2
  { 1216,	0,	0,	4,	8,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1216 = TRAP
  { 1217,	1,	1,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1217 = TRECHKPT
  { 1218,	2,	1,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo188, -1 ,nullptr },  // Inst #1218 = TRECLAIM
  { 1219,	2,	1,	4,	49,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1219 = TSR
  { 1220,	3,	0,	4,	82,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1220 = TW
  { 1221,	3,	0,	4,	82,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo189, -1 ,nullptr },  // Inst #1221 = TWI
  { 1222,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1222 = UPDATE_VRSAVE
  { 1223,	3,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1223 = UpdateGBR
  { 1224,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1224 = VADDCUQ
  { 1225,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1225 = VADDCUW
  { 1226,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1226 = VADDECUQ
  { 1227,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1227 = VADDEUQM
  { 1228,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1228 = VADDFP
  { 1229,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1229 = VADDSBS
  { 1230,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1230 = VADDSHS
  { 1231,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1231 = VADDSWS
  { 1232,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1232 = VADDUBM
  { 1233,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1233 = VADDUBS
  { 1234,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1234 = VADDUDM
  { 1235,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1235 = VADDUHM
  { 1236,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1236 = VADDUHS
  { 1237,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1237 = VADDUQM
  { 1238,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1238 = VADDUWM
  { 1239,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1239 = VADDUWS
  { 1240,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1240 = VAND
  { 1241,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1241 = VANDC
  { 1242,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1242 = VAVGSB
  { 1243,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1243 = VAVGSH
  { 1244,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1244 = VAVGSW
  { 1245,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1245 = VAVGUB
  { 1246,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1246 = VAVGUH
  { 1247,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1247 = VAVGUW
  { 1248,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1248 = VBPERMQ
  { 1249,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1249 = VCFSX
  { 1250,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1250 = VCFSX_0
  { 1251,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1251 = VCFUX
  { 1252,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1252 = VCFUX_0
  { 1253,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1253 = VCIPHER
  { 1254,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1254 = VCIPHERLAST
  { 1255,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1255 = VCLZB
  { 1256,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1256 = VCLZD
  { 1257,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1257 = VCLZH
  { 1258,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1258 = VCLZW
  { 1259,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1259 = VCMPBFP
  { 1260,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1260 = VCMPBFPo
  { 1261,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1261 = VCMPEQFP
  { 1262,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1262 = VCMPEQFPo
  { 1263,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1263 = VCMPEQUB
  { 1264,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1264 = VCMPEQUBo
  { 1265,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1265 = VCMPEQUD
  { 1266,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1266 = VCMPEQUDo
  { 1267,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1267 = VCMPEQUH
  { 1268,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1268 = VCMPEQUHo
  { 1269,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1269 = VCMPEQUW
  { 1270,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1270 = VCMPEQUWo
  { 1271,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1271 = VCMPGEFP
  { 1272,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1272 = VCMPGEFPo
  { 1273,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1273 = VCMPGTFP
  { 1274,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1274 = VCMPGTFPo
  { 1275,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1275 = VCMPGTSB
  { 1276,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1276 = VCMPGTSBo
  { 1277,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1277 = VCMPGTSD
  { 1278,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1278 = VCMPGTSDo
  { 1279,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1279 = VCMPGTSH
  { 1280,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1280 = VCMPGTSHo
  { 1281,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1281 = VCMPGTSW
  { 1282,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1282 = VCMPGTSWo
  { 1283,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1283 = VCMPGTUB
  { 1284,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1284 = VCMPGTUBo
  { 1285,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1285 = VCMPGTUD
  { 1286,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1286 = VCMPGTUDo
  { 1287,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1287 = VCMPGTUH
  { 1288,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1288 = VCMPGTUHo
  { 1289,	3,	1,	4,	83,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1289 = VCMPGTUW
  { 1290,	3,	1,	4,	83,	0, 0x28ULL, nullptr, ImplicitList24, OperandInfo190, -1 ,nullptr },  // Inst #1290 = VCMPGTUWo
  { 1291,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1291 = VCTSXS
  { 1292,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1292 = VCTSXS_0
  { 1293,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1293 = VCTUXS
  { 1294,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1294 = VCTUXS_0
  { 1295,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1295 = VEQV
  { 1296,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1296 = VEXPTEFP
  { 1297,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1297 = VGBBD
  { 1298,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1298 = VLOGEFP
  { 1299,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1299 = VMADDFP
  { 1300,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1300 = VMAXFP
  { 1301,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1301 = VMAXSB
  { 1302,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1302 = VMAXSD
  { 1303,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1303 = VMAXSH
  { 1304,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1304 = VMAXSW
  { 1305,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1305 = VMAXUB
  { 1306,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1306 = VMAXUD
  { 1307,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1307 = VMAXUH
  { 1308,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1308 = VMAXUW
  { 1309,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1309 = VMHADDSHS
  { 1310,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1310 = VMHRADDSHS
  { 1311,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1311 = VMINFP
  { 1312,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1312 = VMINSB
  { 1313,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1313 = VMINSD
  { 1314,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1314 = VMINSH
  { 1315,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1315 = VMINSW
  { 1316,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1316 = VMINUB
  { 1317,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1317 = VMINUD
  { 1318,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1318 = VMINUH
  { 1319,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1319 = VMINUW
  { 1320,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1320 = VMLADDUHM
  { 1321,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1321 = VMRGEW
  { 1322,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1322 = VMRGHB
  { 1323,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1323 = VMRGHH
  { 1324,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1324 = VMRGHW
  { 1325,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1325 = VMRGLB
  { 1326,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1326 = VMRGLH
  { 1327,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1327 = VMRGLW
  { 1328,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1328 = VMRGOW
  { 1329,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1329 = VMSUMMBM
  { 1330,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1330 = VMSUMSHM
  { 1331,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1331 = VMSUMSHS
  { 1332,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1332 = VMSUMUBM
  { 1333,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1333 = VMSUMUHM
  { 1334,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1334 = VMSUMUHS
  { 1335,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1335 = VMULESB
  { 1336,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1336 = VMULESH
  { 1337,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1337 = VMULESW
  { 1338,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1338 = VMULEUB
  { 1339,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1339 = VMULEUH
  { 1340,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1340 = VMULEUW
  { 1341,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1341 = VMULOSB
  { 1342,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1342 = VMULOSH
  { 1343,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1343 = VMULOSW
  { 1344,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1344 = VMULOUB
  { 1345,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1345 = VMULOUH
  { 1346,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1346 = VMULOUW
  { 1347,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1347 = VMULUWM
  { 1348,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1348 = VNAND
  { 1349,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1349 = VNCIPHER
  { 1350,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1350 = VNCIPHERLAST
  { 1351,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1351 = VNMSUBFP
  { 1352,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1352 = VNOR
  { 1353,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1353 = VOR
  { 1354,	3,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1354 = VORC
  { 1355,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1355 = VPERM
  { 1356,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1356 = VPERMXOR
  { 1357,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1357 = VPKPX
  { 1358,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1358 = VPKSDSS
  { 1359,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1359 = VPKSDUS
  { 1360,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1360 = VPKSHSS
  { 1361,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1361 = VPKSHUS
  { 1362,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1362 = VPKSWSS
  { 1363,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1363 = VPKSWUS
  { 1364,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1364 = VPKUDUM
  { 1365,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1365 = VPKUDUS
  { 1366,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1366 = VPKUHUM
  { 1367,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1367 = VPKUHUS
  { 1368,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1368 = VPKUWUM
  { 1369,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1369 = VPKUWUS
  { 1370,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1370 = VPMSUMB
  { 1371,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1371 = VPMSUMD
  { 1372,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1372 = VPMSUMH
  { 1373,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1373 = VPMSUMW
  { 1374,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1374 = VPOPCNTB
  { 1375,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1375 = VPOPCNTD
  { 1376,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1376 = VPOPCNTH
  { 1377,	2,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1377 = VPOPCNTW
  { 1378,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1378 = VREFP
  { 1379,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1379 = VRFIM
  { 1380,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1380 = VRFIN
  { 1381,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1381 = VRFIP
  { 1382,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1382 = VRFIZ
  { 1383,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1383 = VRLB
  { 1384,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1384 = VRLD
  { 1385,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1385 = VRLH
  { 1386,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1386 = VRLW
  { 1387,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1387 = VRSQRTEFP
  { 1388,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1388 = VSBOX
  { 1389,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1389 = VSEL
  { 1390,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1390 = VSHASIGMAD
  { 1391,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1391 = VSHASIGMAW
  { 1392,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1392 = VSL
  { 1393,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1393 = VSLB
  { 1394,	3,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1394 = VSLD
  { 1395,	4,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1395 = VSLDOI
  { 1396,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1396 = VSLH
  { 1397,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1397 = VSLO
  { 1398,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1398 = VSLW
  { 1399,	3,	1,	4,	58,	0, 0x28ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1399 = VSPLTB
  { 1400,	3,	1,	4,	58,	0, 0x28ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1400 = VSPLTH
  { 1401,	2,	1,	4,	58,	0, 0x28ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1401 = VSPLTISB
  { 1402,	2,	1,	4,	58,	0, 0x28ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1402 = VSPLTISH
  { 1403,	2,	1,	4,	58,	0, 0x28ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1403 = VSPLTISW
  { 1404,	3,	1,	4,	58,	0, 0x28ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1404 = VSPLTW
  { 1405,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1405 = VSR
  { 1406,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1406 = VSRAB
  { 1407,	3,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1407 = VSRAD
  { 1408,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1408 = VSRAH
  { 1409,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1409 = VSRAW
  { 1410,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1410 = VSRB
  { 1411,	3,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1411 = VSRD
  { 1412,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1412 = VSRH
  { 1413,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1413 = VSRO
  { 1414,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1414 = VSRW
  { 1415,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1415 = VSUBCUQ
  { 1416,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1416 = VSUBCUW
  { 1417,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1417 = VSUBECUQ
  { 1418,	4,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1418 = VSUBEUQM
  { 1419,	3,	1,	4,	46,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1419 = VSUBFP
  { 1420,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1420 = VSUBSBS
  { 1421,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1421 = VSUBSHS
  { 1422,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1422 = VSUBSWS
  { 1423,	3,	1,	4,	46,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1423 = VSUBUBM
  { 1424,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1424 = VSUBUBS
  { 1425,	3,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1425 = VSUBUDM
  { 1426,	3,	1,	4,	46,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1426 = VSUBUHM
  { 1427,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1427 = VSUBUHS
  { 1428,	3,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1428 = VSUBUQM
  { 1429,	3,	1,	4,	46,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1429 = VSUBUWM
  { 1430,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1430 = VSUBUWS
  { 1431,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1431 = VSUM2SWS
  { 1432,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1432 = VSUM4SBS
  { 1433,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1433 = VSUM4SHS
  { 1434,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1434 = VSUM4UBS
  { 1435,	3,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1435 = VSUMSWS
  { 1436,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1436 = VUPKHPX
  { 1437,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1437 = VUPKHSB
  { 1438,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1438 = VUPKHSH
  { 1439,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1439 = VUPKHSW
  { 1440,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1440 = VUPKLPX
  { 1441,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1441 = VUPKLSB
  { 1442,	2,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1442 = VUPKLSH
  { 1443,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1443 = VUPKLSW
  { 1444,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x28ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1444 = VXOR
  { 1445,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #1445 = V_SET0
  { 1446,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #1446 = V_SET0B
  { 1447,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #1447 = V_SET0H
  { 1448,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #1448 = V_SETALLONES
  { 1449,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #1449 = V_SETALLONESB
  { 1450,	1,	1,	4,	4,	0, 0x28ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #1450 = V_SETALLONESH
  { 1451,	1,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1451 = WAIT
  { 1452,	1,	0,	4,	51,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #1452 = WRTEE
  { 1453,	1,	0,	4,	51,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1453 = WRTEEI
  { 1454,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1454 = XOR
  { 1455,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1455 = XOR8
  { 1456,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #1456 = XOR8o
  { 1457,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1457 = XORI
  { 1458,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1458 = XORI8
  { 1459,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1459 = XORIS
  { 1460,	3,	1,	4,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1460 = XORIS8
  { 1461,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable), 0x8ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #1461 = XORo
  { 1462,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1462 = XSABSDP
  { 1463,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1463 = XSADDDP
  { 1464,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1464 = XSADDSP
  { 1465,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1465 = XSCMPODP
  { 1466,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1466 = XSCMPUDP
  { 1467,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1467 = XSCPSGNDP
  { 1468,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1468 = XSCVDPSP
  { 1469,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo201, -1 ,nullptr },  // Inst #1469 = XSCVDPSPN
  { 1470,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1470 = XSCVDPSXDS
  { 1471,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1471 = XSCVDPSXWS
  { 1472,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1472 = XSCVDPUXDS
  { 1473,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1473 = XSCVDPUXWS
  { 1474,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1474 = XSCVSPDP
  { 1475,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #1475 = XSCVSPDPN
  { 1476,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1476 = XSCVSXDDP
  { 1477,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #1477 = XSCVSXDSP
  { 1478,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1478 = XSCVUXDDP
  { 1479,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #1479 = XSCVUXDSP
  { 1480,	3,	1,	4,	14,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1480 = XSDIVDP
  { 1481,	3,	1,	4,	15,	0, 0x0ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1481 = XSDIVSP
  { 1482,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1482 = XSMADDADP
  { 1483,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1483 = XSMADDASP
  { 1484,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1484 = XSMADDMDP
  { 1485,	4,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1485 = XSMADDMSP
  { 1486,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1486 = XSMAXDP
  { 1487,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1487 = XSMINDP
  { 1488,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1488 = XSMSUBADP
  { 1489,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1489 = XSMSUBASP
  { 1490,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1490 = XSMSUBMDP
  { 1491,	4,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1491 = XSMSUBMSP
  { 1492,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1492 = XSMULDP
  { 1493,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1493 = XSMULSP
  { 1494,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1494 = XSNABSDP
  { 1495,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1495 = XSNEGDP
  { 1496,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1496 = XSNMADDADP
  { 1497,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1497 = XSNMADDASP
  { 1498,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1498 = XSNMADDMDP
  { 1499,	4,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1499 = XSNMADDMSP
  { 1500,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1500 = XSNMSUBADP
  { 1501,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1501 = XSNMSUBASP
  { 1502,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1502 = XSNMSUBMDP
  { 1503,	4,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1503 = XSNMSUBMSP
  { 1504,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1504 = XSRDPI
  { 1505,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1505 = XSRDPIC
  { 1506,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1506 = XSRDPIM
  { 1507,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1507 = XSRDPIP
  { 1508,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1508 = XSRDPIZ
  { 1509,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1509 = XSREDP
  { 1510,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1510 = XSRESP
  { 1511,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1511 = XSRSQRTEDP
  { 1512,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1512 = XSRSQRTESP
  { 1513,	2,	1,	4,	17,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1513 = XSSQRTDP
  { 1514,	2,	1,	4,	18,	0, 0x0ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1514 = XSSQRTSP
  { 1515,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1515 = XSSUBDP
  { 1516,	3,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1516 = XSSUBSP
  { 1517,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1517 = XSTDIVDP
  { 1518,	2,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1518 = XSTSQRTDP
  { 1519,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1519 = XVABSDP
  { 1520,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1520 = XVABSSP
  { 1521,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1521 = XVADDDP
  { 1522,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1522 = XVADDSP
  { 1523,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1523 = XVCMPEQDP
  { 1524,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo209, -1 ,nullptr },  // Inst #1524 = XVCMPEQDPo
  { 1525,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1525 = XVCMPEQSP
  { 1526,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo209, -1 ,nullptr },  // Inst #1526 = XVCMPEQSPo
  { 1527,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1527 = XVCMPGEDP
  { 1528,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo209, -1 ,nullptr },  // Inst #1528 = XVCMPGEDPo
  { 1529,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1529 = XVCMPGESP
  { 1530,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo209, -1 ,nullptr },  // Inst #1530 = XVCMPGESPo
  { 1531,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1531 = XVCMPGTDP
  { 1532,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo209, -1 ,nullptr },  // Inst #1532 = XVCMPGTDPo
  { 1533,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1533 = XVCMPGTSP
  { 1534,	3,	1,	4,	83,	0, 0x0ULL, ImplicitList13, ImplicitList24, OperandInfo209, -1 ,nullptr },  // Inst #1534 = XVCMPGTSPo
  { 1535,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1535 = XVCPSGNDP
  { 1536,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1536 = XVCPSGNSP
  { 1537,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1537 = XVCVDPSP
  { 1538,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1538 = XVCVDPSXDS
  { 1539,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1539 = XVCVDPSXWS
  { 1540,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1540 = XVCVDPUXDS
  { 1541,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1541 = XVCVDPUXWS
  { 1542,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1542 = XVCVSPDP
  { 1543,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1543 = XVCVSPSXDS
  { 1544,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1544 = XVCVSPSXWS
  { 1545,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1545 = XVCVSPUXDS
  { 1546,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1546 = XVCVSPUXWS
  { 1547,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1547 = XVCVSXDDP
  { 1548,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1548 = XVCVSXDSP
  { 1549,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1549 = XVCVSXWDP
  { 1550,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1550 = XVCVSXWSP
  { 1551,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1551 = XVCVUXDDP
  { 1552,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1552 = XVCVUXDSP
  { 1553,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1553 = XVCVUXWDP
  { 1554,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1554 = XVCVUXWSP
  { 1555,	3,	1,	4,	14,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1555 = XVDIVDP
  { 1556,	3,	1,	4,	15,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1556 = XVDIVSP
  { 1557,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1557 = XVMADDADP
  { 1558,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1558 = XVMADDASP
  { 1559,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1559 = XVMADDMDP
  { 1560,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1560 = XVMADDMSP
  { 1561,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1561 = XVMAXDP
  { 1562,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1562 = XVMAXSP
  { 1563,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1563 = XVMINDP
  { 1564,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1564 = XVMINSP
  { 1565,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1565 = XVMSUBADP
  { 1566,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1566 = XVMSUBASP
  { 1567,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1567 = XVMSUBMDP
  { 1568,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1568 = XVMSUBMSP
  { 1569,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1569 = XVMULDP
  { 1570,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1570 = XVMULSP
  { 1571,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1571 = XVNABSDP
  { 1572,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1572 = XVNABSSP
  { 1573,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1573 = XVNEGDP
  { 1574,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1574 = XVNEGSP
  { 1575,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1575 = XVNMADDADP
  { 1576,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1576 = XVNMADDASP
  { 1577,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1577 = XVNMADDMDP
  { 1578,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1578 = XVNMADDMSP
  { 1579,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1579 = XVNMSUBADP
  { 1580,	4,	1,	4,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1580 = XVNMSUBASP
  { 1581,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1581 = XVNMSUBMDP
  { 1582,	4,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1582 = XVNMSUBMSP
  { 1583,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1583 = XVRDPI
  { 1584,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1584 = XVRDPIC
  { 1585,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1585 = XVRDPIM
  { 1586,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1586 = XVRDPIP
  { 1587,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1587 = XVRDPIZ
  { 1588,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1588 = XVREDP
  { 1589,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1589 = XVRESP
  { 1590,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1590 = XVRSPI
  { 1591,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1591 = XVRSPIC
  { 1592,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1592 = XVRSPIM
  { 1593,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1593 = XVRSPIP
  { 1594,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1594 = XVRSPIZ
  { 1595,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1595 = XVRSQRTEDP
  { 1596,	2,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1596 = XVRSQRTESP
  { 1597,	2,	1,	4,	17,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1597 = XVSQRTDP
  { 1598,	2,	1,	4,	18,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1598 = XVSQRTSP
  { 1599,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1599 = XVSUBDP
  { 1600,	3,	1,	4,	4,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1600 = XVSUBSP
  { 1601,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo211, -1 ,nullptr },  // Inst #1601 = XVTDIVDP
  { 1602,	3,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo211, -1 ,nullptr },  // Inst #1602 = XVTDIVSP
  { 1603,	2,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1603 = XVTSQRTDP
  { 1604,	2,	1,	4,	13,	0, 0x0ULL, ImplicitList13, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1604 = XVTSQRTSP
  { 1605,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1605 = XXLAND
  { 1606,	3,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1606 = XXLANDC
  { 1607,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1607 = XXLEQV
  { 1608,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1608 = XXLNAND
  { 1609,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1609 = XXLNOR
  { 1610,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1610 = XXLOR
  { 1611,	3,	1,	4,	46,	0, 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1611 = XXLORC
  { 1612,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1612 = XXLORf
  { 1613,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1613 = XXLXOR
  { 1614,	3,	1,	4,	58,	0, 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1614 = XXMRGHW
  { 1615,	3,	1,	4,	58,	0, 0x0ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1615 = XXMRGLW
  { 1616,	4,	1,	4,	58,	0, 0x0ULL, nullptr, nullptr, OperandInfo213, -1 ,nullptr },  // Inst #1616 = XXPERMDI
  { 1617,	4,	1,	4,	58,	0, 0x0ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1617 = XXSEL
  { 1618,	4,	1,	4,	58,	0, 0x0ULL, nullptr, nullptr, OperandInfo213, -1 ,nullptr },  // Inst #1618 = XXSLDWI
  { 1619,	3,	1,	4,	58,	0, 0x0ULL, nullptr, nullptr, OperandInfo215, -1 ,nullptr },  // Inst #1619 = XXSPLTW
  { 1620,	3,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo216, -1 ,nullptr },  // Inst #1620 = gBC
  { 1621,	3,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList7, OperandInfo216, -1 ,nullptr },  // Inst #1621 = gBCA
  { 1622,	3,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, OperandInfo217, -1 ,nullptr },  // Inst #1622 = gBCCTR
  { 1623,	3,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList25, OperandInfo217, -1 ,nullptr },  // Inst #1623 = gBCCTRL
  { 1624,	3,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList25, OperandInfo216, -1 ,nullptr },  // Inst #1624 = gBCL
  { 1625,	3,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList25, OperandInfo216, -1 ,nullptr },  // Inst #1625 = gBCLA
  { 1626,	3,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList7, OperandInfo217, -1 ,nullptr },  // Inst #1626 = gBCLR
  { 1627,	3,	0,	4,	3,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList16, ImplicitList25, OperandInfo217, -1 ,nullptr },  // Inst #1627 = gBCLRL
};

extern const char PPCInstrNameData[] = {
  /* 0 */ 'M', 'T', 'F', 'S', 'B', '0', 0,
  /* 7 */ 'V', '_', 'S', 'E', 'T', '0', 0,
  /* 14 */ 'V', 'C', 'T', 'S', 'X', 'S', '_', '0', 0,
  /* 23 */ 'V', 'C', 'T', 'U', 'X', 'S', '_', '0', 0,
  /* 32 */ 'V', 'C', 'F', 'S', 'X', '_', '0', 0,
  /* 40 */ 'V', 'C', 'F', 'U', 'X', '_', '0', 0,
  /* 48 */ 'M', 'T', 'F', 'S', 'B', '1', 0,
  /* 55 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', '3', '2', 0,
  /* 71 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 91 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 111 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 132 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 152 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 168 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 188 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 208 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 227 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', '3', '2', 0,
  /* 240 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', '3', '2', 0,
  /* 253 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', '3', '2', 0,
  /* 267 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', '3', '2', 0,
  /* 281 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 298 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 315 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 330 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', '3', '2', 0,
  /* 343 */ 'L', 'W', 'A', '_', '3', '2', 0,
  /* 350 */ 'L', 'W', 'A', 'X', '_', '3', '2', 0,
  /* 358 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '3', '2', 0,
  /* 376 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '3', '2', 0,
  /* 393 */ 'T', 'L', 'B', 'R', 'E', '2', 0,
  /* 400 */ 'T', 'L', 'B', 'W', 'E', '2', 0,
  /* 407 */ 'T', 'L', 'B', 'S', 'X', '2', 0,
  /* 414 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 434 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 454 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 475 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 495 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 511 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 531 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 551 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 570 */ 'D', 'S', 'T', '6', '4', 0,
  /* 576 */ 'D', 'S', 'T', 'S', 'T', '6', '4', 0,
  /* 584 */ 'D', 'S', 'T', 'T', '6', '4', 0,
  /* 591 */ 'D', 'S', 'T', 'S', 'T', 'T', '6', '4', 0,
  /* 600 */ 'E', 'X', 'T', 'S', 'B', '8', '_', '3', '2', '_', '6', '4', 0,
  /* 613 */ 'E', 'X', 'T', 'S', 'H', '8', '_', '3', '2', '_', '6', '4', 0,
  /* 626 */ 'R', 'L', 'D', 'I', 'C', 'L', '_', '3', '2', '_', '6', '4', 0,
  /* 639 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 0,
  /* 651 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '6', '4', 0,
  /* 669 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '6', '4', 0,
  /* 686 */ 'A', 'D', 'D', '4', 0,
  /* 691 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '4', 0,
  /* 704 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '4', 0,
  /* 714 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '4', 0,
  /* 727 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '4', 0,
  /* 737 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 757 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 777 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 798 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 818 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 834 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 854 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 874 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 893 */ 'N', 'O', 'P', '_', 'G', 'T', '_', 'P', 'W', 'R', '6', 0,
  /* 905 */ 'N', 'O', 'P', '_', 'G', 'T', '_', 'P', 'W', 'R', '7', 0,
  /* 917 */ 'T', 'A', 'I', 'L', 'B', 'A', '8', 0,
  /* 925 */ 'L', 'H', 'A', '8', 0,
  /* 930 */ 'B', 'L', 'A', '8', 0,
  /* 935 */ 'T', 'A', 'I', 'L', 'B', '8', 0,
  /* 942 */ 'C', 'M', 'P', 'B', '8', 0,
  /* 948 */ 'E', 'X', 'T', 'S', 'B', '8', 0,
  /* 955 */ 'M', 'F', 'T', 'B', '8', 0,
  /* 961 */ 'S', 'T', 'B', '8', 0,
  /* 966 */ 'A', 'D', 'D', 'C', '8', 0,
  /* 972 */ 'A', 'N', 'D', 'C', '8', 0,
  /* 978 */ 'S', 'U', 'B', 'F', 'C', '8', 0,
  /* 985 */ 'A', 'D', 'D', 'I', 'C', '8', 0,
  /* 992 */ 'S', 'U', 'B', 'F', 'I', 'C', '8', 0,
  /* 1000 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', '8', 0,
  /* 1010 */ 'O', 'R', 'C', '8', 0,
  /* 1015 */ 'A', 'D', 'D', '8', 0,
  /* 1020 */ 'N', 'A', 'N', 'D', '8', 0,
  /* 1026 */ 'A', 'D', 'D', 'E', '8', 0,
  /* 1032 */ 'S', 'U', 'B', 'F', 'E', '8', 0,
  /* 1039 */ 'A', 'D', 'D', 'M', 'E', '8', 0,
  /* 1046 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 0,
  /* 1054 */ 'A', 'D', 'D', 'Z', 'E', '8', 0,
  /* 1061 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 0,
  /* 1069 */ 'S', 'U', 'B', 'F', '8', 0,
  /* 1075 */ 'M', 'F', 'O', 'C', 'R', 'F', '8', 0,
  /* 1083 */ 'M', 'T', 'O', 'C', 'R', 'F', '8', 0,
  /* 1091 */ 'M', 'T', 'C', 'R', 'F', '8', 0,
  /* 1098 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '8', 0,
  /* 1111 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'F', '8', 0,
  /* 1121 */ 'N', 'E', 'G', '8', 0,
  /* 1126 */ 'E', 'X', 'T', 'S', 'H', '8', 0,
  /* 1133 */ 'S', 'T', 'H', '8', 0,
  /* 1138 */ 'A', 'D', 'D', 'I', '8', 0,
  /* 1144 */ 'M', 'U', 'L', 'L', 'I', '8', 0,
  /* 1151 */ 'R', 'L', 'W', 'I', 'M', 'I', '8', 0,
  /* 1159 */ 'X', 'O', 'R', 'I', '8', 0,
  /* 1165 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 1184 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '8', 0,
  /* 1197 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 1216 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 1236 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 1255 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 1270 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 1289 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 1308 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 1326 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '8', 0,
  /* 1336 */ 'B', 'L', '8', 0,
  /* 1340 */ 'I', 'S', 'E', 'L', '8', 0,
  /* 1346 */ 'B', 'C', 'T', 'R', 'L', '8', 0,
  /* 1353 */ 'B', 'C', 'C', 'T', 'R', 'L', '8', 0,
  /* 1361 */ 'B', 'C', 'C', 'C', 'T', 'R', 'L', '8', 0,
  /* 1370 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 0,
  /* 1378 */ 'R', 'L', 'W', 'N', 'M', '8', 0,
  /* 1385 */ 'M', 'F', 'C', 'R', '8', 0,
  /* 1391 */ 'B', 'L', 'R', '8', 0,
  /* 1396 */ 'M', 'F', 'L', 'R', '8', 0,
  /* 1402 */ 'M', 'T', 'L', 'R', '8', 0,
  /* 1408 */ 'B', 'D', 'Z', 'L', 'R', '8', 0,
  /* 1415 */ 'B', 'D', 'N', 'Z', 'L', 'R', '8', 0,
  /* 1423 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', '8', 0,
  /* 1435 */ 'N', 'O', 'R', '8', 0,
  /* 1440 */ 'X', 'O', 'R', '8', 0,
  /* 1445 */ 'M', 'F', 'S', 'P', 'R', '8', 0,
  /* 1452 */ 'M', 'T', 'S', 'P', 'R', '8', 0,
  /* 1459 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', '8', 0,
  /* 1469 */ 'B', 'C', 'C', 'T', 'R', '8', 0,
  /* 1476 */ 'B', 'C', 'C', 'C', 'T', 'R', '8', 0,
  /* 1484 */ 'M', 'F', 'C', 'T', 'R', '8', 0,
  /* 1491 */ 'M', 'T', 'C', 'T', 'R', '8', 0,
  /* 1498 */ 'A', 'D', 'D', 'I', 'S', '8', 0,
  /* 1505 */ 'L', 'I', 'S', '8', 0,
  /* 1510 */ 'X', 'O', 'R', 'I', 'S', '8', 0,
  /* 1517 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'E', 'Q', '_', 'B', 'I', 'T', '8', 0,
  /* 1533 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'G', 'T', '_', 'B', 'I', 'T', '8', 0,
  /* 1549 */ 'L', 'H', 'A', 'U', '8', 0,
  /* 1555 */ 'S', 'T', 'B', 'U', '8', 0,
  /* 1561 */ 'S', 'T', 'H', 'U', '8', 0,
  /* 1567 */ 'S', 'T', 'W', 'U', '8', 0,
  /* 1573 */ 'L', 'B', 'Z', 'U', '8', 0,
  /* 1579 */ 'L', 'H', 'Z', 'U', '8', 0,
  /* 1585 */ 'L', 'W', 'Z', 'U', '8', 0,
  /* 1591 */ 'E', 'Q', 'V', '8', 0,
  /* 1596 */ 'S', 'L', 'W', '8', 0,
  /* 1601 */ 'S', 'R', 'W', '8', 0,
  /* 1606 */ 'S', 'T', 'W', '8', 0,
  /* 1611 */ 'C', 'N', 'T', 'L', 'Z', 'W', '8', 0,
  /* 1619 */ 'L', 'H', 'A', 'X', '8', 0,
  /* 1625 */ 'S', 'T', 'B', 'X', '8', 0,
  /* 1631 */ 'S', 'T', 'H', 'X', '8', 0,
  /* 1637 */ 'L', 'H', 'B', 'R', 'X', '8', 0,
  /* 1644 */ 'L', 'W', 'B', 'R', 'X', '8', 0,
  /* 1651 */ 'L', 'H', 'A', 'U', 'X', '8', 0,
  /* 1658 */ 'S', 'T', 'B', 'U', 'X', '8', 0,
  /* 1665 */ 'S', 'T', 'H', 'U', 'X', '8', 0,
  /* 1672 */ 'S', 'T', 'W', 'U', 'X', '8', 0,
  /* 1679 */ 'L', 'B', 'Z', 'U', 'X', '8', 0,
  /* 1686 */ 'L', 'H', 'Z', 'U', 'X', '8', 0,
  /* 1693 */ 'L', 'W', 'Z', 'U', 'X', '8', 0,
  /* 1700 */ 'S', 'T', 'W', 'X', '8', 0,
  /* 1706 */ 'L', 'B', 'Z', 'X', '8', 0,
  /* 1712 */ 'L', 'H', 'Z', 'X', '8', 0,
  /* 1718 */ 'L', 'W', 'Z', 'X', '8', 0,
  /* 1724 */ 'L', 'B', 'Z', '8', 0,
  /* 1729 */ 'B', 'D', 'Z', '8', 0,
  /* 1734 */ 'L', 'H', 'Z', '8', 0,
  /* 1739 */ 'B', 'D', 'N', 'Z', '8', 0,
  /* 1745 */ 'L', 'W', 'Z', '8', 0,
  /* 1750 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', '8', 0,
  /* 1762 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', '8', 0,
  /* 1774 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', '8', 0,
  /* 1786 */ 'A', 'N', 'D', 'I', 'o', '8', 0,
  /* 1793 */ 'A', 'N', 'D', 'I', 'S', 'o', '8', 0,
  /* 1801 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'F', 'A', 'A', 0,
  /* 1813 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'F', 'A', 'A', 0,
  /* 1825 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 'A', 'A', 0,
  /* 1835 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 'A', 'A', 0,
  /* 1845 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'I', 'A', 'A', 0,
  /* 1857 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'I', 'A', 'A', 0,
  /* 1869 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 'A', 'A', 0,
  /* 1879 */ 'E', 'V', 'M', 'H', 'E', 'G', 'U', 'M', 'I', 'A', 'A', 0,
  /* 1891 */ 'E', 'V', 'M', 'H', 'O', 'G', 'U', 'M', 'I', 'A', 'A', 0,
  /* 1903 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 'A', 'A', 0,
  /* 1913 */ 'D', 'C', 'B', 'A', 0,
  /* 1918 */ 'T', 'A', 'I', 'L', 'B', 'A', 0,
  /* 1925 */ 'L', 'D', 't', 'o', 'c', 'B', 'A', 0,
  /* 1933 */ 'g', 'B', 'C', 'A', 0,
  /* 1938 */ 'B', 'C', 'C', 'A', 0,
  /* 1943 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 'A', 0,
  /* 1953 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'F', 'A', 0,
  /* 1963 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 'A', 0,
  /* 1973 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 'A', 0,
  /* 1982 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 'A', 0,
  /* 1992 */ 'E', 'V', 'M', 'W', 'H', 'S', 'S', 'F', 'A', 0,
  /* 2002 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 'A', 0,
  /* 2012 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 'A', 0,
  /* 2021 */ 'L', 'H', 'A', 0,
  /* 2025 */ 'A', 'D', 'D', 'I', 'S', 't', 'o', 'c', 'H', 'A', 0,
  /* 2036 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'g', 'd', 'H', 'A', 0,
  /* 2049 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'l', 'd', 'H', 'A', 0,
  /* 2062 */ 'A', 'D', 'D', 'I', 'S', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 2078 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 2092 */ 'S', 'L', 'B', 'I', 'A', 0,
  /* 2098 */ 'T', 'L', 'B', 'I', 'A', 0,
  /* 2104 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 'A', 0,
  /* 2114 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'I', 'A', 0,
  /* 2124 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 'A', 0,
  /* 2134 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 'A', 0,
  /* 2143 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 'A', 0,
  /* 2153 */ 'E', 'V', 'M', 'W', 'H', 'U', 'M', 'I', 'A', 0,
  /* 2163 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 'A', 0,
  /* 2173 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 'A', 0,
  /* 2183 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 'A', 0,
  /* 2192 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'X', 'I', 'A', 0,
  /* 2203 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 'I', 'A', 0,
  /* 2213 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 'I', 'A', 0,
  /* 2224 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 'I', 'A', 0,
  /* 2234 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'U', 'X', 'I', 'A', 0,
  /* 2246 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'U', 'X', 'I', 'A', 0,
  /* 2257 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'U', 'X', 'I', 'A', 0,
  /* 2269 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 'I', 'A', 0,
  /* 2280 */ 'B', 'L', 'A', 0,
  /* 2284 */ 'g', 'B', 'C', 'L', 'A', 0,
  /* 2290 */ 'B', 'C', 'C', 'L', 'A', 0,
  /* 2296 */ 'B', 'D', 'Z', 'L', 'A', 0,
  /* 2302 */ 'B', 'D', 'N', 'Z', 'L', 'A', 0,
  /* 2309 */ 'E', 'V', 'M', 'R', 'A', 0,
  /* 2315 */ 'L', 'W', 'A', 0,
  /* 2319 */ 'M', 'T', 'V', 'S', 'R', 'W', 'A', 0,
  /* 2327 */ 'Q', 'V', 'L', 'F', 'I', 'W', 'A', 'X', 'A', 0,
  /* 2337 */ 'Q', 'V', 'L', 'F', 'C', 'D', 'X', 'A', 0,
  /* 2346 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'X', 'A', 0,
  /* 2356 */ 'Q', 'V', 'L', 'F', 'D', 'X', 'A', 0,
  /* 2364 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 'A', 0,
  /* 2373 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'X', 'A', 0,
  /* 2382 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 'A', 0,
  /* 2392 */ 'Q', 'V', 'L', 'F', 'S', 'X', 'A', 0,
  /* 2400 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 'A', 0,
  /* 2409 */ 'Q', 'V', 'L', 'F', 'C', 'D', 'U', 'X', 'A', 0,
  /* 2419 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'U', 'X', 'A', 0,
  /* 2430 */ 'Q', 'V', 'L', 'F', 'D', 'U', 'X', 'A', 0,
  /* 2439 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'U', 'X', 'A', 0,
  /* 2449 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'U', 'X', 'A', 0,
  /* 2459 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'U', 'X', 'A', 0,
  /* 2470 */ 'Q', 'V', 'L', 'F', 'S', 'U', 'X', 'A', 0,
  /* 2479 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 'A', 0,
  /* 2489 */ 'Q', 'V', 'S', 'T', 'F', 'I', 'W', 'X', 'A', 0,
  /* 2499 */ 'Q', 'V', 'L', 'F', 'I', 'W', 'Z', 'X', 'A', 0,
  /* 2509 */ 'B', 'D', 'Z', 'A', 0,
  /* 2514 */ 'B', 'D', 'N', 'Z', 'A', 0,
  /* 2520 */ 'V', '_', 'S', 'E', 'T', '0', 'B', 0,
  /* 2528 */ 'V', 'S', 'R', 'A', 'B', 0,
  /* 2534 */ 'R', 'F', 'E', 'B', 'B', 0,
  /* 2540 */ 'V', 'M', 'R', 'G', 'H', 'B', 0,
  /* 2547 */ 'V', 'M', 'R', 'G', 'L', 'B', 0,
  /* 2554 */ 'T', 'A', 'I', 'L', 'B', 0,
  /* 2560 */ 'V', 'R', 'L', 'B', 0,
  /* 2565 */ 'V', 'S', 'L', 'B', 0,
  /* 2570 */ 'V', 'P', 'M', 'S', 'U', 'M', 'B', 0,
  /* 2578 */ 'C', 'M', 'P', 'B', 0,
  /* 2583 */ 'C', 'L', 'R', 'B', 'H', 'R', 'B', 0,
  /* 2591 */ 'V', 'S', 'R', 'B', 0,
  /* 2596 */ 'V', 'M', 'U', 'L', 'E', 'S', 'B', 0,
  /* 2604 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 'B', 0,
  /* 2618 */ 'V', 'A', 'V', 'G', 'S', 'B', 0,
  /* 2625 */ 'V', 'U', 'P', 'K', 'H', 'S', 'B', 0,
  /* 2633 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'B', 0,
  /* 2642 */ 'V', 'U', 'P', 'K', 'L', 'S', 'B', 0,
  /* 2650 */ 'V', 'M', 'I', 'N', 'S', 'B', 0,
  /* 2657 */ 'V', 'M', 'U', 'L', 'O', 'S', 'B', 0,
  /* 2665 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 0,
  /* 2674 */ 'E', 'V', 'E', 'X', 'T', 'S', 'B', 0,
  /* 2682 */ 'V', 'M', 'A', 'X', 'S', 'B', 0,
  /* 2689 */ 'M', 'F', 'T', 'B', 0,
  /* 2694 */ 'V', 'S', 'P', 'L', 'T', 'B', 0,
  /* 2701 */ 'V', 'P', 'O', 'P', 'C', 'N', 'T', 'B', 0,
  /* 2710 */ 'S', 'T', 'B', 0,
  /* 2714 */ 'R', 'e', 'a', 'd', 'T', 'B', 0,
  /* 2721 */ 'V', 'M', 'U', 'L', 'E', 'U', 'B', 0,
  /* 2729 */ 'V', 'A', 'V', 'G', 'U', 'B', 0,
  /* 2736 */ 'V', 'M', 'I', 'N', 'U', 'B', 0,
  /* 2743 */ 'V', 'M', 'U', 'L', 'O', 'U', 'B', 0,
  /* 2751 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 0,
  /* 2760 */ 'Q', 'V', 'F', 'S', 'U', 'B', 0,
  /* 2767 */ 'Q', 'V', 'F', 'M', 'S', 'U', 'B', 0,
  /* 2775 */ 'Q', 'V', 'F', 'N', 'M', 'S', 'U', 'B', 0,
  /* 2784 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 0,
  /* 2793 */ 'V', 'M', 'A', 'X', 'U', 'B', 0,
  /* 2800 */ 'V', 'C', 'L', 'Z', 'B', 0,
  /* 2806 */ 'g', 'B', 'C', 0,
  /* 2810 */ 'B', 'C', 'C', 0,
  /* 2814 */ 'A', 'D', 'D', 'C', 0,
  /* 2819 */ 'X', 'X', 'L', 'A', 'N', 'D', 'C', 0,
  /* 2827 */ 'C', 'R', 'A', 'N', 'D', 'C', 0,
  /* 2834 */ 'E', 'V', 'A', 'N', 'D', 'C', 0,
  /* 2841 */ 'T', 'A', 'B', 'O', 'R', 'T', 'D', 'C', 0,
  /* 2850 */ 'S', 'U', 'B', 'F', 'C', 0,
  /* 2856 */ 'S', 'U', 'B', 'I', 'C', 0,
  /* 2862 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 2868 */ 'R', 'L', 'D', 'I', 'C', 0,
  /* 2874 */ 'S', 'U', 'B', 'F', 'I', 'C', 0,
  /* 2881 */ 'X', 'S', 'R', 'D', 'P', 'I', 'C', 0,
  /* 2889 */ 'X', 'V', 'R', 'D', 'P', 'I', 'C', 0,
  /* 2897 */ 'X', 'V', 'R', 'S', 'P', 'I', 'C', 0,
  /* 2905 */ 'B', 'R', 'I', 'N', 'C', 0,
  /* 2911 */ 'T', 'L', 'B', 'S', 'Y', 'N', 'C', 0,
  /* 2919 */ 'I', 'S', 'Y', 'N', 'C', 0,
  /* 2925 */ 'M', 'S', 'Y', 'N', 'C', 0,
  /* 2931 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 2940 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'B', 'R', 'C', 0,
  /* 2955 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'Q', 'B', 'R', 'C', 0,
  /* 2967 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'R', 'C', 0,
  /* 2982 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'Q', 'F', 'R', 'C', 0,
  /* 2994 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'S', 'F', 'R', 'C', 0,
  /* 3010 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'S', 'F', 'R', 'C', 0,
  /* 3023 */ 'X', 'X', 'L', 'O', 'R', 'C', 0,
  /* 3030 */ 'C', 'R', 'O', 'R', 'C', 0,
  /* 3036 */ 'E', 'V', 'O', 'R', 'C', 0,
  /* 3042 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'R', 'R', 'C', 0,
  /* 3057 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'R', 'R', 'C', 0,
  /* 3069 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'S', 'R', 'C', 0,
  /* 3084 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'Q', 'S', 'R', 'C', 0,
  /* 3096 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'S', 'S', 'R', 'C', 0,
  /* 3112 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'S', 'S', 'R', 'C', 0,
  /* 3125 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'S', 'R', 'C', 0,
  /* 3140 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'V', 'S', 'R', 'C', 0,
  /* 3152 */ 'S', 'C', 0,
  /* 3155 */ 'T', 'A', 'B', 'O', 'R', 'T', 'W', 'C', 0,
  /* 3164 */ 'T', 'L', 'B', 'S', 'X', '2', 'D', 0,
  /* 3172 */ 'V', 'S', 'H', 'A', 'S', 'I', 'G', 'M', 'A', 'D', 0,
  /* 3183 */ 'V', 'S', 'R', 'A', 'D', 0,
  /* 3189 */ 'V', 'G', 'B', 'B', 'D', 0,
  /* 3195 */ 'Q', 'V', 'F', 'A', 'D', 'D', 0,
  /* 3202 */ 'Q', 'V', 'F', 'M', 'A', 'D', 'D', 0,
  /* 3210 */ 'Q', 'V', 'F', 'N', 'M', 'A', 'D', 'D', 0,
  /* 3219 */ 'Q', 'V', 'F', 'X', 'X', 'C', 'P', 'N', 'M', 'A', 'D', 'D', 0,
  /* 3232 */ 'Q', 'V', 'F', 'X', 'X', 'N', 'P', 'M', 'A', 'D', 'D', 0,
  /* 3244 */ 'Q', 'V', 'F', 'X', 'M', 'A', 'D', 'D', 0,
  /* 3253 */ 'Q', 'V', 'F', 'X', 'X', 'M', 'A', 'D', 'D', 0,
  /* 3263 */ 'E', 'V', 'L', 'D', 'D', 0,
  /* 3269 */ 'E', 'V', 'S', 'T', 'D', 'D', 0,
  /* 3276 */ 'L', 'F', 'D', 0,
  /* 3280 */ 'S', 'T', 'F', 'D', 0,
  /* 3285 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 3291 */ 'M', 'U', 'L', 'H', 'D', 0,
  /* 3297 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 0,
  /* 3305 */ 'R', 'F', 'I', 'D', 0,
  /* 3310 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 0,
  /* 3318 */ 'T', 'L', 'B', 'L', 'D', 0,
  /* 3324 */ 'F', 'S', 'E', 'L', 'D', 0,
  /* 3330 */ 'M', 'U', 'L', 'L', 'D', 0,
  /* 3336 */ 'C', 'M', 'P', 'L', 'D', 0,
  /* 3342 */ 'V', 'R', 'L', 'D', 0,
  /* 3347 */ 'V', 'S', 'L', 'D', 0,
  /* 3352 */ 'F', 'R', 'I', 'M', 'D', 0,
  /* 3358 */ 'B', 'P', 'E', 'R', 'M', 'D', 0,
  /* 3365 */ 'V', 'P', 'M', 'S', 'U', 'M', 'D', 0,
  /* 3373 */ 'X', 'X', 'L', 'A', 'N', 'D', 0,
  /* 3380 */ 'X', 'X', 'L', 'N', 'A', 'N', 'D', 0,
  /* 3388 */ 'C', 'R', 'N', 'A', 'N', 'D', 0,
  /* 3395 */ 'E', 'V', 'N', 'A', 'N', 'D', 0,
  /* 3402 */ 'C', 'R', 'A', 'N', 'D', 0,
  /* 3408 */ 'E', 'V', 'A', 'N', 'D', 0,
  /* 3414 */ 'T', 'E', 'N', 'D', 0,
  /* 3419 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 3432 */ 'F', 'C', 'P', 'S', 'G', 'N', 'D', 0,
  /* 3440 */ 'F', 'R', 'I', 'N', 'D', 0,
  /* 3446 */ 'F', 'R', 'I', 'P', 'D', 0,
  /* 3452 */ 'C', 'M', 'P', 'D', 0,
  /* 3457 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 3474 */ 'M', 'T', 'M', 'S', 'R', 'D', 0,
  /* 3481 */ 'M', 'F', 'V', 'S', 'R', 'D', 0,
  /* 3488 */ 'M', 'T', 'V', 'S', 'R', 'D', 0,
  /* 3495 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 3501 */ 'F', 'N', 'A', 'B', 'S', 'D', 0,
  /* 3508 */ 'V', 'M', 'I', 'N', 'S', 'D', 0,
  /* 3515 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'D', 0,
  /* 3524 */ 'V', 'M', 'A', 'X', 'S', 'D', 0,
  /* 3531 */ 'V', 'P', 'O', 'P', 'C', 'N', 'T', 'D', 0,
  /* 3540 */ 'S', 'T', 'D', 0,
  /* 3544 */ 'V', 'M', 'I', 'N', 'U', 'D', 0,
  /* 3551 */ 'F', 'C', 'M', 'P', 'U', 'D', 0,
  /* 3558 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'D', 0,
  /* 3567 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'D', 0,
  /* 3576 */ 'V', 'M', 'A', 'X', 'U', 'D', 0,
  /* 3583 */ 'D', 'I', 'V', 'D', 0,
  /* 3588 */ 'F', 'R', 'I', 'Z', 'D', 0,
  /* 3594 */ 'V', 'C', 'L', 'Z', 'D', 0,
  /* 3600 */ 'C', 'N', 'T', 'L', 'Z', 'D', 0,
  /* 3607 */ 'M', 'F', 'B', 'H', 'R', 'B', 'E', 0,
  /* 3615 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 3628 */ 'A', 'D', 'D', 'E', 0,
  /* 3633 */ 'D', 'I', 'V', 'D', 'E', 0,
  /* 3639 */ 'S', 'L', 'B', 'M', 'F', 'E', 'E', 0,
  /* 3647 */ 'W', 'R', 'T', 'E', 'E', 0,
  /* 3653 */ 'S', 'U', 'B', 'F', 'E', 0,
  /* 3659 */ 'E', 'V', 'L', 'W', 'H', 'E', 0,
  /* 3666 */ 'E', 'V', 'S', 'T', 'W', 'H', 'E', 0,
  /* 3674 */ 'S', 'L', 'B', 'I', 'E', 0,
  /* 3680 */ 'T', 'L', 'B', 'I', 'E', 0,
  /* 3686 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 3693 */ 'A', 'D', 'D', 'M', 'E', 0,
  /* 3699 */ 'S', 'U', 'B', 'F', 'M', 'E', 0,
  /* 3706 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 3719 */ 'T', 'L', 'B', 'R', 'E', 0,
  /* 3725 */ 'Q', 'V', 'F', 'R', 'E', 0,
  /* 3731 */ 'S', 'L', 'B', 'M', 'T', 'E', 0,
  /* 3738 */ 'Q', 'V', 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 0,
  /* 3748 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 3758 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3767 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3776 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3791 */ 'U', 'P', 'D', 'A', 'T', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3805 */ 'S', 'P', 'I', 'L', 'L', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 3818 */ 'T', 'L', 'B', 'W', 'E', 0,
  /* 3824 */ 'D', 'I', 'V', 'W', 'E', 0,
  /* 3830 */ 'E', 'V', 'S', 'T', 'W', 'W', 'E', 0,
  /* 3838 */ 'A', 'D', 'D', 'Z', 'E', 0,
  /* 3844 */ 'S', 'U', 'B', 'F', 'Z', 'E', 0,
  /* 3851 */ 'D', 'C', 'B', 'F', 0,
  /* 3856 */ 'S', 'U', 'B', 'F', 0,
  /* 3861 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 3874 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 0,
  /* 3883 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'F', 0,
  /* 3892 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 0,
  /* 3901 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 0,
  /* 3909 */ 'M', 'C', 'R', 'F', 0,
  /* 3914 */ 'M', 'F', 'O', 'C', 'R', 'F', 0,
  /* 3921 */ 'M', 'T', 'O', 'C', 'R', 'F', 0,
  /* 3928 */ 'M', 'T', 'C', 'R', 'F', 0,
  /* 3934 */ 'M', 'T', 'F', 'S', 'F', 0,
  /* 3940 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 0,
  /* 3949 */ 'E', 'V', 'M', 'W', 'H', 'S', 'S', 'F', 0,
  /* 3958 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 0,
  /* 3967 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 0,
  /* 3975 */ 'Q', 'V', 'F', 'N', 'E', 'G', 0,
  /* 3982 */ 'E', 'V', 'N', 'E', 'G', 0,
  /* 3988 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 4003 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 4017 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 4031 */ 'V', '_', 'S', 'E', 'T', '0', 'H', 0,
  /* 4039 */ 'V', 'S', 'R', 'A', 'H', 0,
  /* 4045 */ 'E', 'V', 'L', 'D', 'H', 0,
  /* 4051 */ 'E', 'V', 'S', 'T', 'D', 'H', 0,
  /* 4058 */ 'V', 'M', 'R', 'G', 'H', 'H', 0,
  /* 4065 */ 'V', 'M', 'R', 'G', 'L', 'H', 0,
  /* 4072 */ 'V', 'R', 'L', 'H', 0,
  /* 4077 */ 'V', 'S', 'L', 'H', 0,
  /* 4082 */ 'V', 'P', 'M', 'S', 'U', 'M', 'H', 0,
  /* 4090 */ 'V', 'S', 'R', 'H', 0,
  /* 4095 */ 'V', 'M', 'U', 'L', 'E', 'S', 'H', 0,
  /* 4103 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 'H', 0,
  /* 4117 */ 'V', 'A', 'V', 'G', 'S', 'H', 0,
  /* 4124 */ 'V', 'U', 'P', 'K', 'H', 'S', 'H', 0,
  /* 4132 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'H', 0,
  /* 4141 */ 'V', 'U', 'P', 'K', 'L', 'S', 'H', 0,
  /* 4149 */ 'V', 'M', 'I', 'N', 'S', 'H', 0,
  /* 4156 */ 'V', 'M', 'U', 'L', 'O', 'S', 'H', 0,
  /* 4164 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 0,
  /* 4173 */ 'E', 'V', 'E', 'X', 'T', 'S', 'H', 0,
  /* 4181 */ 'V', 'M', 'A', 'X', 'S', 'H', 0,
  /* 4188 */ 'V', 'S', 'P', 'L', 'T', 'H', 0,
  /* 4195 */ 'V', 'P', 'O', 'P', 'C', 'N', 'T', 'H', 0,
  /* 4204 */ 'S', 'T', 'H', 0,
  /* 4208 */ 'V', 'M', 'U', 'L', 'E', 'U', 'H', 0,
  /* 4216 */ 'V', 'A', 'V', 'G', 'U', 'H', 0,
  /* 4223 */ 'V', 'M', 'I', 'N', 'U', 'H', 0,
  /* 4230 */ 'V', 'M', 'U', 'L', 'O', 'U', 'H', 0,
  /* 4238 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 0,
  /* 4247 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 0,
  /* 4256 */ 'V', 'M', 'A', 'X', 'U', 'H', 0,
  /* 4263 */ 'V', 'C', 'L', 'Z', 'H', 0,
  /* 4269 */ 'D', 'C', 'B', 'I', 0,
  /* 4274 */ 'I', 'C', 'B', 'I', 0,
  /* 4279 */ 'S', 'U', 'B', 'I', 0,
  /* 4284 */ 'D', 'C', 'C', 'C', 'I', 0,
  /* 4290 */ 'I', 'C', 'C', 'C', 'I', 0,
  /* 4296 */ 'T', 'A', 'B', 'O', 'R', 'T', 'D', 'C', 'I', 0,
  /* 4306 */ 'R', 'F', 'C', 'I', 0,
  /* 4311 */ 'R', 'F', 'M', 'C', 'I', 0,
  /* 4317 */ 'Q', 'V', 'G', 'P', 'C', 'I', 0,
  /* 4324 */ 'T', 'A', 'B', 'O', 'R', 'T', 'W', 'C', 'I', 0,
  /* 4334 */ 'S', 'R', 'A', 'D', 'I', 0,
  /* 4340 */ 'A', 'D', 'D', 'I', 0,
  /* 4345 */ 'R', 'F', 'D', 'I', 0,
  /* 4350 */ 'C', 'M', 'P', 'L', 'D', 'I', 0,
  /* 4357 */ 'C', 'L', 'R', 'L', 'S', 'L', 'D', 'I', 0,
  /* 4366 */ 'E', 'X', 'T', 'L', 'D', 'I', 0,
  /* 4373 */ 'X', 'X', 'P', 'E', 'R', 'M', 'D', 'I', 0,
  /* 4382 */ 'C', 'M', 'P', 'D', 'I', 0,
  /* 4388 */ 'C', 'L', 'R', 'R', 'D', 'I', 0,
  /* 4395 */ 'I', 'N', 'S', 'R', 'D', 'I', 0,
  /* 4402 */ 'R', 'O', 'T', 'R', 'D', 'I', 0,
  /* 4409 */ 'E', 'X', 'T', 'R', 'D', 'I', 0,
  /* 4416 */ 'T', 'D', 'I', 0,
  /* 4420 */ 'W', 'R', 'T', 'E', 'E', 'I', 0,
  /* 4427 */ 'R', 'F', 'I', 0,
  /* 4431 */ 'M', 'T', 'F', 'S', 'F', 'I', 0,
  /* 4438 */ 'E', 'V', 'S', 'P', 'L', 'A', 'T', 'F', 'I', 0,
  /* 4448 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'H', 'I', 0,
  /* 4458 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'L', 'O', 'H', 'I', 0,
  /* 4470 */ 'P', 'H', 'I', 0,
  /* 4474 */ 'T', 'L', 'B', 'L', 'I', 0,
  /* 4480 */ 'M', 'U', 'L', 'L', 'I', 0,
  /* 4486 */ 'R', 'L', 'D', 'I', 'M', 'I', 0,
  /* 4493 */ 'R', 'L', 'W', 'I', 'M', 'I', 0,
  /* 4500 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 0,
  /* 4509 */ 'E', 'V', 'M', 'W', 'H', 'S', 'M', 'I', 0,
  /* 4518 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 0,
  /* 4527 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 0,
  /* 4535 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 0,
  /* 4544 */ 'E', 'V', 'M', 'W', 'H', 'U', 'M', 'I', 0,
  /* 4553 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 0,
  /* 4562 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 0,
  /* 4571 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 0,
  /* 4579 */ 'Q', 'V', 'A', 'L', 'I', 'G', 'N', 'I', 0,
  /* 4588 */ 'V', 'S', 'L', 'D', 'O', 'I', 0,
  /* 4595 */ 'X', 'S', 'R', 'D', 'P', 'I', 0,
  /* 4602 */ 'X', 'V', 'R', 'D', 'P', 'I', 0,
  /* 4609 */ 'X', 'V', 'R', 'S', 'P', 'I', 0,
  /* 4616 */ 'X', 'O', 'R', 'I', 0,
  /* 4621 */ 'Q', 'V', 'E', 'S', 'P', 'L', 'A', 'T', 'I', 0,
  /* 4631 */ 'E', 'V', 'S', 'P', 'L', 'A', 'T', 'I', 0,
  /* 4640 */ 'L', 'D', 't', 'o', 'c', 'J', 'T', 'I', 0,
  /* 4649 */ 'S', 'R', 'A', 'W', 'I', 0,
  /* 4655 */ 'X', 'X', 'S', 'L', 'D', 'W', 'I', 0,
  /* 4663 */ 'C', 'M', 'P', 'L', 'W', 'I', 0,
  /* 4670 */ 'E', 'V', 'R', 'L', 'W', 'I', 0,
  /* 4677 */ 'C', 'L', 'R', 'L', 'S', 'L', 'W', 'I', 0,
  /* 4686 */ 'I', 'N', 'S', 'L', 'W', 'I', 0,
  /* 4693 */ 'E', 'V', 'S', 'L', 'W', 'I', 0,
  /* 4700 */ 'E', 'X', 'T', 'L', 'W', 'I', 0,
  /* 4707 */ 'C', 'M', 'P', 'W', 'I', 0,
  /* 4713 */ 'C', 'L', 'R', 'R', 'W', 'I', 0,
  /* 4720 */ 'I', 'N', 'S', 'R', 'W', 'I', 0,
  /* 4727 */ 'R', 'O', 'T', 'R', 'W', 'I', 0,
  /* 4734 */ 'E', 'X', 'T', 'R', 'W', 'I', 0,
  /* 4741 */ 'L', 'S', 'W', 'I', 0,
  /* 4746 */ 'S', 'T', 'S', 'W', 'I', 0,
  /* 4752 */ 'T', 'W', 'I', 0,
  /* 4756 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'X', 'I', 0,
  /* 4766 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 'I', 0,
  /* 4775 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 'I', 0,
  /* 4785 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 'I', 0,
  /* 4794 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'U', 'X', 'I', 0,
  /* 4805 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'U', 'X', 'I', 0,
  /* 4815 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'U', 'X', 'I', 0,
  /* 4826 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 'I', 0,
  /* 4836 */ 'T', 'C', 'H', 'E', 'C', 'K', 0,
  /* 4843 */ 'Q', 'V', 'F', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 0,
  /* 4854 */ 'B', 'L', 0,
  /* 4857 */ 'g', 'B', 'C', 'L', 0,
  /* 4862 */ 'B', 'C', 'C', 'L', 0,
  /* 4867 */ 'R', 'L', 'D', 'C', 'L', 0,
  /* 4873 */ 'R', 'L', 'D', 'I', 'C', 'L', 0,
  /* 4880 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4889 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4898 */ 'T', 'L', 'B', 'I', 'E', 'L', 0,
  /* 4905 */ 'Q', 'V', 'F', 'S', 'E', 'L', 0,
  /* 4912 */ 'I', 'S', 'E', 'L', 0,
  /* 4917 */ 'V', 'S', 'E', 'L', 0,
  /* 4922 */ 'X', 'X', 'S', 'E', 'L', 0,
  /* 4928 */ 'D', 'S', 'S', 'A', 'L', 'L', 0,
  /* 4935 */ 'K', 'I', 'L', 'L', 0,
  /* 4940 */ 'B', 'L', 'R', 'L', 0,
  /* 4945 */ 'g', 'B', 'C', 'L', 'R', 'L', 0,
  /* 4952 */ 'B', 'C', 'C', 'L', 'R', 'L', 0,
  /* 4959 */ 'B', 'D', 'Z', 'L', 'R', 'L', 0,
  /* 4966 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 0,
  /* 4974 */ 'B', 'C', 'T', 'R', 'L', 0,
  /* 4980 */ 'g', 'B', 'C', 'C', 'T', 'R', 'L', 0,
  /* 4988 */ 'B', 'C', 'C', 'C', 'T', 'R', 'L', 0,
  /* 4996 */ 'L', 'V', 'S', 'L', 0,
  /* 5001 */ 'Q', 'V', 'F', 'M', 'U', 'L', 0,
  /* 5008 */ 'Q', 'V', 'F', 'X', 'M', 'U', 'L', 0,
  /* 5016 */ 'L', 'B', 'A', 'R', 'X', 'L', 0,
  /* 5023 */ 'L', 'D', 'A', 'R', 'X', 'L', 0,
  /* 5030 */ 'L', 'H', 'A', 'R', 'X', 'L', 0,
  /* 5037 */ 'L', 'W', 'A', 'R', 'X', 'L', 0,
  /* 5044 */ 'L', 'V', 'X', 'L', 0,
  /* 5049 */ 'S', 'T', 'V', 'X', 'L', 0,
  /* 5055 */ 'D', 'C', 'B', 'Z', 'L', 0,
  /* 5061 */ 'B', 'D', 'Z', 'L', 0,
  /* 5066 */ 'B', 'D', 'N', 'Z', 'L', 0,
  /* 5072 */ 'L', 'D', 't', 'o', 'c', 'L', 0,
  /* 5079 */ 'A', 'D', 'D', 'I', 't', 'o', 'c', 'L', 0,
  /* 5088 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 0,
  /* 5099 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 0,
  /* 5110 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', 0,
  /* 5122 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', 0,
  /* 5134 */ 'V', 'M', 'S', 'U', 'M', 'M', 'B', 'M', 0,
  /* 5143 */ 'V', 'S', 'U', 'B', 'U', 'B', 'M', 0,
  /* 5151 */ 'V', 'A', 'D', 'D', 'U', 'B', 'M', 0,
  /* 5159 */ 'V', 'M', 'S', 'U', 'M', 'U', 'B', 'M', 0,
  /* 5168 */ 'V', 'S', 'U', 'B', 'U', 'D', 'M', 0,
  /* 5176 */ 'V', 'A', 'D', 'D', 'U', 'D', 'M', 0,
  /* 5184 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'M', 0,
  /* 5193 */ 'V', 'S', 'U', 'B', 'U', 'H', 'M', 0,
  /* 5201 */ 'V', 'M', 'L', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 5211 */ 'V', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 5219 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'M', 0,
  /* 5228 */ 'T', 'R', 'E', 'C', 'L', 'A', 'I', 'M', 0,
  /* 5237 */ 'V', 'R', 'F', 'I', 'M', 0,
  /* 5243 */ 'X', 'S', 'R', 'D', 'P', 'I', 'M', 0,
  /* 5251 */ 'X', 'V', 'R', 'D', 'P', 'I', 'M', 0,
  /* 5259 */ 'X', 'V', 'R', 'S', 'P', 'I', 'M', 0,
  /* 5267 */ 'Q', 'V', 'F', 'R', 'I', 'M', 0,
  /* 5274 */ 'R', 'L', 'W', 'I', 'N', 'M', 0,
  /* 5281 */ 'R', 'L', 'W', 'N', 'M', 0,
  /* 5287 */ 'V', 'S', 'U', 'B', 'U', 'Q', 'M', 0,
  /* 5295 */ 'V', 'A', 'D', 'D', 'U', 'Q', 'M', 0,
  /* 5303 */ 'V', 'S', 'U', 'B', 'E', 'U', 'Q', 'M', 0,
  /* 5312 */ 'V', 'A', 'D', 'D', 'E', 'U', 'Q', 'M', 0,
  /* 5321 */ 'Q', 'V', 'F', 'P', 'E', 'R', 'M', 0,
  /* 5329 */ 'V', 'P', 'E', 'R', 'M', 0,
  /* 5335 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 5345 */ 'V', 'P', 'K', 'U', 'D', 'U', 'M', 0,
  /* 5353 */ 'V', 'P', 'K', 'U', 'H', 'U', 'M', 0,
  /* 5361 */ 'V', 'P', 'K', 'U', 'W', 'U', 'M', 0,
  /* 5369 */ 'V', 'S', 'U', 'B', 'U', 'W', 'M', 0,
  /* 5377 */ 'V', 'A', 'D', 'D', 'U', 'W', 'M', 0,
  /* 5385 */ 'V', 'M', 'U', 'L', 'U', 'W', 'M', 0,
  /* 5393 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'F', 'A', 'N', 0,
  /* 5405 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'F', 'A', 'N', 0,
  /* 5417 */ 'E', 'V', 'M', 'W', 'S', 'M', 'F', 'A', 'N', 0,
  /* 5427 */ 'E', 'V', 'M', 'W', 'S', 'S', 'F', 'A', 'N', 0,
  /* 5437 */ 'E', 'V', 'M', 'H', 'E', 'G', 'S', 'M', 'I', 'A', 'N', 0,
  /* 5449 */ 'E', 'V', 'M', 'H', 'O', 'G', 'S', 'M', 'I', 'A', 'N', 0,
  /* 5461 */ 'E', 'V', 'M', 'W', 'S', 'M', 'I', 'A', 'N', 0,
  /* 5471 */ 'E', 'V', 'M', 'H', 'E', 'G', 'U', 'M', 'I', 'A', 'N', 0,
  /* 5483 */ 'E', 'V', 'M', 'H', 'O', 'G', 'U', 'M', 'I', 'A', 'N', 0,
  /* 5495 */ 'E', 'V', 'M', 'W', 'U', 'M', 'I', 'A', 'N', 0,
  /* 5505 */ 'Q', 'V', 'F', 'T', 'S', 'T', 'N', 'A', 'N', 0,
  /* 5515 */ 'Q', 'V', 'F', 'C', 'P', 'S', 'G', 'N', 0,
  /* 5524 */ 'V', 'R', 'F', 'I', 'N', 0,
  /* 5530 */ 'T', 'B', 'E', 'G', 'I', 'N', 0,
  /* 5537 */ 'Q', 'V', 'F', 'R', 'I', 'N', 0,
  /* 5544 */ 'M', 'F', 'S', 'R', 'I', 'N', 0,
  /* 5551 */ 'M', 'T', 'S', 'R', 'I', 'N', 0,
  /* 5558 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 5574 */ 'X', 'S', 'C', 'V', 'S', 'P', 'D', 'P', 'N', 0,
  /* 5584 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'P', 'N', 0,
  /* 5594 */ 'A', 'T', 'T', 'N', 0,
  /* 5599 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 5616 */ 'E', 'V', 'S', 'T', 'W', 'H', 'O', 0,
  /* 5624 */ 'E', 'n', 'f', 'o', 'r', 'c', 'e', 'I', 'E', 'I', 'O', 0,
  /* 5636 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'L', 'O', 0,
  /* 5646 */ 'E', 'V', 'M', 'E', 'R', 'G', 'E', 'H', 'I', 'L', 'O', 0,
  /* 5658 */ 'V', 'S', 'L', 'O', 0,
  /* 5663 */ 'V', 'S', 'R', 'O', 0,
  /* 5668 */ 'E', 'V', 'S', 'T', 'W', 'W', 'O', 0,
  /* 5676 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 5685 */ 'T', 'R', 'A', 'P', 0,
  /* 5690 */ 'X', 'S', 'N', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 5701 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 5712 */ 'X', 'S', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 5722 */ 'X', 'V', 'M', 'S', 'U', 'B', 'A', 'D', 'P', 0,
  /* 5732 */ 'X', 'S', 'N', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 5743 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 5754 */ 'X', 'S', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 5764 */ 'X', 'V', 'M', 'A', 'D', 'D', 'A', 'D', 'P', 0,
  /* 5774 */ 'X', 'S', 'S', 'U', 'B', 'D', 'P', 0,
  /* 5782 */ 'X', 'V', 'S', 'U', 'B', 'D', 'P', 0,
  /* 5790 */ 'X', 'S', 'A', 'D', 'D', 'D', 'P', 0,
  /* 5798 */ 'X', 'V', 'A', 'D', 'D', 'D', 'P', 0,
  /* 5806 */ 'X', 'S', 'C', 'V', 'S', 'X', 'D', 'D', 'P', 0,
  /* 5816 */ 'X', 'V', 'C', 'V', 'S', 'X', 'D', 'D', 'P', 0,
  /* 5826 */ 'X', 'S', 'C', 'V', 'U', 'X', 'D', 'D', 'P', 0,
  /* 5836 */ 'X', 'V', 'C', 'V', 'U', 'X', 'D', 'D', 'P', 0,
  /* 5846 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'D', 'P', 0,
  /* 5856 */ 'X', 'S', 'R', 'E', 'D', 'P', 0,
  /* 5863 */ 'X', 'V', 'R', 'E', 'D', 'P', 0,
  /* 5870 */ 'X', 'S', 'R', 'S', 'Q', 'R', 'T', 'E', 'D', 'P', 0,
  /* 5881 */ 'X', 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'D', 'P', 0,
  /* 5892 */ 'X', 'S', 'N', 'E', 'G', 'D', 'P', 0,
  /* 5900 */ 'X', 'V', 'N', 'E', 'G', 'D', 'P', 0,
  /* 5908 */ 'X', 'S', 'M', 'U', 'L', 'D', 'P', 0,
  /* 5916 */ 'X', 'V', 'M', 'U', 'L', 'D', 'P', 0,
  /* 5924 */ 'X', 'S', 'N', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 5935 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 5946 */ 'X', 'S', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 5956 */ 'X', 'V', 'M', 'S', 'U', 'B', 'M', 'D', 'P', 0,
  /* 5966 */ 'X', 'S', 'N', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 5977 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 5988 */ 'X', 'S', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 5998 */ 'X', 'V', 'M', 'A', 'D', 'D', 'M', 'D', 'P', 0,
  /* 6008 */ 'X', 'S', 'C', 'P', 'S', 'G', 'N', 'D', 'P', 0,
  /* 6018 */ 'X', 'V', 'C', 'P', 'S', 'G', 'N', 'D', 'P', 0,
  /* 6028 */ 'X', 'S', 'M', 'I', 'N', 'D', 'P', 0,
  /* 6036 */ 'X', 'V', 'M', 'I', 'N', 'D', 'P', 0,
  /* 6044 */ 'X', 'S', 'C', 'M', 'P', 'O', 'D', 'P', 0,
  /* 6053 */ 'X', 'S', 'C', 'V', 'S', 'P', 'D', 'P', 0,
  /* 6062 */ 'X', 'V', 'C', 'V', 'S', 'P', 'D', 'P', 0,
  /* 6071 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'D', 'P', 0,
  /* 6081 */ 'X', 'S', 'N', 'A', 'B', 'S', 'D', 'P', 0,
  /* 6090 */ 'X', 'V', 'N', 'A', 'B', 'S', 'D', 'P', 0,
  /* 6099 */ 'X', 'S', 'A', 'B', 'S', 'D', 'P', 0,
  /* 6107 */ 'X', 'V', 'A', 'B', 'S', 'D', 'P', 0,
  /* 6115 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'D', 'P', 0,
  /* 6125 */ 'X', 'S', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 6134 */ 'X', 'S', 'T', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 6144 */ 'X', 'V', 'T', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 6154 */ 'X', 'V', 'S', 'Q', 'R', 'T', 'D', 'P', 0,
  /* 6163 */ 'X', 'S', 'C', 'M', 'P', 'U', 'D', 'P', 0,
  /* 6172 */ 'X', 'S', 'D', 'I', 'V', 'D', 'P', 0,
  /* 6180 */ 'X', 'S', 'T', 'D', 'I', 'V', 'D', 'P', 0,
  /* 6189 */ 'X', 'V', 'T', 'D', 'I', 'V', 'D', 'P', 0,
  /* 6198 */ 'X', 'V', 'D', 'I', 'V', 'D', 'P', 0,
  /* 6206 */ 'X', 'V', 'C', 'V', 'S', 'X', 'W', 'D', 'P', 0,
  /* 6216 */ 'X', 'V', 'C', 'V', 'U', 'X', 'W', 'D', 'P', 0,
  /* 6226 */ 'X', 'S', 'M', 'A', 'X', 'D', 'P', 0,
  /* 6234 */ 'X', 'V', 'M', 'A', 'X', 'D', 'P', 0,
  /* 6242 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 0,
  /* 6250 */ 'V', 'N', 'M', 'S', 'U', 'B', 'F', 'P', 0,
  /* 6259 */ 'V', 'S', 'U', 'B', 'F', 'P', 0,
  /* 6266 */ 'V', 'M', 'A', 'D', 'D', 'F', 'P', 0,
  /* 6274 */ 'V', 'A', 'D', 'D', 'F', 'P', 0,
  /* 6281 */ 'V', 'L', 'O', 'G', 'E', 'F', 'P', 0,
  /* 6289 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 0,
  /* 6298 */ 'V', 'R', 'E', 'F', 'P', 0,
  /* 6304 */ 'V', 'E', 'X', 'P', 'T', 'E', 'F', 'P', 0,
  /* 6313 */ 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'F', 'P', 0,
  /* 6323 */ 'V', 'M', 'I', 'N', 'F', 'P', 0,
  /* 6330 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 0,
  /* 6339 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 0,
  /* 6348 */ 'V', 'M', 'A', 'X', 'F', 'P', 0,
  /* 6355 */ 'V', 'R', 'F', 'I', 'P', 0,
  /* 6361 */ 'X', 'S', 'R', 'D', 'P', 'I', 'P', 0,
  /* 6369 */ 'X', 'V', 'R', 'D', 'P', 'I', 'P', 0,
  /* 6377 */ 'X', 'V', 'R', 'S', 'P', 'I', 'P', 0,
  /* 6385 */ 'Q', 'V', 'F', 'R', 'I', 'P', 0,
  /* 6392 */ 'B', 'L', 'A', '8', '_', 'N', 'O', 'P', 0,
  /* 6401 */ 'B', 'L', '8', '_', 'N', 'O', 'P', 0,
  /* 6409 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 6426 */ 'X', 'S', 'N', 'M', 'S', 'U', 'B', 'A', 'S', 'P', 0,
  /* 6437 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'A', 'S', 'P', 0,
  /* 6448 */ 'X', 'S', 'M', 'S', 'U', 'B', 'A', 'S', 'P', 0,
  /* 6458 */ 'X', 'V', 'M', 'S', 'U', 'B', 'A', 'S', 'P', 0,
  /* 6468 */ 'X', 'S', 'N', 'M', 'A', 'D', 'D', 'A', 'S', 'P', 0,
  /* 6479 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'A', 'S', 'P', 0,
  /* 6490 */ 'X', 'S', 'M', 'A', 'D', 'D', 'A', 'S', 'P', 0,
  /* 6500 */ 'X', 'V', 'M', 'A', 'D', 'D', 'A', 'S', 'P', 0,
  /* 6510 */ 'X', 'S', 'S', 'U', 'B', 'S', 'P', 0,
  /* 6518 */ 'X', 'V', 'S', 'U', 'B', 'S', 'P', 0,
  /* 6526 */ 'X', 'S', 'A', 'D', 'D', 'S', 'P', 0,
  /* 6534 */ 'X', 'V', 'A', 'D', 'D', 'S', 'P', 0,
  /* 6542 */ 'X', 'S', 'C', 'V', 'S', 'X', 'D', 'S', 'P', 0,
  /* 6552 */ 'X', 'V', 'C', 'V', 'S', 'X', 'D', 'S', 'P', 0,
  /* 6562 */ 'X', 'S', 'C', 'V', 'U', 'X', 'D', 'S', 'P', 0,
  /* 6572 */ 'X', 'V', 'C', 'V', 'U', 'X', 'D', 'S', 'P', 0,
  /* 6582 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'S', 'P', 0,
  /* 6592 */ 'X', 'S', 'R', 'E', 'S', 'P', 0,
  /* 6599 */ 'X', 'V', 'R', 'E', 'S', 'P', 0,
  /* 6606 */ 'X', 'S', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'P', 0,
  /* 6617 */ 'X', 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'P', 0,
  /* 6628 */ 'X', 'V', 'N', 'E', 'G', 'S', 'P', 0,
  /* 6636 */ 'X', 'S', 'M', 'U', 'L', 'S', 'P', 0,
  /* 6644 */ 'X', 'V', 'M', 'U', 'L', 'S', 'P', 0,
  /* 6652 */ 'X', 'S', 'N', 'M', 'S', 'U', 'B', 'M', 'S', 'P', 0,
  /* 6663 */ 'X', 'V', 'N', 'M', 'S', 'U', 'B', 'M', 'S', 'P', 0,
  /* 6674 */ 'X', 'S', 'M', 'S', 'U', 'B', 'M', 'S', 'P', 0,
  /* 6684 */ 'X', 'V', 'M', 'S', 'U', 'B', 'M', 'S', 'P', 0,
  /* 6694 */ 'X', 'S', 'N', 'M', 'A', 'D', 'D', 'M', 'S', 'P', 0,
  /* 6705 */ 'X', 'V', 'N', 'M', 'A', 'D', 'D', 'M', 'S', 'P', 0,
  /* 6716 */ 'X', 'S', 'M', 'A', 'D', 'D', 'M', 'S', 'P', 0,
  /* 6726 */ 'X', 'V', 'M', 'A', 'D', 'D', 'M', 'S', 'P', 0,
  /* 6736 */ 'X', 'V', 'C', 'P', 'S', 'G', 'N', 'S', 'P', 0,
  /* 6746 */ 'X', 'V', 'M', 'I', 'N', 'S', 'P', 0,
  /* 6754 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'P', 0,
  /* 6763 */ 'X', 'V', 'C', 'V', 'D', 'P', 'S', 'P', 0,
  /* 6772 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'S', 'P', 0,
  /* 6782 */ 'Q', 'V', 'F', 'R', 'S', 'P', 0,
  /* 6789 */ 'X', 'V', 'N', 'A', 'B', 'S', 'S', 'P', 0,
  /* 6798 */ 'X', 'V', 'A', 'B', 'S', 'S', 'P', 0,
  /* 6806 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'P', 0,
  /* 6816 */ 'X', 'S', 'S', 'Q', 'R', 'T', 'S', 'P', 0,
  /* 6825 */ 'X', 'V', 'T', 'S', 'Q', 'R', 'T', 'S', 'P', 0,
  /* 6835 */ 'X', 'V', 'S', 'Q', 'R', 'T', 'S', 'P', 0,
  /* 6844 */ 'X', 'S', 'D', 'I', 'V', 'S', 'P', 0,
  /* 6852 */ 'X', 'V', 'T', 'D', 'I', 'V', 'S', 'P', 0,
  /* 6861 */ 'X', 'V', 'D', 'I', 'V', 'S', 'P', 0,
  /* 6869 */ 'X', 'V', 'C', 'V', 'S', 'X', 'W', 'S', 'P', 0,
  /* 6879 */ 'X', 'V', 'C', 'V', 'U', 'X', 'W', 'S', 'P', 0,
  /* 6889 */ 'X', 'V', 'M', 'A', 'X', 'S', 'P', 0,
  /* 6897 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 6912 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 6921 */ 'E', 'V', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 6929 */ 'V', 'B', 'P', 'E', 'R', 'M', 'Q', 0,
  /* 6937 */ 'V', 'S', 'U', 'B', 'C', 'U', 'Q', 0,
  /* 6945 */ 'V', 'A', 'D', 'D', 'C', 'U', 'Q', 0,
  /* 6953 */ 'V', 'S', 'U', 'B', 'E', 'C', 'U', 'Q', 0,
  /* 6962 */ 'V', 'A', 'D', 'D', 'E', 'C', 'U', 'Q', 0,
  /* 6971 */ 'M', 'B', 'A', 'R', 0,
  /* 6976 */ 'U', 'p', 'd', 'a', 't', 'e', 'G', 'B', 'R', 0,
  /* 6986 */ 'M', 'F', 'D', 'C', 'R', 0,
  /* 6992 */ 'R', 'L', 'D', 'C', 'R', 0,
  /* 6998 */ 'M', 'T', 'D', 'C', 'R', 0,
  /* 7004 */ 'M', 'F', 'C', 'R', 0,
  /* 7009 */ 'R', 'L', 'D', 'I', 'C', 'R', 0,
  /* 7016 */ 'M', 'F', 'V', 'S', 'C', 'R', 0,
  /* 7023 */ 'M', 'T', 'V', 'S', 'C', 'R', 0,
  /* 7030 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 0,
  /* 7041 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 0,
  /* 7050 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 'A', 'D', 'D', 'R', 0,
  /* 7065 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 'A', 'D', 'D', 'R', 0,
  /* 7080 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', 0,
  /* 7093 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', 0,
  /* 7104 */ 'V', 'N', 'C', 'I', 'P', 'H', 'E', 'R', 0,
  /* 7113 */ 'V', 'C', 'I', 'P', 'H', 'E', 'R', 0,
  /* 7121 */ 'B', 'L', 'R', 0,
  /* 7125 */ 'g', 'B', 'C', 'L', 'R', 0,
  /* 7131 */ 'B', 'C', 'C', 'L', 'R', 0,
  /* 7137 */ 'M', 'F', 'L', 'R', 0,
  /* 7142 */ 'M', 'T', 'L', 'R', 0,
  /* 7147 */ 'B', 'D', 'Z', 'L', 'R', 0,
  /* 7153 */ 'B', 'D', 'N', 'Z', 'L', 'R', 0,
  /* 7160 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', 0,
  /* 7171 */ 'M', 'o', 'v', 'e', 'G', 'O', 'T', 't', 'o', 'L', 'R', 0,
  /* 7183 */ 'Q', 'V', 'F', 'M', 'R', 0,
  /* 7189 */ 'X', 'X', 'L', 'O', 'R', 0,
  /* 7195 */ 'X', 'X', 'L', 'N', 'O', 'R', 0,
  /* 7202 */ 'C', 'R', 'N', 'O', 'R', 0,
  /* 7208 */ 'E', 'V', 'N', 'O', 'R', 0,
  /* 7214 */ 'C', 'R', 'O', 'R', 0,
  /* 7219 */ 'E', 'V', 'O', 'R', 0,
  /* 7224 */ 'X', 'X', 'L', 'X', 'O', 'R', 0,
  /* 7231 */ 'V', 'P', 'E', 'R', 'M', 'X', 'O', 'R', 0,
  /* 7240 */ 'C', 'R', 'X', 'O', 'R', 0,
  /* 7246 */ 'E', 'V', 'X', 'O', 'R', 0,
  /* 7252 */ 'M', 'F', 'S', 'P', 'R', 0,
  /* 7258 */ 'M', 'T', 'S', 'P', 'R', 0,
  /* 7264 */ 'M', 'F', 'S', 'R', 0,
  /* 7269 */ 'M', 'F', 'M', 'S', 'R', 0,
  /* 7275 */ 'M', 'T', 'M', 'S', 'R', 0,
  /* 7281 */ 'M', 'T', 'S', 'R', 0,
  /* 7286 */ 'L', 'V', 'S', 'R', 0,
  /* 7291 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', 0,
  /* 7300 */ 'g', 'B', 'C', 'C', 'T', 'R', 0,
  /* 7307 */ 'B', 'C', 'C', 'C', 'T', 'R', 0,
  /* 7314 */ 'M', 'F', 'C', 'T', 'R', 0,
  /* 7320 */ 'M', 'T', 'C', 'T', 'R', 0,
  /* 7326 */ 'Q', 'V', 'F', 'A', 'B', 'S', 0,
  /* 7333 */ 'Q', 'V', 'F', 'N', 'A', 'B', 'S', 0,
  /* 7341 */ 'E', 'V', 'A', 'B', 'S', 0,
  /* 7347 */ 'V', 'S', 'U', 'M', '4', 'S', 'B', 'S', 0,
  /* 7356 */ 'V', 'S', 'U', 'B', 'S', 'B', 'S', 0,
  /* 7364 */ 'V', 'A', 'D', 'D', 'S', 'B', 'S', 0,
  /* 7372 */ 'V', 'S', 'U', 'M', '4', 'U', 'B', 'S', 0,
  /* 7381 */ 'V', 'S', 'U', 'B', 'U', 'B', 'S', 0,
  /* 7389 */ 'V', 'A', 'D', 'D', 'U', 'B', 'S', 0,
  /* 7397 */ 'Q', 'V', 'F', 'S', 'U', 'B', 'S', 0,
  /* 7405 */ 'Q', 'V', 'F', 'M', 'S', 'U', 'B', 'S', 0,
  /* 7414 */ 'Q', 'V', 'F', 'N', 'M', 'S', 'U', 'B', 'S', 0,
  /* 7424 */ 'Q', 'V', 'F', 'A', 'D', 'D', 'S', 0,
  /* 7432 */ 'Q', 'V', 'F', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7441 */ 'Q', 'V', 'F', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7451 */ 'Q', 'V', 'F', 'X', 'X', 'C', 'P', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7465 */ 'Q', 'V', 'F', 'X', 'X', 'N', 'P', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7478 */ 'Q', 'V', 'F', 'X', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7488 */ 'Q', 'V', 'F', 'X', 'X', 'M', 'A', 'D', 'D', 'S', 0,
  /* 7499 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 'S', 0,
  /* 7508 */ 'D', 'C', 'B', 'T', 'D', 'S', 0,
  /* 7515 */ 'D', 'C', 'B', 'T', 'S', 'T', 'D', 'S', 0,
  /* 7524 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'X', 'D', 'S', 0,
  /* 7535 */ 'X', 'V', 'C', 'V', 'D', 'P', 'S', 'X', 'D', 'S', 0,
  /* 7546 */ 'X', 'V', 'C', 'V', 'S', 'P', 'S', 'X', 'D', 'S', 0,
  /* 7557 */ 'X', 'S', 'C', 'V', 'D', 'P', 'U', 'X', 'D', 'S', 0,
  /* 7568 */ 'X', 'V', 'C', 'V', 'D', 'P', 'U', 'X', 'D', 'S', 0,
  /* 7579 */ 'X', 'V', 'C', 'V', 'S', 'P', 'U', 'X', 'D', 'S', 0,
  /* 7590 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 0,
  /* 7603 */ 'Q', 'V', 'F', 'R', 'E', 'S', 0,
  /* 7610 */ 'Q', 'V', 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 0,
  /* 7621 */ 'M', 'F', 'F', 'S', 0,
  /* 7626 */ 'L', 'F', 'S', 0,
  /* 7630 */ 'M', 'C', 'R', 'F', 'S', 0,
  /* 7636 */ 'S', 'T', 'F', 'S', 0,
  /* 7641 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 7647 */ 'V', 'S', 'U', 'M', '4', 'S', 'H', 'S', 0,
  /* 7656 */ 'V', 'S', 'U', 'B', 'S', 'H', 'S', 0,
  /* 7664 */ 'V', 'M', 'H', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 7674 */ 'V', 'M', 'H', 'R', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 7685 */ 'V', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 7693 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'S', 0,
  /* 7702 */ 'V', 'S', 'U', 'B', 'U', 'H', 'S', 0,
  /* 7710 */ 'V', 'A', 'D', 'D', 'U', 'H', 'S', 0,
  /* 7718 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'S', 0,
  /* 7727 */ 'S', 'U', 'B', 'I', 'S', 0,
  /* 7733 */ 'A', 'D', 'D', 'I', 'S', 0,
  /* 7739 */ 'L', 'I', 'S', 0,
  /* 7743 */ 'X', 'O', 'R', 'I', 'S', 0,
  /* 7749 */ 'E', 'V', 'S', 'R', 'W', 'I', 'S', 0,
  /* 7757 */ 'F', 'S', 'E', 'L', 'S', 0,
  /* 7763 */ 'A', 'D', 'D', '4', 'T', 'L', 'S', 0,
  /* 7771 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', 0,
  /* 7779 */ 'B', 'L', '8', '_', 'T', 'L', 'S', 0,
  /* 7787 */ 'B', 'L', '_', 'T', 'L', 'S', 0,
  /* 7794 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'T', 'L', 'S', 0,
  /* 7806 */ 'Q', 'V', 'F', 'M', 'U', 'L', 'S', 0,
  /* 7814 */ 'Q', 'V', 'F', 'X', 'M', 'U', 'L', 'S', 0,
  /* 7823 */ 'F', 'R', 'I', 'M', 'S', 0,
  /* 7829 */ 'F', 'C', 'P', 'S', 'G', 'N', 'S', 0,
  /* 7837 */ 'F', 'R', 'I', 'N', 'S', 0,
  /* 7843 */ 'E', 'V', 'L', 'W', 'H', 'O', 'S', 0,
  /* 7851 */ 'F', 'R', 'I', 'P', 'S', 0,
  /* 7857 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 7874 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 7880 */ 'F', 'N', 'A', 'B', 'S', 'S', 0,
  /* 7887 */ 'V', 'P', 'K', 'S', 'D', 'S', 'S', 0,
  /* 7895 */ 'V', 'P', 'K', 'S', 'H', 'S', 'S', 0,
  /* 7903 */ 'V', 'P', 'K', 'S', 'W', 'S', 'S', 0,
  /* 7911 */ 'E', 'V', 'C', 'M', 'P', 'G', 'T', 'S', 0,
  /* 7920 */ 'E', 'V', 'C', 'M', 'P', 'L', 'T', 'S', 0,
  /* 7929 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 7936 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 'U', 'S', 0,
  /* 7946 */ 'V', 'P', 'K', 'S', 'D', 'U', 'S', 0,
  /* 7954 */ 'V', 'P', 'K', 'U', 'D', 'U', 'S', 0,
  /* 7962 */ 'V', 'P', 'K', 'S', 'H', 'U', 'S', 0,
  /* 7970 */ 'V', 'P', 'K', 'U', 'H', 'U', 'S', 0,
  /* 7978 */ 'F', 'C', 'M', 'P', 'U', 'S', 0,
  /* 7985 */ 'V', 'P', 'K', 'S', 'W', 'U', 'S', 0,
  /* 7993 */ 'V', 'P', 'K', 'U', 'W', 'U', 'S', 0,
  /* 8001 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 8007 */ 'E', 'V', 'S', 'R', 'W', 'S', 0,
  /* 8014 */ 'V', 'S', 'U', 'M', '2', 'S', 'W', 'S', 0,
  /* 8023 */ 'V', 'S', 'U', 'B', 'S', 'W', 'S', 0,
  /* 8031 */ 'V', 'A', 'D', 'D', 'S', 'W', 'S', 0,
  /* 8039 */ 'V', 'S', 'U', 'M', 'S', 'W', 'S', 0,
  /* 8047 */ 'V', 'S', 'U', 'B', 'U', 'W', 'S', 0,
  /* 8055 */ 'V', 'A', 'D', 'D', 'U', 'W', 'S', 0,
  /* 8063 */ 'E', 'V', 'D', 'I', 'V', 'W', 'S', 0,
  /* 8071 */ 'X', 'S', 'C', 'V', 'D', 'P', 'S', 'X', 'W', 'S', 0,
  /* 8082 */ 'X', 'V', 'C', 'V', 'D', 'P', 'S', 'X', 'W', 'S', 0,
  /* 8093 */ 'X', 'V', 'C', 'V', 'S', 'P', 'S', 'X', 'W', 'S', 0,
  /* 8104 */ 'X', 'S', 'C', 'V', 'D', 'P', 'U', 'X', 'W', 'S', 0,
  /* 8115 */ 'X', 'V', 'C', 'V', 'D', 'P', 'U', 'X', 'W', 'S', 0,
  /* 8126 */ 'X', 'V', 'C', 'V', 'S', 'P', 'U', 'X', 'W', 'S', 0,
  /* 8137 */ 'V', 'C', 'T', 'S', 'X', 'S', 0,
  /* 8144 */ 'V', 'C', 'T', 'U', 'X', 'S', 0,
  /* 8151 */ 'F', 'R', 'I', 'Z', 'S', 0,
  /* 8157 */ 'E', 'V', 'L', 'H', 'H', 'E', 'S', 'P', 'L', 'A', 'T', 0,
  /* 8169 */ 'E', 'V', 'L', 'W', 'H', 'S', 'P', 'L', 'A', 'T', 0,
  /* 8180 */ 'E', 'V', 'L', 'H', 'H', 'O', 'S', 'S', 'P', 'L', 'A', 'T', 0,
  /* 8193 */ 'E', 'V', 'L', 'H', 'H', 'O', 'U', 'S', 'P', 'L', 'A', 'T', 0,
  /* 8206 */ 'E', 'V', 'L', 'W', 'W', 'S', 'P', 'L', 'A', 'T', 0,
  /* 8217 */ 'D', 'C', 'B', 'T', 0,
  /* 8222 */ 'I', 'C', 'B', 'T', 0,
  /* 8227 */ 'D', 'C', 'B', 'T', 'C', 'T', 0,
  /* 8234 */ 'D', 'C', 'B', 'T', 'S', 'T', 'C', 'T', 0,
  /* 8243 */ 'T', 'C', 'H', 'E', 'C', 'K', '_', 'R', 'E', 'T', 0,
  /* 8254 */ 'C', 'R', '6', 'S', 'E', 'T', 0,
  /* 8261 */ 'C', 'R', '6', 'U', 'N', 'S', 'E', 'T', 0,
  /* 8270 */ 'C', 'R', 'U', 'N', 'S', 'E', 'T', 0,
  /* 8278 */ 'C', 'R', 'S', 'E', 'T', 0,
  /* 8284 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'G', 'T', 0,
  /* 8293 */ 'W', 'A', 'I', 'T', 0,
  /* 8298 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 'B', 'I', 'T', 0,
  /* 8312 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 'B', 'I', 'T', 0,
  /* 8324 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'E', 'Q', '_', 'B', 'I', 'T', 0,
  /* 8339 */ 'A', 'N', 'D', 'I', 'o', '_', '1', '_', 'G', 'T', '_', 'B', 'I', 'T', 0,
  /* 8354 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'L', 'T', 0,
  /* 8363 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 8374 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 8385 */ 'P', 'P', 'C', '3', '2', 'G', 'O', 'T', 0,
  /* 8394 */ 'P', 'P', 'C', '3', '2', 'P', 'I', 'C', 'G', 'O', 'T', 0,
  /* 8406 */ 'L', 'D', 't', 'o', 'c', 'C', 'P', 'T', 0,
  /* 8415 */ 'T', 'R', 'E', 'C', 'H', 'K', 'P', 'T', 0,
  /* 8424 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 8439 */ 'T', 'A', 'B', 'O', 'R', 'T', 0,
  /* 8446 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 8452 */ 'V', 'N', 'C', 'I', 'P', 'H', 'E', 'R', 'L', 'A', 'S', 'T', 0,
  /* 8465 */ 'V', 'C', 'I', 'P', 'H', 'E', 'R', 'L', 'A', 'S', 'T', 0,
  /* 8477 */ 'D', 'C', 'B', 'S', 'T', 0,
  /* 8483 */ 'D', 'S', 'T', 0,
  /* 8487 */ 'D', 'C', 'B', 'T', 'S', 'T', 0,
  /* 8494 */ 'D', 'S', 'T', 'S', 'T', 0,
  /* 8500 */ 'D', 'C', 'B', 'T', 'T', 0,
  /* 8506 */ 'D', 'S', 'T', 'T', 0,
  /* 8511 */ 'D', 'C', 'B', 'T', 'S', 'T', 'T', 0,
  /* 8519 */ 'D', 'S', 'T', 'S', 'T', 'T', 0,
  /* 8526 */ 'L', 'H', 'A', 'U', 0,
  /* 8531 */ 'S', 'T', 'B', 'U', 0,
  /* 8536 */ 'L', 'F', 'D', 'U', 0,
  /* 8541 */ 'S', 'T', 'F', 'D', 'U', 0,
  /* 8547 */ 'M', 'U', 'L', 'H', 'D', 'U', 0,
  /* 8554 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 'U', 0,
  /* 8563 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 'U', 0,
  /* 8572 */ 'L', 'D', 'U', 0,
  /* 8576 */ 'S', 'T', 'D', 'U', 0,
  /* 8581 */ 'D', 'I', 'V', 'D', 'U', 0,
  /* 8587 */ 'D', 'I', 'V', 'D', 'E', 'U', 0,
  /* 8594 */ 'D', 'I', 'V', 'W', 'E', 'U', 0,
  /* 8601 */ 'S', 'T', 'H', 'U', 0,
  /* 8606 */ 'E', 'V', 'S', 'R', 'W', 'I', 'U', 0,
  /* 8614 */ 'E', 'V', 'L', 'W', 'H', 'O', 'U', 0,
  /* 8622 */ 'L', 'F', 'S', 'U', 0,
  /* 8627 */ 'S', 'T', 'F', 'S', 'U', 0,
  /* 8633 */ 'E', 'V', 'C', 'M', 'P', 'G', 'T', 'U', 0,
  /* 8642 */ 'E', 'V', 'C', 'M', 'P', 'L', 'T', 'U', 0,
  /* 8651 */ 'M', 'U', 'L', 'H', 'W', 'U', 0,
  /* 8658 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'W', 'U', 0,
  /* 8667 */ 'E', 'V', 'S', 'R', 'W', 'U', 0,
  /* 8674 */ 'S', 'T', 'W', 'U', 0,
  /* 8679 */ 'E', 'V', 'D', 'I', 'V', 'W', 'U', 0,
  /* 8687 */ 'L', 'B', 'Z', 'U', 0,
  /* 8692 */ 'L', 'H', 'Z', 'U', 0,
  /* 8697 */ 'L', 'W', 'Z', 'U', 0,
  /* 8702 */ 'F', 'D', 'I', 'V', 0,
  /* 8707 */ 'X', 'X', 'L', 'E', 'Q', 'V', 0,
  /* 8714 */ 'C', 'R', 'E', 'Q', 'V', 0,
  /* 8720 */ 'E', 'V', 'E', 'Q', 'V', 0,
  /* 8726 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 'A', 'A', 'W', 0,
  /* 8738 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 'A', 'A', 'W', 0,
  /* 8750 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 'A', 'A', 'W', 0,
  /* 8762 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 'A', 'A', 'W', 0,
  /* 8774 */ 'E', 'V', 'A', 'D', 'D', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8786 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8798 */ 'E', 'V', 'S', 'U', 'B', 'F', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8811 */ 'E', 'V', 'M', 'W', 'L', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8823 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8835 */ 'E', 'V', 'A', 'D', 'D', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8847 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8859 */ 'E', 'V', 'S', 'U', 'B', 'F', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8872 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8884 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 'A', 'A', 'W', 0,
  /* 8896 */ 'E', 'V', 'A', 'D', 'D', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8908 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8920 */ 'E', 'V', 'S', 'U', 'B', 'F', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8933 */ 'E', 'V', 'M', 'W', 'L', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8945 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8957 */ 'E', 'V', 'A', 'D', 'D', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8969 */ 'E', 'V', 'M', 'H', 'E', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8981 */ 'E', 'V', 'S', 'U', 'B', 'F', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 8994 */ 'E', 'V', 'M', 'W', 'L', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 9006 */ 'E', 'V', 'M', 'H', 'O', 'U', 'S', 'I', 'A', 'A', 'W', 0,
  /* 9018 */ 'V', 'S', 'H', 'A', 'S', 'I', 'G', 'M', 'A', 'W', 0,
  /* 9029 */ 'V', 'S', 'R', 'A', 'W', 0,
  /* 9035 */ 'E', 'V', 'A', 'D', 'D', 'W', 0,
  /* 9042 */ 'E', 'V', 'L', 'D', 'W', 0,
  /* 9048 */ 'E', 'V', 'R', 'N', 'D', 'W', 0,
  /* 9055 */ 'E', 'V', 'S', 'T', 'D', 'W', 0,
  /* 9062 */ 'V', 'M', 'R', 'G', 'E', 'W', 0,
  /* 9069 */ 'E', 'V', 'S', 'U', 'B', 'F', 'W', 0,
  /* 9077 */ 'E', 'V', 'S', 'U', 'B', 'I', 'F', 'W', 0,
  /* 9086 */ 'V', 'M', 'R', 'G', 'H', 'W', 0,
  /* 9093 */ 'X', 'X', 'M', 'R', 'G', 'H', 'W', 0,
  /* 9101 */ 'M', 'U', 'L', 'H', 'W', 0,
  /* 9107 */ 'E', 'V', 'A', 'D', 'D', 'I', 'W', 0,
  /* 9115 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'W', 0,
  /* 9123 */ 'V', 'M', 'R', 'G', 'L', 'W', 0,
  /* 9130 */ 'X', 'X', 'M', 'R', 'G', 'L', 'W', 0,
  /* 9138 */ 'M', 'U', 'L', 'L', 'W', 0,
  /* 9144 */ 'C', 'M', 'P', 'L', 'W', 0,
  /* 9150 */ 'E', 'V', 'R', 'L', 'W', 0,
  /* 9156 */ 'E', 'V', 'S', 'L', 'W', 0,
  /* 9162 */ 'L', 'M', 'W', 0,
  /* 9166 */ 'S', 'T', 'M', 'W', 0,
  /* 9171 */ 'V', 'P', 'M', 'S', 'U', 'M', 'W', 0,
  /* 9179 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'F', 'A', 'N', 'W', 0,
  /* 9191 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'F', 'A', 'N', 'W', 0,
  /* 9203 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'F', 'A', 'N', 'W', 0,
  /* 9215 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'F', 'A', 'N', 'W', 0,
  /* 9227 */ 'E', 'V', 'M', 'H', 'E', 'S', 'M', 'I', 'A', 'N', 'W', 0,
  /* 9239 */ 'E', 'V', 'M', 'W', 'L', 'S', 'M', 'I', 'A', 'N', 'W', 0,
  /* 9251 */ 'E', 'V', 'M', 'H', 'O', 'S', 'M', 'I', 'A', 'N', 'W', 0,
  /* 9263 */ 'E', 'V', 'M', 'H', 'E', 'U', 'M', 'I', 'A', 'N', 'W', 0,
  /* 9275 */ 'E', 'V', 'M', 'W', 'L', 'U', 'M', 'I', 'A', 'N', 'W', 0,
  /* 9287 */ 'E', 'V', 'M', 'H', 'O', 'U', 'M', 'I', 'A', 'N', 'W', 0,
  /* 9299 */ 'E', 'V', 'M', 'H', 'E', 'S', 'S', 'I', 'A', 'N', 'W', 0,
  /* 9311 */ 'E', 'V', 'M', 'W', 'L', 'S', 'S', 'I', 'A', 'N', 'W', 0,
  /* 9323 */ 'E', 'V', 'M', 'H', 'O', 'S', 'S', 'I', 'A', 'N', 'W', 0,
  /* 9335 */ 'E', 'V', 'M', 'H', 'E', 'U', 'S', 'I', 'A', 'N', 'W', 0,
  /* 9347 */ 'E', 'V', 'M', 'W', 'L', 'U', 'S', 'I', 'A', 'N', 'W', 0,
  /* 9359 */ 'E', 'V', 'M', 'H', 'O', 'U', 'S', 'I', 'A', 'N', 'W', 0,
  /* 9371 */ 'V', 'M', 'R', 'G', 'O', 'W', 0,
  /* 9378 */ 'C', 'M', 'P', 'W', 0,
  /* 9383 */ 'V', 'S', 'R', 'W', 0,
  /* 9388 */ 'V', 'M', 'U', 'L', 'E', 'S', 'W', 0,
  /* 9396 */ 'V', 'A', 'V', 'G', 'S', 'W', 0,
  /* 9403 */ 'V', 'U', 'P', 'K', 'H', 'S', 'W', 0,
  /* 9411 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'W', 0,
  /* 9420 */ 'V', 'U', 'P', 'K', 'L', 'S', 'W', 0,
  /* 9428 */ 'E', 'V', 'C', 'N', 'T', 'L', 'S', 'W', 0,
  /* 9437 */ 'V', 'M', 'I', 'N', 'S', 'W', 0,
  /* 9444 */ 'V', 'M', 'U', 'L', 'O', 'S', 'W', 0,
  /* 9452 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 0,
  /* 9461 */ 'E', 'X', 'T', 'S', 'W', 0,
  /* 9467 */ 'V', 'M', 'A', 'X', 'S', 'W', 0,
  /* 9474 */ 'V', 'S', 'P', 'L', 'T', 'W', 0,
  /* 9481 */ 'X', 'X', 'S', 'P', 'L', 'T', 'W', 0,
  /* 9489 */ 'V', 'P', 'O', 'P', 'C', 'N', 'T', 'W', 0,
  /* 9498 */ 'S', 'T', 'W', 0,
  /* 9502 */ 'V', 'S', 'U', 'B', 'C', 'U', 'W', 0,
  /* 9510 */ 'V', 'A', 'D', 'D', 'C', 'U', 'W', 0,
  /* 9518 */ 'V', 'M', 'U', 'L', 'E', 'U', 'W', 0,
  /* 9526 */ 'V', 'A', 'V', 'G', 'U', 'W', 0,
  /* 9533 */ 'V', 'M', 'I', 'N', 'U', 'W', 0,
  /* 9540 */ 'V', 'M', 'U', 'L', 'O', 'U', 'W', 0,
  /* 9548 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 0,
  /* 9557 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 0,
  /* 9566 */ 'V', 'M', 'A', 'X', 'U', 'W', 0,
  /* 9573 */ 'D', 'I', 'V', 'W', 0,
  /* 9578 */ 'V', 'C', 'L', 'Z', 'W', 0,
  /* 9584 */ 'E', 'V', 'C', 'N', 'T', 'L', 'Z', 'W', 0,
  /* 9593 */ 'L', 'X', 'V', 'D', '2', 'X', 0,
  /* 9600 */ 'S', 'T', 'X', 'V', 'D', '2', 'X', 0,
  /* 9608 */ 'L', 'X', 'V', 'W', '4', 'X', 0,
  /* 9615 */ 'S', 'T', 'X', 'V', 'W', '4', 'X', 0,
  /* 9623 */ 'L', 'H', 'A', 'X', 0,
  /* 9628 */ 'T', 'L', 'B', 'I', 'V', 'A', 'X', 0,
  /* 9636 */ 'Q', 'V', 'L', 'F', 'I', 'W', 'A', 'X', 0,
  /* 9645 */ 'L', 'X', 'S', 'I', 'W', 'A', 'X', 0,
  /* 9653 */ 'L', 'W', 'A', 'X', 0,
  /* 9658 */ 'L', 'V', 'E', 'B', 'X', 0,
  /* 9664 */ 'S', 'T', 'V', 'E', 'B', 'X', 0,
  /* 9671 */ 'S', 'T', 'B', 'X', 0,
  /* 9676 */ 'S', 'T', 'B', 'C', 'X', 0,
  /* 9682 */ 'S', 'T', 'D', 'C', 'X', 0,
  /* 9688 */ 'S', 'T', 'H', 'C', 'X', 0,
  /* 9694 */ 'S', 'T', 'W', 'C', 'X', 0,
  /* 9700 */ 'Q', 'V', 'L', 'F', 'C', 'D', 'X', 0,
  /* 9708 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'X', 0,
  /* 9717 */ 'E', 'V', 'L', 'D', 'D', 'X', 0,
  /* 9724 */ 'E', 'V', 'S', 'T', 'D', 'D', 'X', 0,
  /* 9732 */ 'Q', 'V', 'L', 'F', 'D', 'X', 0,
  /* 9739 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 0,
  /* 9747 */ 'Q', 'V', 'L', 'P', 'C', 'L', 'D', 'X', 0,
  /* 9756 */ 'Q', 'V', 'L', 'P', 'C', 'R', 'D', 'X', 0,
  /* 9765 */ 'L', 'X', 'S', 'D', 'X', 0,
  /* 9771 */ 'S', 'T', 'X', 'S', 'D', 'X', 0,
  /* 9778 */ 'S', 'T', 'D', 'X', 0,
  /* 9783 */ 'E', 'V', 'L', 'W', 'H', 'E', 'X', 0,
  /* 9791 */ 'E', 'V', 'S', 'T', 'W', 'H', 'E', 'X', 0,
  /* 9800 */ 'E', 'V', 'S', 'T', 'W', 'W', 'E', 'X', 0,
  /* 9809 */ 'E', 'V', 'L', 'D', 'H', 'X', 0,
  /* 9816 */ 'E', 'V', 'S', 'T', 'D', 'H', 'X', 0,
  /* 9824 */ 'L', 'V', 'E', 'H', 'X', 0,
  /* 9830 */ 'S', 'T', 'V', 'E', 'H', 'X', 0,
  /* 9837 */ 'S', 'T', 'H', 'X', 0,
  /* 9842 */ 'S', 'T', 'B', 'C', 'I', 'X', 0,
  /* 9849 */ 'L', 'D', 'C', 'I', 'X', 0,
  /* 9855 */ 'S', 'T', 'D', 'C', 'I', 'X', 0,
  /* 9862 */ 'S', 'T', 'H', 'C', 'I', 'X', 0,
  /* 9869 */ 'S', 'T', 'W', 'C', 'I', 'X', 0,
  /* 9876 */ 'L', 'B', 'Z', 'C', 'I', 'X', 0,
  /* 9883 */ 'L', 'H', 'Z', 'C', 'I', 'X', 0,
  /* 9890 */ 'L', 'W', 'Z', 'C', 'I', 'X', 0,
  /* 9897 */ 'V', 'S', 'B', 'O', 'X', 0,
  /* 9903 */ 'E', 'V', 'S', 'T', 'W', 'H', 'O', 'X', 0,
  /* 9912 */ 'E', 'V', 'S', 'T', 'W', 'W', 'O', 'X', 0,
  /* 9921 */ 'V', 'U', 'P', 'K', 'H', 'P', 'X', 0,
  /* 9929 */ 'V', 'P', 'K', 'P', 'X', 0,
  /* 9935 */ 'V', 'U', 'P', 'K', 'L', 'P', 'X', 0,
  /* 9943 */ 'L', 'X', 'S', 'S', 'P', 'X', 0,
  /* 9950 */ 'S', 'T', 'X', 'S', 'S', 'P', 'X', 0,
  /* 9958 */ 'L', 'B', 'A', 'R', 'X', 0,
  /* 9964 */ 'L', 'D', 'A', 'R', 'X', 0,
  /* 9970 */ 'L', 'H', 'A', 'R', 'X', 0,
  /* 9976 */ 'L', 'W', 'A', 'R', 'X', 0,
  /* 9982 */ 'L', 'D', 'B', 'R', 'X', 0,
  /* 9988 */ 'S', 'T', 'D', 'B', 'R', 'X', 0,
  /* 9995 */ 'L', 'H', 'B', 'R', 'X', 0,
  /* 10001 */ 'S', 'T', 'H', 'B', 'R', 'X', 0,
  /* 10008 */ 'L', 'W', 'B', 'R', 'X', 0,
  /* 10014 */ 'S', 'T', 'W', 'B', 'R', 'X', 0,
  /* 10021 */ 'T', 'L', 'B', 'S', 'X', 0,
  /* 10027 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'X', 0,
  /* 10035 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 0,
  /* 10044 */ 'L', 'X', 'V', 'D', 'S', 'X', 0,
  /* 10051 */ 'V', 'C', 'F', 'S', 'X', 0,
  /* 10057 */ 'Q', 'V', 'L', 'F', 'S', 'X', 0,
  /* 10064 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 0,
  /* 10072 */ 'Q', 'V', 'L', 'P', 'C', 'L', 'S', 'X', 0,
  /* 10081 */ 'E', 'V', 'L', 'W', 'H', 'O', 'S', 'X', 0,
  /* 10090 */ 'Q', 'V', 'L', 'P', 'C', 'R', 'S', 'X', 0,
  /* 10099 */ 'E', 'V', 'L', 'H', 'H', 'E', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 10112 */ 'E', 'V', 'L', 'W', 'H', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 10124 */ 'E', 'V', 'L', 'H', 'H', 'O', 'S', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 10138 */ 'E', 'V', 'L', 'H', 'H', 'O', 'U', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 10152 */ 'E', 'V', 'L', 'W', 'W', 'S', 'P', 'L', 'A', 'T', 'X', 0,
  /* 10164 */ 'L', 'H', 'A', 'U', 'X', 0,
  /* 10170 */ 'L', 'W', 'A', 'U', 'X', 0,
  /* 10176 */ 'S', 'T', 'B', 'U', 'X', 0,
  /* 10182 */ 'Q', 'V', 'L', 'F', 'C', 'D', 'U', 'X', 0,
  /* 10191 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'D', 'U', 'X', 0,
  /* 10201 */ 'Q', 'V', 'L', 'F', 'D', 'U', 'X', 0,
  /* 10209 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'U', 'X', 0,
  /* 10218 */ 'L', 'D', 'U', 'X', 0,
  /* 10223 */ 'S', 'T', 'D', 'U', 'X', 0,
  /* 10229 */ 'V', 'C', 'F', 'U', 'X', 0,
  /* 10235 */ 'S', 'T', 'H', 'U', 'X', 0,
  /* 10241 */ 'E', 'V', 'L', 'W', 'H', 'O', 'U', 'X', 0,
  /* 10250 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'U', 'X', 0,
  /* 10259 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'U', 'X', 0,
  /* 10269 */ 'Q', 'V', 'L', 'F', 'S', 'U', 'X', 0,
  /* 10277 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 0,
  /* 10286 */ 'S', 'T', 'W', 'U', 'X', 0,
  /* 10292 */ 'L', 'B', 'Z', 'U', 'X', 0,
  /* 10298 */ 'L', 'H', 'Z', 'U', 'X', 0,
  /* 10304 */ 'L', 'W', 'Z', 'U', 'X', 0,
  /* 10310 */ 'L', 'V', 'X', 0,
  /* 10314 */ 'S', 'T', 'V', 'X', 0,
  /* 10319 */ 'E', 'V', 'L', 'D', 'W', 'X', 0,
  /* 10326 */ 'E', 'V', 'S', 'T', 'D', 'W', 'X', 0,
  /* 10334 */ 'L', 'V', 'E', 'W', 'X', 0,
  /* 10340 */ 'S', 'T', 'V', 'E', 'W', 'X', 0,
  /* 10347 */ 'Q', 'V', 'S', 'T', 'F', 'I', 'W', 'X', 0,
  /* 10356 */ 'S', 'T', 'X', 'S', 'I', 'W', 'X', 0,
  /* 10364 */ 'S', 'T', 'W', 'X', 0,
  /* 10369 */ 'L', 'B', 'Z', 'X', 0,
  /* 10374 */ 'L', 'H', 'Z', 'X', 0,
  /* 10379 */ 'Q', 'V', 'L', 'F', 'I', 'W', 'Z', 'X', 0,
  /* 10388 */ 'L', 'X', 'S', 'I', 'W', 'Z', 'X', 0,
  /* 10396 */ 'L', 'W', 'Z', 'X', 0,
  /* 10401 */ 'C', 'O', 'P', 'Y', 0,
  /* 10406 */ 'D', 'C', 'B', 'Z', 0,
  /* 10411 */ 'L', 'B', 'Z', 0,
  /* 10415 */ 'B', 'D', 'Z', 0,
  /* 10419 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 'Z', 0,
  /* 10428 */ 'L', 'H', 'Z', 0,
  /* 10432 */ 'V', 'R', 'F', 'I', 'Z', 0,
  /* 10438 */ 'X', 'S', 'R', 'D', 'P', 'I', 'Z', 0,
  /* 10446 */ 'X', 'V', 'R', 'D', 'P', 'I', 'Z', 0,
  /* 10454 */ 'X', 'V', 'R', 'S', 'P', 'I', 'Z', 0,
  /* 10462 */ 'Q', 'V', 'F', 'R', 'I', 'Z', 0,
  /* 10469 */ 'B', 'D', 'N', 'Z', 0,
  /* 10474 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 0,
  /* 10484 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 0,
  /* 10494 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'W', 'Z', 0,
  /* 10503 */ 'L', 'W', 'Z', 0,
  /* 10507 */ 'M', 'F', 'V', 'S', 'R', 'W', 'Z', 0,
  /* 10515 */ 'M', 'T', 'V', 'S', 'R', 'W', 'Z', 0,
  /* 10523 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', '_', 0,
  /* 10532 */ 'B', 'L', '8', '_', 'T', 'L', 'S', '_', 0,
  /* 10541 */ 'Q', 'V', 'F', 'C', 'F', 'I', 'D', 'b', 0,
  /* 10550 */ 'Q', 'V', 'F', 'C', 'T', 'I', 'D', 'b', 0,
  /* 10559 */ 'M', 'T', 'F', 'S', 'F', 'b', 0,
  /* 10566 */ 'Q', 'V', 'A', 'L', 'I', 'G', 'N', 'I', 'b', 0,
  /* 10576 */ 'Q', 'V', 'E', 'S', 'P', 'L', 'A', 'T', 'I', 'b', 0,
  /* 10587 */ 'Q', 'V', 'F', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'b', 0,
  /* 10599 */ 'Q', 'V', 'F', 'S', 'E', 'L', 'b', 0,
  /* 10607 */ 'Q', 'V', 'F', 'T', 'S', 'T', 'N', 'A', 'N', 'b', 0,
  /* 10618 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'E', 'Q', 'b', 0,
  /* 10628 */ 'Q', 'V', 'F', 'M', 'R', 'b', 0,
  /* 10635 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'G', 'T', 'b', 0,
  /* 10645 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'L', 'T', 'b', 0,
  /* 10655 */ 'Q', 'V', 'L', 'F', 'D', 'X', 'b', 0,
  /* 10663 */ 'Q', 'V', 'S', 'T', 'F', 'D', 'X', 'b', 0,
  /* 10672 */ 'Q', 'V', 'L', 'F', 'S', 'X', 'b', 0,
  /* 10680 */ 'Q', 'V', 'F', 'S', 'E', 'L', 'b', 'b', 0,
  /* 10689 */ 'L', 'D', 't', 'o', 'c', 0,
  /* 10695 */ 'L', 'W', 'Z', 't', 'o', 'c', 0,
  /* 10702 */ 'B', 'C', 'T', 'R', 'L', '8', '_', 'L', 'D', 'i', 'n', 't', 'o', '_', 't', 'o', 'c', 0,
  /* 10720 */ 'X', 'X', 'L', 'O', 'R', 'f', 0,
  /* 10727 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', 0,
  /* 10738 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', 0,
  /* 10749 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', 0,
  /* 10760 */ 'B', 'D', 'Z', 'L', 'A', 'm', 0,
  /* 10767 */ 'B', 'D', 'N', 'Z', 'L', 'A', 'm', 0,
  /* 10775 */ 'B', 'D', 'Z', 'A', 'm', 0,
  /* 10781 */ 'B', 'D', 'N', 'Z', 'A', 'm', 0,
  /* 10788 */ 'B', 'D', 'Z', 'L', 'R', 'L', 'm', 0,
  /* 10796 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 'm', 0,
  /* 10805 */ 'B', 'D', 'Z', 'L', 'm', 0,
  /* 10811 */ 'B', 'D', 'N', 'Z', 'L', 'm', 0,
  /* 10818 */ 'B', 'D', 'Z', 'L', 'R', 'm', 0,
  /* 10825 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'm', 0,
  /* 10833 */ 'B', 'D', 'Z', 'm', 0,
  /* 10838 */ 'B', 'D', 'N', 'Z', 'm', 0,
  /* 10844 */ 'R', 'L', 'W', 'I', 'M', 'I', 'b', 'm', 0,
  /* 10853 */ 'R', 'L', 'W', 'I', 'N', 'M', 'b', 'm', 0,
  /* 10862 */ 'R', 'L', 'W', 'N', 'M', 'b', 'm', 0,
  /* 10870 */ 'R', 'L', 'W', 'I', 'M', 'I', 'o', 'b', 'm', 0,
  /* 10880 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 'b', 'm', 0,
  /* 10890 */ 'R', 'L', 'W', 'N', 'M', 'o', 'b', 'm', 0,
  /* 10899 */ 'B', 'C', 'C', 'T', 'R', 'L', '8', 'n', 0,
  /* 10908 */ 'B', 'C', 'C', 'T', 'R', '8', 'n', 0,
  /* 10916 */ 'B', 'C', 'n', 0,
  /* 10920 */ 'B', 'C', 'L', 'n', 0,
  /* 10925 */ 'B', 'C', 'L', 'R', 'L', 'n', 0,
  /* 10932 */ 'B', 'C', 'C', 'T', 'R', 'L', 'n', 0,
  /* 10940 */ 'B', 'C', 'L', 'R', 'n', 0,
  /* 10946 */ 'B', 'C', 'C', 'T', 'R', 'n', 0,
  /* 10953 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 'o', 0,
  /* 10966 */ 'A', 'D', 'D', '4', 'o', 0,
  /* 10972 */ 'E', 'X', 'T', 'S', 'B', '8', 'o', 0,
  /* 10980 */ 'A', 'D', 'D', 'C', '8', 'o', 0,
  /* 10987 */ 'A', 'N', 'D', 'C', '8', 'o', 0,
  /* 10994 */ 'S', 'U', 'B', 'F', 'C', '8', 'o', 0,
  /* 11002 */ 'O', 'R', 'C', '8', 'o', 0,
  /* 11008 */ 'A', 'D', 'D', '8', 'o', 0,
  /* 11014 */ 'N', 'A', 'N', 'D', '8', 'o', 0,
  /* 11021 */ 'A', 'D', 'D', 'E', '8', 'o', 0,
  /* 11028 */ 'S', 'U', 'B', 'F', 'E', '8', 'o', 0,
  /* 11036 */ 'A', 'D', 'D', 'M', 'E', '8', 'o', 0,
  /* 11044 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 'o', 0,
  /* 11053 */ 'A', 'D', 'D', 'Z', 'E', '8', 'o', 0,
  /* 11061 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 'o', 0,
  /* 11070 */ 'S', 'U', 'B', 'F', '8', 'o', 0,
  /* 11077 */ 'N', 'E', 'G', '8', 'o', 0,
  /* 11083 */ 'E', 'X', 'T', 'S', 'H', '8', 'o', 0,
  /* 11091 */ 'R', 'L', 'W', 'I', 'M', 'I', '8', 'o', 0,
  /* 11100 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 'o', 0,
  /* 11109 */ 'R', 'L', 'W', 'N', 'M', '8', 'o', 0,
  /* 11117 */ 'N', 'O', 'R', '8', 'o', 0,
  /* 11123 */ 'X', 'O', 'R', '8', 'o', 0,
  /* 11129 */ 'E', 'Q', 'V', '8', 'o', 0,
  /* 11135 */ 'S', 'L', 'W', '8', 'o', 0,
  /* 11141 */ 'S', 'R', 'W', '8', 'o', 0,
  /* 11147 */ 'C', 'N', 'T', 'L', 'Z', 'W', '8', 'o', 0,
  /* 11156 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 'o', 0,
  /* 11166 */ 'E', 'X', 'T', 'S', 'B', 'o', 0,
  /* 11173 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 'o', 0,
  /* 11183 */ 'F', 'S', 'U', 'B', 'o', 0,
  /* 11189 */ 'F', 'M', 'S', 'U', 'B', 'o', 0,
  /* 11196 */ 'F', 'N', 'M', 'S', 'U', 'B', 'o', 0,
  /* 11204 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 'o', 0,
  /* 11214 */ 'A', 'D', 'D', 'C', 'o', 0,
  /* 11220 */ 'A', 'N', 'D', 'C', 'o', 0,
  /* 11226 */ 'S', 'U', 'B', 'F', 'C', 'o', 0,
  /* 11233 */ 'S', 'U', 'B', 'I', 'C', 'o', 0,
  /* 11240 */ 'A', 'D', 'D', 'I', 'C', 'o', 0,
  /* 11247 */ 'R', 'L', 'D', 'I', 'C', 'o', 0,
  /* 11254 */ 'O', 'R', 'C', 'o', 0,
  /* 11259 */ 'S', 'R', 'A', 'D', 'o', 0,
  /* 11265 */ 'F', 'A', 'D', 'D', 'o', 0,
  /* 11271 */ 'F', 'M', 'A', 'D', 'D', 'o', 0,
  /* 11278 */ 'F', 'N', 'M', 'A', 'D', 'D', 'o', 0,
  /* 11286 */ 'F', 'N', 'E', 'G', 'D', 'o', 0,
  /* 11293 */ 'M', 'U', 'L', 'H', 'D', 'o', 0,
  /* 11300 */ 'F', 'C', 'F', 'I', 'D', 'o', 0,
  /* 11307 */ 'F', 'C', 'T', 'I', 'D', 'o', 0,
  /* 11314 */ 'F', 'S', 'E', 'L', 'D', 'o', 0,
  /* 11321 */ 'M', 'U', 'L', 'L', 'D', 'o', 0,
  /* 11328 */ 'S', 'L', 'D', 'o', 0,
  /* 11333 */ 'F', 'R', 'I', 'M', 'D', 'o', 0,
  /* 11340 */ 'N', 'A', 'N', 'D', 'o', 0,
  /* 11346 */ 'F', 'C', 'P', 'S', 'G', 'N', 'D', 'o', 0,
  /* 11355 */ 'F', 'R', 'I', 'N', 'D', 'o', 0,
  /* 11362 */ 'F', 'R', 'I', 'P', 'D', 'o', 0,
  /* 11369 */ 'S', 'R', 'D', 'o', 0,
  /* 11374 */ 'F', 'A', 'B', 'S', 'D', 'o', 0,
  /* 11381 */ 'F', 'N', 'A', 'B', 'S', 'D', 'o', 0,
  /* 11389 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'D', 'o', 0,
  /* 11399 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'D', 'o', 0,
  /* 11409 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'D', 'o', 0,
  /* 11419 */ 'D', 'I', 'V', 'D', 'o', 0,
  /* 11425 */ 'F', 'R', 'I', 'Z', 'D', 'o', 0,
  /* 11432 */ 'C', 'N', 'T', 'L', 'Z', 'D', 'o', 0,
  /* 11440 */ 'A', 'D', 'D', 'E', 'o', 0,
  /* 11446 */ 'D', 'I', 'V', 'D', 'E', 'o', 0,
  /* 11453 */ 'S', 'U', 'B', 'F', 'E', 'o', 0,
  /* 11460 */ 'A', 'D', 'D', 'M', 'E', 'o', 0,
  /* 11467 */ 'S', 'U', 'B', 'F', 'M', 'E', 'o', 0,
  /* 11475 */ 'F', 'R', 'E', 'o', 0,
  /* 11480 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'o', 0,
  /* 11489 */ 'D', 'I', 'V', 'W', 'E', 'o', 0,
  /* 11496 */ 'A', 'D', 'D', 'Z', 'E', 'o', 0,
  /* 11503 */ 'S', 'U', 'B', 'F', 'Z', 'E', 'o', 0,
  /* 11511 */ 'S', 'U', 'B', 'F', 'o', 0,
  /* 11517 */ 'M', 'T', 'F', 'S', 'F', 'o', 0,
  /* 11524 */ 'N', 'E', 'G', 'o', 0,
  /* 11529 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 'o', 0,
  /* 11539 */ 'E', 'X', 'T', 'S', 'H', 'o', 0,
  /* 11546 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 'o', 0,
  /* 11556 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 'o', 0,
  /* 11566 */ 'S', 'R', 'A', 'D', 'I', 'o', 0,
  /* 11573 */ 'C', 'L', 'R', 'L', 'S', 'L', 'D', 'I', 'o', 0,
  /* 11583 */ 'E', 'X', 'T', 'L', 'D', 'I', 'o', 0,
  /* 11591 */ 'A', 'N', 'D', 'I', 'o', 0,
  /* 11597 */ 'C', 'L', 'R', 'R', 'D', 'I', 'o', 0,
  /* 11605 */ 'I', 'N', 'S', 'R', 'D', 'I', 'o', 0,
  /* 11613 */ 'R', 'O', 'T', 'R', 'D', 'I', 'o', 0,
  /* 11621 */ 'E', 'X', 'T', 'R', 'D', 'I', 'o', 0,
  /* 11629 */ 'M', 'T', 'F', 'S', 'F', 'I', 'o', 0,
  /* 11637 */ 'R', 'L', 'D', 'I', 'M', 'I', 'o', 0,
  /* 11645 */ 'R', 'L', 'W', 'I', 'M', 'I', 'o', 0,
  /* 11653 */ 'S', 'R', 'A', 'W', 'I', 'o', 0,
  /* 11660 */ 'C', 'L', 'R', 'L', 'S', 'L', 'W', 'I', 'o', 0,
  /* 11670 */ 'I', 'N', 'S', 'L', 'W', 'I', 'o', 0,
  /* 11678 */ 'E', 'X', 'T', 'L', 'W', 'I', 'o', 0,
  /* 11686 */ 'C', 'L', 'R', 'R', 'W', 'I', 'o', 0,
  /* 11694 */ 'I', 'N', 'S', 'R', 'W', 'I', 'o', 0,
  /* 11702 */ 'R', 'O', 'T', 'R', 'W', 'I', 'o', 0,
  /* 11710 */ 'E', 'X', 'T', 'R', 'W', 'I', 'o', 0,
  /* 11718 */ 'R', 'L', 'D', 'C', 'L', 'o', 0,
  /* 11725 */ 'R', 'L', 'D', 'I', 'C', 'L', 'o', 0,
  /* 11733 */ 'F', 'M', 'U', 'L', 'o', 0,
  /* 11739 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 0,
  /* 11747 */ 'R', 'L', 'W', 'N', 'M', 'o', 0,
  /* 11754 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'D', 'P', 'o', 0,
  /* 11765 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'D', 'P', 'o', 0,
  /* 11776 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'D', 'P', 'o', 0,
  /* 11787 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 'o', 0,
  /* 11796 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 'o', 0,
  /* 11806 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 'o', 0,
  /* 11816 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 'o', 0,
  /* 11826 */ 'X', 'V', 'C', 'M', 'P', 'G', 'E', 'S', 'P', 'o', 0,
  /* 11837 */ 'X', 'V', 'C', 'M', 'P', 'E', 'Q', 'S', 'P', 'o', 0,
  /* 11848 */ 'F', 'R', 'S', 'P', 'o', 0,
  /* 11854 */ 'X', 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'P', 'o', 0,
  /* 11865 */ 'R', 'L', 'D', 'C', 'R', 'o', 0,
  /* 11872 */ 'R', 'L', 'D', 'I', 'C', 'R', 'o', 0,
  /* 11880 */ 'F', 'M', 'R', 'o', 0,
  /* 11885 */ 'N', 'O', 'R', 'o', 0,
  /* 11890 */ 'X', 'O', 'R', 'o', 0,
  /* 11895 */ 'F', 'S', 'U', 'B', 'S', 'o', 0,
  /* 11902 */ 'F', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 11910 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 11919 */ 'F', 'A', 'D', 'D', 'S', 'o', 0,
  /* 11926 */ 'F', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 11934 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 11943 */ 'F', 'C', 'F', 'I', 'D', 'S', 'o', 0,
  /* 11951 */ 'F', 'R', 'E', 'S', 'o', 0,
  /* 11957 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'o', 0,
  /* 11967 */ 'M', 'F', 'F', 'S', 'o', 0,
  /* 11973 */ 'F', 'N', 'E', 'G', 'S', 'o', 0,
  /* 11980 */ 'A', 'N', 'D', 'I', 'S', 'o', 0,
  /* 11987 */ 'F', 'S', 'E', 'L', 'S', 'o', 0,
  /* 11994 */ 'F', 'M', 'U', 'L', 'S', 'o', 0,
  /* 12001 */ 'F', 'R', 'I', 'M', 'S', 'o', 0,
  /* 12008 */ 'F', 'C', 'P', 'S', 'G', 'N', 'S', 'o', 0,
  /* 12017 */ 'F', 'R', 'I', 'N', 'S', 'o', 0,
  /* 12024 */ 'F', 'R', 'I', 'P', 'S', 'o', 0,
  /* 12031 */ 'F', 'A', 'B', 'S', 'S', 'o', 0,
  /* 12038 */ 'F', 'N', 'A', 'B', 'S', 'S', 'o', 0,
  /* 12046 */ 'F', 'S', 'Q', 'R', 'T', 'S', 'o', 0,
  /* 12054 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 'o', 0,
  /* 12063 */ 'F', 'D', 'I', 'V', 'S', 'o', 0,
  /* 12070 */ 'F', 'R', 'I', 'Z', 'S', 'o', 0,
  /* 12077 */ 'F', 'S', 'Q', 'R', 'T', 'o', 0,
  /* 12084 */ 'M', 'U', 'L', 'H', 'D', 'U', 'o', 0,
  /* 12092 */ 'F', 'C', 'F', 'I', 'D', 'U', 'o', 0,
  /* 12100 */ 'D', 'I', 'V', 'D', 'U', 'o', 0,
  /* 12107 */ 'D', 'I', 'V', 'D', 'E', 'U', 'o', 0,
  /* 12115 */ 'D', 'I', 'V', 'W', 'E', 'U', 'o', 0,
  /* 12123 */ 'M', 'U', 'L', 'H', 'W', 'U', 'o', 0,
  /* 12131 */ 'D', 'I', 'V', 'W', 'U', 'o', 0,
  /* 12138 */ 'F', 'D', 'I', 'V', 'o', 0,
  /* 12144 */ 'E', 'Q', 'V', 'o', 0,
  /* 12149 */ 'S', 'R', 'A', 'W', 'o', 0,
  /* 12155 */ 'M', 'U', 'L', 'H', 'W', 'o', 0,
  /* 12162 */ 'F', 'C', 'T', 'I', 'W', 'o', 0,
  /* 12169 */ 'M', 'U', 'L', 'L', 'W', 'o', 0,
  /* 12176 */ 'S', 'L', 'W', 'o', 0,
  /* 12181 */ 'S', 'R', 'W', 'o', 0,
  /* 12186 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 'o', 0,
  /* 12196 */ 'E', 'X', 'T', 'S', 'W', 'o', 0,
  /* 12203 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 'o', 0,
  /* 12213 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 'o', 0,
  /* 12223 */ 'D', 'I', 'V', 'W', 'o', 0,
  /* 12229 */ 'C', 'N', 'T', 'L', 'Z', 'W', 'o', 0,
  /* 12237 */ 'F', 'C', 'T', 'I', 'D', 'Z', 'o', 0,
  /* 12245 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 'o', 0,
  /* 12254 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 'o', 0,
  /* 12263 */ 'F', 'C', 'T', 'I', 'W', 'Z', 'o', 0,
  /* 12271 */ 'B', 'D', 'Z', 'L', 'A', 'p', 0,
  /* 12278 */ 'B', 'D', 'N', 'Z', 'L', 'A', 'p', 0,
  /* 12286 */ 'B', 'D', 'Z', 'A', 'p', 0,
  /* 12292 */ 'B', 'D', 'N', 'Z', 'A', 'p', 0,
  /* 12299 */ 'B', 'D', 'Z', 'L', 'R', 'L', 'p', 0,
  /* 12307 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'L', 'p', 0,
  /* 12316 */ 'B', 'D', 'Z', 'L', 'p', 0,
  /* 12322 */ 'B', 'D', 'N', 'Z', 'L', 'p', 0,
  /* 12329 */ 'B', 'D', 'Z', 'L', 'R', 'p', 0,
  /* 12336 */ 'B', 'D', 'N', 'Z', 'L', 'R', 'p', 0,
  /* 12344 */ 'B', 'D', 'Z', 'p', 0,
  /* 12349 */ 'B', 'D', 'N', 'Z', 'p', 0,
  /* 12355 */ 'M', 'T', 'C', 'T', 'R', '8', 'l', 'o', 'o', 'p', 0,
  /* 12366 */ 'M', 'T', 'C', 'T', 'R', 'l', 'o', 'o', 'p', 0,
  /* 12376 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'u', 'p', 0,
  /* 12390 */ 'Q', 'V', 'F', 'N', 'E', 'G', 's', 0,
  /* 12398 */ 'Q', 'V', 'A', 'L', 'I', 'G', 'N', 'I', 's', 0,
  /* 12408 */ 'Q', 'V', 'E', 'S', 'P', 'L', 'A', 'T', 'I', 's', 0,
  /* 12419 */ 'Q', 'V', 'F', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 's', 0,
  /* 12431 */ 'Q', 'V', 'F', 'R', 'I', 'M', 's', 0,
  /* 12439 */ 'Q', 'V', 'F', 'P', 'E', 'R', 'M', 's', 0,
  /* 12448 */ 'Q', 'V', 'F', 'C', 'P', 'S', 'G', 'N', 's', 0,
  /* 12458 */ 'Q', 'V', 'F', 'R', 'I', 'N', 's', 0,
  /* 12466 */ 'Q', 'V', 'F', 'R', 'I', 'P', 's', 0,
  /* 12474 */ 'Q', 'V', 'F', 'R', 'S', 'P', 's', 0,
  /* 12482 */ 'Q', 'V', 'F', 'M', 'R', 's', 0,
  /* 12489 */ 'Q', 'V', 'F', 'A', 'B', 'S', 's', 0,
  /* 12497 */ 'Q', 'V', 'F', 'N', 'A', 'B', 'S', 's', 0,
  /* 12506 */ 'Q', 'V', 'F', 'S', 'U', 'B', 'S', 's', 0,
  /* 12515 */ 'Q', 'V', 'F', 'M', 'S', 'U', 'B', 'S', 's', 0,
  /* 12525 */ 'Q', 'V', 'F', 'N', 'M', 'S', 'U', 'B', 'S', 's', 0,
  /* 12536 */ 'Q', 'V', 'F', 'A', 'D', 'D', 'S', 's', 0,
  /* 12545 */ 'Q', 'V', 'F', 'M', 'A', 'D', 'D', 'S', 's', 0,
  /* 12555 */ 'Q', 'V', 'F', 'N', 'M', 'A', 'D', 'D', 'S', 's', 0,
  /* 12566 */ 'Q', 'V', 'F', 'R', 'E', 'S', 's', 0,
  /* 12574 */ 'Q', 'V', 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 's', 0,
  /* 12586 */ 'Q', 'V', 'F', 'M', 'U', 'L', 'S', 's', 0,
  /* 12595 */ 'Q', 'V', 'L', 'F', 'C', 'S', 'X', 's', 0,
  /* 12604 */ 'Q', 'V', 'S', 'T', 'F', 'C', 'S', 'X', 's', 0,
  /* 12614 */ 'Q', 'V', 'L', 'F', 'S', 'X', 's', 0,
  /* 12622 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'X', 's', 0,
  /* 12631 */ 'Q', 'V', 'S', 'T', 'F', 'S', 'U', 'X', 's', 0,
  /* 12641 */ 'Q', 'V', 'F', 'R', 'I', 'Z', 's', 0,
  /* 12649 */ 'Q', 'V', 'F', 'S', 'E', 'L', 'b', 's', 0,
  /* 12658 */ 'Q', 'V', 'F', 'T', 'S', 'T', 'N', 'A', 'N', 'b', 's', 0,
  /* 12670 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'E', 'Q', 'b', 's', 0,
  /* 12681 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'G', 'T', 'b', 's', 0,
  /* 12692 */ 'Q', 'V', 'F', 'C', 'M', 'P', 'L', 'T', 'b', 's', 0,
  /* 12703 */ 'B', 'C', 'L', 'a', 'l', 'w', 'a', 'y', 's', 0,
  /* 12713 */ 'Q', 'V', 'L', 'P', 'C', 'L', 'S', 'X', 'i', 'n', 't', 0,
  /* 12725 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 12735 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 12745 */ 'L', 'A', 'x', 0,
  /* 12749 */ 'D', 'C', 'B', 'T', 'x', 0,
  /* 12755 */ 'D', 'C', 'B', 'T', 'S', 'T', 'x', 0,
  /* 12763 */ 'F', 'A', 'D', 'D', 'r', 't', 'z', 0,
};

extern const unsigned PPCInstrNameIndices[] = {
    4470U, 5335U, 5558U, 4889U, 4880U, 4935U, 3988U, 4003U, 
    3861U, 4017U, 7857U, 3748U, 3615U, 10401U, 3686U, 8424U, 
    3419U, 5676U, 8374U, 3457U, 8363U, 3706U, 6409U, 686U, 
    7763U, 10966U, 1015U, 7771U, 10523U, 11008U, 2814U, 966U, 
    10980U, 11214U, 3628U, 1026U, 11021U, 11440U, 4340U, 1138U, 
    2862U, 985U, 11240U, 7733U, 1498U, 2078U, 55U, 2062U, 
    2036U, 2049U, 2025U, 5122U, 267U, 5088U, 227U, 7050U, 
    281U, 5099U, 240U, 7065U, 298U, 5079U, 3693U, 1039U, 
    11036U, 11460U, 3838U, 1054U, 11053U, 11496U, 5599U, 6897U, 
    3376U, 1021U, 11015U, 2822U, 972U, 10987U, 11220U, 11980U, 
    1793U, 11591U, 1786U, 8324U, 1517U, 8339U, 1533U, 11341U, 
    834U, 168U, 511U, 1270U, 757U, 91U, 434U, 1197U, 
    798U, 132U, 475U, 1236U, 777U, 111U, 454U, 1216U, 
    874U, 208U, 551U, 1308U, 737U, 71U, 414U, 1165U, 
    854U, 188U, 531U, 1289U, 818U, 152U, 495U, 1255U, 
    5594U, 2526U, 1915U, 2807U, 2810U, 1938U, 7307U, 1476U, 
    4988U, 1361U, 4862U, 2290U, 7131U, 4952U, 7301U, 1469U, 
    10908U, 4981U, 1353U, 10899U, 10932U, 10946U, 4858U, 7126U, 
    4946U, 10925U, 10940U, 12703U, 10920U, 7295U, 1463U, 4974U, 
    1346U, 10702U, 10916U, 10469U, 1739U, 2514U, 10781U, 12292U, 
    5066U, 2302U, 10767U, 12278U, 7153U, 1415U, 4966U, 10796U, 
    12307U, 10825U, 12336U, 10811U, 12322U, 10838U, 12349U, 10415U, 
    1729U, 2509U, 10775U, 12286U, 5061U, 2296U, 10760U, 12271U, 
    7147U, 1408U, 4959U, 10788U, 12299U, 10818U, 12329U, 10805U, 
    12316U, 10833U, 12344U, 4854U, 1336U, 6401U, 7794U, 7779U, 
    10532U, 2280U, 930U, 6392U, 7121U, 1391U, 4940U, 7787U, 
    3358U, 2905U, 2583U, 4357U, 11573U, 4677U, 11660U, 4388U, 
    11597U, 4713U, 11686U, 2578U, 942U, 3452U, 4382U, 3336U, 
    4350U, 9144U, 4663U, 9378U, 4707U, 3600U, 11432U, 9586U, 
    1611U, 11147U, 12229U, 8254U, 8261U, 3402U, 2827U, 8714U, 
    3388U, 7202U, 7214U, 3030U, 8278U, 8270U, 7240U, 1913U, 
    3851U, 4269U, 8477U, 8217U, 8227U, 7508U, 8487U, 8234U, 
    7515U, 8511U, 12755U, 8500U, 12749U, 10406U, 5055U, 4284U, 
    3583U, 3633U, 8587U, 12107U, 11446U, 8581U, 12100U, 11419U, 
    9573U, 3824U, 8594U, 12115U, 11489U, 8681U, 12131U, 12223U, 
    7891U, 4928U, 8483U, 570U, 8494U, 576U, 8519U, 591U, 
    8506U, 584U, 2931U, 1000U, 358U, 651U, 376U, 669U, 
    12376U, 8710U, 1591U, 11129U, 12144U, 7341U, 9107U, 8774U, 
    8896U, 8835U, 8957U, 9035U, 3408U, 2834U, 6921U, 7911U, 
    8633U, 7920U, 8642U, 9428U, 9584U, 8063U, 8679U, 8720U, 
    2674U, 4173U, 3263U, 9717U, 4045U, 9809U, 9042U, 10319U, 
    8157U, 10099U, 8180U, 10124U, 8193U, 10138U, 3659U, 9783U, 
    7843U, 10081U, 8614U, 10241U, 8169U, 10112U, 8206U, 10152U, 
    4448U, 5646U, 5636U, 4458U, 1801U, 5393U, 1845U, 5437U, 
    1879U, 5471U, 3874U, 1943U, 8726U, 9179U, 4500U, 2104U, 
    8786U, 9227U, 3940U, 1982U, 8750U, 9203U, 8908U, 9299U, 
    4535U, 2143U, 8847U, 9263U, 8969U, 9335U, 1813U, 5405U, 
    1857U, 5449U, 1891U, 5483U, 3892U, 1963U, 8738U, 9191U, 
    4518U, 2124U, 8823U, 9251U, 3958U, 2002U, 8762U, 9215U, 
    8945U, 9323U, 4562U, 2173U, 8884U, 9287U, 9006U, 9359U, 
    2309U, 3883U, 1953U, 4509U, 2114U, 3949U, 1992U, 4544U, 
    2153U, 8811U, 9239U, 8933U, 9311U, 4553U, 2163U, 8872U, 
    9275U, 8994U, 9347U, 3901U, 1973U, 1825U, 5417U, 4527U, 
    2134U, 1869U, 5461U, 3967U, 2012U, 1835U, 5427U, 4571U, 
    2183U, 1903U, 5495U, 3395U, 3982U, 7208U, 7219U, 3036U, 
    9150U, 4670U, 9048U, 9156U, 4693U, 4438U, 4631U, 7749U, 
    8606U, 8007U, 8667U, 3269U, 9724U, 4051U, 9816U, 9055U, 
    10326U, 3666U, 9791U, 5616U, 9903U, 3830U, 9800U, 5668U, 
    9912U, 8798U, 8920U, 8859U, 8981U, 9069U, 9077U, 7246U, 
    4366U, 11583U, 4700U, 11678U, 4409U, 11621U, 4734U, 11710U, 
    2676U, 948U, 600U, 10972U, 11166U, 4175U, 1126U, 613U, 
    11083U, 11539U, 9461U, 639U, 10953U, 12196U, 5624U, 3495U, 
    11374U, 7874U, 12031U, 3197U, 7426U, 11919U, 11265U, 12763U, 
    3299U, 7501U, 11943U, 8556U, 7938U, 12054U, 12092U, 11300U, 
    3551U, 7978U, 3432U, 11346U, 7829U, 12008U, 3312U, 10476U, 
    12245U, 10421U, 12237U, 11307U, 9117U, 10486U, 12254U, 10496U, 
    12263U, 12162U, 8702U, 8001U, 12063U, 12138U, 3204U, 7434U, 
    11926U, 11271U, 7185U, 11880U, 2769U, 7407U, 11902U, 11189U, 
    5003U, 7808U, 11994U, 11733U, 3501U, 11381U, 7880U, 12038U, 
    3285U, 11286U, 7641U, 11973U, 3212U, 7443U, 11934U, 11278U, 
    2777U, 7416U, 11910U, 11196U, 3727U, 7605U, 11951U, 11475U, 
    3352U, 11333U, 7823U, 12001U, 3440U, 11355U, 7837U, 12017U, 
    3446U, 11362U, 7851U, 12024U, 3588U, 11425U, 8151U, 12070U, 
    6784U, 11848U, 3740U, 7612U, 11957U, 11480U, 3324U, 11314U, 
    7757U, 11987U, 8446U, 7929U, 12046U, 12077U, 2762U, 7399U, 
    11895U, 11183U, 7093U, 330U, 7080U, 315U, 4274U, 8222U, 
    4290U, 4686U, 11670U, 4395U, 11605U, 4720U, 11694U, 4912U, 
    1340U, 2919U, 2281U, 12745U, 9958U, 5016U, 10411U, 1724U, 
    9876U, 8687U, 1573U, 10292U, 1679U, 10369U, 1706U, 3321U, 
    9964U, 5023U, 9982U, 9849U, 8572U, 10218U, 9752U, 5110U, 
    253U, 10689U, 1925U, 8406U, 4640U, 5072U, 3276U, 8536U, 
    10203U, 9734U, 9638U, 10381U, 7626U, 8622U, 10271U, 10059U, 
    2021U, 925U, 9970U, 5030U, 8526U, 1549U, 10164U, 1651U, 
    9623U, 1619U, 9995U, 1637U, 10428U, 1734U, 9883U, 8692U, 
    1579U, 10298U, 1686U, 10374U, 1712U, 4477U, 1147U, 7739U, 
    1505U, 9162U, 4741U, 9658U, 9824U, 10334U, 4996U, 7286U, 
    10310U, 5044U, 2315U, 9976U, 5037U, 10170U, 9653U, 350U, 
    343U, 10008U, 1644U, 10503U, 1745U, 9890U, 8697U, 1585U, 
    10304U, 1693U, 10396U, 1718U, 10695U, 9765U, 9645U, 10388U, 
    9943U, 9593U, 10044U, 9608U, 6971U, 3909U, 7630U, 3607U, 
    7004U, 1385U, 7314U, 1484U, 6986U, 7621U, 11967U, 7137U, 
    1396U, 7269U, 3914U, 1075U, 7252U, 1445U, 7264U, 5544U, 
    2689U, 955U, 3758U, 12725U, 7016U, 3481U, 10507U, 2925U, 
    3928U, 1091U, 7320U, 1491U, 12355U, 12366U, 6998U, 0U, 
    48U, 3934U, 4431U, 11629U, 10559U, 11517U, 7142U, 1402U, 
    7275U, 3474U, 3921U, 1083U, 7258U, 1452U, 7281U, 5551U, 
    3767U, 12735U, 7023U, 3488U, 2319U, 10515U, 3291U, 8547U, 
    12084U, 11293U, 9101U, 8651U, 12123U, 12155U, 3330U, 11321U, 
    4480U, 1144U, 9138U, 12169U, 7171U, 7160U, 1423U, 3383U, 
    1020U, 11014U, 11340U, 3978U, 1121U, 11077U, 11524U, 6397U, 
    893U, 905U, 7198U, 1435U, 11117U, 11885U, 7192U, 1436U, 
    11118U, 3026U, 1010U, 11002U, 11254U, 4617U, 1160U, 7744U, 
    1511U, 11886U, 3532U, 9490U, 8385U, 8394U, 4579U, 10566U, 
    12398U, 4621U, 10576U, 12408U, 7326U, 12489U, 3195U, 7424U, 
    12536U, 3297U, 7499U, 8554U, 7936U, 10541U, 6912U, 10618U, 
    12670U, 8284U, 10635U, 12681U, 8354U, 10645U, 12692U, 5515U, 
    12448U, 3310U, 8563U, 10474U, 10419U, 10550U, 9115U, 8658U, 
    10484U, 10494U, 4843U, 10587U, 12419U, 3202U, 7432U, 12545U, 
    7183U, 10628U, 12482U, 2767U, 7405U, 12515U, 5001U, 7806U, 
    12586U, 7333U, 12497U, 3975U, 12390U, 3210U, 7441U, 12555U, 
    2775U, 7414U, 12525U, 5321U, 12439U, 3725U, 7603U, 12566U, 
    5267U, 12431U, 5537U, 12458U, 6385U, 12466U, 10462U, 12641U, 
    6782U, 12474U, 3738U, 7610U, 12574U, 4905U, 10599U, 10680U, 
    12649U, 2760U, 7397U, 12506U, 5505U, 10607U, 12658U, 3244U, 
    7478U, 5008U, 7814U, 3219U, 7451U, 3253U, 7488U, 3232U, 
    7465U, 4317U, 10182U, 2409U, 9700U, 2337U, 10250U, 2449U, 
    10027U, 2373U, 12595U, 10201U, 2430U, 9732U, 2356U, 10655U, 
    9636U, 2327U, 10379U, 2499U, 10269U, 2470U, 10057U, 2392U, 
    10672U, 12614U, 9747U, 10072U, 12713U, 9756U, 10090U, 10191U, 
    2419U, 4794U, 2234U, 9708U, 2346U, 4756U, 2192U, 10259U, 
    2459U, 4815U, 2257U, 10035U, 2382U, 4775U, 2213U, 12604U, 
    10209U, 2439U, 4805U, 2246U, 9739U, 2364U, 4766U, 2203U, 
    10663U, 10347U, 2489U, 10277U, 2479U, 4826U, 2269U, 12631U, 
    10064U, 2400U, 4785U, 2224U, 12622U, 7030U, 8298U, 3776U, 
    4306U, 4345U, 2534U, 4427U, 3305U, 4311U, 4867U, 11718U, 
    6992U, 11865U, 2868U, 4873U, 626U, 11725U, 7009U, 11872U, 
    11247U, 4486U, 11637U, 4493U, 1151U, 11091U, 10844U, 11645U, 
    10870U, 5274U, 1370U, 11100U, 10853U, 11739U, 10880U, 5281U, 
    1378U, 11109U, 10862U, 11747U, 10890U, 4402U, 11613U, 4727U, 
    11702U, 2714U, 3152U, 691U, 1098U, 714U, 1184U, 2940U, 
    2967U, 3069U, 3042U, 2994U, 3125U, 3096U, 704U, 1111U, 
    727U, 1326U, 2955U, 2982U, 3084U, 3057U, 3010U, 3140U, 
    3112U, 2092U, 3674U, 3639U, 3731U, 3348U, 4361U, 11577U, 
    11328U, 9158U, 1596U, 11135U, 4681U, 11664U, 12176U, 7041U, 
    8312U, 3805U, 3184U, 4334U, 11566U, 11259U, 9030U, 4649U, 
    11653U, 12149U, 3477U, 4397U, 11607U, 11369U, 9384U, 1601U, 
    11141U, 4722U, 11696U, 12181U, 2710U, 961U, 9842U, 9676U, 
    8531U, 1555U, 10176U, 1658U, 9671U, 1625U, 3540U, 9988U, 
    9855U, 9682U, 8576U, 10223U, 9778U, 3280U, 8541U, 10211U, 
    9741U, 10349U, 7636U, 8627U, 10279U, 10066U, 4204U, 1133U, 
    10001U, 9862U, 9688U, 8601U, 1561U, 10235U, 1665U, 9837U, 
    1631U, 9166U, 4746U, 9664U, 9830U, 10340U, 10314U, 5049U, 
    9498U, 1606U, 10014U, 9869U, 9694U, 8674U, 1567U, 10286U, 
    1672U, 10364U, 1700U, 9771U, 10356U, 9950U, 9600U, 9615U, 
    3856U, 1069U, 11070U, 2850U, 978U, 10994U, 11226U, 3653U, 
    1032U, 11028U, 11453U, 2874U, 992U, 3699U, 1046U, 11044U, 
    11467U, 3844U, 1061U, 11061U, 11503U, 11511U, 4279U, 2856U, 
    11233U, 7727U, 2914U, 8439U, 2841U, 4296U, 3155U, 4324U, 
    2554U, 935U, 1918U, 917U, 7291U, 1459U, 5530U, 4836U, 
    8243U, 10727U, 1750U, 10738U, 1762U, 10749U, 1774U, 3537U, 
    4416U, 3414U, 2098U, 3680U, 4898U, 9628U, 3318U, 4474U, 
    3719U, 393U, 10021U, 407U, 3164U, 2911U, 3818U, 400U, 
    5685U, 8415U, 5228U, 7282U, 9478U, 4752U, 3791U, 6976U, 
    6945U, 9510U, 6962U, 5312U, 6274U, 7364U, 7685U, 8031U, 
    5151U, 7389U, 5176U, 5211U, 7710U, 5295U, 5377U, 8055U, 
    3409U, 2835U, 2618U, 4117U, 9396U, 2729U, 4216U, 9526U, 
    6929U, 10051U, 32U, 10229U, 40U, 7113U, 8465U, 2800U, 
    3594U, 4263U, 9578U, 6242U, 11787U, 6330U, 11806U, 2751U, 
    11173U, 3558U, 11399U, 4238U, 11546U, 9548U, 12203U, 6289U, 
    11796U, 6339U, 11816U, 2665U, 11156U, 3515U, 11389U, 4164U, 
    11529U, 9452U, 12186U, 2784U, 11204U, 3567U, 11409U, 4247U, 
    11556U, 9557U, 12213U, 8137U, 14U, 8144U, 23U, 8721U, 
    6304U, 3189U, 6281U, 6266U, 6348U, 2682U, 3524U, 4181U, 
    9467U, 2793U, 3576U, 4256U, 9566U, 7664U, 7674U, 6323U, 
    2650U, 3508U, 4149U, 9437U, 2736U, 3544U, 4223U, 9533U, 
    5201U, 9062U, 2540U, 4058U, 9086U, 2547U, 4065U, 9123U, 
    9371U, 5134U, 5184U, 7693U, 5159U, 5219U, 7718U, 2596U, 
    4095U, 9388U, 2721U, 4208U, 9518U, 2657U, 4156U, 9444U, 
    2743U, 4230U, 9540U, 5385U, 3396U, 7104U, 8452U, 6250U, 
    7209U, 7220U, 3037U, 5329U, 7231U, 9929U, 7887U, 7946U, 
    7895U, 7962U, 7903U, 7985U, 5345U, 7954U, 5353U, 7970U, 
    5361U, 7993U, 2570U, 3365U, 4082U, 9171U, 2701U, 3531U, 
    4195U, 9489U, 6298U, 5237U, 5524U, 6355U, 10432U, 2560U, 
    3342U, 4072U, 9151U, 6313U, 9897U, 4917U, 3172U, 9018U, 
    4997U, 2565U, 3347U, 4588U, 4077U, 5658U, 9157U, 2694U, 
    4188U, 2633U, 4132U, 9411U, 9474U, 7287U, 2528U, 3183U, 
    4039U, 9029U, 2591U, 3483U, 4090U, 5663U, 9383U, 6937U, 
    9502U, 6953U, 5303U, 6259U, 7356U, 7656U, 8023U, 5143U, 
    7381U, 5168U, 5193U, 7702U, 5287U, 5369U, 8047U, 8014U, 
    7347U, 7647U, 7372U, 8039U, 9921U, 2625U, 4124U, 9403U, 
    9935U, 2642U, 4141U, 9420U, 7247U, 7U, 2520U, 4031U, 
    7590U, 2604U, 4103U, 8293U, 3647U, 4420U, 7227U, 1440U, 
    11123U, 4616U, 1159U, 7743U, 1510U, 11890U, 6099U, 5790U, 
    6526U, 6044U, 6163U, 6008U, 6754U, 5584U, 7524U, 8071U, 
    7557U, 8104U, 6053U, 5574U, 5806U, 6542U, 5826U, 6562U, 
    6172U, 6844U, 5754U, 6490U, 5988U, 6716U, 6226U, 6028U, 
    5712U, 6448U, 5946U, 6674U, 5908U, 6636U, 6081U, 5892U, 
    5732U, 6468U, 5966U, 6694U, 5690U, 6426U, 5924U, 6652U, 
    4595U, 2881U, 5243U, 6361U, 10438U, 5856U, 6592U, 5870U, 
    6606U, 6125U, 6816U, 5774U, 6510U, 6180U, 6134U, 6107U, 
    6798U, 5798U, 6534U, 6071U, 11765U, 6772U, 11837U, 5846U, 
    11754U, 6582U, 11826U, 6115U, 11776U, 6806U, 11854U, 6018U, 
    6736U, 6763U, 7535U, 8082U, 7568U, 8115U, 6062U, 7546U, 
    8093U, 7579U, 8126U, 5816U, 6552U, 6206U, 6869U, 5836U, 
    6572U, 6216U, 6879U, 6198U, 6861U, 5764U, 6500U, 5998U, 
    6726U, 6234U, 6889U, 6036U, 6746U, 5722U, 6458U, 5956U, 
    6684U, 5916U, 6644U, 6090U, 6789U, 5900U, 6628U, 5743U, 
    6479U, 5977U, 6705U, 5701U, 6437U, 5935U, 6663U, 4602U, 
    2889U, 5251U, 6369U, 10446U, 5863U, 6599U, 4609U, 2897U, 
    5259U, 6377U, 10454U, 5881U, 6617U, 6154U, 6835U, 5782U, 
    6518U, 6189U, 6852U, 6144U, 6825U, 3373U, 2819U, 8707U, 
    3380U, 7195U, 7189U, 3023U, 10720U, 7224U, 9093U, 9130U, 
    4373U, 4922U, 4655U, 9481U, 2806U, 1933U, 7300U, 4980U, 
    4857U, 2284U, 7125U, 4945U, 
};

static inline void InitPPCMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 1628);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct PPCGenInstrInfo : public TargetInstrInfo {
  explicit PPCGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~PPCGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc PPCInsts[];
extern const unsigned PPCInstrNameIndices[];
extern const char PPCInstrNameData[];
PPCGenInstrInfo::PPCGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 1628);
}
PPCGenInstrInfo::~PPCGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace PPC {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace PPC
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace PPC {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace PPC
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace PPC {
namespace OpTypes { 
enum OperandType {
  abscalltarget = 0,
  abscondbrtarget = 1,
  absdirectbrtarget = 2,
  calltarget = 3,
  condbrtarget = 4,
  crbitm = 5,
  directbrtarget = 6,
  dispRI = 7,
  dispRIX = 8,
  dispSPE2 = 9,
  dispSPE4 = 10,
  dispSPE8 = 11,
  f32imm = 12,
  f64imm = 13,
  i16imm = 14,
  i1imm = 15,
  i32imm = 16,
  i64imm = 17,
  i8imm = 18,
  imm32SExt16 = 19,
  imm64SExt16 = 20,
  imm64ZExt32 = 21,
  memr = 22,
  memri = 23,
  memrix = 24,
  memrr = 25,
  pred = 26,
  ptr_rc_idx = 27,
  ptr_rc_nor0 = 28,
  s16imm = 29,
  s16imm64 = 30,
  s17imm = 31,
  s17imm64 = 32,
  s5imm = 33,
  spe2dis = 34,
  spe4dis = 35,
  spe8dis = 36,
  tlscall = 37,
  tlscall32 = 38,
  tlsgd = 39,
  tlsgd32 = 40,
  tlsreg = 41,
  tlsreg32 = 42,
  tocentry = 43,
  tocentry32 = 44,
  u10imm = 45,
  u12imm = 46,
  u16imm = 47,
  u16imm64 = 48,
  u1imm = 49,
  u2imm = 50,
  u3imm = 51,
  u4imm = 52,
  u5imm = 53,
  u6imm = 54,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace PPC
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace PPC {

enum IsVSXFMAAlt {
	IsVSXFMAAlt_1
};

enum RC {
	RC_0,
	RC_1
};

// getAltVSXFMAOpcode
int getAltVSXFMAOpcode(uint16_t Opcode) {
static const uint16_t getAltVSXFMAOpcodeTable[][2] = {
  { PPC::XSMADDADP, PPC::XSMADDMDP },
  { PPC::XSMADDASP, PPC::XSMADDMSP },
  { PPC::XSMSUBADP, PPC::XSMSUBMDP },
  { PPC::XSMSUBASP, PPC::XSMSUBMSP },
  { PPC::XSNMADDADP, PPC::XSNMADDMDP },
  { PPC::XSNMADDASP, PPC::XSNMADDMSP },
  { PPC::XSNMSUBADP, PPC::XSNMSUBMDP },
  { PPC::XSNMSUBASP, PPC::XSNMSUBMSP },
  { PPC::XVMADDADP, PPC::XVMADDMDP },
  { PPC::XVMADDASP, PPC::XVMADDMSP },
  { PPC::XVMSUBADP, PPC::XVMSUBMDP },
  { PPC::XVMSUBASP, PPC::XVMSUBMSP },
  { PPC::XVNMADDADP, PPC::XVNMADDMDP },
  { PPC::XVNMADDASP, PPC::XVNMADDMSP },
  { PPC::XVNMSUBADP, PPC::XVNMSUBMDP },
  { PPC::XVNMSUBASP, PPC::XVNMSUBMSP },
}; // End of getAltVSXFMAOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 16;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getAltVSXFMAOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getAltVSXFMAOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getAltVSXFMAOpcodeTable[mid][1];
}

// getNonRecordFormOpcode
int getNonRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getNonRecordFormOpcodeTable[][2] = {
  { PPC::ADD4o, PPC::ADD4 },
  { PPC::ADD8o, PPC::ADD8 },
  { PPC::ADDC8o, PPC::ADDC8 },
  { PPC::ADDCo, PPC::ADDC },
  { PPC::ADDE8o, PPC::ADDE8 },
  { PPC::ADDEo, PPC::ADDE },
  { PPC::ADDICo, PPC::ADDIC },
  { PPC::ADDME8o, PPC::ADDME8 },
  { PPC::ADDMEo, PPC::ADDME },
  { PPC::ADDZE8o, PPC::ADDZE8 },
  { PPC::ADDZEo, PPC::ADDZE },
  { PPC::AND8o, PPC::AND8 },
  { PPC::ANDC8o, PPC::ANDC8 },
  { PPC::ANDCo, PPC::ANDC },
  { PPC::ANDo, PPC::AND },
  { PPC::CNTLZDo, PPC::CNTLZD },
  { PPC::CNTLZW8o, PPC::CNTLZW8 },
  { PPC::CNTLZWo, PPC::CNTLZW },
  { PPC::DIVDUo, PPC::DIVDU },
  { PPC::DIVDo, PPC::DIVD },
  { PPC::DIVWUo, PPC::DIVWU },
  { PPC::DIVWo, PPC::DIVW },
  { PPC::EQV8o, PPC::EQV8 },
  { PPC::EQVo, PPC::EQV },
  { PPC::EXTSB8o, PPC::EXTSB8 },
  { PPC::EXTSBo, PPC::EXTSB },
  { PPC::EXTSH8o, PPC::EXTSH8 },
  { PPC::EXTSHo, PPC::EXTSH },
  { PPC::EXTSW_32_64o, PPC::EXTSW_32_64 },
  { PPC::EXTSWo, PPC::EXTSW },
  { PPC::FABSDo, PPC::FABSD },
  { PPC::FABSSo, PPC::FABSS },
  { PPC::FADDSo, PPC::FADDS },
  { PPC::FADDo, PPC::FADD },
  { PPC::FCFIDSo, PPC::FCFIDS },
  { PPC::FCFIDUSo, PPC::FCFIDUS },
  { PPC::FCFIDUo, PPC::FCFIDU },
  { PPC::FCFIDo, PPC::FCFID },
  { PPC::FCPSGNDo, PPC::FCPSGND },
  { PPC::FCPSGNSo, PPC::FCPSGNS },
  { PPC::FCTIDUZo, PPC::FCTIDUZ },
  { PPC::FCTIDZo, PPC::FCTIDZ },
  { PPC::FCTIDo, PPC::FCTID },
  { PPC::FCTIWUZo, PPC::FCTIWUZ },
  { PPC::FCTIWZo, PPC::FCTIWZ },
  { PPC::FCTIWo, PPC::FCTIW },
  { PPC::FDIVSo, PPC::FDIVS },
  { PPC::FDIVo, PPC::FDIV },
  { PPC::FMADDSo, PPC::FMADDS },
  { PPC::FMADDo, PPC::FMADD },
  { PPC::FMRo, PPC::FMR },
  { PPC::FMSUBSo, PPC::FMSUBS },
  { PPC::FMSUBo, PPC::FMSUB },
  { PPC::FMULSo, PPC::FMULS },
  { PPC::FMULo, PPC::FMUL },
  { PPC::FNABSDo, PPC::FNABSD },
  { PPC::FNABSSo, PPC::FNABSS },
  { PPC::FNEGDo, PPC::FNEGD },
  { PPC::FNEGSo, PPC::FNEGS },
  { PPC::FNMADDSo, PPC::FNMADDS },
  { PPC::FNMADDo, PPC::FNMADD },
  { PPC::FNMSUBSo, PPC::FNMSUBS },
  { PPC::FNMSUBo, PPC::FNMSUB },
  { PPC::FRESo, PPC::FRES },
  { PPC::FREo, PPC::FRE },
  { PPC::FRIMDo, PPC::FRIMD },
  { PPC::FRIMSo, PPC::FRIMS },
  { PPC::FRINDo, PPC::FRIND },
  { PPC::FRINSo, PPC::FRINS },
  { PPC::FRIPDo, PPC::FRIPD },
  { PPC::FRIPSo, PPC::FRIPS },
  { PPC::FRIZDo, PPC::FRIZD },
  { PPC::FRIZSo, PPC::FRIZS },
  { PPC::FRSPo, PPC::FRSP },
  { PPC::FRSQRTESo, PPC::FRSQRTES },
  { PPC::FRSQRTEo, PPC::FRSQRTE },
  { PPC::FSELDo, PPC::FSELD },
  { PPC::FSELSo, PPC::FSELS },
  { PPC::FSQRTSo, PPC::FSQRTS },
  { PPC::FSQRTo, PPC::FSQRT },
  { PPC::FSUBSo, PPC::FSUBS },
  { PPC::FSUBo, PPC::FSUB },
  { PPC::MULHDUo, PPC::MULHDU },
  { PPC::MULHDo, PPC::MULHD },
  { PPC::MULHWUo, PPC::MULHWU },
  { PPC::MULHWo, PPC::MULHW },
  { PPC::MULLDo, PPC::MULLD },
  { PPC::MULLWo, PPC::MULLW },
  { PPC::NAND8o, PPC::NAND8 },
  { PPC::NANDo, PPC::NAND },
  { PPC::NEG8o, PPC::NEG8 },
  { PPC::NEGo, PPC::NEG },
  { PPC::NOR8o, PPC::NOR8 },
  { PPC::NORo, PPC::NOR },
  { PPC::OR8o, PPC::OR8 },
  { PPC::ORC8o, PPC::ORC8 },
  { PPC::ORCo, PPC::ORC },
  { PPC::ORo, PPC::OR },
  { PPC::RLDCLo, PPC::RLDCL },
  { PPC::RLDCRo, PPC::RLDCR },
  { PPC::RLDICLo, PPC::RLDICL },
  { PPC::RLDICRo, PPC::RLDICR },
  { PPC::RLDICo, PPC::RLDIC },
  { PPC::RLDIMIo, PPC::RLDIMI },
  { PPC::RLWIMI8o, PPC::RLWIMI8 },
  { PPC::RLWIMIo, PPC::RLWIMI },
  { PPC::RLWINM8o, PPC::RLWINM8 },
  { PPC::RLWINMo, PPC::RLWINM },
  { PPC::RLWNM8o, PPC::RLWNM8 },
  { PPC::RLWNMo, PPC::RLWNM },
  { PPC::SLDo, PPC::SLD },
  { PPC::SLW8o, PPC::SLW8 },
  { PPC::SLWo, PPC::SLW },
  { PPC::SRADIo, PPC::SRADI },
  { PPC::SRADo, PPC::SRAD },
  { PPC::SRAWIo, PPC::SRAWI },
  { PPC::SRAWo, PPC::SRAW },
  { PPC::SRDo, PPC::SRD },
  { PPC::SRW8o, PPC::SRW8 },
  { PPC::SRWo, PPC::SRW },
  { PPC::SUBF8o, PPC::SUBF8 },
  { PPC::SUBFC8o, PPC::SUBFC8 },
  { PPC::SUBFCo, PPC::SUBFC },
  { PPC::SUBFE8o, PPC::SUBFE8 },
  { PPC::SUBFEo, PPC::SUBFE },
  { PPC::SUBFME8o, PPC::SUBFME8 },
  { PPC::SUBFMEo, PPC::SUBFME },
  { PPC::SUBFZE8o, PPC::SUBFZE8 },
  { PPC::SUBFZEo, PPC::SUBFZE },
  { PPC::SUBFo, PPC::SUBF },
  { PPC::XOR8o, PPC::XOR8 },
  { PPC::XORo, PPC::XOR },
}; // End of getNonRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 132;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getNonRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getNonRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getNonRecordFormOpcodeTable[mid][1];
}

// getRecordFormOpcode
int getRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getRecordFormOpcodeTable[][2] = {
  { PPC::ADD4, PPC::ADD4o },
  { PPC::ADD8, PPC::ADD8o },
  { PPC::ADDC, PPC::ADDCo },
  { PPC::ADDC8, PPC::ADDC8o },
  { PPC::ADDE, PPC::ADDEo },
  { PPC::ADDE8, PPC::ADDE8o },
  { PPC::ADDIC, PPC::ADDICo },
  { PPC::ADDME, PPC::ADDMEo },
  { PPC::ADDME8, PPC::ADDME8o },
  { PPC::ADDZE, PPC::ADDZEo },
  { PPC::ADDZE8, PPC::ADDZE8o },
  { PPC::AND, PPC::ANDo },
  { PPC::AND8, PPC::AND8o },
  { PPC::ANDC, PPC::ANDCo },
  { PPC::ANDC8, PPC::ANDC8o },
  { PPC::CNTLZD, PPC::CNTLZDo },
  { PPC::CNTLZW, PPC::CNTLZWo },
  { PPC::CNTLZW8, PPC::CNTLZW8o },
  { PPC::DIVD, PPC::DIVDo },
  { PPC::DIVDU, PPC::DIVDUo },
  { PPC::DIVW, PPC::DIVWo },
  { PPC::DIVWU, PPC::DIVWUo },
  { PPC::EQV, PPC::EQVo },
  { PPC::EQV8, PPC::EQV8o },
  { PPC::EXTSB, PPC::EXTSBo },
  { PPC::EXTSB8, PPC::EXTSB8o },
  { PPC::EXTSH, PPC::EXTSHo },
  { PPC::EXTSH8, PPC::EXTSH8o },
  { PPC::EXTSW, PPC::EXTSWo },
  { PPC::EXTSW_32_64, PPC::EXTSW_32_64o },
  { PPC::FABSD, PPC::FABSDo },
  { PPC::FABSS, PPC::FABSSo },
  { PPC::FADD, PPC::FADDo },
  { PPC::FADDS, PPC::FADDSo },
  { PPC::FCFID, PPC::FCFIDo },
  { PPC::FCFIDS, PPC::FCFIDSo },
  { PPC::FCFIDU, PPC::FCFIDUo },
  { PPC::FCFIDUS, PPC::FCFIDUSo },
  { PPC::FCPSGND, PPC::FCPSGNDo },
  { PPC::FCPSGNS, PPC::FCPSGNSo },
  { PPC::FCTID, PPC::FCTIDo },
  { PPC::FCTIDUZ, PPC::FCTIDUZo },
  { PPC::FCTIDZ, PPC::FCTIDZo },
  { PPC::FCTIW, PPC::FCTIWo },
  { PPC::FCTIWUZ, PPC::FCTIWUZo },
  { PPC::FCTIWZ, PPC::FCTIWZo },
  { PPC::FDIV, PPC::FDIVo },
  { PPC::FDIVS, PPC::FDIVSo },
  { PPC::FMADD, PPC::FMADDo },
  { PPC::FMADDS, PPC::FMADDSo },
  { PPC::FMR, PPC::FMRo },
  { PPC::FMSUB, PPC::FMSUBo },
  { PPC::FMSUBS, PPC::FMSUBSo },
  { PPC::FMUL, PPC::FMULo },
  { PPC::FMULS, PPC::FMULSo },
  { PPC::FNABSD, PPC::FNABSDo },
  { PPC::FNABSS, PPC::FNABSSo },
  { PPC::FNEGD, PPC::FNEGDo },
  { PPC::FNEGS, PPC::FNEGSo },
  { PPC::FNMADD, PPC::FNMADDo },
  { PPC::FNMADDS, PPC::FNMADDSo },
  { PPC::FNMSUB, PPC::FNMSUBo },
  { PPC::FNMSUBS, PPC::FNMSUBSo },
  { PPC::FRE, PPC::FREo },
  { PPC::FRES, PPC::FRESo },
  { PPC::FRIMD, PPC::FRIMDo },
  { PPC::FRIMS, PPC::FRIMSo },
  { PPC::FRIND, PPC::FRINDo },
  { PPC::FRINS, PPC::FRINSo },
  { PPC::FRIPD, PPC::FRIPDo },
  { PPC::FRIPS, PPC::FRIPSo },
  { PPC::FRIZD, PPC::FRIZDo },
  { PPC::FRIZS, PPC::FRIZSo },
  { PPC::FRSP, PPC::FRSPo },
  { PPC::FRSQRTE, PPC::FRSQRTEo },
  { PPC::FRSQRTES, PPC::FRSQRTESo },
  { PPC::FSELD, PPC::FSELDo },
  { PPC::FSELS, PPC::FSELSo },
  { PPC::FSQRT, PPC::FSQRTo },
  { PPC::FSQRTS, PPC::FSQRTSo },
  { PPC::FSUB, PPC::FSUBo },
  { PPC::FSUBS, PPC::FSUBSo },
  { PPC::MULHD, PPC::MULHDo },
  { PPC::MULHDU, PPC::MULHDUo },
  { PPC::MULHW, PPC::MULHWo },
  { PPC::MULHWU, PPC::MULHWUo },
  { PPC::MULLD, PPC::MULLDo },
  { PPC::MULLW, PPC::MULLWo },
  { PPC::NAND, PPC::NANDo },
  { PPC::NAND8, PPC::NAND8o },
  { PPC::NEG, PPC::NEGo },
  { PPC::NEG8, PPC::NEG8o },
  { PPC::NOR, PPC::NORo },
  { PPC::NOR8, PPC::NOR8o },
  { PPC::OR, PPC::ORo },
  { PPC::OR8, PPC::OR8o },
  { PPC::ORC, PPC::ORCo },
  { PPC::ORC8, PPC::ORC8o },
  { PPC::RLDCL, PPC::RLDCLo },
  { PPC::RLDCR, PPC::RLDCRo },
  { PPC::RLDIC, PPC::RLDICo },
  { PPC::RLDICL, PPC::RLDICLo },
  { PPC::RLDICR, PPC::RLDICRo },
  { PPC::RLDIMI, PPC::RLDIMIo },
  { PPC::RLWIMI, PPC::RLWIMIo },
  { PPC::RLWIMI8, PPC::RLWIMI8o },
  { PPC::RLWINM, PPC::RLWINMo },
  { PPC::RLWINM8, PPC::RLWINM8o },
  { PPC::RLWNM, PPC::RLWNMo },
  { PPC::RLWNM8, PPC::RLWNM8o },
  { PPC::SLD, PPC::SLDo },
  { PPC::SLW, PPC::SLWo },
  { PPC::SLW8, PPC::SLW8o },
  { PPC::SRAD, PPC::SRADo },
  { PPC::SRADI, PPC::SRADIo },
  { PPC::SRAW, PPC::SRAWo },
  { PPC::SRAWI, PPC::SRAWIo },
  { PPC::SRD, PPC::SRDo },
  { PPC::SRW, PPC::SRWo },
  { PPC::SRW8, PPC::SRW8o },
  { PPC::SUBF, PPC::SUBFo },
  { PPC::SUBF8, PPC::SUBF8o },
  { PPC::SUBFC, PPC::SUBFCo },
  { PPC::SUBFC8, PPC::SUBFC8o },
  { PPC::SUBFE, PPC::SUBFEo },
  { PPC::SUBFE8, PPC::SUBFE8o },
  { PPC::SUBFME, PPC::SUBFMEo },
  { PPC::SUBFME8, PPC::SUBFME8o },
  { PPC::SUBFZE, PPC::SUBFZEo },
  { PPC::SUBFZE8, PPC::SUBFZE8o },
  { PPC::XOR, PPC::XORo },
  { PPC::XOR8, PPC::XOR8o },
}; // End of getRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 132;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getRecordFormOpcodeTable[mid][1];
}

} // End PPC namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

