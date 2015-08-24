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

namespace Mips {
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
    ABSQ_S_PH	= 23,
    ABSQ_S_QB	= 24,
    ABSQ_S_W	= 25,
    ADD	= 26,
    ADDIUPC	= 27,
    ADDIUPC_MM	= 28,
    ADDIUPC_MMR6	= 29,
    ADDIUR1SP_MM	= 30,
    ADDIUR2_MM	= 31,
    ADDIUS5_MM	= 32,
    ADDIUSP_MM	= 33,
    ADDIU_MMR6	= 34,
    ADDQH_PH	= 35,
    ADDQH_R_PH	= 36,
    ADDQH_R_W	= 37,
    ADDQH_W	= 38,
    ADDQ_PH	= 39,
    ADDQ_S_PH	= 40,
    ADDQ_S_W	= 41,
    ADDSC	= 42,
    ADDS_A_B	= 43,
    ADDS_A_D	= 44,
    ADDS_A_H	= 45,
    ADDS_A_W	= 46,
    ADDS_S_B	= 47,
    ADDS_S_D	= 48,
    ADDS_S_H	= 49,
    ADDS_S_W	= 50,
    ADDS_U_B	= 51,
    ADDS_U_D	= 52,
    ADDS_U_H	= 53,
    ADDS_U_W	= 54,
    ADDU16_MM	= 55,
    ADDUH_QB	= 56,
    ADDUH_R_QB	= 57,
    ADDU_MMR6	= 58,
    ADDU_PH	= 59,
    ADDU_QB	= 60,
    ADDU_S_PH	= 61,
    ADDU_S_QB	= 62,
    ADDVI_B	= 63,
    ADDVI_D	= 64,
    ADDVI_H	= 65,
    ADDVI_W	= 66,
    ADDV_B	= 67,
    ADDV_D	= 68,
    ADDV_H	= 69,
    ADDV_W	= 70,
    ADDWC	= 71,
    ADD_A_B	= 72,
    ADD_A_D	= 73,
    ADD_A_H	= 74,
    ADD_A_W	= 75,
    ADD_MM	= 76,
    ADD_MMR6	= 77,
    ADDi	= 78,
    ADDi_MM	= 79,
    ADDiu	= 80,
    ADDiu_MM	= 81,
    ADDu	= 82,
    ADDu_MM	= 83,
    ADJCALLSTACKDOWN	= 84,
    ADJCALLSTACKUP	= 85,
    ALIGN	= 86,
    ALIGN_MMR6	= 87,
    ALUIPC	= 88,
    ALUIPC_MMR6	= 89,
    AND	= 90,
    AND16_MM	= 91,
    AND64	= 92,
    ANDI16_MM	= 93,
    ANDI_B	= 94,
    ANDI_MMR6	= 95,
    AND_MM	= 96,
    AND_MMR6	= 97,
    AND_V	= 98,
    AND_V_D_PSEUDO	= 99,
    AND_V_H_PSEUDO	= 100,
    AND_V_W_PSEUDO	= 101,
    ANDi	= 102,
    ANDi64	= 103,
    ANDi_MM	= 104,
    APPEND	= 105,
    ASUB_S_B	= 106,
    ASUB_S_D	= 107,
    ASUB_S_H	= 108,
    ASUB_S_W	= 109,
    ASUB_U_B	= 110,
    ASUB_U_D	= 111,
    ASUB_U_H	= 112,
    ASUB_U_W	= 113,
    ATOMIC_CMP_SWAP_I16	= 114,
    ATOMIC_CMP_SWAP_I32	= 115,
    ATOMIC_CMP_SWAP_I64	= 116,
    ATOMIC_CMP_SWAP_I8	= 117,
    ATOMIC_LOAD_ADD_I16	= 118,
    ATOMIC_LOAD_ADD_I32	= 119,
    ATOMIC_LOAD_ADD_I64	= 120,
    ATOMIC_LOAD_ADD_I8	= 121,
    ATOMIC_LOAD_AND_I16	= 122,
    ATOMIC_LOAD_AND_I32	= 123,
    ATOMIC_LOAD_AND_I64	= 124,
    ATOMIC_LOAD_AND_I8	= 125,
    ATOMIC_LOAD_NAND_I16	= 126,
    ATOMIC_LOAD_NAND_I32	= 127,
    ATOMIC_LOAD_NAND_I64	= 128,
    ATOMIC_LOAD_NAND_I8	= 129,
    ATOMIC_LOAD_OR_I16	= 130,
    ATOMIC_LOAD_OR_I32	= 131,
    ATOMIC_LOAD_OR_I64	= 132,
    ATOMIC_LOAD_OR_I8	= 133,
    ATOMIC_LOAD_SUB_I16	= 134,
    ATOMIC_LOAD_SUB_I32	= 135,
    ATOMIC_LOAD_SUB_I64	= 136,
    ATOMIC_LOAD_SUB_I8	= 137,
    ATOMIC_LOAD_XOR_I16	= 138,
    ATOMIC_LOAD_XOR_I32	= 139,
    ATOMIC_LOAD_XOR_I64	= 140,
    ATOMIC_LOAD_XOR_I8	= 141,
    ATOMIC_SWAP_I16	= 142,
    ATOMIC_SWAP_I32	= 143,
    ATOMIC_SWAP_I64	= 144,
    ATOMIC_SWAP_I8	= 145,
    AUI	= 146,
    AUIPC	= 147,
    AUIPC_MMR6	= 148,
    AUI_MMR6	= 149,
    AVER_S_B	= 150,
    AVER_S_D	= 151,
    AVER_S_H	= 152,
    AVER_S_W	= 153,
    AVER_U_B	= 154,
    AVER_U_D	= 155,
    AVER_U_H	= 156,
    AVER_U_W	= 157,
    AVE_S_B	= 158,
    AVE_S_D	= 159,
    AVE_S_H	= 160,
    AVE_S_W	= 161,
    AVE_U_B	= 162,
    AVE_U_D	= 163,
    AVE_U_H	= 164,
    AVE_U_W	= 165,
    AddiuRxImmX16	= 166,
    AddiuRxPcImmX16	= 167,
    AddiuRxRxImm16	= 168,
    AddiuRxRxImmX16	= 169,
    AddiuRxRyOffMemX16	= 170,
    AddiuSpImm16	= 171,
    AddiuSpImmX16	= 172,
    AdduRxRyRz16	= 173,
    AndRxRxRy16	= 174,
    B	= 175,
    B16_MM	= 176,
    BADDu	= 177,
    BAL	= 178,
    BALC	= 179,
    BALC_MMR6	= 180,
    BALIGN	= 181,
    BAL_BR	= 182,
    BBIT0	= 183,
    BBIT032	= 184,
    BBIT1	= 185,
    BBIT132	= 186,
    BC	= 187,
    BC1EQZ	= 188,
    BC1F	= 189,
    BC1FL	= 190,
    BC1F_MM	= 191,
    BC1NEZ	= 192,
    BC1T	= 193,
    BC1TL	= 194,
    BC1T_MM	= 195,
    BC2EQZ	= 196,
    BC2NEZ	= 197,
    BCLRI_B	= 198,
    BCLRI_D	= 199,
    BCLRI_H	= 200,
    BCLRI_W	= 201,
    BCLR_B	= 202,
    BCLR_D	= 203,
    BCLR_H	= 204,
    BCLR_W	= 205,
    BC_MMR6	= 206,
    BEQ	= 207,
    BEQ64	= 208,
    BEQC	= 209,
    BEQL	= 210,
    BEQZ16_MM	= 211,
    BEQZALC	= 212,
    BEQZALC_MMR6	= 213,
    BEQZC	= 214,
    BEQZC_MM	= 215,
    BEQ_MM	= 216,
    BGE	= 217,
    BGEC	= 218,
    BGEU	= 219,
    BGEUC	= 220,
    BGEZ	= 221,
    BGEZ64	= 222,
    BGEZAL	= 223,
    BGEZALC	= 224,
    BGEZALC_MMR6	= 225,
    BGEZALL	= 226,
    BGEZALS_MM	= 227,
    BGEZAL_MM	= 228,
    BGEZC	= 229,
    BGEZL	= 230,
    BGEZ_MM	= 231,
    BGT	= 232,
    BGTU	= 233,
    BGTZ	= 234,
    BGTZ64	= 235,
    BGTZALC	= 236,
    BGTZALC_MMR6	= 237,
    BGTZC	= 238,
    BGTZL	= 239,
    BGTZ_MM	= 240,
    BINSLI_B	= 241,
    BINSLI_D	= 242,
    BINSLI_H	= 243,
    BINSLI_W	= 244,
    BINSL_B	= 245,
    BINSL_D	= 246,
    BINSL_H	= 247,
    BINSL_W	= 248,
    BINSRI_B	= 249,
    BINSRI_D	= 250,
    BINSRI_H	= 251,
    BINSRI_W	= 252,
    BINSR_B	= 253,
    BINSR_D	= 254,
    BINSR_H	= 255,
    BINSR_W	= 256,
    BITREV	= 257,
    BITSWAP	= 258,
    BITSWAP_MMR6	= 259,
    BLE	= 260,
    BLEU	= 261,
    BLEZ	= 262,
    BLEZ64	= 263,
    BLEZALC	= 264,
    BLEZALC_MMR6	= 265,
    BLEZC	= 266,
    BLEZL	= 267,
    BLEZ_MM	= 268,
    BLT	= 269,
    BLTC	= 270,
    BLTU	= 271,
    BLTUC	= 272,
    BLTZ	= 273,
    BLTZ64	= 274,
    BLTZAL	= 275,
    BLTZALC	= 276,
    BLTZALC_MMR6	= 277,
    BLTZALL	= 278,
    BLTZALS_MM	= 279,
    BLTZAL_MM	= 280,
    BLTZC	= 281,
    BLTZL	= 282,
    BLTZ_MM	= 283,
    BMNZI_B	= 284,
    BMNZ_V	= 285,
    BMZI_B	= 286,
    BMZ_V	= 287,
    BNE	= 288,
    BNE64	= 289,
    BNEC	= 290,
    BNEGI_B	= 291,
    BNEGI_D	= 292,
    BNEGI_H	= 293,
    BNEGI_W	= 294,
    BNEG_B	= 295,
    BNEG_D	= 296,
    BNEG_H	= 297,
    BNEG_W	= 298,
    BNEL	= 299,
    BNEZ16_MM	= 300,
    BNEZALC	= 301,
    BNEZALC_MMR6	= 302,
    BNEZC	= 303,
    BNEZC_MM	= 304,
    BNE_MM	= 305,
    BNVC	= 306,
    BNZ_B	= 307,
    BNZ_D	= 308,
    BNZ_H	= 309,
    BNZ_V	= 310,
    BNZ_W	= 311,
    BOVC	= 312,
    BPOSGE32	= 313,
    BPOSGE32_PSEUDO	= 314,
    BREAK	= 315,
    BREAK16_MM	= 316,
    BREAK_MM	= 317,
    BREAK_MMR6	= 318,
    BSELI_B	= 319,
    BSEL_D_PSEUDO	= 320,
    BSEL_FD_PSEUDO	= 321,
    BSEL_FW_PSEUDO	= 322,
    BSEL_H_PSEUDO	= 323,
    BSEL_V	= 324,
    BSEL_W_PSEUDO	= 325,
    BSETI_B	= 326,
    BSETI_D	= 327,
    BSETI_H	= 328,
    BSETI_W	= 329,
    BSET_B	= 330,
    BSET_D	= 331,
    BSET_H	= 332,
    BSET_W	= 333,
    BZ_B	= 334,
    BZ_D	= 335,
    BZ_H	= 336,
    BZ_V	= 337,
    BZ_W	= 338,
    B_MM_Pseudo	= 339,
    BeqImm	= 340,
    BeqzRxImm16	= 341,
    BeqzRxImmX16	= 342,
    Bimm16	= 343,
    BimmX16	= 344,
    BneImm	= 345,
    BnezRxImm16	= 346,
    BnezRxImmX16	= 347,
    Break16	= 348,
    Bteqz16	= 349,
    BteqzT8CmpX16	= 350,
    BteqzT8CmpiX16	= 351,
    BteqzT8SltX16	= 352,
    BteqzT8SltiX16	= 353,
    BteqzT8SltiuX16	= 354,
    BteqzT8SltuX16	= 355,
    BteqzX16	= 356,
    Btnez16	= 357,
    BtnezT8CmpX16	= 358,
    BtnezT8CmpiX16	= 359,
    BtnezT8SltX16	= 360,
    BtnezT8SltiX16	= 361,
    BtnezT8SltiuX16	= 362,
    BtnezT8SltuX16	= 363,
    BtnezX16	= 364,
    BuildPairF64	= 365,
    BuildPairF64_64	= 366,
    CACHE	= 367,
    CACHE_MM	= 368,
    CACHE_MMR6	= 369,
    CACHE_R6	= 370,
    CEIL_L_D64	= 371,
    CEIL_L_S	= 372,
    CEIL_W_D32	= 373,
    CEIL_W_D64	= 374,
    CEIL_W_MM	= 375,
    CEIL_W_S	= 376,
    CEIL_W_S_MM	= 377,
    CEQI_B	= 378,
    CEQI_D	= 379,
    CEQI_H	= 380,
    CEQI_W	= 381,
    CEQ_B	= 382,
    CEQ_D	= 383,
    CEQ_H	= 384,
    CEQ_W	= 385,
    CFC1	= 386,
    CFC1_MM	= 387,
    CFCMSA	= 388,
    CINS	= 389,
    CINS32	= 390,
    CLASS_D	= 391,
    CLASS_S	= 392,
    CLEI_S_B	= 393,
    CLEI_S_D	= 394,
    CLEI_S_H	= 395,
    CLEI_S_W	= 396,
    CLEI_U_B	= 397,
    CLEI_U_D	= 398,
    CLEI_U_H	= 399,
    CLEI_U_W	= 400,
    CLE_S_B	= 401,
    CLE_S_D	= 402,
    CLE_S_H	= 403,
    CLE_S_W	= 404,
    CLE_U_B	= 405,
    CLE_U_D	= 406,
    CLE_U_H	= 407,
    CLE_U_W	= 408,
    CLO	= 409,
    CLO_MM	= 410,
    CLO_MMR6	= 411,
    CLO_R6	= 412,
    CLTI_S_B	= 413,
    CLTI_S_D	= 414,
    CLTI_S_H	= 415,
    CLTI_S_W	= 416,
    CLTI_U_B	= 417,
    CLTI_U_D	= 418,
    CLTI_U_H	= 419,
    CLTI_U_W	= 420,
    CLT_S_B	= 421,
    CLT_S_D	= 422,
    CLT_S_H	= 423,
    CLT_S_W	= 424,
    CLT_U_B	= 425,
    CLT_U_D	= 426,
    CLT_U_H	= 427,
    CLT_U_W	= 428,
    CLZ	= 429,
    CLZ_MM	= 430,
    CLZ_MMR6	= 431,
    CLZ_R6	= 432,
    CMPGDU_EQ_QB	= 433,
    CMPGDU_LE_QB	= 434,
    CMPGDU_LT_QB	= 435,
    CMPGU_EQ_QB	= 436,
    CMPGU_LE_QB	= 437,
    CMPGU_LT_QB	= 438,
    CMPU_EQ_QB	= 439,
    CMPU_LE_QB	= 440,
    CMPU_LT_QB	= 441,
    CMP_EQ_D	= 442,
    CMP_EQ_PH	= 443,
    CMP_EQ_S	= 444,
    CMP_F_D	= 445,
    CMP_F_S	= 446,
    CMP_LE_D	= 447,
    CMP_LE_PH	= 448,
    CMP_LE_S	= 449,
    CMP_LT_D	= 450,
    CMP_LT_PH	= 451,
    CMP_LT_S	= 452,
    CMP_SAF_D	= 453,
    CMP_SAF_S	= 454,
    CMP_SEQ_D	= 455,
    CMP_SEQ_S	= 456,
    CMP_SLE_D	= 457,
    CMP_SLE_S	= 458,
    CMP_SLT_D	= 459,
    CMP_SLT_S	= 460,
    CMP_SUEQ_D	= 461,
    CMP_SUEQ_S	= 462,
    CMP_SULE_D	= 463,
    CMP_SULE_S	= 464,
    CMP_SULT_D	= 465,
    CMP_SULT_S	= 466,
    CMP_SUN_D	= 467,
    CMP_SUN_S	= 468,
    CMP_UEQ_D	= 469,
    CMP_UEQ_S	= 470,
    CMP_ULE_D	= 471,
    CMP_ULE_S	= 472,
    CMP_ULT_D	= 473,
    CMP_ULT_S	= 474,
    CMP_UN_D	= 475,
    CMP_UN_S	= 476,
    CONSTPOOL_ENTRY	= 477,
    COPY_FD_PSEUDO	= 478,
    COPY_FW_PSEUDO	= 479,
    COPY_S_B	= 480,
    COPY_S_D	= 481,
    COPY_S_H	= 482,
    COPY_S_W	= 483,
    COPY_U_B	= 484,
    COPY_U_D	= 485,
    COPY_U_H	= 486,
    COPY_U_W	= 487,
    CTC1	= 488,
    CTC1_MM	= 489,
    CTCMSA	= 490,
    CVT_D32_S	= 491,
    CVT_D32_W	= 492,
    CVT_D32_W_MM	= 493,
    CVT_D64_L	= 494,
    CVT_D64_S	= 495,
    CVT_D64_W	= 496,
    CVT_D_S_MM	= 497,
    CVT_L_D64	= 498,
    CVT_L_D64_MM	= 499,
    CVT_L_S	= 500,
    CVT_L_S_MM	= 501,
    CVT_S_D32	= 502,
    CVT_S_D32_MM	= 503,
    CVT_S_D64	= 504,
    CVT_S_L	= 505,
    CVT_S_W	= 506,
    CVT_S_W_MM	= 507,
    CVT_W_D32	= 508,
    CVT_W_D64	= 509,
    CVT_W_MM	= 510,
    CVT_W_S	= 511,
    CVT_W_S_MM	= 512,
    C_EQ_D32	= 513,
    C_EQ_D64	= 514,
    C_EQ_S	= 515,
    C_F_D32	= 516,
    C_F_D64	= 517,
    C_F_S	= 518,
    C_LE_D32	= 519,
    C_LE_D64	= 520,
    C_LE_S	= 521,
    C_LT_D32	= 522,
    C_LT_D64	= 523,
    C_LT_S	= 524,
    C_NGE_D32	= 525,
    C_NGE_D64	= 526,
    C_NGE_S	= 527,
    C_NGLE_D32	= 528,
    C_NGLE_D64	= 529,
    C_NGLE_S	= 530,
    C_NGL_D32	= 531,
    C_NGL_D64	= 532,
    C_NGL_S	= 533,
    C_NGT_D32	= 534,
    C_NGT_D64	= 535,
    C_NGT_S	= 536,
    C_OLE_D32	= 537,
    C_OLE_D64	= 538,
    C_OLE_S	= 539,
    C_OLT_D32	= 540,
    C_OLT_D64	= 541,
    C_OLT_S	= 542,
    C_SEQ_D32	= 543,
    C_SEQ_D64	= 544,
    C_SEQ_S	= 545,
    C_SF_D32	= 546,
    C_SF_D64	= 547,
    C_SF_S	= 548,
    C_UEQ_D32	= 549,
    C_UEQ_D64	= 550,
    C_UEQ_S	= 551,
    C_ULE_D32	= 552,
    C_ULE_D64	= 553,
    C_ULE_S	= 554,
    C_ULT_D32	= 555,
    C_ULT_D64	= 556,
    C_ULT_S	= 557,
    C_UN_D32	= 558,
    C_UN_D64	= 559,
    C_UN_S	= 560,
    CmpRxRy16	= 561,
    CmpiRxImm16	= 562,
    CmpiRxImmX16	= 563,
    Constant32	= 564,
    DADD	= 565,
    DADDi	= 566,
    DADDiu	= 567,
    DADDu	= 568,
    DAHI	= 569,
    DAHI_MM64R6	= 570,
    DALIGN	= 571,
    DALIGN_MM64R6	= 572,
    DATI	= 573,
    DATI_MM64R6	= 574,
    DAUI	= 575,
    DAUI_MM64R6	= 576,
    DBITSWAP	= 577,
    DCLO	= 578,
    DCLO_R6	= 579,
    DCLZ	= 580,
    DCLZ_R6	= 581,
    DDIV	= 582,
    DDIVU	= 583,
    DDIVU_MM64R6	= 584,
    DDIV_MM64R6	= 585,
    DERET	= 586,
    DERET_MM	= 587,
    DEXT	= 588,
    DEXTM	= 589,
    DEXTM_MM64R6	= 590,
    DEXTU	= 591,
    DEXTU_MM64R6	= 592,
    DEXT_MM64R6	= 593,
    DI	= 594,
    DINS	= 595,
    DINSM	= 596,
    DINSU	= 597,
    DIV	= 598,
    DIVU	= 599,
    DIVU_MMR6	= 600,
    DIV_MMR6	= 601,
    DIV_S_B	= 602,
    DIV_S_D	= 603,
    DIV_S_H	= 604,
    DIV_S_W	= 605,
    DIV_U_B	= 606,
    DIV_U_D	= 607,
    DIV_U_H	= 608,
    DIV_U_W	= 609,
    DI_MM	= 610,
    DLSA	= 611,
    DLSA_R6	= 612,
    DMFC0	= 613,
    DMFC1	= 614,
    DMFC2	= 615,
    DMFC2_OCTEON	= 616,
    DMOD	= 617,
    DMODU	= 618,
    DMODU_MM64R6	= 619,
    DMOD_MM64R6	= 620,
    DMTC0	= 621,
    DMTC1	= 622,
    DMTC2	= 623,
    DMTC2_OCTEON	= 624,
    DMUH	= 625,
    DMUHU	= 626,
    DMUL	= 627,
    DMULT	= 628,
    DMULTu	= 629,
    DMULU	= 630,
    DMUL_R6	= 631,
    DOTP_S_D	= 632,
    DOTP_S_H	= 633,
    DOTP_S_W	= 634,
    DOTP_U_D	= 635,
    DOTP_U_H	= 636,
    DOTP_U_W	= 637,
    DPADD_S_D	= 638,
    DPADD_S_H	= 639,
    DPADD_S_W	= 640,
    DPADD_U_D	= 641,
    DPADD_U_H	= 642,
    DPADD_U_W	= 643,
    DPAQX_SA_W_PH	= 644,
    DPAQX_S_W_PH	= 645,
    DPAQ_SA_L_W	= 646,
    DPAQ_S_W_PH	= 647,
    DPAU_H_QBL	= 648,
    DPAU_H_QBR	= 649,
    DPAX_W_PH	= 650,
    DPA_W_PH	= 651,
    DPOP	= 652,
    DPSQX_SA_W_PH	= 653,
    DPSQX_S_W_PH	= 654,
    DPSQ_SA_L_W	= 655,
    DPSQ_S_W_PH	= 656,
    DPSUB_S_D	= 657,
    DPSUB_S_H	= 658,
    DPSUB_S_W	= 659,
    DPSUB_U_D	= 660,
    DPSUB_U_H	= 661,
    DPSUB_U_W	= 662,
    DPSU_H_QBL	= 663,
    DPSU_H_QBR	= 664,
    DPSX_W_PH	= 665,
    DPS_W_PH	= 666,
    DROTR	= 667,
    DROTR32	= 668,
    DROTRV	= 669,
    DSBH	= 670,
    DSDIV	= 671,
    DSHD	= 672,
    DSLL	= 673,
    DSLL32	= 674,
    DSLL64_32	= 675,
    DSLLV	= 676,
    DSRA	= 677,
    DSRA32	= 678,
    DSRAV	= 679,
    DSRL	= 680,
    DSRL32	= 681,
    DSRLV	= 682,
    DSUB	= 683,
    DSUBu	= 684,
    DUDIV	= 685,
    DivRxRy16	= 686,
    DivuRxRy16	= 687,
    EHB	= 688,
    EHB_MM	= 689,
    EHB_MMR6	= 690,
    EI	= 691,
    EI_MM	= 692,
    EI_MMR6	= 693,
    ERET	= 694,
    ERETNC	= 695,
    ERETNC_MMR6	= 696,
    ERET_MM	= 697,
    ERET_MMR6	= 698,
    EXT	= 699,
    EXTP	= 700,
    EXTPDP	= 701,
    EXTPDPV	= 702,
    EXTPV	= 703,
    EXTRV_RS_W	= 704,
    EXTRV_R_W	= 705,
    EXTRV_S_H	= 706,
    EXTRV_W	= 707,
    EXTR_RS_W	= 708,
    EXTR_R_W	= 709,
    EXTR_S_H	= 710,
    EXTR_W	= 711,
    EXTS	= 712,
    EXTS32	= 713,
    EXT_MM	= 714,
    ExtractElementF64	= 715,
    ExtractElementF64_64	= 716,
    FABS_D	= 717,
    FABS_D32	= 718,
    FABS_D64	= 719,
    FABS_MM	= 720,
    FABS_S	= 721,
    FABS_S_MM	= 722,
    FABS_W	= 723,
    FADD_D	= 724,
    FADD_D32	= 725,
    FADD_D64	= 726,
    FADD_MM	= 727,
    FADD_S	= 728,
    FADD_S_MM	= 729,
    FADD_W	= 730,
    FCAF_D	= 731,
    FCAF_W	= 732,
    FCEQ_D	= 733,
    FCEQ_W	= 734,
    FCLASS_D	= 735,
    FCLASS_W	= 736,
    FCLE_D	= 737,
    FCLE_W	= 738,
    FCLT_D	= 739,
    FCLT_W	= 740,
    FCMP_D32	= 741,
    FCMP_D32_MM	= 742,
    FCMP_D64	= 743,
    FCMP_S32	= 744,
    FCMP_S32_MM	= 745,
    FCNE_D	= 746,
    FCNE_W	= 747,
    FCOR_D	= 748,
    FCOR_W	= 749,
    FCUEQ_D	= 750,
    FCUEQ_W	= 751,
    FCULE_D	= 752,
    FCULE_W	= 753,
    FCULT_D	= 754,
    FCULT_W	= 755,
    FCUNE_D	= 756,
    FCUNE_W	= 757,
    FCUN_D	= 758,
    FCUN_W	= 759,
    FDIV_D	= 760,
    FDIV_D32	= 761,
    FDIV_D64	= 762,
    FDIV_MM	= 763,
    FDIV_S	= 764,
    FDIV_S_MM	= 765,
    FDIV_W	= 766,
    FEXDO_H	= 767,
    FEXDO_W	= 768,
    FEXP2_D	= 769,
    FEXP2_D_1_PSEUDO	= 770,
    FEXP2_W	= 771,
    FEXP2_W_1_PSEUDO	= 772,
    FEXUPL_D	= 773,
    FEXUPL_W	= 774,
    FEXUPR_D	= 775,
    FEXUPR_W	= 776,
    FFINT_S_D	= 777,
    FFINT_S_W	= 778,
    FFINT_U_D	= 779,
    FFINT_U_W	= 780,
    FFQL_D	= 781,
    FFQL_W	= 782,
    FFQR_D	= 783,
    FFQR_W	= 784,
    FILL_B	= 785,
    FILL_D	= 786,
    FILL_FD_PSEUDO	= 787,
    FILL_FW_PSEUDO	= 788,
    FILL_H	= 789,
    FILL_W	= 790,
    FLOG2_D	= 791,
    FLOG2_W	= 792,
    FLOOR_L_D64	= 793,
    FLOOR_L_S	= 794,
    FLOOR_W_D32	= 795,
    FLOOR_W_D64	= 796,
    FLOOR_W_MM	= 797,
    FLOOR_W_S	= 798,
    FLOOR_W_S_MM	= 799,
    FMADD_D	= 800,
    FMADD_W	= 801,
    FMAX_A_D	= 802,
    FMAX_A_W	= 803,
    FMAX_D	= 804,
    FMAX_W	= 805,
    FMIN_A_D	= 806,
    FMIN_A_W	= 807,
    FMIN_D	= 808,
    FMIN_W	= 809,
    FMOV_D32	= 810,
    FMOV_D32_MM	= 811,
    FMOV_D64	= 812,
    FMOV_S	= 813,
    FMOV_S_MM	= 814,
    FMSUB_D	= 815,
    FMSUB_W	= 816,
    FMUL_D	= 817,
    FMUL_D32	= 818,
    FMUL_D64	= 819,
    FMUL_MM	= 820,
    FMUL_S	= 821,
    FMUL_S_MM	= 822,
    FMUL_W	= 823,
    FNEG_D32	= 824,
    FNEG_D64	= 825,
    FNEG_MM	= 826,
    FNEG_S	= 827,
    FNEG_S_MM	= 828,
    FRCP_D	= 829,
    FRCP_W	= 830,
    FRINT_D	= 831,
    FRINT_W	= 832,
    FRSQRT_D	= 833,
    FRSQRT_W	= 834,
    FSAF_D	= 835,
    FSAF_W	= 836,
    FSEQ_D	= 837,
    FSEQ_W	= 838,
    FSLE_D	= 839,
    FSLE_W	= 840,
    FSLT_D	= 841,
    FSLT_W	= 842,
    FSNE_D	= 843,
    FSNE_W	= 844,
    FSOR_D	= 845,
    FSOR_W	= 846,
    FSQRT_D	= 847,
    FSQRT_D32	= 848,
    FSQRT_D64	= 849,
    FSQRT_MM	= 850,
    FSQRT_S	= 851,
    FSQRT_S_MM	= 852,
    FSQRT_W	= 853,
    FSUB_D	= 854,
    FSUB_D32	= 855,
    FSUB_D64	= 856,
    FSUB_MM	= 857,
    FSUB_S	= 858,
    FSUB_S_MM	= 859,
    FSUB_W	= 860,
    FSUEQ_D	= 861,
    FSUEQ_W	= 862,
    FSULE_D	= 863,
    FSULE_W	= 864,
    FSULT_D	= 865,
    FSULT_W	= 866,
    FSUNE_D	= 867,
    FSUNE_W	= 868,
    FSUN_D	= 869,
    FSUN_W	= 870,
    FTINT_S_D	= 871,
    FTINT_S_W	= 872,
    FTINT_U_D	= 873,
    FTINT_U_W	= 874,
    FTQ_H	= 875,
    FTQ_W	= 876,
    FTRUNC_S_D	= 877,
    FTRUNC_S_W	= 878,
    FTRUNC_U_D	= 879,
    FTRUNC_U_W	= 880,
    GotPrologue16	= 881,
    HADD_S_D	= 882,
    HADD_S_H	= 883,
    HADD_S_W	= 884,
    HADD_U_D	= 885,
    HADD_U_H	= 886,
    HADD_U_W	= 887,
    HSUB_S_D	= 888,
    HSUB_S_H	= 889,
    HSUB_S_W	= 890,
    HSUB_U_D	= 891,
    HSUB_U_H	= 892,
    HSUB_U_W	= 893,
    ILVEV_B	= 894,
    ILVEV_D	= 895,
    ILVEV_H	= 896,
    ILVEV_W	= 897,
    ILVL_B	= 898,
    ILVL_D	= 899,
    ILVL_H	= 900,
    ILVL_W	= 901,
    ILVOD_B	= 902,
    ILVOD_D	= 903,
    ILVOD_H	= 904,
    ILVOD_W	= 905,
    ILVR_B	= 906,
    ILVR_D	= 907,
    ILVR_H	= 908,
    ILVR_W	= 909,
    INS	= 910,
    INSERT_B	= 911,
    INSERT_B_VIDX64_PSEUDO	= 912,
    INSERT_B_VIDX_PSEUDO	= 913,
    INSERT_D	= 914,
    INSERT_D_VIDX64_PSEUDO	= 915,
    INSERT_D_VIDX_PSEUDO	= 916,
    INSERT_FD_PSEUDO	= 917,
    INSERT_FD_VIDX64_PSEUDO	= 918,
    INSERT_FD_VIDX_PSEUDO	= 919,
    INSERT_FW_PSEUDO	= 920,
    INSERT_FW_VIDX64_PSEUDO	= 921,
    INSERT_FW_VIDX_PSEUDO	= 922,
    INSERT_H	= 923,
    INSERT_H_VIDX64_PSEUDO	= 924,
    INSERT_H_VIDX_PSEUDO	= 925,
    INSERT_W	= 926,
    INSERT_W_VIDX64_PSEUDO	= 927,
    INSERT_W_VIDX_PSEUDO	= 928,
    INSV	= 929,
    INSVE_B	= 930,
    INSVE_D	= 931,
    INSVE_H	= 932,
    INSVE_W	= 933,
    INS_MM	= 934,
    J	= 935,
    JAL	= 936,
    JALR	= 937,
    JALR16_MM	= 938,
    JALR64	= 939,
    JALR64Pseudo	= 940,
    JALRPseudo	= 941,
    JALRS16_MM	= 942,
    JALRS_MM	= 943,
    JALR_HB	= 944,
    JALR_MM	= 945,
    JALS_MM	= 946,
    JALX	= 947,
    JALX_MM	= 948,
    JAL_MM	= 949,
    JIALC	= 950,
    JIALC_MMR6	= 951,
    JIC	= 952,
    JIC_MMR6	= 953,
    JR	= 954,
    JR16_MM	= 955,
    JR64	= 956,
    JRADDIUSP	= 957,
    JRC16_MM	= 958,
    JR_HB	= 959,
    JR_HB_R6	= 960,
    JR_MM	= 961,
    J_MM	= 962,
    Jal16	= 963,
    JalB16	= 964,
    JalOneReg	= 965,
    JalTwoReg	= 966,
    JrRa16	= 967,
    JrcRa16	= 968,
    JrcRx16	= 969,
    JumpLinkReg16	= 970,
    LB	= 971,
    LB64	= 972,
    LBU16_MM	= 973,
    LBUX	= 974,
    LB_MM	= 975,
    LBu	= 976,
    LBu64	= 977,
    LBu_MM	= 978,
    LD	= 979,
    LDC1	= 980,
    LDC164	= 981,
    LDC1_MM	= 982,
    LDC2	= 983,
    LDC2_R6	= 984,
    LDC3	= 985,
    LDI_B	= 986,
    LDI_D	= 987,
    LDI_H	= 988,
    LDI_W	= 989,
    LDL	= 990,
    LDPC	= 991,
    LDR	= 992,
    LDXC1	= 993,
    LDXC164	= 994,
    LD_B	= 995,
    LD_D	= 996,
    LD_H	= 997,
    LD_W	= 998,
    LEA_ADDiu	= 999,
    LEA_ADDiu64	= 1000,
    LEA_ADDiu_MM	= 1001,
    LH	= 1002,
    LH64	= 1003,
    LHU16_MM	= 1004,
    LHX	= 1005,
    LH_MM	= 1006,
    LHu	= 1007,
    LHu64	= 1008,
    LHu_MM	= 1009,
    LI16_MM	= 1010,
    LL	= 1011,
    LLD	= 1012,
    LLD_R6	= 1013,
    LL_MM	= 1014,
    LL_R6	= 1015,
    LOAD_ACC128	= 1016,
    LOAD_ACC64	= 1017,
    LOAD_ACC64DSP	= 1018,
    LOAD_CCOND_DSP	= 1019,
    LONG_BRANCH_ADDiu	= 1020,
    LONG_BRANCH_DADDiu	= 1021,
    LONG_BRANCH_LUi	= 1022,
    LSA	= 1023,
    LSA_MMR6	= 1024,
    LSA_R6	= 1025,
    LUXC1	= 1026,
    LUXC164	= 1027,
    LUXC1_MM	= 1028,
    LUi	= 1029,
    LUi64	= 1030,
    LUi_MM	= 1031,
    LW	= 1032,
    LW16_MM	= 1033,
    LW64	= 1034,
    LWC1	= 1035,
    LWC1_MM	= 1036,
    LWC2	= 1037,
    LWC2_R6	= 1038,
    LWC3	= 1039,
    LWGP_MM	= 1040,
    LWL	= 1041,
    LWL64	= 1042,
    LWL_MM	= 1043,
    LWM16_MM	= 1044,
    LWM32_MM	= 1045,
    LWM_MM	= 1046,
    LWPC	= 1047,
    LWPC_MMR6	= 1048,
    LWP_MM	= 1049,
    LWR	= 1050,
    LWR64	= 1051,
    LWR_MM	= 1052,
    LWSP_MM	= 1053,
    LWUPC	= 1054,
    LWU_MM	= 1055,
    LWX	= 1056,
    LWXC1	= 1057,
    LWXC1_MM	= 1058,
    LWXS_MM	= 1059,
    LW_MM	= 1060,
    LWu	= 1061,
    LbRxRyOffMemX16	= 1062,
    LbuRxRyOffMemX16	= 1063,
    LhRxRyOffMemX16	= 1064,
    LhuRxRyOffMemX16	= 1065,
    LiRxImm16	= 1066,
    LiRxImmAlignX16	= 1067,
    LiRxImmX16	= 1068,
    LoadAddrImm32	= 1069,
    LoadAddrImm64	= 1070,
    LoadAddrReg32	= 1071,
    LoadAddrReg64	= 1072,
    LoadImm32	= 1073,
    LoadImm64	= 1074,
    LwConstant32	= 1075,
    LwRxPcTcp16	= 1076,
    LwRxPcTcpX16	= 1077,
    LwRxRyOffMemX16	= 1078,
    LwRxSpImmX16	= 1079,
    MADD	= 1080,
    MADDF_D	= 1081,
    MADDF_S	= 1082,
    MADDR_Q_H	= 1083,
    MADDR_Q_W	= 1084,
    MADDU	= 1085,
    MADDU_DSP	= 1086,
    MADDU_MM	= 1087,
    MADDV_B	= 1088,
    MADDV_D	= 1089,
    MADDV_H	= 1090,
    MADDV_W	= 1091,
    MADD_D32	= 1092,
    MADD_D32_MM	= 1093,
    MADD_D64	= 1094,
    MADD_DSP	= 1095,
    MADD_MM	= 1096,
    MADD_Q_H	= 1097,
    MADD_Q_W	= 1098,
    MADD_S	= 1099,
    MADD_S_MM	= 1100,
    MAQ_SA_W_PHL	= 1101,
    MAQ_SA_W_PHR	= 1102,
    MAQ_S_W_PHL	= 1103,
    MAQ_S_W_PHR	= 1104,
    MAXA_D	= 1105,
    MAXA_S	= 1106,
    MAXI_S_B	= 1107,
    MAXI_S_D	= 1108,
    MAXI_S_H	= 1109,
    MAXI_S_W	= 1110,
    MAXI_U_B	= 1111,
    MAXI_U_D	= 1112,
    MAXI_U_H	= 1113,
    MAXI_U_W	= 1114,
    MAX_A_B	= 1115,
    MAX_A_D	= 1116,
    MAX_A_H	= 1117,
    MAX_A_W	= 1118,
    MAX_D	= 1119,
    MAX_S	= 1120,
    MAX_S_B	= 1121,
    MAX_S_D	= 1122,
    MAX_S_H	= 1123,
    MAX_S_W	= 1124,
    MAX_U_B	= 1125,
    MAX_U_D	= 1126,
    MAX_U_H	= 1127,
    MAX_U_W	= 1128,
    MFC0	= 1129,
    MFC1	= 1130,
    MFC1_MM	= 1131,
    MFC2	= 1132,
    MFHC1_D32	= 1133,
    MFHC1_D64	= 1134,
    MFHC1_MM	= 1135,
    MFHI	= 1136,
    MFHI16_MM	= 1137,
    MFHI64	= 1138,
    MFHI_DSP	= 1139,
    MFHI_MM	= 1140,
    MFLO	= 1141,
    MFLO16_MM	= 1142,
    MFLO64	= 1143,
    MFLO_DSP	= 1144,
    MFLO_MM	= 1145,
    MINA_D	= 1146,
    MINA_S	= 1147,
    MINI_S_B	= 1148,
    MINI_S_D	= 1149,
    MINI_S_H	= 1150,
    MINI_S_W	= 1151,
    MINI_U_B	= 1152,
    MINI_U_D	= 1153,
    MINI_U_H	= 1154,
    MINI_U_W	= 1155,
    MIN_A_B	= 1156,
    MIN_A_D	= 1157,
    MIN_A_H	= 1158,
    MIN_A_W	= 1159,
    MIN_D	= 1160,
    MIN_S	= 1161,
    MIN_S_B	= 1162,
    MIN_S_D	= 1163,
    MIN_S_H	= 1164,
    MIN_S_W	= 1165,
    MIN_U_B	= 1166,
    MIN_U_D	= 1167,
    MIN_U_H	= 1168,
    MIN_U_W	= 1169,
    MIPSeh_return32	= 1170,
    MIPSeh_return64	= 1171,
    MOD	= 1172,
    MODSUB	= 1173,
    MODU	= 1174,
    MODU_MMR6	= 1175,
    MOD_MMR6	= 1176,
    MOD_S_B	= 1177,
    MOD_S_D	= 1178,
    MOD_S_H	= 1179,
    MOD_S_W	= 1180,
    MOD_U_B	= 1181,
    MOD_U_D	= 1182,
    MOD_U_H	= 1183,
    MOD_U_W	= 1184,
    MOVE16_MM	= 1185,
    MOVEP_MM	= 1186,
    MOVE_V	= 1187,
    MOVF_D32	= 1188,
    MOVF_D32_MM	= 1189,
    MOVF_D64	= 1190,
    MOVF_I	= 1191,
    MOVF_I64	= 1192,
    MOVF_I_MM	= 1193,
    MOVF_S	= 1194,
    MOVF_S_MM	= 1195,
    MOVN_I64_D64	= 1196,
    MOVN_I64_I	= 1197,
    MOVN_I64_I64	= 1198,
    MOVN_I64_S	= 1199,
    MOVN_I_D32	= 1200,
    MOVN_I_D32_MM	= 1201,
    MOVN_I_D64	= 1202,
    MOVN_I_I	= 1203,
    MOVN_I_I64	= 1204,
    MOVN_I_MM	= 1205,
    MOVN_I_S	= 1206,
    MOVN_I_S_MM	= 1207,
    MOVT_D32	= 1208,
    MOVT_D32_MM	= 1209,
    MOVT_D64	= 1210,
    MOVT_I	= 1211,
    MOVT_I64	= 1212,
    MOVT_I_MM	= 1213,
    MOVT_S	= 1214,
    MOVT_S_MM	= 1215,
    MOVZ_I64_D64	= 1216,
    MOVZ_I64_I	= 1217,
    MOVZ_I64_I64	= 1218,
    MOVZ_I64_S	= 1219,
    MOVZ_I_D32	= 1220,
    MOVZ_I_D32_MM	= 1221,
    MOVZ_I_D64	= 1222,
    MOVZ_I_I	= 1223,
    MOVZ_I_I64	= 1224,
    MOVZ_I_MM	= 1225,
    MOVZ_I_S	= 1226,
    MOVZ_I_S_MM	= 1227,
    MSUB	= 1228,
    MSUBF_D	= 1229,
    MSUBF_S	= 1230,
    MSUBR_Q_H	= 1231,
    MSUBR_Q_W	= 1232,
    MSUBU	= 1233,
    MSUBU_DSP	= 1234,
    MSUBU_MM	= 1235,
    MSUBV_B	= 1236,
    MSUBV_D	= 1237,
    MSUBV_H	= 1238,
    MSUBV_W	= 1239,
    MSUB_D32	= 1240,
    MSUB_D32_MM	= 1241,
    MSUB_D64	= 1242,
    MSUB_DSP	= 1243,
    MSUB_MM	= 1244,
    MSUB_Q_H	= 1245,
    MSUB_Q_W	= 1246,
    MSUB_S	= 1247,
    MSUB_S_MM	= 1248,
    MTC0	= 1249,
    MTC1	= 1250,
    MTC1_MM	= 1251,
    MTC2	= 1252,
    MTHC1_D32	= 1253,
    MTHC1_D64	= 1254,
    MTHC1_MM	= 1255,
    MTHI	= 1256,
    MTHI64	= 1257,
    MTHI_DSP	= 1258,
    MTHI_MM	= 1259,
    MTHLIP	= 1260,
    MTLO	= 1261,
    MTLO64	= 1262,
    MTLO_DSP	= 1263,
    MTLO_MM	= 1264,
    MTM0	= 1265,
    MTM1	= 1266,
    MTM2	= 1267,
    MTP0	= 1268,
    MTP1	= 1269,
    MTP2	= 1270,
    MUH	= 1271,
    MUHU	= 1272,
    MUHU_MMR6	= 1273,
    MUH_MMR6	= 1274,
    MUL	= 1275,
    MULEQ_S_W_PHL	= 1276,
    MULEQ_S_W_PHR	= 1277,
    MULEU_S_PH_QBL	= 1278,
    MULEU_S_PH_QBR	= 1279,
    MULQ_RS_PH	= 1280,
    MULQ_RS_W	= 1281,
    MULQ_S_PH	= 1282,
    MULQ_S_W	= 1283,
    MULR_Q_H	= 1284,
    MULR_Q_W	= 1285,
    MULSAQ_S_W_PH	= 1286,
    MULSA_W_PH	= 1287,
    MULT	= 1288,
    MULTU_DSP	= 1289,
    MULT_DSP	= 1290,
    MULT_MM	= 1291,
    MULTu	= 1292,
    MULTu_MM	= 1293,
    MULU	= 1294,
    MULU_MMR6	= 1295,
    MULV_B	= 1296,
    MULV_D	= 1297,
    MULV_H	= 1298,
    MULV_W	= 1299,
    MUL_MM	= 1300,
    MUL_MMR6	= 1301,
    MUL_PH	= 1302,
    MUL_Q_H	= 1303,
    MUL_Q_W	= 1304,
    MUL_R6	= 1305,
    MUL_S_PH	= 1306,
    Mfhi16	= 1307,
    Mflo16	= 1308,
    Move32R16	= 1309,
    MoveR3216	= 1310,
    MultRxRy16	= 1311,
    MultRxRyRz16	= 1312,
    MultuRxRy16	= 1313,
    MultuRxRyRz16	= 1314,
    NLOC_B	= 1315,
    NLOC_D	= 1316,
    NLOC_H	= 1317,
    NLOC_W	= 1318,
    NLZC_B	= 1319,
    NLZC_D	= 1320,
    NLZC_H	= 1321,
    NLZC_W	= 1322,
    NMADD_D32	= 1323,
    NMADD_D32_MM	= 1324,
    NMADD_D64	= 1325,
    NMADD_S	= 1326,
    NMADD_S_MM	= 1327,
    NMSUB_D32	= 1328,
    NMSUB_D32_MM	= 1329,
    NMSUB_D64	= 1330,
    NMSUB_S	= 1331,
    NMSUB_S_MM	= 1332,
    NOP	= 1333,
    NOR	= 1334,
    NOR64	= 1335,
    NORI_B	= 1336,
    NOR_MM	= 1337,
    NOR_MMR6	= 1338,
    NOR_V	= 1339,
    NOR_V_D_PSEUDO	= 1340,
    NOR_V_H_PSEUDO	= 1341,
    NOR_V_W_PSEUDO	= 1342,
    NOT16_MM	= 1343,
    NegRxRy16	= 1344,
    NotRxRy16	= 1345,
    OR	= 1346,
    OR16_MM	= 1347,
    OR64	= 1348,
    ORI_B	= 1349,
    ORI_MMR6	= 1350,
    OR_MM	= 1351,
    OR_MMR6	= 1352,
    OR_V	= 1353,
    OR_V_D_PSEUDO	= 1354,
    OR_V_H_PSEUDO	= 1355,
    OR_V_W_PSEUDO	= 1356,
    ORi	= 1357,
    ORi64	= 1358,
    ORi_MM	= 1359,
    OrRxRxRy16	= 1360,
    PACKRL_PH	= 1361,
    PAUSE	= 1362,
    PAUSE_MM	= 1363,
    PCKEV_B	= 1364,
    PCKEV_D	= 1365,
    PCKEV_H	= 1366,
    PCKEV_W	= 1367,
    PCKOD_B	= 1368,
    PCKOD_D	= 1369,
    PCKOD_H	= 1370,
    PCKOD_W	= 1371,
    PCNT_B	= 1372,
    PCNT_D	= 1373,
    PCNT_H	= 1374,
    PCNT_W	= 1375,
    PICK_PH	= 1376,
    PICK_QB	= 1377,
    POP	= 1378,
    PRECEQU_PH_QBL	= 1379,
    PRECEQU_PH_QBLA	= 1380,
    PRECEQU_PH_QBR	= 1381,
    PRECEQU_PH_QBRA	= 1382,
    PRECEQ_W_PHL	= 1383,
    PRECEQ_W_PHR	= 1384,
    PRECEU_PH_QBL	= 1385,
    PRECEU_PH_QBLA	= 1386,
    PRECEU_PH_QBR	= 1387,
    PRECEU_PH_QBRA	= 1388,
    PRECRQU_S_QB_PH	= 1389,
    PRECRQ_PH_W	= 1390,
    PRECRQ_QB_PH	= 1391,
    PRECRQ_RS_PH_W	= 1392,
    PRECR_QB_PH	= 1393,
    PRECR_SRA_PH_W	= 1394,
    PRECR_SRA_R_PH_W	= 1395,
    PREF	= 1396,
    PREF_MM	= 1397,
    PREF_MMR6	= 1398,
    PREF_R6	= 1399,
    PREPEND	= 1400,
    PseudoCMPU_EQ_QB	= 1401,
    PseudoCMPU_LE_QB	= 1402,
    PseudoCMPU_LT_QB	= 1403,
    PseudoCMP_EQ_PH	= 1404,
    PseudoCMP_LE_PH	= 1405,
    PseudoCMP_LT_PH	= 1406,
    PseudoCVT_D32_W	= 1407,
    PseudoCVT_D64_L	= 1408,
    PseudoCVT_D64_W	= 1409,
    PseudoCVT_S_L	= 1410,
    PseudoCVT_S_W	= 1411,
    PseudoDMULT	= 1412,
    PseudoDMULTu	= 1413,
    PseudoDSDIV	= 1414,
    PseudoDUDIV	= 1415,
    PseudoIndirectBranch	= 1416,
    PseudoIndirectBranch64	= 1417,
    PseudoMADD	= 1418,
    PseudoMADDU	= 1419,
    PseudoMFHI	= 1420,
    PseudoMFHI64	= 1421,
    PseudoMFLO	= 1422,
    PseudoMFLO64	= 1423,
    PseudoMSUB	= 1424,
    PseudoMSUBU	= 1425,
    PseudoMTLOHI	= 1426,
    PseudoMTLOHI64	= 1427,
    PseudoMTLOHI_DSP	= 1428,
    PseudoMULT	= 1429,
    PseudoMULTu	= 1430,
    PseudoPICK_PH	= 1431,
    PseudoPICK_QB	= 1432,
    PseudoReturn	= 1433,
    PseudoReturn64	= 1434,
    PseudoSDIV	= 1435,
    PseudoSELECTFP_F_D32	= 1436,
    PseudoSELECTFP_F_D64	= 1437,
    PseudoSELECTFP_F_I	= 1438,
    PseudoSELECTFP_F_I64	= 1439,
    PseudoSELECTFP_F_S	= 1440,
    PseudoSELECTFP_T_D32	= 1441,
    PseudoSELECTFP_T_D64	= 1442,
    PseudoSELECTFP_T_I	= 1443,
    PseudoSELECTFP_T_I64	= 1444,
    PseudoSELECTFP_T_S	= 1445,
    PseudoSELECT_D32	= 1446,
    PseudoSELECT_D64	= 1447,
    PseudoSELECT_I	= 1448,
    PseudoSELECT_I64	= 1449,
    PseudoSELECT_S	= 1450,
    PseudoUDIV	= 1451,
    RADDU_W_QB	= 1452,
    RDDSP	= 1453,
    RDHWR	= 1454,
    RDHWR64	= 1455,
    RDHWR_MM	= 1456,
    REPLV_PH	= 1457,
    REPLV_QB	= 1458,
    REPL_PH	= 1459,
    REPL_QB	= 1460,
    RINT_D	= 1461,
    RINT_S	= 1462,
    ROTR	= 1463,
    ROTRV	= 1464,
    ROTRV_MM	= 1465,
    ROTR_MM	= 1466,
    ROUND_L_D64	= 1467,
    ROUND_L_S	= 1468,
    ROUND_W_D32	= 1469,
    ROUND_W_D64	= 1470,
    ROUND_W_MM	= 1471,
    ROUND_W_S	= 1472,
    ROUND_W_S_MM	= 1473,
    Restore16	= 1474,
    RestoreX16	= 1475,
    RetRA	= 1476,
    RetRA16	= 1477,
    SAT_S_B	= 1478,
    SAT_S_D	= 1479,
    SAT_S_H	= 1480,
    SAT_S_W	= 1481,
    SAT_U_B	= 1482,
    SAT_U_D	= 1483,
    SAT_U_H	= 1484,
    SAT_U_W	= 1485,
    SB	= 1486,
    SB16_MM	= 1487,
    SB64	= 1488,
    SB_MM	= 1489,
    SC	= 1490,
    SCD	= 1491,
    SCD_R6	= 1492,
    SC_MM	= 1493,
    SC_R6	= 1494,
    SD	= 1495,
    SDBBP	= 1496,
    SDBBP16_MM	= 1497,
    SDBBP_MM	= 1498,
    SDBBP_R6	= 1499,
    SDC1	= 1500,
    SDC164	= 1501,
    SDC1_MM	= 1502,
    SDC2	= 1503,
    SDC2_R6	= 1504,
    SDC3	= 1505,
    SDIV	= 1506,
    SDIV_MM	= 1507,
    SDL	= 1508,
    SDR	= 1509,
    SDXC1	= 1510,
    SDXC164	= 1511,
    SEB	= 1512,
    SEB64	= 1513,
    SEB_MM	= 1514,
    SEB_MMR6	= 1515,
    SEH	= 1516,
    SEH64	= 1517,
    SEH_MM	= 1518,
    SEH_MMR6	= 1519,
    SELEQZ	= 1520,
    SELEQZ64	= 1521,
    SELEQZ_D	= 1522,
    SELEQZ_MMR6	= 1523,
    SELEQZ_S	= 1524,
    SELNEZ	= 1525,
    SELNEZ64	= 1526,
    SELNEZ_D	= 1527,
    SELNEZ_MMR6	= 1528,
    SELNEZ_S	= 1529,
    SEL_D	= 1530,
    SEL_S	= 1531,
    SEQ	= 1532,
    SEQi	= 1533,
    SH	= 1534,
    SH16_MM	= 1535,
    SH64	= 1536,
    SHF_B	= 1537,
    SHF_H	= 1538,
    SHF_W	= 1539,
    SHILO	= 1540,
    SHILOV	= 1541,
    SHLLV_PH	= 1542,
    SHLLV_QB	= 1543,
    SHLLV_S_PH	= 1544,
    SHLLV_S_W	= 1545,
    SHLL_PH	= 1546,
    SHLL_QB	= 1547,
    SHLL_S_PH	= 1548,
    SHLL_S_W	= 1549,
    SHRAV_PH	= 1550,
    SHRAV_QB	= 1551,
    SHRAV_R_PH	= 1552,
    SHRAV_R_QB	= 1553,
    SHRAV_R_W	= 1554,
    SHRA_PH	= 1555,
    SHRA_QB	= 1556,
    SHRA_R_PH	= 1557,
    SHRA_R_QB	= 1558,
    SHRA_R_W	= 1559,
    SHRLV_PH	= 1560,
    SHRLV_QB	= 1561,
    SHRL_PH	= 1562,
    SHRL_QB	= 1563,
    SH_MM	= 1564,
    SLDI_B	= 1565,
    SLDI_D	= 1566,
    SLDI_H	= 1567,
    SLDI_W	= 1568,
    SLD_B	= 1569,
    SLD_D	= 1570,
    SLD_H	= 1571,
    SLD_W	= 1572,
    SLL	= 1573,
    SLL16_MM	= 1574,
    SLL64_32	= 1575,
    SLL64_64	= 1576,
    SLLI_B	= 1577,
    SLLI_D	= 1578,
    SLLI_H	= 1579,
    SLLI_W	= 1580,
    SLLV	= 1581,
    SLLV_MM	= 1582,
    SLL_B	= 1583,
    SLL_D	= 1584,
    SLL_H	= 1585,
    SLL_MM	= 1586,
    SLL_MMR6	= 1587,
    SLL_W	= 1588,
    SLT	= 1589,
    SLT64	= 1590,
    SLT_MM	= 1591,
    SLTi	= 1592,
    SLTi64	= 1593,
    SLTi_MM	= 1594,
    SLTiu	= 1595,
    SLTiu64	= 1596,
    SLTiu_MM	= 1597,
    SLTu	= 1598,
    SLTu64	= 1599,
    SLTu_MM	= 1600,
    SNE	= 1601,
    SNEi	= 1602,
    SNZ_B_PSEUDO	= 1603,
    SNZ_D_PSEUDO	= 1604,
    SNZ_H_PSEUDO	= 1605,
    SNZ_V_PSEUDO	= 1606,
    SNZ_W_PSEUDO	= 1607,
    SPLATI_B	= 1608,
    SPLATI_D	= 1609,
    SPLATI_H	= 1610,
    SPLATI_W	= 1611,
    SPLAT_B	= 1612,
    SPLAT_D	= 1613,
    SPLAT_H	= 1614,
    SPLAT_W	= 1615,
    SRA	= 1616,
    SRAI_B	= 1617,
    SRAI_D	= 1618,
    SRAI_H	= 1619,
    SRAI_W	= 1620,
    SRARI_B	= 1621,
    SRARI_D	= 1622,
    SRARI_H	= 1623,
    SRARI_W	= 1624,
    SRAR_B	= 1625,
    SRAR_D	= 1626,
    SRAR_H	= 1627,
    SRAR_W	= 1628,
    SRAV	= 1629,
    SRAV_MM	= 1630,
    SRA_B	= 1631,
    SRA_D	= 1632,
    SRA_H	= 1633,
    SRA_MM	= 1634,
    SRA_W	= 1635,
    SRL	= 1636,
    SRL16_MM	= 1637,
    SRLI_B	= 1638,
    SRLI_D	= 1639,
    SRLI_H	= 1640,
    SRLI_W	= 1641,
    SRLRI_B	= 1642,
    SRLRI_D	= 1643,
    SRLRI_H	= 1644,
    SRLRI_W	= 1645,
    SRLR_B	= 1646,
    SRLR_D	= 1647,
    SRLR_H	= 1648,
    SRLR_W	= 1649,
    SRLV	= 1650,
    SRLV_MM	= 1651,
    SRL_B	= 1652,
    SRL_D	= 1653,
    SRL_H	= 1654,
    SRL_MM	= 1655,
    SRL_W	= 1656,
    SSNOP	= 1657,
    SSNOP_MM	= 1658,
    STORE_ACC128	= 1659,
    STORE_ACC64	= 1660,
    STORE_ACC64DSP	= 1661,
    STORE_CCOND_DSP	= 1662,
    ST_B	= 1663,
    ST_D	= 1664,
    ST_H	= 1665,
    ST_W	= 1666,
    SUB	= 1667,
    SUBQH_PH	= 1668,
    SUBQH_R_PH	= 1669,
    SUBQH_R_W	= 1670,
    SUBQH_W	= 1671,
    SUBQ_PH	= 1672,
    SUBQ_S_PH	= 1673,
    SUBQ_S_W	= 1674,
    SUBSUS_U_B	= 1675,
    SUBSUS_U_D	= 1676,
    SUBSUS_U_H	= 1677,
    SUBSUS_U_W	= 1678,
    SUBSUU_S_B	= 1679,
    SUBSUU_S_D	= 1680,
    SUBSUU_S_H	= 1681,
    SUBSUU_S_W	= 1682,
    SUBS_S_B	= 1683,
    SUBS_S_D	= 1684,
    SUBS_S_H	= 1685,
    SUBS_S_W	= 1686,
    SUBS_U_B	= 1687,
    SUBS_U_D	= 1688,
    SUBS_U_H	= 1689,
    SUBS_U_W	= 1690,
    SUBU16_MM	= 1691,
    SUBUH_QB	= 1692,
    SUBUH_R_QB	= 1693,
    SUBU_MMR6	= 1694,
    SUBU_PH	= 1695,
    SUBU_QB	= 1696,
    SUBU_S_PH	= 1697,
    SUBU_S_QB	= 1698,
    SUBVI_B	= 1699,
    SUBVI_D	= 1700,
    SUBVI_H	= 1701,
    SUBVI_W	= 1702,
    SUBV_B	= 1703,
    SUBV_D	= 1704,
    SUBV_H	= 1705,
    SUBV_W	= 1706,
    SUB_MM	= 1707,
    SUB_MMR6	= 1708,
    SUBu	= 1709,
    SUBu_MM	= 1710,
    SUXC1	= 1711,
    SUXC164	= 1712,
    SUXC1_MM	= 1713,
    SW	= 1714,
    SW16_MM	= 1715,
    SW64	= 1716,
    SWC1	= 1717,
    SWC1_MM	= 1718,
    SWC2	= 1719,
    SWC2_R6	= 1720,
    SWC3	= 1721,
    SWE_MMR6	= 1722,
    SWL	= 1723,
    SWL64	= 1724,
    SWL_MM	= 1725,
    SWM16_MM	= 1726,
    SWM32_MM	= 1727,
    SWM_MM	= 1728,
    SWP_MM	= 1729,
    SWR	= 1730,
    SWR64	= 1731,
    SWR_MM	= 1732,
    SWSP_MM	= 1733,
    SWXC1	= 1734,
    SWXC1_MM	= 1735,
    SW_MM	= 1736,
    SW_MMR6	= 1737,
    SYNC	= 1738,
    SYNCI	= 1739,
    SYNC_MM	= 1740,
    SYSCALL	= 1741,
    SYSCALL_MM	= 1742,
    SZ_B_PSEUDO	= 1743,
    SZ_D_PSEUDO	= 1744,
    SZ_H_PSEUDO	= 1745,
    SZ_V_PSEUDO	= 1746,
    SZ_W_PSEUDO	= 1747,
    Save16	= 1748,
    SaveX16	= 1749,
    SbRxRyOffMemX16	= 1750,
    SebRx16	= 1751,
    SehRx16	= 1752,
    SelBeqZ	= 1753,
    SelBneZ	= 1754,
    SelTBteqZCmp	= 1755,
    SelTBteqZCmpi	= 1756,
    SelTBteqZSlt	= 1757,
    SelTBteqZSlti	= 1758,
    SelTBteqZSltiu	= 1759,
    SelTBteqZSltu	= 1760,
    SelTBtneZCmp	= 1761,
    SelTBtneZCmpi	= 1762,
    SelTBtneZSlt	= 1763,
    SelTBtneZSlti	= 1764,
    SelTBtneZSltiu	= 1765,
    SelTBtneZSltu	= 1766,
    ShRxRyOffMemX16	= 1767,
    SllX16	= 1768,
    SllvRxRy16	= 1769,
    SltCCRxRy16	= 1770,
    SltRxRy16	= 1771,
    SltiCCRxImmX16	= 1772,
    SltiRxImm16	= 1773,
    SltiRxImmX16	= 1774,
    SltiuCCRxImmX16	= 1775,
    SltiuRxImm16	= 1776,
    SltiuRxImmX16	= 1777,
    SltuCCRxRy16	= 1778,
    SltuRxRy16	= 1779,
    SltuRxRyRz16	= 1780,
    SraX16	= 1781,
    SravRxRy16	= 1782,
    SrlX16	= 1783,
    SrlvRxRy16	= 1784,
    SubuRxRyRz16	= 1785,
    SwRxRyOffMemX16	= 1786,
    SwRxSpImmX16	= 1787,
    TAILCALL	= 1788,
    TAILCALL64_R	= 1789,
    TAILCALL_R	= 1790,
    TEQ	= 1791,
    TEQI	= 1792,
    TEQI_MM	= 1793,
    TEQ_MM	= 1794,
    TGE	= 1795,
    TGEI	= 1796,
    TGEIU	= 1797,
    TGEIU_MM	= 1798,
    TGEI_MM	= 1799,
    TGEU	= 1800,
    TGEU_MM	= 1801,
    TGE_MM	= 1802,
    TLBP	= 1803,
    TLBP_MM	= 1804,
    TLBR	= 1805,
    TLBR_MM	= 1806,
    TLBWI	= 1807,
    TLBWI_MM	= 1808,
    TLBWR	= 1809,
    TLBWR_MM	= 1810,
    TLT	= 1811,
    TLTI	= 1812,
    TLTIU_MM	= 1813,
    TLTI_MM	= 1814,
    TLTU	= 1815,
    TLTU_MM	= 1816,
    TLT_MM	= 1817,
    TNE	= 1818,
    TNEI	= 1819,
    TNEI_MM	= 1820,
    TNE_MM	= 1821,
    TRAP	= 1822,
    TRUNC_L_D64	= 1823,
    TRUNC_L_S	= 1824,
    TRUNC_W_D32	= 1825,
    TRUNC_W_D64	= 1826,
    TRUNC_W_MM	= 1827,
    TRUNC_W_S	= 1828,
    TRUNC_W_S_MM	= 1829,
    TTLTIU	= 1830,
    UDIV	= 1831,
    UDIV_MM	= 1832,
    Ulhu	= 1833,
    Ulw	= 1834,
    V3MULU	= 1835,
    VMM0	= 1836,
    VMULU	= 1837,
    VSHF_B	= 1838,
    VSHF_D	= 1839,
    VSHF_H	= 1840,
    VSHF_W	= 1841,
    WAIT	= 1842,
    WAIT_MM	= 1843,
    WRDSP	= 1844,
    WSBH	= 1845,
    WSBH_MM	= 1846,
    XOR	= 1847,
    XOR16_MM	= 1848,
    XOR64	= 1849,
    XORI_B	= 1850,
    XORI_MMR6	= 1851,
    XOR_MM	= 1852,
    XOR_MMR6	= 1853,
    XOR_V	= 1854,
    XOR_V_D_PSEUDO	= 1855,
    XOR_V_H_PSEUDO	= 1856,
    XOR_V_W_PSEUDO	= 1857,
    XORi	= 1858,
    XORi64	= 1859,
    XORi_MM	= 1860,
    XorRxRxRy16	= 1861,
    INSTRUCTION_LIST_END = 1862
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    II_ADDU	= 1,
    II_ADDIU	= 2,
    IIPseudo	= 3,
    II_AND	= 4,
    II_ANDI	= 5,
    IIAlu	= 6,
    IIBranch	= 7,
    II_BADDU	= 8,
    II_CEIL	= 9,
    II_CFC1	= 10,
    II_CLO	= 11,
    II_CLZ	= 12,
    II_CTC1	= 13,
    II_CVT	= 14,
    II_C_CC_D	= 15,
    II_C_CC_S	= 16,
    II_DADD	= 17,
    II_DADDIU	= 18,
    II_DADDU	= 19,
    II_EXT	= 20,
    II_INS	= 21,
    II_DMFC1	= 22,
    II_DMTC1	= 23,
    II_DMUL	= 24,
    II_DMULT	= 25,
    II_DMULTU	= 26,
    II_POP	= 27,
    II_DROTR	= 28,
    II_DROTR32	= 29,
    II_DROTRV	= 30,
    II_DDIV	= 31,
    II_DSLL	= 32,
    II_DSLL32	= 33,
    II_DSLLV	= 34,
    II_DSRA	= 35,
    II_DSRA32	= 36,
    II_DSRAV	= 37,
    II_DSRL	= 38,
    II_DSRL32	= 39,
    II_DSRLV	= 40,
    II_DSUB	= 41,
    II_DSUBU	= 42,
    II_DDIVU	= 43,
    II_ABS	= 44,
    II_ADD_D	= 45,
    II_ADD_S	= 46,
    II_DIV_D	= 47,
    II_DIV_S	= 48,
    II_FLOOR	= 49,
    II_MOV_D	= 50,
    II_MOV_S	= 51,
    II_MUL_D	= 52,
    II_MUL_S	= 53,
    II_NEG	= 54,
    II_SQRT_D	= 55,
    II_SQRT_S	= 56,
    II_SUB_D	= 57,
    II_SUB_S	= 58,
    II_LB	= 59,
    II_LBU	= 60,
    II_LD	= 61,
    II_LDC1	= 62,
    II_LDL	= 63,
    II_LDR	= 64,
    II_LDXC1	= 65,
    II_LH	= 66,
    II_LHU	= 67,
    II_LUXC1	= 68,
    II_LUI	= 69,
    II_LW	= 70,
    II_LWC1	= 71,
    II_LWL	= 72,
    II_LWR	= 73,
    II_LWU	= 74,
    II_LWXC1	= 75,
    II_MADD	= 76,
    II_MADDU	= 77,
    II_MADD_D	= 78,
    II_MADD_S	= 79,
    II_MFC1	= 80,
    II_MFHC1	= 81,
    II_MFHI_MFLO	= 82,
    II_MOVF_D	= 83,
    II_MOVF	= 84,
    II_MOVF_S	= 85,
    II_MOVN_D	= 86,
    II_MOVN	= 87,
    II_MOVN_S	= 88,
    II_MOVT_D	= 89,
    II_MOVT	= 90,
    II_MOVT_S	= 91,
    II_MOVZ_D	= 92,
    II_MOVZ	= 93,
    II_MOVZ_S	= 94,
    II_MSUB	= 95,
    II_MSUBU	= 96,
    II_MSUB_D	= 97,
    II_MSUB_S	= 98,
    II_MTC1	= 99,
    II_MTHC1	= 100,
    II_MTHI_MTLO	= 101,
    II_MUL	= 102,
    II_MULT	= 103,
    II_MULTU	= 104,
    II_NMADD_D	= 105,
    II_NMADD_S	= 106,
    II_NMSUB_D	= 107,
    II_NMSUB_S	= 108,
    II_NOR	= 109,
    II_OR	= 110,
    II_ORI	= 111,
    II_DIV	= 112,
    II_DIVU	= 113,
    II_RDHWR	= 114,
    II_ROTR	= 115,
    II_ROTRV	= 116,
    II_ROUND	= 117,
    II_RESTORE	= 118,
    II_SB	= 119,
    II_SD	= 120,
    II_SDC1	= 121,
    II_SDL	= 122,
    II_SDR	= 123,
    II_SDXC1	= 124,
    II_SEB	= 125,
    II_SEH	= 126,
    II_SEQ_SNE	= 127,
    II_SEQI_SNEI	= 128,
    II_SH	= 129,
    II_SLL	= 130,
    II_SLLV	= 131,
    II_SLT_SLTU	= 132,
    II_SLTI_SLTIU	= 133,
    II_SRA	= 134,
    II_SRAV	= 135,
    II_SRL	= 136,
    II_SRLV	= 137,
    II_SUBU	= 138,
    II_SUXC1	= 139,
    II_SW	= 140,
    II_SWC1	= 141,
    II_SWL	= 142,
    II_SWR	= 143,
    II_SWXC1	= 144,
    II_SAVE	= 145,
    II_TRUNC	= 146,
    II_XOR	= 147,
    II_XORI	= 148,
    SCHED_LIST_END = 149
  };
} // End Sched namespace
} // End Mips namespace
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

static const uint16_t ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const uint16_t ImplicitList2[] = { Mips::DSPCarry, 0 };
static const uint16_t ImplicitList3[] = { Mips::SP, 0 };
static const uint16_t ImplicitList4[] = { Mips::AT, 0 };
static const uint16_t ImplicitList5[] = { Mips::RA, 0 };
static const uint16_t ImplicitList6[] = { Mips::DSPPos, 0 };
static const uint16_t ImplicitList7[] = { Mips::T8, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCCond, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI0, Mips::LO0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList10[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const uint16_t ImplicitList11[] = { Mips::DSPOutFlag16_19, 0 };
static const uint16_t ImplicitList12[] = { Mips::HI0, Mips::LO0, 0 };
static const uint16_t ImplicitList13[] = { Mips::DSPEFI, 0 };
static const uint16_t ImplicitList14[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const uint16_t ImplicitList15[] = { Mips::DSPOutFlag23, 0 };
static const uint16_t ImplicitList16[] = { Mips::FCC0, 0 };
static const uint16_t ImplicitList17[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const uint16_t ImplicitList18[] = { Mips::AC0, 0 };
static const uint16_t ImplicitList19[] = { Mips::AC0_64, 0 };
static const uint16_t ImplicitList20[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList21[] = { Mips::HI0, 0 };
static const uint16_t ImplicitList22[] = { Mips::HI0_64, 0 };
static const uint16_t ImplicitList23[] = { Mips::LO0, 0 };
static const uint16_t ImplicitList24[] = { Mips::LO0_64, 0 };
static const uint16_t ImplicitList25[] = { Mips::MPL0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList26[] = { Mips::MPL1, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList27[] = { Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList28[] = { Mips::P0, 0 };
static const uint16_t ImplicitList29[] = { Mips::P1, 0 };
static const uint16_t ImplicitList30[] = { Mips::P2, 0 };
static const uint16_t ImplicitList31[] = { Mips::DSPOutFlag21, 0 };
static const uint16_t ImplicitList32[] = { Mips::DSPOutFlag22, 0 };
static const uint16_t ImplicitList33[] = { Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList34[] = { Mips::MPL1, Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };

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
static const MCOperandInfo OperandInfo12[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo197[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo220[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo247[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo253[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::GPRMM16ZeroRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo266[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo267[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo268[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo269[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo270[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo271[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo272[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo273[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo274[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo275[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo276[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo277[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo278[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo279[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo280[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo281[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo282[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo283[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo284[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo285[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo286[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo287[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo288[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo289[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo290[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo291[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo292[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo293[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
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
  { 23,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #23 = ABSQ_S_PH
  { 24,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #24 = ABSQ_S_QB
  { 25,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #25 = ABSQ_S_W
  { 26,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #26 = ADD
  { 27,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #27 = ADDIUPC
  { 28,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #28 = ADDIUPC_MM
  { 29,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #29 = ADDIUPC_MMR6
  { 30,	2,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #30 = ADDIUR1SP_MM
  { 31,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #31 = ADDIUR2_MM
  { 32,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #32 = ADDIUS5_MM
  { 33,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #33 = ADDIUSP_MM
  { 34,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #34 = ADDIU_MMR6
  { 35,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #35 = ADDQH_PH
  { 36,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #36 = ADDQH_R_PH
  { 37,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #37 = ADDQH_R_W
  { 38,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #38 = ADDQH_W
  { 39,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #39 = ADDQ_PH
  { 40,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #40 = ADDQ_S_PH
  { 41,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #41 = ADDQ_S_W
  { 42,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo14, -1 ,nullptr },  // Inst #42 = ADDSC
  { 43,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #43 = ADDS_A_B
  { 44,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #44 = ADDS_A_D
  { 45,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #45 = ADDS_A_H
  { 46,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #46 = ADDS_A_W
  { 47,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #47 = ADDS_S_B
  { 48,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #48 = ADDS_S_D
  { 49,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #49 = ADDS_S_H
  { 50,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #50 = ADDS_S_W
  { 51,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #51 = ADDS_U_B
  { 52,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #52 = ADDS_U_D
  { 53,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #53 = ADDS_U_H
  { 54,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #54 = ADDS_U_W
  { 55,	3,	1,	2,	1,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #55 = ADDU16_MM
  { 56,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #56 = ADDUH_QB
  { 57,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #57 = ADDUH_R_QB
  { 58,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #58 = ADDU_MMR6
  { 59,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #59 = ADDU_PH
  { 60,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #60 = ADDU_QB
  { 61,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #61 = ADDU_S_PH
  { 62,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #62 = ADDU_S_QB
  { 63,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #63 = ADDVI_B
  { 64,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #64 = ADDVI_D
  { 65,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #65 = ADDVI_H
  { 66,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #66 = ADDVI_W
  { 67,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #67 = ADDV_B
  { 68,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #68 = ADDV_D
  { 69,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #69 = ADDV_H
  { 70,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #70 = ADDV_W
  { 71,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #71 = ADDWC
  { 72,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #72 = ADD_A_B
  { 73,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #73 = ADD_A_D
  { 74,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #74 = ADD_A_H
  { 75,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #75 = ADD_A_W
  { 76,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #76 = ADD_MM
  { 77,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #77 = ADD_MMR6
  { 78,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #78 = ADDi
  { 79,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #79 = ADDi_MM
  { 80,	3,	1,	4,	2,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #80 = ADDiu
  { 81,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #81 = ADDiu_MM
  { 82,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #82 = ADDu
  { 83,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #83 = ADDu_MM
  { 84,	1,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #84 = ADJCALLSTACKDOWN
  { 85,	2,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #85 = ADJCALLSTACKUP
  { 86,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #86 = ALIGN
  { 87,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #87 = ALIGN_MMR6
  { 88,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #88 = ALUIPC
  { 89,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #89 = ALUIPC_MMR6
  { 90,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #90 = AND
  { 91,	3,	1,	2,	4,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #91 = AND16_MM
  { 92,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #92 = AND64
  { 93,	3,	1,	2,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #93 = ANDI16_MM
  { 94,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #94 = ANDI_B
  { 95,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #95 = ANDI_MMR6
  { 96,	3,	1,	4,	4,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #96 = AND_MM
  { 97,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #97 = AND_MMR6
  { 98,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #98 = AND_V
  { 99,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #99 = AND_V_D_PSEUDO
  { 100,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #100 = AND_V_H_PSEUDO
  { 101,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #101 = AND_V_W_PSEUDO
  { 102,	3,	1,	4,	5,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #102 = ANDi
  { 103,	3,	1,	4,	4,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #103 = ANDi64
  { 104,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #104 = ANDi_MM
  { 105,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #105 = APPEND
  { 106,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #106 = ASUB_S_B
  { 107,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #107 = ASUB_S_D
  { 108,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #108 = ASUB_S_H
  { 109,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #109 = ASUB_S_W
  { 110,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #110 = ASUB_U_B
  { 111,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #111 = ASUB_U_D
  { 112,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #112 = ASUB_U_H
  { 113,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #113 = ASUB_U_W
  { 114,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #114 = ATOMIC_CMP_SWAP_I16
  { 115,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #115 = ATOMIC_CMP_SWAP_I32
  { 116,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #116 = ATOMIC_CMP_SWAP_I64
  { 117,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #117 = ATOMIC_CMP_SWAP_I8
  { 118,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #118 = ATOMIC_LOAD_ADD_I16
  { 119,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #119 = ATOMIC_LOAD_ADD_I32
  { 120,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #120 = ATOMIC_LOAD_ADD_I64
  { 121,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #121 = ATOMIC_LOAD_ADD_I8
  { 122,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #122 = ATOMIC_LOAD_AND_I16
  { 123,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #123 = ATOMIC_LOAD_AND_I32
  { 124,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #124 = ATOMIC_LOAD_AND_I64
  { 125,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #125 = ATOMIC_LOAD_AND_I8
  { 126,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #126 = ATOMIC_LOAD_NAND_I16
  { 127,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #127 = ATOMIC_LOAD_NAND_I32
  { 128,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #128 = ATOMIC_LOAD_NAND_I64
  { 129,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #129 = ATOMIC_LOAD_NAND_I8
  { 130,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #130 = ATOMIC_LOAD_OR_I16
  { 131,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #131 = ATOMIC_LOAD_OR_I32
  { 132,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #132 = ATOMIC_LOAD_OR_I64
  { 133,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #133 = ATOMIC_LOAD_OR_I8
  { 134,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #134 = ATOMIC_LOAD_SUB_I16
  { 135,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #135 = ATOMIC_LOAD_SUB_I32
  { 136,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #136 = ATOMIC_LOAD_SUB_I64
  { 137,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #137 = ATOMIC_LOAD_SUB_I8
  { 138,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #138 = ATOMIC_LOAD_XOR_I16
  { 139,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #139 = ATOMIC_LOAD_XOR_I32
  { 140,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #140 = ATOMIC_LOAD_XOR_I64
  { 141,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #141 = ATOMIC_LOAD_XOR_I8
  { 142,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #142 = ATOMIC_SWAP_I16
  { 143,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #143 = ATOMIC_SWAP_I32
  { 144,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #144 = ATOMIC_SWAP_I64
  { 145,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #145 = ATOMIC_SWAP_I8
  { 146,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #146 = AUI
  { 147,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #147 = AUIPC
  { 148,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #148 = AUIPC_MMR6
  { 149,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #149 = AUI_MMR6
  { 150,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #150 = AVER_S_B
  { 151,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #151 = AVER_S_D
  { 152,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #152 = AVER_S_H
  { 153,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #153 = AVER_S_W
  { 154,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #154 = AVER_U_B
  { 155,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #155 = AVER_U_D
  { 156,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #156 = AVER_U_H
  { 157,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #157 = AVER_U_W
  { 158,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #158 = AVE_S_B
  { 159,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #159 = AVE_S_D
  { 160,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #160 = AVE_S_H
  { 161,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #161 = AVE_S_W
  { 162,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #162 = AVE_U_B
  { 163,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #163 = AVE_U_D
  { 164,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #164 = AVE_U_H
  { 165,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #165 = AVE_U_W
  { 166,	2,	1,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #166 = AddiuRxImmX16
  { 167,	2,	1,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #167 = AddiuRxPcImmX16
  { 168,	3,	1,	2,	6,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #168 = AddiuRxRxImm16
  { 169,	3,	1,	4,	6,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #169 = AddiuRxRxImmX16
  { 170,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #170 = AddiuRxRyOffMemX16
  { 171,	1,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #171 = AddiuSpImm16
  { 172,	1,	0,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #172 = AddiuSpImmX16
  { 173,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #173 = AdduRxRyRz16
  { 174,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #174 = AndRxRxRy16
  { 175,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList4, OperandInfo44, -1 ,nullptr },  // Inst #175 = B
  { 176,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo44, -1 ,nullptr },  // Inst #176 = B16_MM
  { 177,	3,	1,	4,	8,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #177 = BADDu
  { 178,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44, -1 ,nullptr },  // Inst #178 = BAL
  { 179,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44, -1 ,nullptr },  // Inst #179 = BALC
  { 180,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44, -1 ,nullptr },  // Inst #180 = BALC_MMR6
  { 181,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #181 = BALIGN
  { 182,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo44, -1 ,nullptr },  // Inst #182 = BAL_BR
  { 183,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #183 = BBIT0
  { 184,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #184 = BBIT032
  { 185,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #185 = BBIT1
  { 186,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45, -1 ,nullptr },  // Inst #186 = BBIT132
  { 187,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #187 = BC
  { 188,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #188 = BC1EQZ
  { 189,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #189 = BC1F
  { 190,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #190 = BC1FL
  { 191,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #191 = BC1F_MM
  { 192,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #192 = BC1NEZ
  { 193,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #193 = BC1T
  { 194,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #194 = BC1TL
  { 195,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #195 = BC1T_MM
  { 196,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #196 = BC2EQZ
  { 197,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #197 = BC2NEZ
  { 198,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #198 = BCLRI_B
  { 199,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #199 = BCLRI_D
  { 200,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #200 = BCLRI_H
  { 201,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #201 = BCLRI_W
  { 202,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #202 = BCLR_B
  { 203,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #203 = BCLR_D
  { 204,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #204 = BCLR_H
  { 205,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #205 = BCLR_W
  { 206,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #206 = BC_MMR6
  { 207,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #207 = BEQ
  { 208,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #208 = BEQ64
  { 209,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #209 = BEQC
  { 210,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #210 = BEQL
  { 211,	2,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #211 = BEQZ16_MM
  { 212,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #212 = BEQZALC
  { 213,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #213 = BEQZALC_MMR6
  { 214,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #214 = BEQZC
  { 215,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #215 = BEQZC_MM
  { 216,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #216 = BEQ_MM
  { 217,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #217 = BGE
  { 218,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #218 = BGEC
  { 219,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #219 = BGEU
  { 220,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #220 = BGEUC
  { 221,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #221 = BGEZ
  { 222,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #222 = BGEZ64
  { 223,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #223 = BGEZAL
  { 224,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #224 = BGEZALC
  { 225,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #225 = BGEZALC_MMR6
  { 226,	2,	0,	4,	7,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #226 = BGEZALL
  { 227,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #227 = BGEZALS_MM
  { 228,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #228 = BGEZAL_MM
  { 229,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #229 = BGEZC
  { 230,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #230 = BGEZL
  { 231,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #231 = BGEZ_MM
  { 232,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #232 = BGT
  { 233,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #233 = BGTU
  { 234,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #234 = BGTZ
  { 235,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #235 = BGTZ64
  { 236,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #236 = BGTZALC
  { 237,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #237 = BGTZALC_MMR6
  { 238,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #238 = BGTZC
  { 239,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #239 = BGTZL
  { 240,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #240 = BGTZ_MM
  { 241,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #241 = BINSLI_B
  { 242,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #242 = BINSLI_D
  { 243,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #243 = BINSLI_H
  { 244,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #244 = BINSLI_W
  { 245,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #245 = BINSL_B
  { 246,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #246 = BINSL_D
  { 247,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #247 = BINSL_H
  { 248,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #248 = BINSL_W
  { 249,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #249 = BINSRI_B
  { 250,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #250 = BINSRI_D
  { 251,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #251 = BINSRI_H
  { 252,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #252 = BINSRI_W
  { 253,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #253 = BINSR_B
  { 254,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #254 = BINSR_D
  { 255,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #255 = BINSR_H
  { 256,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #256 = BINSR_W
  { 257,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #257 = BITREV
  { 258,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #258 = BITSWAP
  { 259,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #259 = BITSWAP_MMR6
  { 260,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #260 = BLE
  { 261,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #261 = BLEU
  { 262,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #262 = BLEZ
  { 263,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #263 = BLEZ64
  { 264,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #264 = BLEZALC
  { 265,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #265 = BLEZALC_MMR6
  { 266,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #266 = BLEZC
  { 267,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #267 = BLEZL
  { 268,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #268 = BLEZ_MM
  { 269,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #269 = BLT
  { 270,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #270 = BLTC
  { 271,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #271 = BLTU
  { 272,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #272 = BLTUC
  { 273,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #273 = BLTZ
  { 274,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #274 = BLTZ64
  { 275,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #275 = BLTZAL
  { 276,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #276 = BLTZALC
  { 277,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #277 = BLTZALC_MMR6
  { 278,	2,	0,	4,	7,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #278 = BLTZALL
  { 279,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #279 = BLTZALS_MM
  { 280,	2,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #280 = BLTZAL_MM
  { 281,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #281 = BLTZC
  { 282,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #282 = BLTZL
  { 283,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #283 = BLTZ_MM
  { 284,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #284 = BMNZI_B
  { 285,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #285 = BMNZ_V
  { 286,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #286 = BMZI_B
  { 287,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #287 = BMZ_V
  { 288,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #288 = BNE
  { 289,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #289 = BNE64
  { 290,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #290 = BNEC
  { 291,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #291 = BNEGI_B
  { 292,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #292 = BNEGI_D
  { 293,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #293 = BNEGI_H
  { 294,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #294 = BNEGI_W
  { 295,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #295 = BNEG_B
  { 296,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #296 = BNEG_D
  { 297,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #297 = BNEG_H
  { 298,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #298 = BNEG_W
  { 299,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #299 = BNEL
  { 300,	2,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #300 = BNEZ16_MM
  { 301,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #301 = BNEZALC
  { 302,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo52, -1 ,nullptr },  // Inst #302 = BNEZALC_MMR6
  { 303,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #303 = BNEZC
  { 304,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #304 = BNEZC_MM
  { 305,	3,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #305 = BNE_MM
  { 306,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #306 = BNVC
  { 307,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62, -1 ,nullptr },  // Inst #307 = BNZ_B
  { 308,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo63, -1 ,nullptr },  // Inst #308 = BNZ_D
  { 309,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo64, -1 ,nullptr },  // Inst #309 = BNZ_H
  { 310,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62, -1 ,nullptr },  // Inst #310 = BNZ_V
  { 311,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65, -1 ,nullptr },  // Inst #311 = BNZ_W
  { 312,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #312 = BOVC
  { 313,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #313 = BPOSGE32
  { 314,	1,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #314 = BPOSGE32_PSEUDO
  { 315,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #315 = BREAK
  { 316,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #316 = BREAK16_MM
  { 317,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #317 = BREAK_MM
  { 318,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #318 = BREAK_MMR6
  { 319,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #319 = BSELI_B
  { 320,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #320 = BSEL_D_PSEUDO
  { 321,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #321 = BSEL_FD_PSEUDO
  { 322,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #322 = BSEL_FW_PSEUDO
  { 323,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #323 = BSEL_H_PSEUDO
  { 324,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #324 = BSEL_V
  { 325,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #325 = BSEL_W_PSEUDO
  { 326,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #326 = BSETI_B
  { 327,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #327 = BSETI_D
  { 328,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #328 = BSETI_H
  { 329,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #329 = BSETI_W
  { 330,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #330 = BSET_B
  { 331,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #331 = BSET_D
  { 332,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #332 = BSET_H
  { 333,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #333 = BSET_W
  { 334,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62, -1 ,nullptr },  // Inst #334 = BZ_B
  { 335,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo63, -1 ,nullptr },  // Inst #335 = BZ_D
  { 336,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo64, -1 ,nullptr },  // Inst #336 = BZ_H
  { 337,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo62, -1 ,nullptr },  // Inst #337 = BZ_V
  { 338,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65, -1 ,nullptr },  // Inst #338 = BZ_W
  { 339,	1,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #339 = B_MM_Pseudo
  { 340,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #340 = BeqImm
  { 341,	2,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #341 = BeqzRxImm16
  { 342,	2,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #342 = BeqzRxImmX16
  { 343,	1,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #343 = Bimm16
  { 344,	1,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #344 = BimmX16
  { 345,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #345 = BneImm
  { 346,	2,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #346 = BnezRxImm16
  { 347,	2,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #347 = BnezRxImmX16
  { 348,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #348 = Break16
  { 349,	1,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #349 = Bteqz16
  { 350,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #350 = BteqzT8CmpX16
  { 351,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #351 = BteqzT8CmpiX16
  { 352,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #352 = BteqzT8SltX16
  { 353,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #353 = BteqzT8SltiX16
  { 354,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #354 = BteqzT8SltiuX16
  { 355,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #355 = BteqzT8SltuX16
  { 356,	1,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #356 = BteqzX16
  { 357,	1,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #357 = Btnez16
  { 358,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #358 = BtnezT8CmpX16
  { 359,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #359 = BtnezT8CmpiX16
  { 360,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #360 = BtnezT8SltX16
  { 361,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #361 = BtnezT8SltiX16
  { 362,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #362 = BtnezT8SltiuX16
  { 363,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #363 = BtnezT8SltuX16
  { 364,	1,	0,	4,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #364 = BtnezX16
  { 365,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #365 = BuildPairF64
  { 366,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #366 = BuildPairF64_64
  { 367,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #367 = CACHE
  { 368,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #368 = CACHE_MM
  { 369,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #369 = CACHE_MMR6
  { 370,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #370 = CACHE_R6
  { 371,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #371 = CEIL_L_D64
  { 372,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #372 = CEIL_L_S
  { 373,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #373 = CEIL_W_D32
  { 374,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #374 = CEIL_W_D64
  { 375,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #375 = CEIL_W_MM
  { 376,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #376 = CEIL_W_S
  { 377,	2,	1,	4,	9,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #377 = CEIL_W_S_MM
  { 378,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #378 = CEQI_B
  { 379,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #379 = CEQI_D
  { 380,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #380 = CEQI_H
  { 381,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #381 = CEQI_W
  { 382,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #382 = CEQ_B
  { 383,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #383 = CEQ_D
  { 384,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #384 = CEQ_H
  { 385,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #385 = CEQ_W
  { 386,	2,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #386 = CFC1
  { 387,	2,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #387 = CFC1_MM
  { 388,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #388 = CFCMSA
  { 389,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #389 = CINS
  { 390,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #390 = CINS32
  { 391,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #391 = CLASS_D
  { 392,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #392 = CLASS_S
  { 393,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #393 = CLEI_S_B
  { 394,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #394 = CLEI_S_D
  { 395,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #395 = CLEI_S_H
  { 396,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #396 = CLEI_S_W
  { 397,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #397 = CLEI_U_B
  { 398,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #398 = CLEI_U_D
  { 399,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #399 = CLEI_U_H
  { 400,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #400 = CLEI_U_W
  { 401,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #401 = CLE_S_B
  { 402,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #402 = CLE_S_D
  { 403,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #403 = CLE_S_H
  { 404,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #404 = CLE_S_W
  { 405,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #405 = CLE_U_B
  { 406,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #406 = CLE_U_D
  { 407,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #407 = CLE_U_H
  { 408,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #408 = CLE_U_W
  { 409,	2,	1,	4,	11,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #409 = CLO
  { 410,	2,	1,	4,	11,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #410 = CLO_MM
  { 411,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #411 = CLO_MMR6
  { 412,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #412 = CLO_R6
  { 413,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #413 = CLTI_S_B
  { 414,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #414 = CLTI_S_D
  { 415,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #415 = CLTI_S_H
  { 416,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #416 = CLTI_S_W
  { 417,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #417 = CLTI_U_B
  { 418,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #418 = CLTI_U_D
  { 419,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #419 = CLTI_U_H
  { 420,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #420 = CLTI_U_W
  { 421,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #421 = CLT_S_B
  { 422,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #422 = CLT_S_D
  { 423,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #423 = CLT_S_H
  { 424,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #424 = CLT_S_W
  { 425,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #425 = CLT_U_B
  { 426,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #426 = CLT_U_D
  { 427,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #427 = CLT_U_H
  { 428,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #428 = CLT_U_W
  { 429,	2,	1,	4,	12,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #429 = CLZ
  { 430,	2,	1,	4,	12,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #430 = CLZ_MM
  { 431,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #431 = CLZ_MMR6
  { 432,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #432 = CLZ_R6
  { 433,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo83, -1 ,nullptr },  // Inst #433 = CMPGDU_EQ_QB
  { 434,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo83, -1 ,nullptr },  // Inst #434 = CMPGDU_LE_QB
  { 435,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo83, -1 ,nullptr },  // Inst #435 = CMPGDU_LT_QB
  { 436,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #436 = CMPGU_EQ_QB
  { 437,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #437 = CMPGU_LE_QB
  { 438,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #438 = CMPGU_LT_QB
  { 439,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #439 = CMPU_EQ_QB
  { 440,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #440 = CMPU_LE_QB
  { 441,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #441 = CMPU_LT_QB
  { 442,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #442 = CMP_EQ_D
  { 443,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #443 = CMP_EQ_PH
  { 444,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #444 = CMP_EQ_S
  { 445,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #445 = CMP_F_D
  { 446,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #446 = CMP_F_S
  { 447,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #447 = CMP_LE_D
  { 448,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #448 = CMP_LE_PH
  { 449,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #449 = CMP_LE_S
  { 450,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #450 = CMP_LT_D
  { 451,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #451 = CMP_LT_PH
  { 452,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #452 = CMP_LT_S
  { 453,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #453 = CMP_SAF_D
  { 454,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #454 = CMP_SAF_S
  { 455,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #455 = CMP_SEQ_D
  { 456,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #456 = CMP_SEQ_S
  { 457,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #457 = CMP_SLE_D
  { 458,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #458 = CMP_SLE_S
  { 459,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #459 = CMP_SLT_D
  { 460,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #460 = CMP_SLT_S
  { 461,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #461 = CMP_SUEQ_D
  { 462,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #462 = CMP_SUEQ_S
  { 463,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #463 = CMP_SULE_D
  { 464,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #464 = CMP_SULE_S
  { 465,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #465 = CMP_SULT_D
  { 466,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #466 = CMP_SULT_S
  { 467,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #467 = CMP_SUN_D
  { 468,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #468 = CMP_SUN_S
  { 469,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #469 = CMP_UEQ_D
  { 470,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #470 = CMP_UEQ_S
  { 471,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #471 = CMP_ULE_D
  { 472,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #472 = CMP_ULE_S
  { 473,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #473 = CMP_ULT_D
  { 474,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #474 = CMP_ULT_S
  { 475,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #475 = CMP_UN_D
  { 476,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #476 = CMP_UN_S
  { 477,	3,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #477 = CONSTPOOL_ENTRY
  { 478,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #478 = COPY_FD_PSEUDO
  { 479,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #479 = COPY_FW_PSEUDO
  { 480,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #480 = COPY_S_B
  { 481,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #481 = COPY_S_D
  { 482,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #482 = COPY_S_H
  { 483,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #483 = COPY_S_W
  { 484,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #484 = COPY_U_B
  { 485,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #485 = COPY_U_D
  { 486,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #486 = COPY_U_H
  { 487,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #487 = COPY_U_W
  { 488,	2,	1,	4,	13,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #488 = CTC1
  { 489,	2,	1,	4,	13,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #489 = CTC1_MM
  { 490,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #490 = CTCMSA
  { 491,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #491 = CVT_D32_S
  { 492,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #492 = CVT_D32_W
  { 493,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #493 = CVT_D32_W_MM
  { 494,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #494 = CVT_D64_L
  { 495,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #495 = CVT_D64_S
  { 496,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #496 = CVT_D64_W
  { 497,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #497 = CVT_D_S_MM
  { 498,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #498 = CVT_L_D64
  { 499,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #499 = CVT_L_D64_MM
  { 500,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #500 = CVT_L_S
  { 501,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #501 = CVT_L_S_MM
  { 502,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #502 = CVT_S_D32
  { 503,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #503 = CVT_S_D32_MM
  { 504,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #504 = CVT_S_D64
  { 505,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #505 = CVT_S_L
  { 506,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #506 = CVT_S_W
  { 507,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #507 = CVT_S_W_MM
  { 508,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #508 = CVT_W_D32
  { 509,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #509 = CVT_W_D64
  { 510,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #510 = CVT_W_MM
  { 511,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #511 = CVT_W_S
  { 512,	2,	1,	4,	14,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #512 = CVT_W_S_MM
  { 513,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #513 = C_EQ_D32
  { 514,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #514 = C_EQ_D64
  { 515,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #515 = C_EQ_S
  { 516,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #516 = C_F_D32
  { 517,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #517 = C_F_D64
  { 518,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #518 = C_F_S
  { 519,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #519 = C_LE_D32
  { 520,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #520 = C_LE_D64
  { 521,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #521 = C_LE_S
  { 522,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #522 = C_LT_D32
  { 523,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #523 = C_LT_D64
  { 524,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #524 = C_LT_S
  { 525,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #525 = C_NGE_D32
  { 526,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #526 = C_NGE_D64
  { 527,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #527 = C_NGE_S
  { 528,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #528 = C_NGLE_D32
  { 529,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #529 = C_NGLE_D64
  { 530,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #530 = C_NGLE_S
  { 531,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #531 = C_NGL_D32
  { 532,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #532 = C_NGL_D64
  { 533,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #533 = C_NGL_S
  { 534,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #534 = C_NGT_D32
  { 535,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #535 = C_NGT_D64
  { 536,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #536 = C_NGT_S
  { 537,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #537 = C_OLE_D32
  { 538,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #538 = C_OLE_D64
  { 539,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #539 = C_OLE_S
  { 540,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #540 = C_OLT_D32
  { 541,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #541 = C_OLT_D64
  { 542,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #542 = C_OLT_S
  { 543,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #543 = C_SEQ_D32
  { 544,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #544 = C_SEQ_D64
  { 545,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #545 = C_SEQ_S
  { 546,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #546 = C_SF_D32
  { 547,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #547 = C_SF_D64
  { 548,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #548 = C_SF_S
  { 549,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #549 = C_UEQ_D32
  { 550,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #550 = C_UEQ_D64
  { 551,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #551 = C_UEQ_S
  { 552,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #552 = C_ULE_D32
  { 553,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #553 = C_ULE_D64
  { 554,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #554 = C_ULE_S
  { 555,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #555 = C_ULT_D32
  { 556,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #556 = C_ULT_D64
  { 557,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #557 = C_ULT_S
  { 558,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #558 = C_UN_D32
  { 559,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #559 = C_UN_D64
  { 560,	2,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #560 = C_UN_S
  { 561,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #561 = CmpRxRy16
  { 562,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #562 = CmpiRxImm16
  { 563,	2,	0,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #563 = CmpiRxImmX16
  { 564,	1,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #564 = Constant32
  { 565,	3,	1,	4,	17,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #565 = DADD
  { 566,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #566 = DADDi
  { 567,	3,	1,	4,	18,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #567 = DADDiu
  { 568,	3,	1,	4,	19,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #568 = DADDu
  { 569,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #569 = DAHI
  { 570,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #570 = DAHI_MM64R6
  { 571,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #571 = DALIGN
  { 572,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #572 = DALIGN_MM64R6
  { 573,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #573 = DATI
  { 574,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #574 = DATI_MM64R6
  { 575,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #575 = DAUI
  { 576,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #576 = DAUI_MM64R6
  { 577,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #577 = DBITSWAP
  { 578,	2,	1,	4,	11,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #578 = DCLO
  { 579,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #579 = DCLO_R6
  { 580,	2,	1,	4,	12,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #580 = DCLZ
  { 581,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #581 = DCLZ_R6
  { 582,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #582 = DDIV
  { 583,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #583 = DDIVU
  { 584,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #584 = DDIVU_MM64R6
  { 585,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #585 = DDIV_MM64R6
  { 586,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #586 = DERET
  { 587,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #587 = DERET_MM
  { 588,	4,	1,	4,	20,	0, 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #588 = DEXT
  { 589,	4,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #589 = DEXTM
  { 590,	4,	1,	4,	20,	0, 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #590 = DEXTM_MM64R6
  { 591,	4,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #591 = DEXTU
  { 592,	4,	1,	4,	20,	0, 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #592 = DEXTU_MM64R6
  { 593,	4,	1,	4,	20,	0, 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #593 = DEXT_MM64R6
  { 594,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #594 = DI
  { 595,	5,	1,	4,	21,	0, 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #595 = DINS
  { 596,	5,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #596 = DINSM
  { 597,	5,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #597 = DINSU
  { 598,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #598 = DIV
  { 599,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #599 = DIVU
  { 600,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #600 = DIVU_MMR6
  { 601,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #601 = DIV_MMR6
  { 602,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #602 = DIV_S_B
  { 603,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #603 = DIV_S_D
  { 604,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #604 = DIV_S_H
  { 605,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #605 = DIV_S_W
  { 606,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #606 = DIV_U_B
  { 607,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #607 = DIV_U_D
  { 608,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #608 = DIV_U_H
  { 609,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #609 = DIV_U_W
  { 610,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #610 = DI_MM
  { 611,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #611 = DLSA
  { 612,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #612 = DLSA_R6
  { 613,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #613 = DMFC0
  { 614,	2,	1,	4,	22,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #614 = DMFC1
  { 615,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #615 = DMFC2
  { 616,	2,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #616 = DMFC2_OCTEON
  { 617,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #617 = DMOD
  { 618,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #618 = DMODU
  { 619,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #619 = DMODU_MM64R6
  { 620,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #620 = DMOD_MM64R6
  { 621,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #621 = DMTC0
  { 622,	2,	1,	4,	23,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #622 = DMTC1
  { 623,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #623 = DMTC2
  { 624,	2,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #624 = DMTC2_OCTEON
  { 625,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #625 = DMUH
  { 626,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #626 = DMUHU
  { 627,	3,	1,	4,	24,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList9, OperandInfo32, -1 ,nullptr },  // Inst #627 = DMUL
  { 628,	2,	0,	4,	25,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #628 = DMULT
  { 629,	2,	0,	4,	26,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #629 = DMULTu
  { 630,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #630 = DMULU
  { 631,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #631 = DMUL_R6
  { 632,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #632 = DOTP_S_D
  { 633,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #633 = DOTP_S_H
  { 634,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #634 = DOTP_S_W
  { 635,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #635 = DOTP_U_D
  { 636,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #636 = DOTP_U_H
  { 637,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #637 = DOTP_U_W
  { 638,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #638 = DPADD_S_D
  { 639,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #639 = DPADD_S_H
  { 640,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #640 = DPADD_S_W
  { 641,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #641 = DPADD_U_D
  { 642,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #642 = DPADD_U_H
  { 643,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #643 = DPADD_U_W
  { 644,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #644 = DPAQX_SA_W_PH
  { 645,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #645 = DPAQX_S_W_PH
  { 646,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #646 = DPAQ_SA_L_W
  { 647,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #647 = DPAQ_S_W_PH
  { 648,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #648 = DPAU_H_QBL
  { 649,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #649 = DPAU_H_QBR
  { 650,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #650 = DPAX_W_PH
  { 651,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #651 = DPA_W_PH
  { 652,	2,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #652 = DPOP
  { 653,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #653 = DPSQX_SA_W_PH
  { 654,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #654 = DPSQX_S_W_PH
  { 655,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #655 = DPSQ_SA_L_W
  { 656,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #656 = DPSQ_S_W_PH
  { 657,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #657 = DPSUB_S_D
  { 658,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #658 = DPSUB_S_H
  { 659,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #659 = DPSUB_S_W
  { 660,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #660 = DPSUB_U_D
  { 661,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #661 = DPSUB_U_H
  { 662,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #662 = DPSUB_U_W
  { 663,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #663 = DPSU_H_QBL
  { 664,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #664 = DPSU_H_QBR
  { 665,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #665 = DPSX_W_PH
  { 666,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #666 = DPS_W_PH
  { 667,	3,	1,	4,	28,	0, 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #667 = DROTR
  { 668,	3,	1,	4,	29,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #668 = DROTR32
  { 669,	3,	1,	4,	30,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #669 = DROTRV
  { 670,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #670 = DSBH
  { 671,	2,	0,	4,	31,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #671 = DSDIV
  { 672,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #672 = DSHD
  { 673,	3,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #673 = DSLL
  { 674,	3,	1,	4,	33,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #674 = DSLL32
  { 675,	2,	1,	4,	32,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #675 = DSLL64_32
  { 676,	3,	1,	4,	34,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #676 = DSLLV
  { 677,	3,	1,	4,	35,	0, 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #677 = DSRA
  { 678,	3,	1,	4,	36,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #678 = DSRA32
  { 679,	3,	1,	4,	37,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #679 = DSRAV
  { 680,	3,	1,	4,	38,	0, 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #680 = DSRL
  { 681,	3,	1,	4,	39,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #681 = DSRL32
  { 682,	3,	1,	4,	40,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #682 = DSRLV
  { 683,	3,	1,	4,	41,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #683 = DSUB
  { 684,	3,	1,	4,	42,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #684 = DSUBu
  { 685,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #685 = DUDIV
  { 686,	2,	0,	2,	6,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #686 = DivRxRy16
  { 687,	2,	0,	2,	6,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #687 = DivuRxRy16
  { 688,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #688 = EHB
  { 689,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #689 = EHB_MM
  { 690,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #690 = EHB_MMR6
  { 691,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #691 = EI
  { 692,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #692 = EI_MM
  { 693,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #693 = EI_MMR6
  { 694,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #694 = ERET
  { 695,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #695 = ERETNC
  { 696,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #696 = ERETNC_MMR6
  { 697,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #697 = ERET_MM
  { 698,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #698 = ERET_MMR6
  { 699,	4,	1,	4,	20,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #699 = EXT
  { 700,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo118, -1 ,nullptr },  // Inst #700 = EXTP
  { 701,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo118, -1 ,nullptr },  // Inst #701 = EXTPDP
  { 702,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo119, -1 ,nullptr },  // Inst #702 = EXTPDPV
  { 703,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo119, -1 ,nullptr },  // Inst #703 = EXTPV
  { 704,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #704 = EXTRV_RS_W
  { 705,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #705 = EXTRV_R_W
  { 706,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #706 = EXTRV_S_H
  { 707,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #707 = EXTRV_W
  { 708,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #708 = EXTR_RS_W
  { 709,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #709 = EXTR_R_W
  { 710,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #710 = EXTR_S_H
  { 711,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #711 = EXTR_W
  { 712,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #712 = EXTS
  { 713,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #713 = EXTS32
  { 714,	4,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #714 = EXT_MM
  { 715,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #715 = ExtractElementF64
  { 716,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #716 = ExtractElementF64_64
  { 717,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #717 = FABS_D
  { 718,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #718 = FABS_D32
  { 719,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #719 = FABS_D64
  { 720,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #720 = FABS_MM
  { 721,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #721 = FABS_S
  { 722,	2,	1,	4,	44,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #722 = FABS_S_MM
  { 723,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #723 = FABS_W
  { 724,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #724 = FADD_D
  { 725,	3,	1,	4,	45,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #725 = FADD_D32
  { 726,	3,	1,	4,	45,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #726 = FADD_D64
  { 727,	3,	1,	4,	45,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #727 = FADD_MM
  { 728,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #728 = FADD_S
  { 729,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #729 = FADD_S_MM
  { 730,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #730 = FADD_W
  { 731,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #731 = FCAF_D
  { 732,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #732 = FCAF_W
  { 733,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #733 = FCEQ_D
  { 734,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #734 = FCEQ_W
  { 735,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #735 = FCLASS_D
  { 736,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #736 = FCLASS_W
  { 737,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #737 = FCLE_D
  { 738,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #738 = FCLE_W
  { 739,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #739 = FCLT_D
  { 740,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #740 = FCLT_W
  { 741,	3,	0,	4,	15,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo127, -1 ,nullptr },  // Inst #741 = FCMP_D32
  { 742,	3,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo127, -1 ,nullptr },  // Inst #742 = FCMP_D32_MM
  { 743,	3,	0,	4,	15,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo128, -1 ,nullptr },  // Inst #743 = FCMP_D64
  { 744,	3,	0,	4,	16,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo129, -1 ,nullptr },  // Inst #744 = FCMP_S32
  { 745,	3,	0,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo129, -1 ,nullptr },  // Inst #745 = FCMP_S32_MM
  { 746,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #746 = FCNE_D
  { 747,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #747 = FCNE_W
  { 748,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #748 = FCOR_D
  { 749,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #749 = FCOR_W
  { 750,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #750 = FCUEQ_D
  { 751,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #751 = FCUEQ_W
  { 752,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #752 = FCULE_D
  { 753,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #753 = FCULE_W
  { 754,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #754 = FCULT_D
  { 755,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #755 = FCULT_W
  { 756,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #756 = FCUNE_D
  { 757,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #757 = FCUNE_W
  { 758,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #758 = FCUN_D
  { 759,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #759 = FCUN_W
  { 760,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #760 = FDIV_D
  { 761,	3,	1,	4,	47,	0, 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #761 = FDIV_D32
  { 762,	3,	1,	4,	47,	0, 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #762 = FDIV_D64
  { 763,	3,	1,	4,	47,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #763 = FDIV_MM
  { 764,	3,	1,	4,	48,	0, 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #764 = FDIV_S
  { 765,	3,	1,	4,	48,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #765 = FDIV_S_MM
  { 766,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #766 = FDIV_W
  { 767,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #767 = FEXDO_H
  { 768,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #768 = FEXDO_W
  { 769,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #769 = FEXP2_D
  { 770,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #770 = FEXP2_D_1_PSEUDO
  { 771,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #771 = FEXP2_W
  { 772,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #772 = FEXP2_W_1_PSEUDO
  { 773,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #773 = FEXUPL_D
  { 774,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #774 = FEXUPL_W
  { 775,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #775 = FEXUPR_D
  { 776,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #776 = FEXUPR_W
  { 777,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #777 = FFINT_S_D
  { 778,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #778 = FFINT_S_W
  { 779,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #779 = FFINT_U_D
  { 780,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #780 = FFINT_U_W
  { 781,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #781 = FFQL_D
  { 782,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #782 = FFQL_W
  { 783,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #783 = FFQR_D
  { 784,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #784 = FFQR_W
  { 785,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #785 = FILL_B
  { 786,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #786 = FILL_D
  { 787,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo136, -1 ,nullptr },  // Inst #787 = FILL_FD_PSEUDO
  { 788,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #788 = FILL_FW_PSEUDO
  { 789,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #789 = FILL_H
  { 790,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #790 = FILL_W
  { 791,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #791 = FLOG2_D
  { 792,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #792 = FLOG2_W
  { 793,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #793 = FLOOR_L_D64
  { 794,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #794 = FLOOR_L_S
  { 795,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #795 = FLOOR_W_D32
  { 796,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #796 = FLOOR_W_D64
  { 797,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #797 = FLOOR_W_MM
  { 798,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #798 = FLOOR_W_S
  { 799,	2,	1,	4,	49,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #799 = FLOOR_W_S_MM
  { 800,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #800 = FMADD_D
  { 801,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #801 = FMADD_W
  { 802,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #802 = FMAX_A_D
  { 803,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #803 = FMAX_A_W
  { 804,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #804 = FMAX_D
  { 805,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #805 = FMAX_W
  { 806,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #806 = FMIN_A_D
  { 807,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #807 = FMIN_A_W
  { 808,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #808 = FMIN_D
  { 809,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #809 = FMIN_W
  { 810,	2,	1,	4,	50,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #810 = FMOV_D32
  { 811,	2,	1,	4,	50,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #811 = FMOV_D32_MM
  { 812,	2,	1,	4,	50,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #812 = FMOV_D64
  { 813,	2,	1,	4,	51,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #813 = FMOV_S
  { 814,	2,	1,	4,	51,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #814 = FMOV_S_MM
  { 815,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #815 = FMSUB_D
  { 816,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #816 = FMSUB_W
  { 817,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #817 = FMUL_D
  { 818,	3,	1,	4,	52,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #818 = FMUL_D32
  { 819,	3,	1,	4,	52,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #819 = FMUL_D64
  { 820,	3,	1,	4,	52,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #820 = FMUL_MM
  { 821,	3,	1,	4,	53,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #821 = FMUL_S
  { 822,	3,	1,	4,	53,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #822 = FMUL_S_MM
  { 823,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #823 = FMUL_W
  { 824,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #824 = FNEG_D32
  { 825,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #825 = FNEG_D64
  { 826,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #826 = FNEG_MM
  { 827,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #827 = FNEG_S
  { 828,	2,	1,	4,	54,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #828 = FNEG_S_MM
  { 829,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #829 = FRCP_D
  { 830,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #830 = FRCP_W
  { 831,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #831 = FRINT_D
  { 832,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #832 = FRINT_W
  { 833,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #833 = FRSQRT_D
  { 834,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #834 = FRSQRT_W
  { 835,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #835 = FSAF_D
  { 836,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #836 = FSAF_W
  { 837,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #837 = FSEQ_D
  { 838,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #838 = FSEQ_W
  { 839,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #839 = FSLE_D
  { 840,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #840 = FSLE_W
  { 841,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #841 = FSLT_D
  { 842,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #842 = FSLT_W
  { 843,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #843 = FSNE_D
  { 844,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #844 = FSNE_W
  { 845,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #845 = FSOR_D
  { 846,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #846 = FSOR_W
  { 847,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #847 = FSQRT_D
  { 848,	2,	1,	4,	55,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #848 = FSQRT_D32
  { 849,	2,	1,	4,	55,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #849 = FSQRT_D64
  { 850,	2,	1,	4,	55,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #850 = FSQRT_MM
  { 851,	2,	1,	4,	56,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #851 = FSQRT_S
  { 852,	2,	1,	4,	56,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #852 = FSQRT_S_MM
  { 853,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #853 = FSQRT_W
  { 854,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #854 = FSUB_D
  { 855,	3,	1,	4,	57,	0, 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #855 = FSUB_D32
  { 856,	3,	1,	4,	57,	0, 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #856 = FSUB_D64
  { 857,	3,	1,	4,	57,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #857 = FSUB_MM
  { 858,	3,	1,	4,	58,	0, 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #858 = FSUB_S
  { 859,	3,	1,	4,	58,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #859 = FSUB_S_MM
  { 860,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #860 = FSUB_W
  { 861,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #861 = FSUEQ_D
  { 862,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #862 = FSUEQ_W
  { 863,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #863 = FSULE_D
  { 864,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #864 = FSULE_W
  { 865,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #865 = FSULT_D
  { 866,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #866 = FSULT_W
  { 867,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #867 = FSUNE_D
  { 868,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #868 = FSUNE_W
  { 869,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #869 = FSUN_D
  { 870,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #870 = FSUN_W
  { 871,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #871 = FTINT_S_D
  { 872,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #872 = FTINT_S_W
  { 873,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #873 = FTINT_U_D
  { 874,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #874 = FTINT_U_W
  { 875,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #875 = FTQ_H
  { 876,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #876 = FTQ_W
  { 877,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #877 = FTRUNC_S_D
  { 878,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #878 = FTRUNC_S_W
  { 879,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #879 = FTRUNC_U_D
  { 880,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #880 = FTRUNC_U_W
  { 881,	4,	2,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140, -1 ,nullptr },  // Inst #881 = GotPrologue16
  { 882,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #882 = HADD_S_D
  { 883,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #883 = HADD_S_H
  { 884,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #884 = HADD_S_W
  { 885,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #885 = HADD_U_D
  { 886,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #886 = HADD_U_H
  { 887,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #887 = HADD_U_W
  { 888,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #888 = HSUB_S_D
  { 889,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #889 = HSUB_S_H
  { 890,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #890 = HSUB_S_W
  { 891,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #891 = HSUB_U_D
  { 892,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #892 = HSUB_U_H
  { 893,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #893 = HSUB_U_W
  { 894,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #894 = ILVEV_B
  { 895,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #895 = ILVEV_D
  { 896,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #896 = ILVEV_H
  { 897,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #897 = ILVEV_W
  { 898,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #898 = ILVL_B
  { 899,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #899 = ILVL_D
  { 900,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #900 = ILVL_H
  { 901,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #901 = ILVL_W
  { 902,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #902 = ILVOD_B
  { 903,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #903 = ILVOD_D
  { 904,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #904 = ILVOD_H
  { 905,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #905 = ILVOD_W
  { 906,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #906 = ILVR_B
  { 907,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #907 = ILVR_D
  { 908,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #908 = ILVR_H
  { 909,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #909 = ILVR_W
  { 910,	5,	1,	4,	21,	0, 0x1ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #910 = INS
  { 911,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo142, -1 ,nullptr },  // Inst #911 = INSERT_B
  { 912,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #912 = INSERT_B_VIDX64_PSEUDO
  { 913,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo144, -1 ,nullptr },  // Inst #913 = INSERT_B_VIDX_PSEUDO
  { 914,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #914 = INSERT_D
  { 915,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo146, -1 ,nullptr },  // Inst #915 = INSERT_D_VIDX64_PSEUDO
  { 916,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo147, -1 ,nullptr },  // Inst #916 = INSERT_D_VIDX_PSEUDO
  { 917,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo148, -1 ,nullptr },  // Inst #917 = INSERT_FD_PSEUDO
  { 918,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo149, -1 ,nullptr },  // Inst #918 = INSERT_FD_VIDX64_PSEUDO
  { 919,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo150, -1 ,nullptr },  // Inst #919 = INSERT_FD_VIDX_PSEUDO
  { 920,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo151, -1 ,nullptr },  // Inst #920 = INSERT_FW_PSEUDO
  { 921,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo152, -1 ,nullptr },  // Inst #921 = INSERT_FW_VIDX64_PSEUDO
  { 922,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo153, -1 ,nullptr },  // Inst #922 = INSERT_FW_VIDX_PSEUDO
  { 923,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo154, -1 ,nullptr },  // Inst #923 = INSERT_H
  { 924,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo155, -1 ,nullptr },  // Inst #924 = INSERT_H_VIDX64_PSEUDO
  { 925,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo156, -1 ,nullptr },  // Inst #925 = INSERT_H_VIDX_PSEUDO
  { 926,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo157, -1 ,nullptr },  // Inst #926 = INSERT_W
  { 927,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo158, -1 ,nullptr },  // Inst #927 = INSERT_W_VIDX64_PSEUDO
  { 928,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo159, -1 ,nullptr },  // Inst #928 = INSERT_W_VIDX_PSEUDO
  { 929,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo160, -1 ,nullptr },  // Inst #929 = INSV
  { 930,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo161, -1 ,nullptr },  // Inst #930 = INSVE_B
  { 931,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo162, -1 ,nullptr },  // Inst #931 = INSVE_D
  { 932,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo163, -1 ,nullptr },  // Inst #932 = INSVE_H
  { 933,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo164, -1 ,nullptr },  // Inst #933 = INSVE_W
  { 934,	5,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #934 = INS_MM
  { 935,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x3ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #935 = J
  { 936,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #936 = JAL
  { 937,	2,	1,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #937 = JALR
  { 938,	1,	0,	2,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo66, -1 ,nullptr },  // Inst #938 = JALR16_MM
  { 939,	2,	1,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo99, -1 ,nullptr },  // Inst #939 = JALR64
  { 940,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo165, -1 ,nullptr },  // Inst #940 = JALR64Pseudo
  { 941,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo66, -1 ,nullptr },  // Inst #941 = JALRPseudo
  { 942,	1,	0,	2,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo66, -1 ,nullptr },  // Inst #942 = JALRS16_MM
  { 943,	2,	1,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #943 = JALRS_MM
  { 944,	2,	1,	4,	0,	0|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #944 = JALR_HB
  { 945,	2,	1,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #945 = JALR_MM
  { 946,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #946 = JALS_MM
  { 947,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #947 = JALX
  { 948,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #948 = JALX_MM
  { 949,	1,	0,	4,	7,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #949 = JAL_MM
  { 950,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo15, -1 ,nullptr },  // Inst #950 = JIALC
  { 951,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo15, -1 ,nullptr },  // Inst #951 = JIALC_MMR6
  { 952,	2,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo15, -1 ,nullptr },  // Inst #952 = JIC
  { 953,	2,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo15, -1 ,nullptr },  // Inst #953 = JIC_MMR6
  { 954,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #954 = JR
  { 955,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #955 = JR16_MM
  { 956,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #956 = JR64
  { 957,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #957 = JRADDIUSP
  { 958,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #958 = JRC16_MM
  { 959,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #959 = JR_HB
  { 960,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #960 = JR_HB_R6
  { 961,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #961 = JR_MM
  { 962,	1,	0,	4,	7,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #962 = J_MM
  { 963,	1,	0,	6,	6,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #963 = Jal16
  { 964,	1,	0,	6,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #964 = JalB16
  { 965,	1,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #965 = JalOneReg
  { 966,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #966 = JalTwoReg
  { 967,	0,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #967 = JrRa16
  { 968,	0,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #968 = JrcRa16
  { 969,	1,	0,	2,	6,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #969 = JrcRx16
  { 970,	1,	0,	2,	7,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo166, -1 ,nullptr },  // Inst #970 = JumpLinkReg16
  { 971,	3,	1,	4,	59,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #971 = LB
  { 972,	3,	1,	4,	59,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #972 = LB64
  { 973,	3,	1,	2,	60,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #973 = LBU16_MM
  { 974,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #974 = LBUX
  { 975,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #975 = LB_MM
  { 976,	3,	1,	4,	60,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #976 = LBu
  { 977,	3,	1,	4,	60,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #977 = LBu64
  { 978,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #978 = LBu_MM
  { 979,	3,	1,	4,	61,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #979 = LD
  { 980,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #980 = LDC1
  { 981,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #981 = LDC164
  { 982,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #982 = LDC1_MM
  { 983,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #983 = LDC2
  { 984,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #984 = LDC2_R6
  { 985,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #985 = LDC3
  { 986,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #986 = LDI_B
  { 987,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo176, -1 ,nullptr },  // Inst #987 = LDI_D
  { 988,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo177, -1 ,nullptr },  // Inst #988 = LDI_H
  { 989,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo178, -1 ,nullptr },  // Inst #989 = LDI_W
  { 990,	4,	1,	4,	63,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #990 = LDL
  { 991,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #991 = LDPC
  { 992,	4,	1,	4,	64,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #992 = LDR
  { 993,	3,	1,	4,	65,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #993 = LDXC1
  { 994,	3,	1,	4,	65,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #994 = LDXC164
  { 995,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #995 = LD_B
  { 996,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #996 = LD_D
  { 997,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #997 = LD_H
  { 998,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo185, -1 ,nullptr },  // Inst #998 = LD_W
  { 999,	3,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #999 = LEA_ADDiu
  { 1000,	3,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1000 = LEA_ADDiu64
  { 1001,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1001 = LEA_ADDiu_MM
  { 1002,	3,	1,	4,	66,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1002 = LH
  { 1003,	3,	1,	4,	66,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1003 = LH64
  { 1004,	3,	1,	2,	67,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1004 = LHU16_MM
  { 1005,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1005 = LHX
  { 1006,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1006 = LH_MM
  { 1007,	3,	1,	4,	67,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1007 = LHu
  { 1008,	3,	1,	4,	67,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1008 = LHu64
  { 1009,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1009 = LHu_MM
  { 1010,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1010 = LI16_MM
  { 1011,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1011 = LL
  { 1012,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1012 = LLD
  { 1013,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1013 = LLD_R6
  { 1014,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1014 = LL_MM
  { 1015,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1015 = LL_R6
  { 1016,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #1016 = LOAD_ACC128
  { 1017,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo188, -1 ,nullptr },  // Inst #1017 = LOAD_ACC64
  { 1018,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo189, -1 ,nullptr },  // Inst #1018 = LOAD_ACC64DSP
  { 1019,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1019 = LOAD_CCOND_DSP
  { 1020,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1020 = LONG_BRANCH_ADDiu
  { 1021,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1021 = LONG_BRANCH_DADDiu
  { 1022,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1022 = LONG_BRANCH_LUi
  { 1023,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1023 = LSA
  { 1024,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1024 = LSA_MMR6
  { 1025,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1025 = LSA_R6
  { 1026,	3,	1,	4,	68,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1026 = LUXC1
  { 1027,	3,	1,	4,	68,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1027 = LUXC164
  { 1028,	3,	1,	4,	68,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1028 = LUXC1_MM
  { 1029,	2,	1,	4,	69,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1029 = LUi
  { 1030,	2,	1,	4,	69,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #1030 = LUi64
  { 1031,	2,	1,	4,	69,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1031 = LUi_MM
  { 1032,	3,	1,	4,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1032 = LW
  { 1033,	3,	1,	2,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1033 = LW16_MM
  { 1034,	3,	1,	4,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1034 = LW64
  { 1035,	3,	1,	4,	71,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1035 = LWC1
  { 1036,	3,	1,	4,	71,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1036 = LWC1_MM
  { 1037,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1037 = LWC2
  { 1038,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1038 = LWC2_R6
  { 1039,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1039 = LWC3
  { 1040,	3,	1,	2,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1040 = LWGP_MM
  { 1041,	4,	1,	4,	72,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1041 = LWL
  { 1042,	4,	1,	4,	72,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #1042 = LWL64
  { 1043,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1043 = LWL_MM
  { 1044,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1044 = LWM16_MM
  { 1045,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1045 = LWM32_MM
  { 1046,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1046 = LWM_MM
  { 1047,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1047 = LWPC
  { 1048,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1048 = LWPC_MMR6
  { 1049,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1049 = LWP_MM
  { 1050,	4,	1,	4,	73,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1050 = LWR
  { 1051,	4,	1,	4,	73,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #1051 = LWR64
  { 1052,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1052 = LWR_MM
  { 1053,	3,	1,	2,	70,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1053 = LWSP_MM
  { 1054,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1054 = LWUPC
  { 1055,	3,	1,	4,	74,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1055 = LWU_MM
  { 1056,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1056 = LWX
  { 1057,	3,	1,	4,	75,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1057 = LWXC1
  { 1058,	3,	1,	4,	75,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1058 = LWXC1_MM
  { 1059,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1059 = LWXS_MM
  { 1060,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1060 = LW_MM
  { 1061,	3,	1,	4,	74,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1061 = LWu
  { 1062,	4,	1,	4,	59,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1062 = LbRxRyOffMemX16
  { 1063,	4,	1,	4,	60,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1063 = LbuRxRyOffMemX16
  { 1064,	4,	1,	4,	66,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1064 = LhRxRyOffMemX16
  { 1065,	4,	1,	4,	67,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1065 = LhuRxRyOffMemX16
  { 1066,	2,	1,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #1066 = LiRxImm16
  { 1067,	2,	1,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #1067 = LiRxImmAlignX16
  { 1068,	2,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #1068 = LiRxImmX16
  { 1069,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1069 = LoadAddrImm32
  { 1070,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #1070 = LoadAddrImm64
  { 1071,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1071 = LoadAddrReg32
  { 1072,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1072 = LoadAddrReg64
  { 1073,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1073 = LoadImm32
  { 1074,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #1074 = LoadImm64
  { 1075,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo201, -1 ,nullptr },  // Inst #1075 = LwConstant32
  { 1076,	3,	1,	2,	70,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #1076 = LwRxPcTcp16
  { 1077,	3,	1,	4,	70,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #1077 = LwRxPcTcpX16
  { 1078,	4,	1,	4,	70,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1078 = LwRxRyOffMemX16
  { 1079,	3,	1,	4,	70,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #1079 = LwRxSpImmX16
  { 1080,	2,	0,	4,	76,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1080 = MADD
  { 1081,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1081 = MADDF_D
  { 1082,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1082 = MADDF_S
  { 1083,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1083 = MADDR_Q_H
  { 1084,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1084 = MADDR_Q_W
  { 1085,	2,	0,	4,	77,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1085 = MADDU
  { 1086,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1086 = MADDU_DSP
  { 1087,	2,	0,	4,	77,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1087 = MADDU_MM
  { 1088,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #1088 = MADDV_B
  { 1089,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #1089 = MADDV_D
  { 1090,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1090 = MADDV_H
  { 1091,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1091 = MADDV_W
  { 1092,	4,	1,	4,	78,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1092 = MADD_D32
  { 1093,	4,	1,	4,	78,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1093 = MADD_D32_MM
  { 1094,	4,	1,	4,	78,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1094 = MADD_D64
  { 1095,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1095 = MADD_DSP
  { 1096,	2,	0,	4,	76,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1096 = MADD_MM
  { 1097,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1097 = MADD_Q_H
  { 1098,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1098 = MADD_Q_W
  { 1099,	4,	1,	4,	79,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1099 = MADD_S
  { 1100,	4,	1,	4,	79,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1100 = MADD_S_MM
  { 1101,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1101 = MAQ_SA_W_PHL
  { 1102,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1102 = MAQ_SA_W_PHR
  { 1103,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1103 = MAQ_S_W_PHL
  { 1104,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1104 = MAQ_S_W_PHR
  { 1105,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1105 = MAXA_D
  { 1106,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1106 = MAXA_S
  { 1107,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1107 = MAXI_S_B
  { 1108,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1108 = MAXI_S_D
  { 1109,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1109 = MAXI_S_H
  { 1110,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1110 = MAXI_S_W
  { 1111,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1111 = MAXI_U_B
  { 1112,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1112 = MAXI_U_D
  { 1113,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1113 = MAXI_U_H
  { 1114,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1114 = MAXI_U_W
  { 1115,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1115 = MAX_A_B
  { 1116,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1116 = MAX_A_D
  { 1117,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1117 = MAX_A_H
  { 1118,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1118 = MAX_A_W
  { 1119,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1119 = MAX_D
  { 1120,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1120 = MAX_S
  { 1121,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1121 = MAX_S_B
  { 1122,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1122 = MAX_S_D
  { 1123,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1123 = MAX_S_H
  { 1124,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1124 = MAX_S_W
  { 1125,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1125 = MAX_U_B
  { 1126,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1126 = MAX_U_D
  { 1127,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1127 = MAX_U_H
  { 1128,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1128 = MAX_U_W
  { 1129,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1129 = MFC0
  { 1130,	2,	1,	4,	80,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1130 = MFC1
  { 1131,	2,	1,	4,	80,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1131 = MFC1_MM
  { 1132,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo211, -1 ,nullptr },  // Inst #1132 = MFC2
  { 1133,	2,	1,	4,	81,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1133 = MFHC1_D32
  { 1134,	2,	1,	4,	81,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo213, -1 ,nullptr },  // Inst #1134 = MFHC1_D64
  { 1135,	2,	1,	4,	81,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1135 = MFHC1_MM
  { 1136,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1136 = MFHI
  { 1137,	1,	1,	2,	82,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1137 = MFHI16_MM
  { 1138,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1138 = MFHI64
  { 1139,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1139 = MFHI_DSP
  { 1140,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1140 = MFHI_MM
  { 1141,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1141 = MFLO
  { 1142,	1,	1,	2,	82,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1142 = MFLO16_MM
  { 1143,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1143 = MFLO64
  { 1144,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1144 = MFLO_DSP
  { 1145,	1,	1,	4,	82,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1145 = MFLO_MM
  { 1146,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1146 = MINA_D
  { 1147,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1147 = MINA_S
  { 1148,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1148 = MINI_S_B
  { 1149,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1149 = MINI_S_D
  { 1150,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1150 = MINI_S_H
  { 1151,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1151 = MINI_S_W
  { 1152,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1152 = MINI_U_B
  { 1153,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1153 = MINI_U_D
  { 1154,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1154 = MINI_U_H
  { 1155,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1155 = MINI_U_W
  { 1156,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1156 = MIN_A_B
  { 1157,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1157 = MIN_A_D
  { 1158,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1158 = MIN_A_H
  { 1159,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1159 = MIN_A_W
  { 1160,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1160 = MIN_D
  { 1161,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1161 = MIN_S
  { 1162,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1162 = MIN_S_B
  { 1163,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1163 = MIN_S_D
  { 1164,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1164 = MIN_S_H
  { 1165,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1165 = MIN_S_W
  { 1166,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1166 = MIN_U_B
  { 1167,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1167 = MIN_U_D
  { 1168,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1168 = MIN_U_H
  { 1169,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1169 = MIN_U_W
  { 1170,	2,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1170 = MIPSeh_return32
  { 1171,	2,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1171 = MIPSeh_return64
  { 1172,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1172 = MOD
  { 1173,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1173 = MODSUB
  { 1174,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1174 = MODU
  { 1175,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1175 = MODU_MMR6
  { 1176,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1176 = MOD_MMR6
  { 1177,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1177 = MOD_S_B
  { 1178,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1178 = MOD_S_D
  { 1179,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1179 = MOD_S_H
  { 1180,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1180 = MOD_S_W
  { 1181,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1181 = MOD_U_B
  { 1182,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1182 = MOD_U_D
  { 1183,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1183 = MOD_U_H
  { 1184,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1184 = MOD_U_W
  { 1185,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1185 = MOVE16_MM
  { 1186,	4,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo215, -1 ,nullptr },  // Inst #1186 = MOVEP_MM
  { 1187,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1187 = MOVE_V
  { 1188,	4,	1,	4,	83,	0, 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1188 = MOVF_D32
  { 1189,	4,	1,	4,	83,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1189 = MOVF_D32_MM
  { 1190,	4,	1,	4,	83,	0, 0x4ULL, nullptr, nullptr, OperandInfo218, -1 ,nullptr },  // Inst #1190 = MOVF_D64
  { 1191,	4,	1,	4,	84,	0, 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1191 = MOVF_I
  { 1192,	4,	1,	4,	84,	0, 0x4ULL, nullptr, nullptr, OperandInfo220, -1 ,nullptr },  // Inst #1192 = MOVF_I64
  { 1193,	4,	1,	4,	84,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1193 = MOVF_I_MM
  { 1194,	4,	1,	4,	85,	0, 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1194 = MOVF_S
  { 1195,	4,	1,	4,	85,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1195 = MOVF_S_MM
  { 1196,	4,	1,	4,	86,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1196 = MOVN_I64_D64
  { 1197,	4,	1,	4,	87,	0, 0x4ULL, nullptr, nullptr, OperandInfo223, -1 ,nullptr },  // Inst #1197 = MOVN_I64_I
  { 1198,	4,	1,	4,	87,	0, 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1198 = MOVN_I64_I64
  { 1199,	4,	1,	4,	88,	0, 0x4ULL, nullptr, nullptr, OperandInfo225, -1 ,nullptr },  // Inst #1199 = MOVN_I64_S
  { 1200,	4,	1,	4,	86,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1200 = MOVN_I_D32
  { 1201,	4,	1,	4,	86,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1201 = MOVN_I_D32_MM
  { 1202,	4,	1,	4,	86,	0, 0x4ULL, nullptr, nullptr, OperandInfo227, -1 ,nullptr },  // Inst #1202 = MOVN_I_D64
  { 1203,	4,	1,	4,	87,	0, 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1203 = MOVN_I_I
  { 1204,	4,	1,	4,	87,	0, 0x4ULL, nullptr, nullptr, OperandInfo229, -1 ,nullptr },  // Inst #1204 = MOVN_I_I64
  { 1205,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1205 = MOVN_I_MM
  { 1206,	4,	1,	4,	88,	0, 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1206 = MOVN_I_S
  { 1207,	4,	1,	4,	88,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1207 = MOVN_I_S_MM
  { 1208,	4,	1,	4,	89,	0, 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1208 = MOVT_D32
  { 1209,	4,	1,	4,	89,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1209 = MOVT_D32_MM
  { 1210,	4,	1,	4,	89,	0, 0x4ULL, nullptr, nullptr, OperandInfo218, -1 ,nullptr },  // Inst #1210 = MOVT_D64
  { 1211,	4,	1,	4,	90,	0, 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1211 = MOVT_I
  { 1212,	4,	1,	4,	90,	0, 0x4ULL, nullptr, nullptr, OperandInfo220, -1 ,nullptr },  // Inst #1212 = MOVT_I64
  { 1213,	4,	1,	4,	90,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1213 = MOVT_I_MM
  { 1214,	4,	1,	4,	91,	0, 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1214 = MOVT_S
  { 1215,	4,	1,	4,	91,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1215 = MOVT_S_MM
  { 1216,	4,	1,	4,	92,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1216 = MOVZ_I64_D64
  { 1217,	4,	1,	4,	93,	0, 0x4ULL, nullptr, nullptr, OperandInfo223, -1 ,nullptr },  // Inst #1217 = MOVZ_I64_I
  { 1218,	4,	1,	4,	93,	0, 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1218 = MOVZ_I64_I64
  { 1219,	4,	1,	4,	94,	0, 0x4ULL, nullptr, nullptr, OperandInfo225, -1 ,nullptr },  // Inst #1219 = MOVZ_I64_S
  { 1220,	4,	1,	4,	92,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1220 = MOVZ_I_D32
  { 1221,	4,	1,	4,	92,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1221 = MOVZ_I_D32_MM
  { 1222,	4,	1,	4,	92,	0, 0x4ULL, nullptr, nullptr, OperandInfo227, -1 ,nullptr },  // Inst #1222 = MOVZ_I_D64
  { 1223,	4,	1,	4,	93,	0, 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1223 = MOVZ_I_I
  { 1224,	4,	1,	4,	93,	0, 0x4ULL, nullptr, nullptr, OperandInfo229, -1 ,nullptr },  // Inst #1224 = MOVZ_I_I64
  { 1225,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1225 = MOVZ_I_MM
  { 1226,	4,	1,	4,	94,	0, 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1226 = MOVZ_I_S
  { 1227,	4,	1,	4,	94,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1227 = MOVZ_I_S_MM
  { 1228,	2,	0,	4,	95,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1228 = MSUB
  { 1229,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1229 = MSUBF_D
  { 1230,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1230 = MSUBF_S
  { 1231,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1231 = MSUBR_Q_H
  { 1232,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1232 = MSUBR_Q_W
  { 1233,	2,	0,	4,	96,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1233 = MSUBU
  { 1234,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1234 = MSUBU_DSP
  { 1235,	2,	0,	4,	96,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1235 = MSUBU_MM
  { 1236,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #1236 = MSUBV_B
  { 1237,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #1237 = MSUBV_D
  { 1238,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1238 = MSUBV_H
  { 1239,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1239 = MSUBV_W
  { 1240,	4,	1,	4,	97,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1240 = MSUB_D32
  { 1241,	4,	1,	4,	97,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1241 = MSUB_D32_MM
  { 1242,	4,	1,	4,	97,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1242 = MSUB_D64
  { 1243,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1243 = MSUB_DSP
  { 1244,	2,	0,	4,	95,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1244 = MSUB_MM
  { 1245,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1245 = MSUB_Q_H
  { 1246,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1246 = MSUB_Q_W
  { 1247,	4,	1,	4,	98,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1247 = MSUB_S
  { 1248,	4,	1,	4,	98,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1248 = MSUB_S_MM
  { 1249,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo231, -1 ,nullptr },  // Inst #1249 = MTC0
  { 1250,	2,	1,	4,	99,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1250 = MTC1
  { 1251,	2,	1,	4,	99,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1251 = MTC1_MM
  { 1252,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo233, -1 ,nullptr },  // Inst #1252 = MTC2
  { 1253,	3,	1,	4,	100,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo234, -1 ,nullptr },  // Inst #1253 = MTHC1_D32
  { 1254,	3,	1,	4,	100,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo235, -1 ,nullptr },  // Inst #1254 = MTHC1_D64
  { 1255,	3,	1,	4,	100,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo234, -1 ,nullptr },  // Inst #1255 = MTHC1_MM
  { 1256,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo66, -1 ,nullptr },  // Inst #1256 = MTHI
  { 1257,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList22, OperandInfo165, -1 ,nullptr },  // Inst #1257 = MTHI64
  { 1258,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo236, -1 ,nullptr },  // Inst #1258 = MTHI_DSP
  { 1259,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo66, -1 ,nullptr },  // Inst #1259 = MTHI_MM
  { 1260,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo237, -1 ,nullptr },  // Inst #1260 = MTHLIP
  { 1261,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo66, -1 ,nullptr },  // Inst #1261 = MTLO
  { 1262,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList24, OperandInfo165, -1 ,nullptr },  // Inst #1262 = MTLO64
  { 1263,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo238, -1 ,nullptr },  // Inst #1263 = MTLO_DSP
  { 1264,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo66, -1 ,nullptr },  // Inst #1264 = MTLO_MM
  { 1265,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList25, OperandInfo165, -1 ,nullptr },  // Inst #1265 = MTM0
  { 1266,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList26, OperandInfo165, -1 ,nullptr },  // Inst #1266 = MTM1
  { 1267,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList27, OperandInfo165, -1 ,nullptr },  // Inst #1267 = MTM2
  { 1268,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList28, OperandInfo165, -1 ,nullptr },  // Inst #1268 = MTP0
  { 1269,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList29, OperandInfo165, -1 ,nullptr },  // Inst #1269 = MTP1
  { 1270,	1,	0,	4,	101,	0, 0x1ULL, nullptr, ImplicitList30, OperandInfo165, -1 ,nullptr },  // Inst #1270 = MTP2
  { 1271,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1271 = MUH
  { 1272,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1272 = MUHU
  { 1273,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1273 = MUHU_MMR6
  { 1274,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1274 = MUH_MMR6
  { 1275,	3,	1,	4,	102,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList12, OperandInfo14, -1 ,nullptr },  // Inst #1275 = MUL
  { 1276,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo83, -1 ,nullptr },  // Inst #1276 = MULEQ_S_W_PHL
  { 1277,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo83, -1 ,nullptr },  // Inst #1277 = MULEQ_S_W_PHR
  { 1278,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1278 = MULEU_S_PH_QBL
  { 1279,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1279 = MULEU_S_PH_QBR
  { 1280,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1280 = MULQ_RS_PH
  { 1281,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14, -1 ,nullptr },  // Inst #1281 = MULQ_RS_W
  { 1282,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1282 = MULQ_S_PH
  { 1283,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo14, -1 ,nullptr },  // Inst #1283 = MULQ_S_W
  { 1284,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1284 = MULR_Q_H
  { 1285,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1285 = MULR_Q_W
  { 1286,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1286 = MULSAQ_S_W_PH
  { 1287,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1287 = MULSA_W_PH
  { 1288,	2,	0,	4,	103,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1288 = MULT
  { 1289,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1289 = MULTU_DSP
  { 1290,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1290 = MULT_DSP
  { 1291,	2,	0,	4,	103,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1291 = MULT_MM
  { 1292,	2,	0,	4,	104,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1292 = MULTu
  { 1293,	2,	0,	4,	104,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1293 = MULTu_MM
  { 1294,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1294 = MULU
  { 1295,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1295 = MULU_MMR6
  { 1296,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1296 = MULV_B
  { 1297,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1297 = MULV_D
  { 1298,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1298 = MULV_H
  { 1299,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1299 = MULV_W
  { 1300,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1300 = MUL_MM
  { 1301,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1301 = MUL_MMR6
  { 1302,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1302 = MUL_PH
  { 1303,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1303 = MUL_Q_H
  { 1304,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1304 = MUL_Q_W
  { 1305,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1305 = MUL_R6
  { 1306,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo20, -1 ,nullptr },  // Inst #1306 = MUL_S_PH
  { 1307,	1,	1,	2,	6,	0, 0x0ULL, ImplicitList21, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #1307 = Mfhi16
  { 1308,	1,	1,	2,	6,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #1308 = Mflo16
  { 1309,	2,	1,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo240, -1 ,nullptr },  // Inst #1309 = Move32R16
  { 1310,	2,	1,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo241, -1 ,nullptr },  // Inst #1310 = MoveR3216
  { 1311,	2,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #1311 = MultRxRy16
  { 1312,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo42, -1 ,nullptr },  // Inst #1312 = MultRxRyRz16
  { 1313,	2,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #1313 = MultuRxRy16
  { 1314,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo42, -1 ,nullptr },  // Inst #1314 = MultuRxRyRz16
  { 1315,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1315 = NLOC_B
  { 1316,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1316 = NLOC_D
  { 1317,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1317 = NLOC_H
  { 1318,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1318 = NLOC_W
  { 1319,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1319 = NLZC_B
  { 1320,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1320 = NLZC_D
  { 1321,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1321 = NLZC_H
  { 1322,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1322 = NLZC_W
  { 1323,	4,	1,	4,	105,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1323 = NMADD_D32
  { 1324,	4,	1,	4,	105,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1324 = NMADD_D32_MM
  { 1325,	4,	1,	4,	105,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1325 = NMADD_D64
  { 1326,	4,	1,	4,	106,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1326 = NMADD_S
  { 1327,	4,	1,	4,	106,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1327 = NMADD_S_MM
  { 1328,	4,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1328 = NMSUB_D32
  { 1329,	4,	1,	4,	107,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1329 = NMSUB_D32_MM
  { 1330,	4,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1330 = NMSUB_D64
  { 1331,	4,	1,	4,	108,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1331 = NMSUB_S
  { 1332,	4,	1,	4,	108,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1332 = NMSUB_S_MM
  { 1333,	0,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1333 = NOP
  { 1334,	3,	1,	4,	109,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1334 = NOR
  { 1335,	3,	1,	4,	109,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1335 = NOR64
  { 1336,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1336 = NORI_B
  { 1337,	3,	1,	4,	109,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1337 = NOR_MM
  { 1338,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1338 = NOR_MMR6
  { 1339,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1339 = NOR_V
  { 1340,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1340 = NOR_V_D_PSEUDO
  { 1341,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1341 = NOR_V_H_PSEUDO
  { 1342,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1342 = NOR_V_W_PSEUDO
  { 1343,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo243, -1 ,nullptr },  // Inst #1343 = NOT16_MM
  { 1344,	2,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #1344 = NegRxRy16
  { 1345,	2,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #1345 = NotRxRy16
  { 1346,	3,	1,	4,	110,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1346 = OR
  { 1347,	3,	1,	2,	110,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1347 = OR16_MM
  { 1348,	3,	1,	4,	110,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1348 = OR64
  { 1349,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1349 = ORI_B
  { 1350,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1350 = ORI_MMR6
  { 1351,	3,	1,	4,	110,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1351 = OR_MM
  { 1352,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1352 = OR_MMR6
  { 1353,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1353 = OR_V
  { 1354,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1354 = OR_V_D_PSEUDO
  { 1355,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1355 = OR_V_H_PSEUDO
  { 1356,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1356 = OR_V_W_PSEUDO
  { 1357,	3,	1,	4,	111,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1357 = ORi
  { 1358,	3,	1,	4,	110,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1358 = ORi64
  { 1359,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1359 = ORi_MM
  { 1360,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1360 = OrRxRxRy16
  { 1361,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1361 = PACKRL_PH
  { 1362,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1362 = PAUSE
  { 1363,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1363 = PAUSE_MM
  { 1364,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1364 = PCKEV_B
  { 1365,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1365 = PCKEV_D
  { 1366,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1366 = PCKEV_H
  { 1367,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1367 = PCKEV_W
  { 1368,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1368 = PCKOD_B
  { 1369,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1369 = PCKOD_D
  { 1370,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1370 = PCKOD_H
  { 1371,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1371 = PCKOD_W
  { 1372,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1372 = PCNT_B
  { 1373,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1373 = PCNT_D
  { 1374,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1374 = PCNT_H
  { 1375,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1375 = PCNT_W
  { 1376,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1376 = PICK_PH
  { 1377,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1377 = PICK_QB
  { 1378,	2,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1378 = POP
  { 1379,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1379 = PRECEQU_PH_QBL
  { 1380,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1380 = PRECEQU_PH_QBLA
  { 1381,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1381 = PRECEQU_PH_QBR
  { 1382,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1382 = PRECEQU_PH_QBRA
  { 1383,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1383 = PRECEQ_W_PHL
  { 1384,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1384 = PRECEQ_W_PHR
  { 1385,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1385 = PRECEU_PH_QBL
  { 1386,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1386 = PRECEU_PH_QBLA
  { 1387,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1387 = PRECEU_PH_QBR
  { 1388,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1388 = PRECEU_PH_QBRA
  { 1389,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo20, -1 ,nullptr },  // Inst #1389 = PRECRQU_S_QB_PH
  { 1390,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo245, -1 ,nullptr },  // Inst #1390 = PRECRQ_PH_W
  { 1391,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1391 = PRECRQ_QB_PH
  { 1392,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo245, -1 ,nullptr },  // Inst #1392 = PRECRQ_RS_PH_W
  { 1393,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1393 = PRECR_QB_PH
  { 1394,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo246, -1 ,nullptr },  // Inst #1394 = PRECR_SRA_PH_W
  { 1395,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo246, -1 ,nullptr },  // Inst #1395 = PRECR_SRA_R_PH_W
  { 1396,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #1396 = PREF
  { 1397,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #1397 = PREF_MM
  { 1398,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #1398 = PREF_MMR6
  { 1399,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #1399 = PREF_R6
  { 1400,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1400 = PREPEND
  { 1401,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1401 = PseudoCMPU_EQ_QB
  { 1402,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1402 = PseudoCMPU_LE_QB
  { 1403,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1403 = PseudoCMPU_LT_QB
  { 1404,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1404 = PseudoCMP_EQ_PH
  { 1405,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1405 = PseudoCMP_LE_PH
  { 1406,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1406 = PseudoCMP_LT_PH
  { 1407,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1407 = PseudoCVT_D32_W
  { 1408,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #1408 = PseudoCVT_D64_L
  { 1409,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo249, -1 ,nullptr },  // Inst #1409 = PseudoCVT_D64_W
  { 1410,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #1410 = PseudoCVT_S_L
  { 1411,	2,	1,	4,	14,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1411 = PseudoCVT_S_W
  { 1412,	3,	1,	4,	25,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1412 = PseudoDMULT
  { 1413,	3,	1,	4,	26,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1413 = PseudoDMULTu
  { 1414,	3,	1,	4,	31,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1414 = PseudoDSDIV
  { 1415,	3,	1,	4,	43,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1415 = PseudoDUDIV
  { 1416,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1416 = PseudoIndirectBranch
  { 1417,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1417 = PseudoIndirectBranch64
  { 1418,	4,	1,	4,	76,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1418 = PseudoMADD
  { 1419,	4,	1,	4,	77,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1419 = PseudoMADDU
  { 1420,	2,	1,	4,	82,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1420 = PseudoMFHI
  { 1421,	2,	1,	4,	82,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo253, -1 ,nullptr },  // Inst #1421 = PseudoMFHI64
  { 1422,	2,	1,	4,	82,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1422 = PseudoMFLO
  { 1423,	2,	1,	4,	82,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo253, -1 ,nullptr },  // Inst #1423 = PseudoMFLO64
  { 1424,	4,	1,	4,	95,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1424 = PseudoMSUB
  { 1425,	4,	1,	4,	96,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1425 = PseudoMSUBU
  { 1426,	3,	1,	4,	101,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1426 = PseudoMTLOHI
  { 1427,	3,	1,	4,	101,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1427 = PseudoMTLOHI64
  { 1428,	3,	1,	4,	101,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1428 = PseudoMTLOHI_DSP
  { 1429,	3,	1,	4,	103,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1429 = PseudoMULT
  { 1430,	3,	1,	4,	104,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1430 = PseudoMULTu
  { 1431,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1431 = PseudoPICK_PH
  { 1432,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1432 = PseudoPICK_QB
  { 1433,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #1433 = PseudoReturn
  { 1434,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1434 = PseudoReturn64
  { 1435,	3,	1,	4,	112,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1435 = PseudoSDIV
  { 1436,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256, -1 ,nullptr },  // Inst #1436 = PseudoSELECTFP_F_D32
  { 1437,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1437 = PseudoSELECTFP_F_D64
  { 1438,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1438 = PseudoSELECTFP_F_I
  { 1439,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1439 = PseudoSELECTFP_F_I64
  { 1440,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1440 = PseudoSELECTFP_F_S
  { 1441,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256, -1 ,nullptr },  // Inst #1441 = PseudoSELECTFP_T_D32
  { 1442,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1442 = PseudoSELECTFP_T_D64
  { 1443,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1443 = PseudoSELECTFP_T_I
  { 1444,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1444 = PseudoSELECTFP_T_I64
  { 1445,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1445 = PseudoSELECTFP_T_S
  { 1446,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256, -1 ,nullptr },  // Inst #1446 = PseudoSELECT_D32
  { 1447,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1447 = PseudoSELECT_D64
  { 1448,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1448 = PseudoSELECT_I
  { 1449,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1449 = PseudoSELECT_I64
  { 1450,	4,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1450 = PseudoSELECT_S
  { 1451,	3,	1,	4,	113,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1451 = PseudoUDIV
  { 1452,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1452 = RADDU_W_QB
  { 1453,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1453 = RDDSP
  { 1454,	2,	1,	4,	114,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1454 = RDHWR
  { 1455,	2,	1,	4,	114,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo262, -1 ,nullptr },  // Inst #1455 = RDHWR64
  { 1456,	2,	1,	4,	114,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1456 = RDHWR_MM
  { 1457,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo263, -1 ,nullptr },  // Inst #1457 = REPLV_PH
  { 1458,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo263, -1 ,nullptr },  // Inst #1458 = REPLV_QB
  { 1459,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo264, -1 ,nullptr },  // Inst #1459 = REPL_PH
  { 1460,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo264, -1 ,nullptr },  // Inst #1460 = REPL_QB
  { 1461,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #1461 = RINT_D
  { 1462,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1462 = RINT_S
  { 1463,	3,	1,	4,	115,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1463 = ROTR
  { 1464,	3,	1,	4,	116,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1464 = ROTRV
  { 1465,	3,	1,	4,	116,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1465 = ROTRV_MM
  { 1466,	3,	1,	4,	115,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1466 = ROTR_MM
  { 1467,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #1467 = ROUND_L_D64
  { 1468,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1468 = ROUND_L_S
  { 1469,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1469 = ROUND_W_D32
  { 1470,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1470 = ROUND_W_D64
  { 1471,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1471 = ROUND_W_MM
  { 1472,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1472 = ROUND_W_S
  { 1473,	2,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1473 = ROUND_W_S_MM
  { 1474,	0,	0,	2,	118,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1474 = Restore16
  { 1475,	0,	0,	2,	118,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1475 = RestoreX16
  { 1476,	0,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1476 = RetRA
  { 1477,	0,	0,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1477 = RetRA16
  { 1478,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1478 = SAT_S_B
  { 1479,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1479 = SAT_S_D
  { 1480,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1480 = SAT_S_H
  { 1481,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1481 = SAT_S_W
  { 1482,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1482 = SAT_U_B
  { 1483,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1483 = SAT_U_D
  { 1484,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1484 = SAT_U_H
  { 1485,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1485 = SAT_U_W
  { 1486,	3,	0,	4,	119,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1486 = SB
  { 1487,	3,	0,	2,	119,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1487 = SB16_MM
  { 1488,	3,	0,	4,	119,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1488 = SB64
  { 1489,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1489 = SB_MM
  { 1490,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1490 = SC
  { 1491,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1491 = SCD
  { 1492,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1492 = SCD_R6
  { 1493,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo268, -1 ,nullptr },  // Inst #1493 = SC_MM
  { 1494,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1494 = SC_R6
  { 1495,	3,	0,	4,	120,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1495 = SD
  { 1496,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1496 = SDBBP
  { 1497,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1497 = SDBBP16_MM
  { 1498,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1498 = SDBBP_MM
  { 1499,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1499 = SDBBP_R6
  { 1500,	3,	0,	4,	121,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1500 = SDC1
  { 1501,	3,	0,	4,	121,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1501 = SDC164
  { 1502,	3,	0,	4,	121,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1502 = SDC1_MM
  { 1503,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1503 = SDC2
  { 1504,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1504 = SDC2_R6
  { 1505,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1505 = SDC3
  { 1506,	2,	0,	4,	112,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1506 = SDIV
  { 1507,	2,	0,	4,	112,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1507 = SDIV_MM
  { 1508,	3,	0,	4,	122,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1508 = SDL
  { 1509,	3,	0,	4,	123,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1509 = SDR
  { 1510,	3,	0,	4,	124,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1510 = SDXC1
  { 1511,	3,	0,	4,	124,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1511 = SDXC164
  { 1512,	2,	1,	4,	125,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1512 = SEB
  { 1513,	2,	1,	4,	125,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1513 = SEB64
  { 1514,	2,	1,	4,	125,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1514 = SEB_MM
  { 1515,	2,	1,	4,	125,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1515 = SEB_MMR6
  { 1516,	2,	1,	4,	126,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1516 = SEH
  { 1517,	2,	1,	4,	126,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1517 = SEH64
  { 1518,	2,	1,	4,	126,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1518 = SEH_MM
  { 1519,	2,	1,	4,	126,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1519 = SEH_MMR6
  { 1520,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1520 = SELEQZ
  { 1521,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1521 = SELEQZ64
  { 1522,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1522 = SELEQZ_D
  { 1523,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1523 = SELEQZ_MMR6
  { 1524,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1524 = SELEQZ_S
  { 1525,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1525 = SELNEZ
  { 1526,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1526 = SELNEZ64
  { 1527,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1527 = SELNEZ_D
  { 1528,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1528 = SELNEZ_MMR6
  { 1529,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1529 = SELNEZ_S
  { 1530,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo269, -1 ,nullptr },  // Inst #1530 = SEL_D
  { 1531,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo270, -1 ,nullptr },  // Inst #1531 = SEL_S
  { 1532,	3,	1,	4,	127,	0, 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1532 = SEQ
  { 1533,	3,	1,	4,	128,	0, 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1533 = SEQi
  { 1534,	3,	0,	4,	129,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1534 = SH
  { 1535,	3,	0,	2,	129,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1535 = SH16_MM
  { 1536,	3,	0,	4,	129,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1536 = SH64
  { 1537,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1537 = SHF_B
  { 1538,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1538 = SHF_H
  { 1539,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1539 = SHF_W
  { 1540,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo271, -1 ,nullptr },  // Inst #1540 = SHILO
  { 1541,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo237, -1 ,nullptr },  // Inst #1541 = SHILOV
  { 1542,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo272, -1 ,nullptr },  // Inst #1542 = SHLLV_PH
  { 1543,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo272, -1 ,nullptr },  // Inst #1543 = SHLLV_QB
  { 1544,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo272, -1 ,nullptr },  // Inst #1544 = SHLLV_S_PH
  { 1545,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo14, -1 ,nullptr },  // Inst #1545 = SHLLV_S_W
  { 1546,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo273, -1 ,nullptr },  // Inst #1546 = SHLL_PH
  { 1547,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo273, -1 ,nullptr },  // Inst #1547 = SHLL_QB
  { 1548,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo273, -1 ,nullptr },  // Inst #1548 = SHLL_S_PH
  { 1549,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo19, -1 ,nullptr },  // Inst #1549 = SHLL_S_W
  { 1550,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1550 = SHRAV_PH
  { 1551,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1551 = SHRAV_QB
  { 1552,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1552 = SHRAV_R_PH
  { 1553,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1553 = SHRAV_R_QB
  { 1554,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1554 = SHRAV_R_W
  { 1555,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1555 = SHRA_PH
  { 1556,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1556 = SHRA_QB
  { 1557,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1557 = SHRA_R_PH
  { 1558,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1558 = SHRA_R_QB
  { 1559,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1559 = SHRA_R_W
  { 1560,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1560 = SHRLV_PH
  { 1561,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1561 = SHRLV_QB
  { 1562,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1562 = SHRL_PH
  { 1563,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1563 = SHRL_QB
  { 1564,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1564 = SH_MM
  { 1565,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #1565 = SLDI_B
  { 1566,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #1566 = SLDI_D
  { 1567,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #1567 = SLDI_H
  { 1568,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #1568 = SLDI_W
  { 1569,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1569 = SLD_B
  { 1570,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1570 = SLD_D
  { 1571,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo276, -1 ,nullptr },  // Inst #1571 = SLD_H
  { 1572,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1572 = SLD_W
  { 1573,	3,	1,	4,	130,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1573 = SLL
  { 1574,	3,	1,	2,	130,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1574 = SLL16_MM
  { 1575,	2,	1,	4,	130,	0, 0x1ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1575 = SLL64_32
  { 1576,	2,	1,	4,	130,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1576 = SLL64_64
  { 1577,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1577 = SLLI_B
  { 1578,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1578 = SLLI_D
  { 1579,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1579 = SLLI_H
  { 1580,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1580 = SLLI_W
  { 1581,	3,	1,	4,	131,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1581 = SLLV
  { 1582,	3,	1,	4,	131,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1582 = SLLV_MM
  { 1583,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1583 = SLL_B
  { 1584,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1584 = SLL_D
  { 1585,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1585 = SLL_H
  { 1586,	3,	1,	4,	130,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1586 = SLL_MM
  { 1587,	3,	1,	4,	130,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1587 = SLL_MMR6
  { 1588,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1588 = SLL_W
  { 1589,	3,	1,	4,	132,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1589 = SLT
  { 1590,	3,	1,	4,	132,	0, 0x1ULL, nullptr, nullptr, OperandInfo278, -1 ,nullptr },  // Inst #1590 = SLT64
  { 1591,	3,	1,	4,	132,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1591 = SLT_MM
  { 1592,	3,	1,	4,	133,	0, 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1592 = SLTi
  { 1593,	3,	1,	4,	133,	0, 0x2ULL, nullptr, nullptr, OperandInfo279, -1 ,nullptr },  // Inst #1593 = SLTi64
  { 1594,	3,	1,	4,	133,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1594 = SLTi_MM
  { 1595,	3,	1,	4,	133,	0, 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1595 = SLTiu
  { 1596,	3,	1,	4,	133,	0, 0x2ULL, nullptr, nullptr, OperandInfo279, -1 ,nullptr },  // Inst #1596 = SLTiu64
  { 1597,	3,	1,	4,	133,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1597 = SLTiu_MM
  { 1598,	3,	1,	4,	132,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1598 = SLTu
  { 1599,	3,	1,	4,	132,	0, 0x1ULL, nullptr, nullptr, OperandInfo278, -1 ,nullptr },  // Inst #1599 = SLTu64
  { 1600,	3,	1,	4,	132,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1600 = SLTu_MM
  { 1601,	3,	1,	4,	127,	0, 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1601 = SNE
  { 1602,	3,	1,	4,	128,	0, 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1602 = SNEi
  { 1603,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1603 = SNZ_B_PSEUDO
  { 1604,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo281, -1 ,nullptr },  // Inst #1604 = SNZ_D_PSEUDO
  { 1605,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1605 = SNZ_H_PSEUDO
  { 1606,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1606 = SNZ_V_PSEUDO
  { 1607,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1607 = SNZ_W_PSEUDO
  { 1608,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1608 = SPLATI_B
  { 1609,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1609 = SPLATI_D
  { 1610,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1610 = SPLATI_H
  { 1611,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1611 = SPLATI_W
  { 1612,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo284, -1 ,nullptr },  // Inst #1612 = SPLAT_B
  { 1613,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo285, -1 ,nullptr },  // Inst #1613 = SPLAT_D
  { 1614,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo286, -1 ,nullptr },  // Inst #1614 = SPLAT_H
  { 1615,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo287, -1 ,nullptr },  // Inst #1615 = SPLAT_W
  { 1616,	3,	1,	4,	134,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1616 = SRA
  { 1617,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1617 = SRAI_B
  { 1618,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1618 = SRAI_D
  { 1619,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1619 = SRAI_H
  { 1620,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1620 = SRAI_W
  { 1621,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1621 = SRARI_B
  { 1622,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1622 = SRARI_D
  { 1623,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1623 = SRARI_H
  { 1624,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1624 = SRARI_W
  { 1625,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1625 = SRAR_B
  { 1626,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1626 = SRAR_D
  { 1627,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1627 = SRAR_H
  { 1628,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1628 = SRAR_W
  { 1629,	3,	1,	4,	135,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1629 = SRAV
  { 1630,	3,	1,	4,	135,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1630 = SRAV_MM
  { 1631,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1631 = SRA_B
  { 1632,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1632 = SRA_D
  { 1633,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1633 = SRA_H
  { 1634,	3,	1,	4,	134,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1634 = SRA_MM
  { 1635,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1635 = SRA_W
  { 1636,	3,	1,	4,	136,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1636 = SRL
  { 1637,	3,	1,	2,	136,	0, 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1637 = SRL16_MM
  { 1638,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1638 = SRLI_B
  { 1639,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1639 = SRLI_D
  { 1640,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1640 = SRLI_H
  { 1641,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1641 = SRLI_W
  { 1642,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1642 = SRLRI_B
  { 1643,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1643 = SRLRI_D
  { 1644,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1644 = SRLRI_H
  { 1645,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1645 = SRLRI_W
  { 1646,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1646 = SRLR_B
  { 1647,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1647 = SRLR_D
  { 1648,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1648 = SRLR_H
  { 1649,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1649 = SRLR_W
  { 1650,	3,	1,	4,	137,	0, 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1650 = SRLV
  { 1651,	3,	1,	4,	137,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1651 = SRLV_MM
  { 1652,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1652 = SRL_B
  { 1653,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1653 = SRL_D
  { 1654,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1654 = SRL_H
  { 1655,	3,	1,	4,	136,	0, 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1655 = SRL_MM
  { 1656,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1656 = SRL_W
  { 1657,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1657 = SSNOP
  { 1658,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1658 = SSNOP_MM
  { 1659,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #1659 = STORE_ACC128
  { 1660,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo188, -1 ,nullptr },  // Inst #1660 = STORE_ACC64
  { 1661,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo189, -1 ,nullptr },  // Inst #1661 = STORE_ACC64DSP
  { 1662,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1662 = STORE_CCOND_DSP
  { 1663,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1663 = ST_B
  { 1664,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #1664 = ST_D
  { 1665,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #1665 = ST_H
  { 1666,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo185, -1 ,nullptr },  // Inst #1666 = ST_W
  { 1667,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1667 = SUB
  { 1668,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1668 = SUBQH_PH
  { 1669,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1669 = SUBQH_R_PH
  { 1670,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1670 = SUBQH_R_W
  { 1671,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1671 = SUBQH_W
  { 1672,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1672 = SUBQ_PH
  { 1673,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1673 = SUBQ_S_PH
  { 1674,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #1674 = SUBQ_S_W
  { 1675,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1675 = SUBSUS_U_B
  { 1676,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1676 = SUBSUS_U_D
  { 1677,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1677 = SUBSUS_U_H
  { 1678,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1678 = SUBSUS_U_W
  { 1679,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1679 = SUBSUU_S_B
  { 1680,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1680 = SUBSUU_S_D
  { 1681,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1681 = SUBSUU_S_H
  { 1682,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1682 = SUBSUU_S_W
  { 1683,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1683 = SUBS_S_B
  { 1684,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1684 = SUBS_S_D
  { 1685,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1685 = SUBS_S_H
  { 1686,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1686 = SUBS_S_W
  { 1687,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1687 = SUBS_U_B
  { 1688,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1688 = SUBS_U_D
  { 1689,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1689 = SUBS_U_H
  { 1690,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1690 = SUBS_U_W
  { 1691,	3,	1,	2,	138,	0, 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1691 = SUBU16_MM
  { 1692,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1692 = SUBUH_QB
  { 1693,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #1693 = SUBUH_R_QB
  { 1694,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1694 = SUBU_MMR6
  { 1695,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1695 = SUBU_PH
  { 1696,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1696 = SUBU_QB
  { 1697,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1697 = SUBU_S_PH
  { 1698,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo20, -1 ,nullptr },  // Inst #1698 = SUBU_S_QB
  { 1699,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1699 = SUBVI_B
  { 1700,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1700 = SUBVI_D
  { 1701,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1701 = SUBVI_H
  { 1702,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1702 = SUBVI_W
  { 1703,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1703 = SUBV_B
  { 1704,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1704 = SUBV_D
  { 1705,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1705 = SUBV_H
  { 1706,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1706 = SUBV_W
  { 1707,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1707 = SUB_MM
  { 1708,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1708 = SUB_MMR6
  { 1709,	3,	1,	4,	138,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1709 = SUBu
  { 1710,	3,	1,	4,	138,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1710 = SUBu_MM
  { 1711,	3,	0,	4,	139,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1711 = SUXC1
  { 1712,	3,	0,	4,	139,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1712 = SUXC164
  { 1713,	3,	0,	4,	139,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1713 = SUXC1_MM
  { 1714,	3,	0,	4,	140,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1714 = SW
  { 1715,	3,	0,	2,	140,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1715 = SW16_MM
  { 1716,	3,	0,	4,	140,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1716 = SW64
  { 1717,	3,	0,	4,	141,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1717 = SWC1
  { 1718,	3,	0,	4,	141,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1718 = SWC1_MM
  { 1719,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1719 = SWC2
  { 1720,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1720 = SWC2_R6
  { 1721,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1721 = SWC3
  { 1722,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1722 = SWE_MMR6
  { 1723,	3,	0,	4,	142,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1723 = SWL
  { 1724,	3,	0,	4,	142,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1724 = SWL64
  { 1725,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1725 = SWL_MM
  { 1726,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1726 = SWM16_MM
  { 1727,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1727 = SWM32_MM
  { 1728,	3,	0,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1728 = SWM_MM
  { 1729,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1729 = SWP_MM
  { 1730,	3,	0,	4,	143,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1730 = SWR
  { 1731,	3,	0,	4,	143,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1731 = SWR64
  { 1732,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1732 = SWR_MM
  { 1733,	3,	0,	2,	140,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1733 = SWSP_MM
  { 1734,	3,	0,	4,	144,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1734 = SWXC1
  { 1735,	3,	0,	4,	144,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1735 = SWXC1_MM
  { 1736,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1736 = SW_MM
  { 1737,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1737 = SW_MMR6
  { 1738,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1738 = SYNC
  { 1739,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo288, -1 ,nullptr },  // Inst #1739 = SYNCI
  { 1740,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1740 = SYNC_MM
  { 1741,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1741 = SYSCALL
  { 1742,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1742 = SYSCALL_MM
  { 1743,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1743 = SZ_B_PSEUDO
  { 1744,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo281, -1 ,nullptr },  // Inst #1744 = SZ_D_PSEUDO
  { 1745,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1745 = SZ_H_PSEUDO
  { 1746,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1746 = SZ_V_PSEUDO
  { 1747,	2,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1747 = SZ_W_PSEUDO
  { 1748,	0,	0,	2,	145,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1748 = Save16
  { 1749,	0,	0,	2,	145,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1749 = SaveX16
  { 1750,	4,	0,	4,	119,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1750 = SbRxRyOffMemX16
  { 1751,	2,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo289, -1 ,nullptr },  // Inst #1751 = SebRx16
  { 1752,	2,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo289, -1 ,nullptr },  // Inst #1752 = SehRx16
  { 1753,	4,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #1753 = SelBeqZ
  { 1754,	4,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #1754 = SelBneZ
  { 1755,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1755 = SelTBteqZCmp
  { 1756,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1756 = SelTBteqZCmpi
  { 1757,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1757 = SelTBteqZSlt
  { 1758,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1758 = SelTBteqZSlti
  { 1759,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1759 = SelTBteqZSltiu
  { 1760,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1760 = SelTBteqZSltu
  { 1761,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1761 = SelTBtneZCmp
  { 1762,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1762 = SelTBtneZCmpi
  { 1763,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1763 = SelTBtneZSlt
  { 1764,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1764 = SelTBtneZSlti
  { 1765,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #1765 = SelTBtneZSltiu
  { 1766,	5,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #1766 = SelTBtneZSltu
  { 1767,	4,	0,	4,	129,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1767 = ShRxRyOffMemX16
  { 1768,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1768 = SllX16
  { 1769,	3,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1769 = SllvRxRy16
  { 1770,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #1770 = SltCCRxRy16
  { 1771,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #1771 = SltRxRy16
  { 1772,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1772 = SltiCCRxImmX16
  { 1773,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #1773 = SltiRxImm16
  { 1774,	2,	0,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #1774 = SltiRxImmX16
  { 1775,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1775 = SltiuCCRxImmX16
  { 1776,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #1776 = SltiuRxImm16
  { 1777,	2,	0,	4,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo39, -1 ,nullptr },  // Inst #1777 = SltiuRxImmX16
  { 1778,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #1778 = SltuCCRxRy16
  { 1779,	2,	0,	2,	6,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #1779 = SltuRxRy16
  { 1780,	3,	1,	2,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #1780 = SltuRxRyRz16
  { 1781,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1781 = SraX16
  { 1782,	3,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1782 = SravRxRy16
  { 1783,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #1783 = SrlX16
  { 1784,	3,	1,	2,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1784 = SrlvRxRy16
  { 1785,	3,	1,	2,	6,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #1785 = SubuRxRyRz16
  { 1786,	4,	0,	4,	140,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1786 = SwRxRyOffMemX16
  { 1787,	3,	0,	4,	140,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #1787 = SwRxSpImmX16
  { 1788,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #1788 = TAILCALL
  { 1789,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo165, -1 ,nullptr },  // Inst #1789 = TAILCALL64_R
  { 1790,	1,	0,	4,	7,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo66, -1 ,nullptr },  // Inst #1790 = TAILCALL_R
  { 1791,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1791 = TEQ
  { 1792,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1792 = TEQI
  { 1793,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1793 = TEQI_MM
  { 1794,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1794 = TEQ_MM
  { 1795,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1795 = TGE
  { 1796,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1796 = TGEI
  { 1797,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1797 = TGEIU
  { 1798,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1798 = TGEIU_MM
  { 1799,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1799 = TGEI_MM
  { 1800,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1800 = TGEU
  { 1801,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1801 = TGEU_MM
  { 1802,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1802 = TGE_MM
  { 1803,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1803 = TLBP
  { 1804,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1804 = TLBP_MM
  { 1805,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1805 = TLBR
  { 1806,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1806 = TLBR_MM
  { 1807,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1807 = TLBWI
  { 1808,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1808 = TLBWI_MM
  { 1809,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1809 = TLBWR
  { 1810,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1810 = TLBWR_MM
  { 1811,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1811 = TLT
  { 1812,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1812 = TLTI
  { 1813,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1813 = TLTIU_MM
  { 1814,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1814 = TLTI_MM
  { 1815,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1815 = TLTU
  { 1816,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1816 = TLTU_MM
  { 1817,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1817 = TLT_MM
  { 1818,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1818 = TNE
  { 1819,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1819 = TNEI
  { 1820,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1820 = TNEI_MM
  { 1821,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1821 = TNE_MM
  { 1822,	0,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1822 = TRAP
  { 1823,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #1823 = TRUNC_L_D64
  { 1824,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1824 = TRUNC_L_S
  { 1825,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1825 = TRUNC_W_D32
  { 1826,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1826 = TRUNC_W_D64
  { 1827,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1827 = TRUNC_W_MM
  { 1828,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1828 = TRUNC_W_S
  { 1829,	2,	1,	4,	146,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1829 = TRUNC_W_S_MM
  { 1830,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1830 = TTLTIU
  { 1831,	2,	0,	4,	113,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1831 = UDIV
  { 1832,	2,	0,	4,	113,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1832 = UDIV_MM
  { 1833,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1833 = Ulhu
  { 1834,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1834 = Ulw
  { 1835,	3,	1,	4,	24,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo32, -1 ,nullptr },  // Inst #1835 = V3MULU
  { 1836,	3,	1,	4,	24,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo32, -1 ,nullptr },  // Inst #1836 = VMM0
  { 1837,	3,	1,	4,	24,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo32, -1 ,nullptr },  // Inst #1837 = VMULU
  { 1838,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #1838 = VSHF_B
  { 1839,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #1839 = VSHF_D
  { 1840,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1840 = VSHF_H
  { 1841,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1841 = VSHF_W
  { 1842,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1842 = WAIT
  { 1843,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1843 = WAIT_MM
  { 1844,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1844 = WRDSP
  { 1845,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1845 = WSBH
  { 1846,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1846 = WSBH_MM
  { 1847,	3,	1,	4,	147,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1847 = XOR
  { 1848,	3,	1,	2,	147,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1848 = XOR16_MM
  { 1849,	3,	1,	4,	147,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1849 = XOR64
  { 1850,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1850 = XORI_B
  { 1851,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1851 = XORI_MMR6
  { 1852,	3,	1,	4,	147,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1852 = XOR_MM
  { 1853,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1853 = XOR_MMR6
  { 1854,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1854 = XOR_V
  { 1855,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1855 = XOR_V_D_PSEUDO
  { 1856,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1856 = XOR_V_H_PSEUDO
  { 1857,	3,	1,	4,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1857 = XOR_V_W_PSEUDO
  { 1858,	3,	1,	4,	148,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1858 = XORi
  { 1859,	3,	1,	4,	147,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1859 = XORi64
  { 1860,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1860 = XORi_MM
  { 1861,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #1861 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'D', 'M', 'F', 'C', '0', 0,
  /* 6 */ 'D', 'M', 'T', 'C', '0', 0,
  /* 12 */ 'V', 'M', 'M', '0', 0,
  /* 17 */ 'M', 'T', 'M', '0', 0,
  /* 22 */ 'M', 'T', 'P', '0', 0,
  /* 27 */ 'B', 'B', 'I', 'T', '0', 0,
  /* 33 */ 'L', 'D', 'C', '1', 0,
  /* 38 */ 'S', 'D', 'C', '1', 0,
  /* 43 */ 'C', 'F', 'C', '1', 0,
  /* 48 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 54 */ 'C', 'T', 'C', '1', 0,
  /* 59 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 65 */ 'L', 'W', 'C', '1', 0,
  /* 70 */ 'S', 'W', 'C', '1', 0,
  /* 75 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 81 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 87 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 93 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 99 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 105 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 111 */ 'M', 'T', 'M', '1', 0,
  /* 116 */ 'M', 'T', 'P', '1', 0,
  /* 121 */ 'B', 'B', 'I', 'T', '1', 0,
  /* 127 */ 'B', 'B', 'I', 'T', '0', '3', '2', 0,
  /* 135 */ 'B', 'B', 'I', 'T', '1', '3', '2', 0,
  /* 143 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 150 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 160 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 170 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 179 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 189 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 198 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 208 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '3', '2', 0,
  /* 218 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 229 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 239 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 249 */ 'C', '_', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 258 */ 'C', '_', 'S', 'F', '_', 'D', '3', '2', 0,
  /* 267 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 276 */ 'C', '_', 'F', '_', 'D', '3', '2', 0,
  /* 284 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '3', '2', 0,
  /* 305 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 314 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 325 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 336 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '3', '2', 0,
  /* 346 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 355 */ 'C', '_', 'U', 'N', '_', 'D', '3', '2', 0,
  /* 364 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 373 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 383 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 393 */ 'C', '_', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 402 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 411 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 421 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '3', '2', 0,
  /* 438 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '3', '2', 0,
  /* 448 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 458 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 468 */ 'C', '_', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 477 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 487 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 496 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '3', '2', 0,
  /* 517 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 526 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 535 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 547 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 559 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 570 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 582 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 592 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 601 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 621 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 641 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 662 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 682 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 698 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 718 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 738 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 757 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 764 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 771 */ 'D', 'R', 'O', 'T', 'R', '3', '2', 0,
  /* 779 */ 'C', 'I', 'N', 'S', '3', '2', 0,
  /* 786 */ 'E', 'X', 'T', 'S', '3', '2', 0,
  /* 793 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 802 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 812 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'R', 'e', 'g', '3', '2', 0,
  /* 826 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 0,
  /* 836 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'I', 'm', 'm', '3', '2', 0,
  /* 850 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 866 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 879 */ 'L', 'D', 'C', '2', 0,
  /* 884 */ 'S', 'D', 'C', '2', 0,
  /* 889 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 895 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 901 */ 'L', 'W', 'C', '2', 0,
  /* 906 */ 'S', 'W', 'C', '2', 0,
  /* 911 */ 'M', 'T', 'M', '2', 0,
  /* 916 */ 'M', 'T', 'P', '2', 0,
  /* 921 */ 'L', 'D', 'C', '3', 0,
  /* 926 */ 'S', 'D', 'C', '3', 0,
  /* 931 */ 'L', 'W', 'C', '3', 0,
  /* 936 */ 'S', 'W', 'C', '3', 0,
  /* 941 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 948 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 955 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 963 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 971 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 979 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 987 */ 'S', 'E', 'B', '6', '4', 0,
  /* 993 */ 'L', 'B', '6', '4', 0,
  /* 998 */ 'S', 'B', '6', '4', 0,
  /* 1003 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1014 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1026 */ 'A', 'N', 'D', '6', '4', 0,
  /* 1032 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1042 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1052 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1065 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1078 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1087 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1097 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1106 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1116 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 1126 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1137 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1147 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1157 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1166 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 1175 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 1184 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1192 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1213 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 1222 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1233 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1244 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 1254 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 1263 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1275 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1287 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1298 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1310 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1320 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 1329 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 1338 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1348 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1358 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1367 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 1376 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 1386 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '6', '4', 0,
  /* 1403 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 1413 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1423 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1433 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1442 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 1452 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 1461 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '6', '4', 0,
  /* 1482 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 1491 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 1500 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1512 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1524 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1535 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1547 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1557 */ 'B', 'N', 'E', '6', '4', 0,
  /* 1563 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 1576 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 1594 */ 'S', 'E', 'H', '6', '4', 0,
  /* 1600 */ 'L', 'H', '6', '4', 0,
  /* 1605 */ 'S', 'H', '6', '4', 0,
  /* 1610 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 1623 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '6', '4', 0,
  /* 1638 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 1645 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1658 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1671 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 1691 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1711 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1732 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1752 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1761 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', '6', '4', 0,
  /* 1782 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1793 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1804 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1820 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1840 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1860 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1879 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '6', '4', 0,
  /* 1896 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1905 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', '6', '4', 0,
  /* 1926 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1932 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1938 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1951 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1958 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1964 */ 'J', 'R', '6', '4', 0,
  /* 1969 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1976 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1982 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1988 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1996 */ 'L', 'W', 'R', '6', '4', 0,
  /* 2002 */ 'S', 'W', 'R', '6', '4', 0,
  /* 2008 */ 'S', 'L', 'T', '6', '4', 0,
  /* 2014 */ 'L', 'W', '6', '4', 0,
  /* 2019 */ 'S', 'W', '6', '4', 0,
  /* 2024 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 2031 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 2038 */ 'S', 'E', 'L', 'N', 'E', 'Z', '6', '4', 0,
  /* 2047 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '6', '4', 0,
  /* 2056 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 2063 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 2070 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 2086 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 2107 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 2116 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'R', 'e', 'g', '6', '4', 0,
  /* 2130 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', '6', '4', 0,
  /* 2153 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 2160 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 2167 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 2174 */ 'L', 'U', 'i', '6', '4', 0,
  /* 2180 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '6', '4', 0,
  /* 2190 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'I', 'm', 'm', '6', '4', 0,
  /* 2204 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2219 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2235 */ 'L', 'B', 'u', '6', '4', 0,
  /* 2241 */ 'L', 'H', 'u', '6', '4', 0,
  /* 2247 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 2254 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 2266 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 2274 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 2284 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 2292 */ 'J', 'a', 'l', 'B', '1', '6', 0,
  /* 2299 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 2319 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 2339 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2360 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2380 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2396 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2416 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2436 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2455 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 2465 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 2472 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'X', '1', '6', 0,
  /* 2483 */ 'S', 'a', 'v', 'e', 'X', '1', '6', 0,
  /* 2491 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2506 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2521 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2536 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2551 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 2558 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 2565 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2581 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2597 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2613 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2629 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2646 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2663 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2682 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2698 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2714 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2730 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2744 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2757 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2770 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2785 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2801 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2812 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2825 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2838 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2852 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2866 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2882 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2895 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2908 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2916 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'A', 'l', 'i', 'g', 'n', 'X', '1', '6', 0,
  /* 2932 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', 'X', '1', '6', 0,
  /* 2945 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2959 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2973 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2987 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 3001 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 3017 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 3033 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3048 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3063 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 3072 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 3081 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 3089 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 3096 */ 'R', 'e', 's', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 3106 */ 'G', 'o', 't', 'P', 'r', 'o', 'l', 'o', 'g', 'u', 'e', '1', '6', 0,
  /* 3120 */ 'S', 'a', 'v', 'e', '1', '6', 0,
  /* 3127 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 3141 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 3148 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 3156 */ 'J', 'a', 'l', '1', '6', 0,
  /* 3162 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 3175 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3185 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3197 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3209 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3222 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3237 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3249 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3261 */ 'B', 'i', 'm', 'm', '1', '6', 0,
  /* 3268 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 3275 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', '1', '6', 0,
  /* 3287 */ 'S', 'e', 'b', 'R', 'x', '1', '6', 0,
  /* 3295 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 3303 */ 'S', 'e', 'h', 'R', 'x', '1', '6', 0,
  /* 3311 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3323 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3336 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3346 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3356 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3366 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3377 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3387 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3398 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3410 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3421 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3432 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3442 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3453 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3464 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3476 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3487 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3499 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3512 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3525 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3538 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3551 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3565 */ 'B', 't', 'n', 'e', 'z', '1', '6', 0,
  /* 3573 */ 'B', 't', 'e', 'q', 'z', '1', '6', 0,
  /* 3581 */ 'D', 'M', 'O', 'D', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3593 */ 'D', 'A', 'H', 'I', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3605 */ 'D', 'A', 'T', 'I', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3617 */ 'D', 'A', 'U', 'I', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3629 */ 'D', 'E', 'X', 'T', 'M', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3642 */ 'D', 'A', 'L', 'I', 'G', 'N', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3656 */ 'D', 'E', 'X', 'T', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3668 */ 'D', 'M', 'O', 'D', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3681 */ 'D', 'E', 'X', 'T', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3694 */ 'D', 'D', 'I', 'V', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3707 */ 'D', 'D', 'I', 'V', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 3719 */ 'L', 'S', 'A', '_', 'M', 'M', 'R', '6', 0,
  /* 3728 */ 'S', 'E', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 3737 */ 'E', 'H', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 3746 */ 'S', 'U', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 3755 */ 'B', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3763 */ 'J', 'I', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3772 */ 'B', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3782 */ 'J', 'I', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3793 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3806 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3819 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3832 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3845 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3858 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3871 */ 'E', 'R', 'E', 'T', 'N', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3883 */ 'A', 'U', 'I', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3894 */ 'A', 'L', 'U', 'I', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3906 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3919 */ 'L', 'W', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 3929 */ 'A', 'D', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 3938 */ 'A', 'N', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 3947 */ 'M', 'O', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 3956 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 3967 */ 'S', 'W', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 3976 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 'R', '6', 0,
  /* 3986 */ 'S', 'E', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 3995 */ 'M', 'U', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 4004 */ 'A', 'N', 'D', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 4014 */ 'E', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 4022 */ 'X', 'O', 'R', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 4032 */ 'A', 'U', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 4041 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 'R', '6', 0,
  /* 4052 */ 'S', 'L', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 4061 */ 'M', 'U', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 4070 */ 'A', 'L', 'I', 'G', 'N', '_', 'M', 'M', 'R', '6', 0,
  /* 4081 */ 'C', 'L', 'O', '_', 'M', 'M', 'R', '6', 0,
  /* 4090 */ 'B', 'I', 'T', 'S', 'W', 'A', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 4103 */ 'N', 'O', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 4112 */ 'X', 'O', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 4121 */ 'E', 'R', 'E', 'T', '_', 'M', 'M', 'R', '6', 0,
  /* 4131 */ 'S', 'U', 'B', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 4141 */ 'A', 'D', 'D', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 4151 */ 'M', 'O', 'D', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 4161 */ 'M', 'U', 'H', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 4171 */ 'A', 'D', 'D', 'I', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 4182 */ 'M', 'U', 'L', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 4192 */ 'D', 'I', 'V', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 4202 */ 'D', 'I', 'V', '_', 'M', 'M', 'R', '6', 0,
  /* 4211 */ 'S', 'W', '_', 'M', 'M', 'R', '6', 0,
  /* 4219 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 4231 */ 'C', 'L', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 4240 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 4252 */ 'L', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 4260 */ 'S', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 4268 */ 'L', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 4276 */ 'S', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 4284 */ 'D', 'L', 'S', 'A', '_', 'R', '6', 0,
  /* 4292 */ 'J', 'R', '_', 'H', 'B', '_', 'R', '6', 0,
  /* 4301 */ 'S', 'C', '_', 'R', '6', 0,
  /* 4307 */ 'S', 'C', 'D', '_', 'R', '6', 0,
  /* 4314 */ 'L', 'L', 'D', '_', 'R', '6', 0,
  /* 4321 */ 'C', 'A', 'C', 'H', 'E', '_', 'R', '6', 0,
  /* 4330 */ 'P', 'R', 'E', 'F', '_', 'R', '6', 0,
  /* 4338 */ 'L', 'L', '_', 'R', '6', 0,
  /* 4344 */ 'D', 'M', 'U', 'L', '_', 'R', '6', 0,
  /* 4352 */ 'D', 'C', 'L', 'O', '_', 'R', '6', 0,
  /* 4360 */ 'S', 'D', 'B', 'B', 'P', '_', 'R', '6', 0,
  /* 4369 */ 'D', 'C', 'L', 'Z', '_', 'R', '6', 0,
  /* 4377 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 4389 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 4402 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 4421 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 4440 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 4460 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 4479 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 4494 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 4513 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 4532 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 4550 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 4565 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 4581 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 4596 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 4612 */ 'D', 'S', 'R', 'A', 0,
  /* 4617 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 4623 */ 'D', 'L', 'S', 'A', 0,
  /* 4628 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 4635 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 4642 */ 'S', 'E', 'B', 0,
  /* 4646 */ 'E', 'H', 'B', 0,
  /* 4650 */ 'J', 'R', '_', 'H', 'B', 0,
  /* 4656 */ 'J', 'A', 'L', 'R', '_', 'H', 'B', 0,
  /* 4664 */ 'L', 'B', 0,
  /* 4667 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 4675 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4688 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4700 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4717 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 4726 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 4735 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 4749 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 4757 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 4765 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 4773 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4786 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4798 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4815 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 4825 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4836 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4847 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 4858 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 4868 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4878 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4888 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4901 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4913 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4930 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 4938 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 4946 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 4955 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4964 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4973 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4982 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 4993 */ 'S', 'B', 0,
  /* 4996 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 5003 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 5014 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 5020 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 5028 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 5036 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 5045 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 5053 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 5060 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 5067 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 5073 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 5081 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 5089 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 5097 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 5104 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 5111 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 5118 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 5125 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 5132 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 5140 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 5148 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 5155 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 5162 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 5171 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 5178 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 5186 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 5194 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 5202 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 5209 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 5216 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 5225 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 5234 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 5242 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 5250 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 5258 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 5265 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 5273 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 5280 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 5286 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 5292 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 5300 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 5307 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 5313 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 5320 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 5327 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 5334 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 5342 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 5349 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 5358 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 5366 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 5374 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 5382 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 5391 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 5400 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 5409 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 5418 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 5426 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 5435 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 5444 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 5453 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 5461 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 5469 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 5480 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 5488 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 5496 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 5505 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 5513 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 5520 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 5527 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 5536 */ 'S', 'T', '_', 'B', 0,
  /* 5541 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 5550 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 5558 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 5566 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 5574 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 5583 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 5592 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 5601 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 5610 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 5618 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 5627 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 5636 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 5645 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 5656 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 5664 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 5672 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 5680 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 5688 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 5697 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 5705 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 5713 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 5721 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 5729 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 5736 */ 'B', 'Z', '_', 'B', 0,
  /* 5741 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 5747 */ 'B', 'C', 0,
  /* 5750 */ 'B', 'G', 'E', 'C', 0,
  /* 5755 */ 'B', 'N', 'E', 'C', 0,
  /* 5760 */ 'J', 'I', 'C', 0,
  /* 5764 */ 'B', 'A', 'L', 'C', 0,
  /* 5769 */ 'J', 'I', 'A', 'L', 'C', 0,
  /* 5775 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5783 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5791 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 5799 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', 0,
  /* 5807 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 5815 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 5823 */ 'E', 'R', 'E', 'T', 'N', 'C', 0,
  /* 5830 */ 'S', 'Y', 'N', 'C', 0,
  /* 5835 */ 'L', 'D', 'P', 'C', 0,
  /* 5840 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 5846 */ 'A', 'L', 'U', 'I', 'P', 'C', 0,
  /* 5853 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', 0,
  /* 5861 */ 'L', 'W', 'U', 'P', 'C', 0,
  /* 5867 */ 'L', 'W', 'P', 'C', 0,
  /* 5872 */ 'B', 'E', 'Q', 'C', 0,
  /* 5877 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 5883 */ 'B', 'L', 'T', 'C', 0,
  /* 5888 */ 'B', 'G', 'E', 'U', 'C', 0,
  /* 5894 */ 'B', 'L', 'T', 'U', 'C', 0,
  /* 5900 */ 'B', 'N', 'V', 'C', 0,
  /* 5905 */ 'B', 'O', 'V', 'C', 0,
  /* 5910 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 5916 */ 'B', 'G', 'E', 'Z', 'C', 0,
  /* 5922 */ 'B', 'L', 'E', 'Z', 'C', 0,
  /* 5928 */ 'B', 'N', 'E', 'Z', 'C', 0,
  /* 5934 */ 'B', 'E', 'Q', 'Z', 'C', 0,
  /* 5940 */ 'B', 'G', 'T', 'Z', 'C', 0,
  /* 5946 */ 'B', 'L', 'T', 'Z', 'C', 0,
  /* 5952 */ 'S', 'C', 'D', 0,
  /* 5956 */ 'D', 'A', 'D', 'D', 0,
  /* 5961 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 5972 */ 'D', 'S', 'H', 'D', 0,
  /* 5977 */ 'L', 'L', 'D', 0,
  /* 5981 */ 'A', 'N', 'D', 0,
  /* 5985 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 5993 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 6000 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 6013 */ 'D', 'M', 'O', 'D', 0,
  /* 6018 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 6035 */ 'S', 'D', 0,
  /* 6038 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 6046 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 6054 */ 'M', 'I', 'N', 'A', '_', 'D', 0,
  /* 6061 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 6067 */ 'M', 'A', 'X', 'A', '_', 'D', 0,
  /* 6074 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 6082 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 6091 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 6100 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 6109 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 6116 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 6124 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 6131 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 6138 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 6145 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 6153 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 6159 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 6167 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 6175 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 6182 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 6189 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', 0,
  /* 6199 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 6207 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 6215 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 6226 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', 0,
  /* 6236 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', 0,
  /* 6245 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 6252 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 6259 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 6267 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 6275 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 6283 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 6290 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 6297 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', 0,
  /* 6307 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', 0,
  /* 6315 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', 0,
  /* 6323 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 6330 */ 'C', 'M', 'P', '_', 'F', '_', 'D', 0,
  /* 6338 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 6345 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 6352 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 6359 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 6367 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 6374 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 6381 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 6390 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 6397 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 6405 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 6413 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 6421 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 6430 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 6439 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 6447 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 6455 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 6463 */ 'S', 'E', 'L', '_', 'D', 0,
  /* 6469 */ 'F', 'I', 'L', 'L', '_', 'D', 0,
  /* 6476 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 6482 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 6491 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 6498 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 6504 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 6512 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 6519 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 6526 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 6533 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 6540 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 6547 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', 0,
  /* 6557 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', 0,
  /* 6566 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 6573 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 6580 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 6587 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', 0,
  /* 6597 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 6605 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 6613 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 6624 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', 0,
  /* 6634 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', 0,
  /* 6643 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 6650 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 6657 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 6664 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 6671 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 6678 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 6687 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 6694 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 6702 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 6709 */ 'F', 'A', 'B', 'S', '_', 'D', 0,
  /* 6716 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 6725 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6734 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6743 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 6753 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 6764 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 6773 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 6783 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 6791 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 6799 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 6807 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 6816 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 6825 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 6834 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 6843 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 6851 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 6860 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 6869 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 6878 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 6887 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 6895 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 6903 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 6913 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 6923 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 6934 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 6942 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 6950 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'D', 0,
  /* 6959 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 6967 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 6974 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 6981 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 6988 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', 0,
  /* 6998 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 7006 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 7014 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 7025 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', 0,
  /* 7035 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', 0,
  /* 7044 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 7051 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 7059 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', 0,
  /* 7068 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 7076 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 7085 */ 'S', 'T', '_', 'D', 0,
  /* 7090 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 7099 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 7108 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 7118 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 7129 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 7138 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 7148 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 7156 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 7164 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 7172 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 7181 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 7190 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 7199 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 7208 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 7216 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 7225 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 7234 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 7243 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 7252 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 7263 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 7271 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 7279 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 7289 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 7299 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 7307 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 7315 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'D', 0,
  /* 7324 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 7332 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 7340 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 7348 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 7356 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 7363 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 7370 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 7377 */ 'B', 'Z', '_', 'D', 0,
  /* 7382 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', 0,
  /* 7391 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 7397 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', 0,
  /* 7406 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 7419 */ 'B', 'G', 'E', 0,
  /* 7423 */ 'T', 'G', 'E', 0,
  /* 7427 */ 'C', 'A', 'C', 'H', 'E', 0,
  /* 7433 */ 'B', 'L', 'E', 0,
  /* 7437 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 7444 */ 'B', 'N', 'E', 0,
  /* 7448 */ 'S', 'N', 'E', 0,
  /* 7452 */ 'T', 'N', 'E', 0,
  /* 7456 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 7469 */ 'P', 'A', 'U', 'S', 'E', 0,
  /* 7475 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 7485 */ 'B', 'C', '1', 'F', 0,
  /* 7490 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 7503 */ 'P', 'R', 'E', 'F', 0,
  /* 7508 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 7523 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 7537 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 7551 */ 'D', 'S', 'B', 'H', 0,
  /* 7556 */ 'W', 'S', 'B', 'H', 0,
  /* 7561 */ 'S', 'E', 'H', 0,
  /* 7565 */ 'L', 'H', 0,
  /* 7568 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 7576 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 7589 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 7601 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 7617 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 7633 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 7642 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 7651 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 7665 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 7673 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 7681 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 7689 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 7699 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 7706 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 7714 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 7722 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 7738 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 7748 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 7759 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 7770 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 7781 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 7792 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 7802 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 7811 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7821 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7831 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7841 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 7851 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 7861 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 7871 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 7882 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 7898 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 7906 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 7914 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 7923 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 7932 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 7941 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 7950 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7959 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7970 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7984 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7998 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 8007 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 8019 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 8033 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 8045 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 8058 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 8071 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 8081 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 8091 */ 'S', 'H', 0,
  /* 8094 */ 'D', 'M', 'U', 'H', 0,
  /* 8099 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 8105 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 8113 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 8121 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 8130 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 8138 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 8145 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 8152 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 8158 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 8166 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 8174 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 8182 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 8189 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 8196 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 8203 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 8210 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 8218 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 8225 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 8232 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 8241 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 8248 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 8256 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 8264 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 8272 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 8281 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 8290 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 8298 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 8306 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 8314 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 8321 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 8327 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 8333 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 8341 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 8348 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 8356 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 8362 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 8368 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 8377 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 8386 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 8394 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 8404 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 8414 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 8423 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 8430 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 8437 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 8444 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 8452 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 8459 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 8468 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 8477 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 8487 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 8496 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 8506 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 8514 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 8522 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 8530 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 8539 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 8548 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 8557 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 8566 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 8574 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 8583 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 8592 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 8601 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 8610 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 8619 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 8627 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 8635 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 8646 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 8654 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 8664 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 8672 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 8681 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 8689 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 8696 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 8703 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 8712 */ 'S', 'T', '_', 'H', 0,
  /* 8717 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 8726 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 8735 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 8745 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 8754 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 8764 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 8772 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 8780 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 8788 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 8797 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 8806 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 8815 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 8824 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 8832 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 8841 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 8850 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 8859 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 8868 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 8879 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 8887 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 8895 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 8903 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 8911 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 8920 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 8928 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 8936 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 8944 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 8952 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 8959 */ 'B', 'Z', '_', 'H', 0,
  /* 8964 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 8970 */ 'S', 'Y', 'N', 'C', 'I', 0,
  /* 8976 */ 'D', 'I', 0,
  /* 8979 */ 'T', 'G', 'E', 'I', 0,
  /* 8984 */ 'T', 'N', 'E', 'I', 0,
  /* 8989 */ 'D', 'A', 'H', 'I', 0,
  /* 8994 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', 0,
  /* 9005 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', 0,
  /* 9018 */ 'P', 'H', 'I', 0,
  /* 9022 */ 'M', 'T', 'H', 'I', 0,
  /* 9027 */ 'T', 'E', 'Q', 'I', 0,
  /* 9032 */ 'D', 'A', 'T', 'I', 0,
  /* 9037 */ 'T', 'L', 'T', 'I', 0,
  /* 9042 */ 'D', 'A', 'U', 'I', 0,
  /* 9047 */ 'T', 'L', 'B', 'W', 'I', 0,
  /* 9053 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 9064 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 9075 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 9082 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', 0,
  /* 9101 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 9110 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 9119 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', 0,
  /* 9134 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 9141 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', 0,
  /* 9160 */ 'J', 0,
  /* 9162 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 9168 */ 'B', 'A', 'L', 0,
  /* 9172 */ 'J', 'A', 'L', 0,
  /* 9176 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 9183 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 9190 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9205 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9219 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9234 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9245 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 9256 */ 'L', 'D', 'L', 0,
  /* 9260 */ 'S', 'D', 'L', 0,
  /* 9264 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 9273 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 9282 */ 'B', 'N', 'E', 'L', 0,
  /* 9287 */ 'B', 'C', '1', 'F', 'L', 0,
  /* 9293 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 9306 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 9319 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 9331 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 9345 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 9354 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 9362 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'L', 0,
  /* 9370 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'L', 0,
  /* 9378 */ 'K', 'I', 'L', 'L', 0,
  /* 9383 */ 'D', 'S', 'L', 'L', 0,
  /* 9388 */ 'B', 'E', 'Q', 'L', 0,
  /* 9393 */ 'D', 'S', 'R', 'L', 0,
  /* 9398 */ 'B', 'C', '1', 'T', 'L', 0,
  /* 9404 */ 'D', 'M', 'U', 'L', 0,
  /* 9409 */ 'L', 'W', 'L', 0,
  /* 9413 */ 'S', 'W', 'L', 0,
  /* 9417 */ 'B', 'G', 'E', 'Z', 'L', 0,
  /* 9423 */ 'B', 'L', 'E', 'Z', 'L', 0,
  /* 9429 */ 'B', 'G', 'T', 'Z', 'L', 0,
  /* 9435 */ 'B', 'L', 'T', 'Z', 'L', 0,
  /* 9441 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 9457 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 9471 */ 'L', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 9479 */ 'S', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 9487 */ 'C', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 9495 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 9503 */ 'M', 'F', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 9512 */ 'M', 'T', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 9521 */ 'C', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 9529 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 9537 */ 'L', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 9545 */ 'S', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 9553 */ 'L', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 9562 */ 'S', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 9571 */ 'L', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 9580 */ 'S', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 9589 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9602 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9615 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9627 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9641 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9655 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9667 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9680 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9692 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 9704 */ 'L', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 9713 */ 'S', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 9722 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', '_', 'M', 'M', 0,
  /* 9734 */ 'A', 'D', 'D', 'I', 'U', 'R', '2', '_', 'M', 'M', 0,
  /* 9745 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', '_', 'M', 'M', 0,
  /* 9758 */ 'A', 'D', 'D', 'I', 'U', 'S', '5', '_', 'M', 'M', 0,
  /* 9769 */ 'S', 'B', '1', '6', '_', 'M', 'M', 0,
  /* 9777 */ 'J', 'R', 'C', '1', '6', '_', 'M', 'M', 0,
  /* 9786 */ 'A', 'N', 'D', '1', '6', '_', 'M', 'M', 0,
  /* 9795 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 0,
  /* 9805 */ 'S', 'H', '1', '6', '_', 'M', 'M', 0,
  /* 9813 */ 'A', 'N', 'D', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9823 */ 'M', 'F', 'H', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9833 */ 'L', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 9841 */ 'B', 'R', 'E', 'A', 'K', '1', '6', '_', 'M', 'M', 0,
  /* 9852 */ 'S', 'L', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 9861 */ 'S', 'R', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 9870 */ 'L', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 9879 */ 'S', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 9888 */ 'M', 'F', 'L', 'O', '1', '6', '_', 'M', 'M', 0,
  /* 9898 */ 'S', 'D', 'B', 'B', 'P', '1', '6', '_', 'M', 'M', 0,
  /* 9909 */ 'J', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9917 */ 'J', 'A', 'L', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9927 */ 'X', 'O', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 9936 */ 'J', 'A', 'L', 'R', 'S', '1', '6', '_', 'M', 'M', 0,
  /* 9947 */ 'N', 'O', 'T', '1', '6', '_', 'M', 'M', 0,
  /* 9956 */ 'L', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9965 */ 'S', 'U', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9975 */ 'A', 'D', 'D', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9985 */ 'L', 'H', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 9994 */ 'L', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 10002 */ 'S', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 10010 */ 'B', 'N', 'E', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 10020 */ 'B', 'E', 'Q', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 10030 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 10037 */ 'S', 'E', 'B', '_', 'M', 'M', 0,
  /* 10044 */ 'E', 'H', 'B', '_', 'M', 'M', 0,
  /* 10051 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 10057 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 10063 */ 'F', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 10071 */ 'M', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 10079 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 0,
  /* 10087 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 0,
  /* 10098 */ 'S', 'C', '_', 'M', 'M', 0,
  /* 10104 */ 'B', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 0,
  /* 10113 */ 'B', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 0,
  /* 10122 */ 'F', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 10130 */ 'M', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 10138 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 10145 */ 'T', 'G', 'E', '_', 'M', 'M', 0,
  /* 10152 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 0,
  /* 10161 */ 'B', 'N', 'E', '_', 'M', 'M', 0,
  /* 10168 */ 'T', 'N', 'E', '_', 'M', 'M', 0,
  /* 10175 */ 'P', 'A', 'U', 'S', 'E', '_', 'M', 'M', 0,
  /* 10184 */ 'B', 'C', '1', 'F', '_', 'M', 'M', 0,
  /* 10192 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 0,
  /* 10200 */ 'F', 'N', 'E', 'G', '_', 'M', 'M', 0,
  /* 10208 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 0,
  /* 10216 */ 'S', 'E', 'H', '_', 'M', 'M', 0,
  /* 10223 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 10229 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 10235 */ 'D', 'I', '_', 'M', 'M', 0,
  /* 10241 */ 'T', 'G', 'E', 'I', '_', 'M', 'M', 0,
  /* 10249 */ 'T', 'N', 'E', 'I', '_', 'M', 'M', 0,
  /* 10257 */ 'M', 'F', 'H', 'I', '_', 'M', 'M', 0,
  /* 10265 */ 'M', 'T', 'H', 'I', '_', 'M', 'M', 0,
  /* 10273 */ 'T', 'E', 'Q', 'I', '_', 'M', 'M', 0,
  /* 10281 */ 'T', 'L', 'T', 'I', '_', 'M', 'M', 0,
  /* 10289 */ 'T', 'L', 'B', 'W', 'I', '_', 'M', 'M', 0,
  /* 10298 */ 'M', 'O', 'V', 'F', '_', 'I', '_', 'M', 'M', 0,
  /* 10308 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'M', 'M', 0,
  /* 10318 */ 'M', 'O', 'V', 'T', '_', 'I', '_', 'M', 'M', 0,
  /* 10328 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'M', 'M', 0,
  /* 10338 */ 'J', '_', 'M', 'M', 0,
  /* 10343 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 0,
  /* 10352 */ 'J', 'A', 'L', '_', 'M', 'M', 0,
  /* 10359 */ 'B', 'G', 'E', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 10369 */ 'B', 'L', 'T', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 10379 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', '_', 'M', 'M', 0,
  /* 10390 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 10397 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 10404 */ 'F', 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 10412 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 10419 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 10426 */ 'L', 'W', 'M', '_', 'M', 'M', 0,
  /* 10433 */ 'S', 'W', 'M', '_', 'M', 'M', 0,
  /* 10440 */ 'C', 'L', 'O', '_', 'M', 'M', 0,
  /* 10447 */ 'M', 'F', 'L', 'O', '_', 'M', 'M', 0,
  /* 10455 */ 'M', 'T', 'L', 'O', '_', 'M', 'M', 0,
  /* 10463 */ 'S', 'D', 'B', 'B', 'P', '_', 'M', 'M', 0,
  /* 10472 */ 'T', 'L', 'B', 'P', '_', 'M', 'M', 0,
  /* 10480 */ 'M', 'O', 'V', 'E', 'P', '_', 'M', 'M', 0,
  /* 10489 */ 'L', 'W', 'G', 'P', '_', 'M', 'M', 0,
  /* 10497 */ 'S', 'S', 'N', 'O', 'P', '_', 'M', 'M', 0,
  /* 10506 */ 'A', 'D', 'D', 'I', 'U', 'R', '1', 'S', 'P', '_', 'M', 'M', 0,
  /* 10519 */ 'A', 'D', 'D', 'I', 'U', 'S', 'P', '_', 'M', 'M', 0,
  /* 10530 */ 'L', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 10538 */ 'S', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 10546 */ 'L', 'W', 'P', '_', 'M', 'M', 0,
  /* 10553 */ 'S', 'W', 'P', '_', 'M', 'M', 0,
  /* 10560 */ 'B', 'E', 'Q', '_', 'M', 'M', 0,
  /* 10567 */ 'T', 'E', 'Q', '_', 'M', 'M', 0,
  /* 10574 */ 'T', 'L', 'B', 'R', '_', 'M', 'M', 0,
  /* 10582 */ 'J', 'R', '_', 'M', 'M', 0,
  /* 10588 */ 'J', 'A', 'L', 'R', '_', 'M', 'M', 0,
  /* 10596 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 10603 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 10610 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 10618 */ 'T', 'L', 'B', 'W', 'R', '_', 'M', 'M', 0,
  /* 10627 */ 'R', 'D', 'H', 'W', 'R', '_', 'M', 'M', 0,
  /* 10636 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 10643 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 10650 */ 'F', 'A', 'B', 'S', '_', 'M', 'M', 0,
  /* 10658 */ 'J', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 10666 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 10677 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 10688 */ 'I', 'N', 'S', '_', 'M', 'M', 0,
  /* 10695 */ 'J', 'A', 'L', 'R', 'S', '_', 'M', 'M', 0,
  /* 10704 */ 'L', 'W', 'X', 'S', '_', 'M', 'M', 0,
  /* 10712 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 10722 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 10733 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10743 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10754 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 10765 */ 'M', 'O', 'V', 'F', '_', 'S', '_', 'M', 'M', 0,
  /* 10775 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 0,
  /* 10785 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 10797 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 10809 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 10819 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 10830 */ 'F', 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 0,
  /* 10840 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 10851 */ 'M', 'O', 'V', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 10861 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 10871 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 10881 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10894 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10907 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10919 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10932 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 10943 */ 'B', 'C', '1', 'T', '_', 'M', 'M', 0,
  /* 10951 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 0,
  /* 10960 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 0,
  /* 10968 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 10975 */ 'T', 'L', 'T', '_', 'M', 'M', 0,
  /* 10982 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 10990 */ 'F', 'S', 'Q', 'R', 'T', '_', 'M', 'M', 0,
  /* 10999 */ 'E', 'X', 'T', '_', 'M', 'M', 0,
  /* 11006 */ 'M', 'S', 'U', 'B', 'U', '_', 'M', 'M', 0,
  /* 11015 */ 'M', 'A', 'D', 'D', 'U', '_', 'M', 'M', 0,
  /* 11024 */ 'T', 'G', 'E', 'U', '_', 'M', 'M', 0,
  /* 11032 */ 'T', 'G', 'E', 'I', 'U', '_', 'M', 'M', 0,
  /* 11041 */ 'T', 'L', 'T', 'I', 'U', '_', 'M', 'M', 0,
  /* 11050 */ 'T', 'L', 'T', 'U', '_', 'M', 'M', 0,
  /* 11058 */ 'L', 'W', 'U', '_', 'M', 'M', 0,
  /* 11065 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 11073 */ 'F', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 11081 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 11089 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 11097 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 11105 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 11113 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 11122 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 11128 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 11134 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', '_', 'M', 'M', 0,
  /* 11147 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'M', 'M', 0,
  /* 11158 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'M', 'M', 0,
  /* 11169 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 11179 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 11190 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 11201 */ 'C', 'V', 'T', '_', 'W', '_', 'M', 'M', 0,
  /* 11210 */ 'J', 'A', 'L', 'X', '_', 'M', 'M', 0,
  /* 11218 */ 'B', 'G', 'E', 'Z', '_', 'M', 'M', 0,
  /* 11226 */ 'B', 'L', 'E', 'Z', '_', 'M', 'M', 0,
  /* 11234 */ 'C', 'L', 'Z', '_', 'M', 'M', 0,
  /* 11241 */ 'B', 'G', 'T', 'Z', '_', 'M', 'M', 0,
  /* 11249 */ 'B', 'L', 'T', 'Z', '_', 'M', 'M', 0,
  /* 11257 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 11265 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 11273 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 11281 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 11289 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 11296 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 11303 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 11311 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 11319 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 11326 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 11334 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 11343 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 11356 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 11365 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 11375 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 11381 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 11387 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 11394 */ 'D', 'A', 'L', 'I', 'G', 'N', 0,
  /* 11401 */ 'D', 'M', 'F', 'C', '2', '_', 'O', 'C', 'T', 'E', 'O', 'N', 0,
  /* 11414 */ 'D', 'M', 'T', 'C', '2', '_', 'O', 'C', 'T', 'E', 'O', 'N', 0,
  /* 11427 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 11443 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 11460 */ 'F', 'E', 'X', 'P', '2', '_', 'D', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11477 */ 'F', 'E', 'X', 'P', '2', '_', 'W', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11494 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11510 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11533 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11557 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11580 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11603 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11627 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11650 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11663 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11675 */ 'B', 'S', 'E', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11690 */ 'F', 'I', 'L', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11705 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11722 */ 'C', 'O', 'P', 'Y', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11737 */ 'B', 'S', 'E', 'L', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11751 */ 'A', 'N', 'D', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11766 */ 'N', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11781 */ 'X', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11796 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11809 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11821 */ 'B', 'S', 'E', 'L', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11835 */ 'A', 'N', 'D', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11850 */ 'N', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11865 */ 'X', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11880 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11893 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11905 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11918 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11930 */ 'B', 'S', 'E', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11945 */ 'F', 'I', 'L', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11960 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11977 */ 'C', 'O', 'P', 'Y', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 11992 */ 'B', 'S', 'E', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12006 */ 'A', 'N', 'D', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12021 */ 'N', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12036 */ 'X', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12051 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12064 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12076 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12097 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12119 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12140 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12161 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12183 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 12204 */ 'D', 'C', 'L', 'O', 0,
  /* 12209 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', 0,
  /* 12220 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 12226 */ 'M', 'T', 'L', 'O', 0,
  /* 12231 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 12240 */ 'T', 'R', 'A', 'P', 0,
  /* 12245 */ 'D', 'B', 'I', 'T', 'S', 'W', 'A', 'P', 0,
  /* 12254 */ 'S', 'D', 'B', 'B', 'P', 0,
  /* 12260 */ 'T', 'L', 'B', 'P', 0,
  /* 12265 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 12272 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 12279 */ 'S', 'S', 'N', 'O', 'P', 0,
  /* 12285 */ 'D', 'P', 'O', 'P', 0,
  /* 12290 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 12307 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 12321 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 12336 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 12342 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 12348 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 12357 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 12366 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 12381 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 12397 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 12406 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 12423 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 12432 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 12441 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 12450 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 12459 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 12469 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 12479 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 12489 */ 'J', 'R', 'A', 'D', 'D', 'I', 'U', 'S', 'P', 0,
  /* 12499 */ 'E', 'X', 'T', 'P', 0,
  /* 12504 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 12519 */ 'B', 'E', 'Q', 0,
  /* 12523 */ 'S', 'E', 'Q', 0,
  /* 12527 */ 'T', 'E', 'Q', 0,
  /* 12531 */ 'T', 'L', 'B', 'R', 0,
  /* 12536 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12551 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12565 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12580 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12591 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 12602 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 12609 */ 'L', 'D', 'R', 0,
  /* 12613 */ 'S', 'D', 'R', 0,
  /* 12617 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 12630 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 12643 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 12655 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 12669 */ 'J', 'R', 0,
  /* 12672 */ 'J', 'A', 'L', 'R', 0,
  /* 12677 */ 'N', 'O', 'R', 0,
  /* 12681 */ 'X', 'O', 'R', 0,
  /* 12685 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 12691 */ 'T', 'L', 'B', 'W', 'R', 0,
  /* 12697 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 12703 */ 'L', 'W', 'R', 0,
  /* 12707 */ 'S', 'W', 'R', 0,
  /* 12711 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 12724 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 12735 */ 'C', 'I', 'N', 'S', 0,
  /* 12740 */ 'D', 'I', 'N', 'S', 0,
  /* 12745 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 12762 */ 'E', 'X', 'T', 'S', 0,
  /* 12767 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 12777 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 12787 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12798 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 12809 */ 'M', 'I', 'N', 'A', '_', 'S', 0,
  /* 12816 */ 'M', 'A', 'X', 'A', '_', 'S', 0,
  /* 12823 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 12830 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 12838 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 12845 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 12853 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 12861 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 12870 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 12878 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', 0,
  /* 12888 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', 0,
  /* 12899 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 12907 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 12917 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 12924 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', 0,
  /* 12933 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', 0,
  /* 12943 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', 0,
  /* 12951 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', 0,
  /* 12959 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 12966 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 12973 */ 'C', '_', 'F', '_', 'S', 0,
  /* 12979 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'S', 0,
  /* 12998 */ 'C', 'M', 'P', '_', 'F', '_', 'S', 0,
  /* 13006 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 13013 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 13022 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 13031 */ 'S', 'E', 'L', '_', 'S', 0,
  /* 13037 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 13045 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 13052 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 13062 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 13072 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 13081 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 13091 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 13099 */ 'M', 'I', 'N', '_', 'S', 0,
  /* 13105 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', 0,
  /* 13115 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 13122 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', 0,
  /* 13131 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 13139 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 13149 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', 0,
  /* 13160 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 13168 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 13178 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 13185 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', 0,
  /* 13194 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 13201 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 13209 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'S', 0,
  /* 13224 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 13232 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 13240 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', 0,
  /* 13250 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', 0,
  /* 13261 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 13269 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 13279 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 13286 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', 0,
  /* 13295 */ 'R', 'I', 'N', 'T', '_', 'S', 0,
  /* 13302 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 13310 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 13317 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'S', 0,
  /* 13336 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 13343 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 13350 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 13360 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 13370 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 13379 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 13389 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 13397 */ 'M', 'A', 'X', '_', 'S', 0,
  /* 13403 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', 0,
  /* 13412 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', 0,
  /* 13421 */ 'B', 'C', '1', 'T', 0,
  /* 13426 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 13432 */ 'B', 'G', 'T', 0,
  /* 13436 */ 'W', 'A', 'I', 'T', 0,
  /* 13441 */ 'B', 'L', 'T', 0,
  /* 13445 */ 'S', 'L', 'T', 0,
  /* 13449 */ 'T', 'L', 'T', 0,
  /* 13453 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 13465 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 13476 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 13487 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 13498 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 13513 */ 'D', 'E', 'X', 'T', 0,
  /* 13518 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 13530 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 13542 */ 'D', 'M', 'O', 'D', 'U', 0,
  /* 13548 */ 'B', 'G', 'E', 'U', 0,
  /* 13553 */ 'T', 'G', 'E', 'U', 0,
  /* 13558 */ 'B', 'L', 'E', 'U', 0,
  /* 13563 */ 'D', 'M', 'U', 'H', 'U', 0,
  /* 13569 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 13575 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 13582 */ 'V', '3', 'M', 'U', 'L', 'U', 0,
  /* 13589 */ 'D', 'M', 'U', 'L', 'U', 0,
  /* 13595 */ 'V', 'M', 'U', 'L', 'U', 0,
  /* 13601 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 13607 */ 'B', 'G', 'T', 'U', 0,
  /* 13612 */ 'B', 'L', 'T', 'U', 0,
  /* 13617 */ 'T', 'L', 'T', 'U', 0,
  /* 13622 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 13628 */ 'D', 'D', 'I', 'V', 'U', 0,
  /* 13634 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 13640 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 13647 */ 'D', 'D', 'I', 'V', 0,
  /* 13652 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 13664 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 13675 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 13687 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 13698 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 13704 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 13710 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 13717 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 13725 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 13731 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 13738 */ 'I', 'N', 'S', 'V', 0,
  /* 13743 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 13749 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 13756 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 13763 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 13769 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 13775 */ 'B', 'Z', '_', 'V', 0,
  /* 13780 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 13786 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 13792 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 13799 */ 'L', 'W', 0,
  /* 13802 */ 'S', 'W', 0,
  /* 13805 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 13821 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 13829 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 13837 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 13853 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 13859 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 13867 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 13876 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 13885 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 13894 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 13901 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 13909 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 13916 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 13923 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 13930 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 13938 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 13944 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 13952 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 13960 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 13967 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 13974 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 13982 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 13990 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 13997 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 14004 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 14012 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 14020 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 14028 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 14035 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 14042 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 14049 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 14056 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 14071 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 14083 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 14100 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 14115 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 14123 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 14131 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 14138 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 14145 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 14153 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 14160 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 14167 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 14176 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 14183 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 14191 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 14199 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 14207 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 14216 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 14225 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 14233 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 14241 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 14249 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 14256 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 14262 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 14271 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 14278 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 14284 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 14292 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 14299 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 14306 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 14318 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 14330 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 14337 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 14344 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 14351 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 14359 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 14366 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 14373 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 14380 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 14388 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 14396 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 14402 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 14411 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 14420 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 14428 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 14438 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 14448 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 14457 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 14464 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 14471 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 14478 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 14485 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 14492 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 14501 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 14508 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 14516 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 14523 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 14530 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 14539 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 14549 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 14559 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 14568 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 14578 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 14588 */ 'F', 'A', 'B', 'S', '_', 'W', 0,
  /* 14595 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 14605 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 14615 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 14626 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 14635 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 14644 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 14653 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 14663 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 14674 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 14683 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 14693 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 14701 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 14709 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 14717 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 14726 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 14735 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 14744 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 14753 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 14762 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 14770 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 14779 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 14788 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 14797 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 14806 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 14815 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 14824 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 14833 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 14842 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 14850 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 14858 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 14868 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 14878 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 14892 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 14903 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 14911 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 14921 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 14929 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 14938 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 14946 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 14953 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 14960 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 14967 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 14975 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 14983 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 14990 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 14998 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 15007 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 15015 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 15024 */ 'S', 'T', '_', 'W', 0,
  /* 15029 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 15038 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 15047 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 15057 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 15068 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 15077 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 15087 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 15095 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 15103 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 15111 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 15120 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 15129 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 15138 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 15147 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 15155 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 15164 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 15173 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 15182 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 15191 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 15202 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 15210 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 15218 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 15228 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 15238 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 15246 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 15254 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 15263 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 15271 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 15279 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 15287 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 15295 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 15302 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 15309 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 15317 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 15324 */ 'B', 'Z', '_', 'W', 0,
  /* 15329 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 15335 */ 'L', 'H', 'X', 0,
  /* 15339 */ 'J', 'A', 'L', 'X', 0,
  /* 15344 */ 'L', 'B', 'U', 'X', 0,
  /* 15349 */ 'L', 'W', 'X', 0,
  /* 15353 */ 'C', 'O', 'P', 'Y', 0,
  /* 15358 */ 'C', 'O', 'N', 'S', 'T', 'P', 'O', 'O', 'L', '_', 'E', 'N', 'T', 'R', 'Y', 0,
  /* 15374 */ 'B', 'G', 'E', 'Z', 0,
  /* 15379 */ 'B', 'L', 'E', 'Z', 0,
  /* 15384 */ 'B', 'C', '1', 'N', 'E', 'Z', 0,
  /* 15391 */ 'B', 'C', '2', 'N', 'E', 'Z', 0,
  /* 15398 */ 'S', 'E', 'L', 'N', 'E', 'Z', 0,
  /* 15405 */ 'D', 'C', 'L', 'Z', 0,
  /* 15410 */ 'B', 'C', '1', 'E', 'Q', 'Z', 0,
  /* 15417 */ 'B', 'C', '2', 'E', 'Q', 'Z', 0,
  /* 15424 */ 'S', 'E', 'L', 'E', 'Q', 'Z', 0,
  /* 15431 */ 'B', 'G', 'T', 'Z', 0,
  /* 15436 */ 'B', 'L', 'T', 'Z', 0,
  /* 15441 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 15449 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 15457 */ 'J', 'a', 'l', 'O', 'n', 'e', 'R', 'e', 'g', 0,
  /* 15467 */ 'J', 'a', 'l', 'T', 'w', 'o', 'R', 'e', 'g', 0,
  /* 15477 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', 0,
  /* 15498 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 15504 */ 'A', 'N', 'D', 'i', 0,
  /* 15509 */ 'S', 'N', 'E', 'i', 0,
  /* 15514 */ 'S', 'E', 'Q', 'i', 0,
  /* 15519 */ 'X', 'O', 'R', 'i', 0,
  /* 15524 */ 'S', 'L', 'T', 'i', 0,
  /* 15529 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'L', 'U', 'i', 0,
  /* 15545 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 15559 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 15573 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 15587 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 15601 */ 'B', 'n', 'e', 'I', 'm', 'm', 0,
  /* 15608 */ 'B', 'e', 'q', 'I', 'm', 'm', 0,
  /* 15615 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 15628 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 15641 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 15652 */ 'B', '_', 'M', 'M', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 15664 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 15677 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 15690 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 15703 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 15716 */ 'L', 'B', 'u', 0,
  /* 15720 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 15726 */ 'B', 'A', 'D', 'D', 'u', 0,
  /* 15732 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 15738 */ 'L', 'H', 'u', 0,
  /* 15742 */ 'S', 'L', 'T', 'u', 0,
  /* 15747 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 15760 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 15772 */ 'L', 'W', 'u', 0,
  /* 15776 */ 'U', 'l', 'h', 'u', 0,
  /* 15781 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 15800 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 15810 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 15828 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 15834 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 15849 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 15864 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 15878 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
  /* 15892 */ 'U', 'l', 'w', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    9018U, 11365U, 11427U, 9273U, 9264U, 9378U, 7508U, 7523U, 
    7490U, 7537U, 12745U, 7475U, 7406U, 15353U, 7437U, 13498U, 
    6000U, 12231U, 13487U, 6018U, 13476U, 7456U, 12290U, 7841U, 
    4858U, 14806U, 5957U, 5853U, 10087U, 3906U, 10506U, 9734U, 
    9758U, 10519U, 4171U, 7642U, 7759U, 14549U, 14123U, 7714U, 
    7821U, 14788U, 5877U, 5036U, 6091U, 8121U, 13876U, 5444U, 
    6878U, 8610U, 14833U, 5636U, 7243U, 8859U, 15182U, 9975U, 
    4726U, 4836U, 4141U, 7906U, 4938U, 7861U, 4878U, 5250U, 
    6455U, 8306U, 14241U, 5706U, 7333U, 8929U, 15272U, 5910U, 
    5020U, 6074U, 8105U, 13859U, 10123U, 3929U, 15499U, 11257U, 
    15794U, 11347U, 15727U, 11311U, 11443U, 12504U, 11388U, 4070U, 
    5846U, 3894U, 5981U, 9786U, 1026U, 9813U, 5125U, 4004U, 
    10138U, 3938U, 13743U, 11751U, 11835U, 12006U, 15504U, 2153U, 
    11265U, 5993U, 5349U, 6725U, 8459U, 14635U, 5541U, 7090U, 
    8717U, 15029U, 2396U, 698U, 1820U, 4494U, 2319U, 621U, 
    1691U, 4421U, 2360U, 662U, 1732U, 4460U, 2339U, 641U, 
    1711U, 4440U, 2436U, 738U, 1860U, 4532U, 2299U, 601U, 
    1671U, 4402U, 2416U, 718U, 1840U, 4513U, 2380U, 682U, 
    1804U, 4479U, 9043U, 5840U, 3883U, 4032U, 5426U, 6860U, 
    8583U, 14815U, 5618U, 7225U, 8841U, 15164U, 5374U, 6799U, 
    8522U, 14709U, 5566U, 7164U, 8780U, 15103U, 2838U, 2714U, 
    3222U, 2866U, 2663U, 3162U, 2730U, 3525U, 3464U, 4644U, 
    9770U, 15726U, 9168U, 5764U, 3772U, 11387U, 12602U, 27U, 
    127U, 121U, 135U, 5747U, 15410U, 7485U, 9287U, 10184U, 
    15384U, 13421U, 9398U, 10943U, 15417U, 15391U, 5186U, 6405U, 
    8256U, 14191U, 5320U, 6650U, 8430U, 14464U, 3755U, 12519U, 
    1958U, 5872U, 9388U, 10020U, 5799U, 3832U, 5934U, 10113U, 
    10560U, 7419U, 5750U, 13548U, 5888U, 15374U, 2024U, 9176U, 
    5775U, 3793U, 9362U, 10666U, 10359U, 5916U, 9417U, 11218U, 
    13432U, 13607U, 15431U, 2056U, 5807U, 3845U, 5940U, 9429U, 
    11241U, 5162U, 6381U, 8232U, 14167U, 5292U, 6504U, 8333U, 
    14284U, 5216U, 6421U, 8272U, 14207U, 5334U, 6694U, 8444U, 
    14508U, 13640U, 12246U, 4090U, 7433U, 13558U, 15379U, 2031U, 
    5783U, 3806U, 5922U, 9423U, 11226U, 13441U, 5883U, 13612U, 
    5894U, 15436U, 2063U, 9183U, 5815U, 3858U, 9370U, 10677U, 
    10369U, 5946U, 9435U, 11249U, 5265U, 13792U, 5258U, 13780U, 
    7444U, 1557U, 5755U, 5132U, 6359U, 8210U, 14145U, 5104U, 
    6338U, 8189U, 14049U, 9282U, 10010U, 5791U, 3819U, 5928U, 
    10104U, 10161U, 5900U, 5741U, 7391U, 8964U, 13786U, 15329U, 
    5905U, 592U, 11494U, 9162U, 9841U, 10343U, 4041U, 5140U, 
    11737U, 11675U, 11930U, 11821U, 13756U, 11992U, 5234U, 6439U, 
    8290U, 14225U, 5513U, 6967U, 8689U, 14946U, 5736U, 7377U, 
    8959U, 13775U, 15324U, 15652U, 15608U, 3249U, 2895U, 3261U, 
    2908U, 15601U, 3237U, 2882U, 3148U, 3573U, 2959U, 2506U, 
    2987U, 2536U, 3017U, 3048U, 3072U, 3565U, 2945U, 2491U, 
    2973U, 2521U, 3001U, 3033U, 3063U, 1563U, 2070U, 7427U, 
    10152U, 3956U, 4321U, 1287U, 13072U, 559U, 1524U, 11169U, 
    13370U, 10907U, 5171U, 6390U, 8241U, 14176U, 5307U, 6574U, 
    8356U, 14367U, 43U, 9487U, 4628U, 12735U, 779U, 6717U, 
    13201U, 5382U, 6807U, 8530U, 14717U, 5574U, 7172U, 8788U, 
    15111U, 5366U, 6791U, 8514U, 14701U, 5558U, 7156U, 8772U, 
    15095U, 12205U, 10440U, 4081U, 4353U, 5400U, 6825U, 8548U, 
    14735U, 5592U, 7190U, 8806U, 15129U, 5461U, 6895U, 8627U, 
    14850U, 5664U, 7271U, 8887U, 15210U, 15406U, 11234U, 4231U, 
    4370U, 4773U, 4675U, 4888U, 4786U, 4688U, 4901U, 4804U, 
    4706U, 4919U, 6634U, 7728U, 13185U, 6330U, 12998U, 6236U, 
    7623U, 12924U, 7035U, 7888U, 13286U, 6297U, 12933U, 6587U, 
    13139U, 6189U, 12878U, 6988U, 13240U, 6613U, 13149U, 6215U, 
    12888U, 7014U, 13250U, 6547U, 13105U, 6624U, 13168U, 6226U, 
    12907U, 7025U, 13269U, 6557U, 13122U, 15358U, 11722U, 11977U, 
    5496U, 6950U, 8672U, 14929U, 5688U, 7315U, 8911U, 15254U, 
    54U, 9521U, 4635U, 12767U, 13811U, 11134U, 9447U, 12777U, 
    13843U, 10754U, 1310U, 9745U, 13091U, 10819U, 411U, 9667U, 
    1376U, 9463U, 14884U, 11190U, 582U, 1547U, 11201U, 13389U, 
    10932U, 393U, 1358U, 13178U, 276U, 1184U, 12973U, 249U, 
    1157U, 12917U, 468U, 1433U, 13279U, 208U, 1116U, 12853U, 
    218U, 1126U, 12861U, 336U, 1244U, 13037U, 438U, 1403U, 
    13224U, 229U, 1137U, 12870U, 448U, 1413U, 13232U, 373U, 
    1338U, 13131U, 258U, 1166U, 12959U, 383U, 1348U, 13160U, 
    239U, 1147U, 12899U, 458U, 1423U, 13261U, 355U, 1320U, 
    13115U, 3346U, 3185U, 2812U, 868U, 5956U, 15498U, 15793U, 
    15732U, 8989U, 3593U, 11394U, 3642U, 9032U, 3605U, 9042U, 
    3617U, 12245U, 12204U, 4352U, 15405U, 4369U, 13647U, 13628U, 
    3694U, 3707U, 13426U, 10951U, 13513U, 11381U, 3629U, 13622U, 
    3681U, 3656U, 8976U, 12740U, 11375U, 13601U, 13648U, 13629U, 
    4192U, 4202U, 5480U, 6934U, 8646U, 14903U, 5672U, 7299U, 
    8895U, 15238U, 10235U, 4623U, 4284U, 0U, 48U, 889U, 
    11401U, 6013U, 13542U, 3668U, 3581U, 6U, 59U, 895U, 
    11414U, 8094U, 13563U, 9404U, 13459U, 15753U, 13589U, 4344U, 
    6851U, 8574U, 14770U, 7216U, 8832U, 15155U, 6773U, 8496U, 
    14683U, 7138U, 8754U, 15077U, 7970U, 8045U, 14306U, 8007U, 
    9234U, 12580U, 8071U, 7950U, 12285U, 7984U, 8058U, 14318U, 
    8033U, 6743U, 8477U, 14653U, 7108U, 8735U, 15047U, 9245U, 
    12591U, 8081U, 7998U, 12685U, 771U, 13731U, 7551U, 13658U, 
    5972U, 9383U, 757U, 802U, 13698U, 4612U, 143U, 13634U, 
    9393U, 764U, 13704U, 4998U, 15720U, 13681U, 3432U, 3410U, 
    4646U, 10044U, 3737U, 8981U, 10243U, 4014U, 13427U, 5823U, 
    3871U, 10952U, 4121U, 13514U, 12499U, 12265U, 13717U, 13725U, 
    14615U, 14578U, 8654U, 15309U, 14605U, 14559U, 8592U, 14516U, 
    12762U, 786U, 10999U, 1576U, 2086U, 6709U, 402U, 1367U, 
    10650U, 13194U, 10830U, 14588U, 6138U, 189U, 1097U, 10122U, 
    12838U, 10733U, 13923U, 6283U, 14028U, 6573U, 14366U, 6716U, 
    14626U, 6175U, 13960U, 6974U, 14953U, 364U, 9655U, 1329U, 
    793U, 9722U, 6245U, 13990U, 6664U, 14478U, 6597U, 14380U, 
    6199U, 13974U, 6998U, 14967U, 6259U, 14004U, 6533U, 14337U, 
    7356U, 517U, 1482U, 11073U, 13336U, 10861U, 15295U, 8348U, 
    14351U, 6046U, 11460U, 13829U, 11477U, 6482U, 14262U, 6678U, 
    14492U, 6903U, 14858U, 7279U, 15218U, 6491U, 14271U, 6687U, 
    14501U, 5273U, 6469U, 11690U, 11945U, 8314U, 14249U, 6038U, 
    13821U, 1298U, 13081U, 570U, 1535U, 11179U, 13379U, 10919U, 
    6145U, 13930U, 6100U, 13885U, 7370U, 15317U, 6082U, 13867U, 
    6526U, 14330U, 526U, 9692U, 1491U, 13343U, 10871U, 6116U, 
    13901U, 6512U, 346U, 1254U, 10404U, 13045U, 10809U, 14292U, 
    305U, 1213U, 10200U, 13006U, 10775U, 6566U, 14359U, 7051U, 
    14990U, 7076U, 15015U, 6290U, 14035U, 6580U, 14373U, 6182U, 
    13967U, 6981U, 14960U, 6252U, 13997U, 6671U, 14485U, 7068U, 
    477U, 1442U, 10990U, 13302U, 10840U, 15007U, 6109U, 170U, 
    1078U, 10063U, 12823U, 10712U, 13894U, 6605U, 14388U, 6207U, 
    13982U, 7006U, 14975U, 6267U, 14012U, 6540U, 14344U, 6913U, 
    14868U, 7289U, 15228U, 8362U, 14396U, 6753U, 14663U, 7118U, 
    15057U, 3106U, 6764U, 8487U, 14674U, 7129U, 8745U, 15068U, 
    6734U, 8468U, 14644U, 7099U, 8726U, 15038U, 5721U, 7348U, 
    8944U, 15287U, 5300U, 6519U, 8341U, 14299U, 5081U, 6167U, 
    8166U, 13952U, 5342U, 6702U, 8452U, 14523U, 12736U, 5527U, 
    11510U, 12076U, 7059U, 11557U, 12119U, 11705U, 11533U, 12097U, 
    11960U, 11603U, 12161U, 8703U, 11580U, 12140U, 14998U, 11627U, 
    12183U, 13738U, 5089U, 6275U, 8174U, 14020U, 10688U, 9160U, 
    9172U, 12672U, 9917U, 1969U, 15628U, 15641U, 9936U, 10695U, 
    4656U, 10588U, 10658U, 15339U, 11210U, 10352U, 5769U, 3782U, 
    5760U, 3763U, 12669U, 9909U, 1964U, 12489U, 9777U, 4650U, 
    4292U, 10582U, 10338U, 3156U, 2292U, 15457U, 15467U, 3089U, 
    3081U, 3295U, 3127U, 4664U, 993U, 9956U, 15344U, 10051U, 
    15716U, 2235U, 11296U, 5978U, 33U, 941U, 9471U, 879U, 
    4252U, 921U, 5119U, 6353U, 8204U, 14139U, 9256U, 5835U, 
    12609U, 75U, 955U, 5068U, 6154U, 8153U, 13939U, 15800U, 
    2254U, 11343U, 7565U, 1600U, 9985U, 15335U, 10223U, 15738U, 
    2241U, 11319U, 9833U, 9351U, 5977U, 4314U, 10384U, 4338U, 
    4377U, 1003U, 12307U, 12366U, 15810U, 15781U, 15529U, 4624U, 
    3719U, 4285U, 87U, 971U, 9553U, 15541U, 2174U, 11289U, 
    13799U, 9994U, 2014U, 65U, 9537U, 901U, 4268U, 931U, 
    10489U, 9409U, 1926U, 10412U, 9870U, 9704U, 10426U, 5867U, 
    3919U, 10546U, 12703U, 1996U, 10636U, 10530U, 5861U, 11058U, 
    15349U, 99U, 9571U, 10704U, 11122U, 15772U, 2565U, 2629U, 
    2597U, 2646U, 3175U, 2916U, 2801U, 836U, 2190U, 812U, 
    2116U, 826U, 2180U, 866U, 3275U, 2932U, 2682U, 2744U, 
    5967U, 6315U, 12951U, 8404U, 14438U, 13536U, 12469U, 11015U, 
    5705U, 7332U, 8928U, 15271U, 199U, 9603U, 1107U, 12357U, 
    10130U, 8377U, 14411U, 12846U, 10744U, 9293U, 12617U, 9319U, 
    12643U, 6067U, 12816U, 5409U, 6834U, 8557U, 14744U, 5601U, 
    7199U, 8815U, 15138U, 5045U, 6101U, 8130U, 13886U, 7371U, 
    13397U, 5488U, 6942U, 8664U, 14921U, 5680U, 7307U, 8903U, 
    15246U, 1U, 49U, 9495U, 890U, 150U, 1032U, 9503U, 
    9000U, 9823U, 1616U, 12397U, 10257U, 12215U, 9888U, 1944U, 
    12432U, 10447U, 6054U, 12809U, 5391U, 6816U, 8539U, 14726U, 
    5583U, 7181U, 8797U, 15120U, 5028U, 6083U, 8113U, 13868U, 
    6527U, 13099U, 5418U, 6843U, 8566U, 14762U, 5610U, 7208U, 
    8824U, 15147U, 850U, 2219U, 6014U, 4996U, 13543U, 4151U, 
    3947U, 5358U, 6783U, 8506U, 14693U, 5550U, 7148U, 8764U, 
    15087U, 9795U, 10480U, 13749U, 267U, 9615U, 1175U, 9075U, 
    1752U, 10298U, 12966U, 10765U, 1052U, 9053U, 1645U, 12787U, 
    314U, 9627U, 1222U, 9101U, 1782U, 10308U, 13013U, 10785U, 
    487U, 9680U, 1452U, 9134U, 1896U, 10318U, 13310U, 10851U, 
    1065U, 9064U, 1658U, 12798U, 325U, 9641U, 1233U, 9110U, 
    1793U, 10328U, 13022U, 10797U, 5009U, 6307U, 12943U, 8394U, 
    14428U, 13524U, 12459U, 11006U, 5697U, 7324U, 8920U, 15263U, 
    180U, 9590U, 1088U, 12348U, 10071U, 8368U, 14402U, 12831U, 
    10723U, 7U, 60U, 9529U, 896U, 160U, 1042U, 9512U, 
    9022U, 1638U, 12423U, 10265U, 12272U, 12226U, 1951U, 12441U, 
    10455U, 17U, 111U, 911U, 22U, 116U, 916U, 8095U, 
    13564U, 4161U, 3995U, 9405U, 9331U, 12655U, 9190U, 12536U, 
    7781U, 14595U, 7831U, 14797U, 8414U, 14448U, 8019U, 7959U, 
    13460U, 12479U, 12450U, 10982U, 15754U, 11334U, 13584U, 4182U, 
    5729U, 7363U, 8952U, 15302U, 10405U, 4061U, 7699U, 8386U, 
    14420U, 4345U, 7802U, 3141U, 3268U, 2455U, 2274U, 3366U, 
    3499U, 3398U, 3551U, 5053U, 6124U, 8138U, 13909U, 5060U, 
    6131U, 8145U, 13916U, 198U, 9602U, 1106U, 12845U, 10743U, 
    179U, 9589U, 1087U, 12830U, 10722U, 12281U, 12677U, 1976U, 
    5202U, 10596U, 4103U, 13763U, 11766U, 11850U, 12021U, 9947U, 
    3336U, 3377U, 12678U, 9928U, 1977U, 5203U, 4023U, 10597U, 
    4104U, 13764U, 11767U, 11851U, 12022U, 15520U, 2161U, 11274U, 
    3476U, 7689U, 7469U, 10175U, 5713U, 7340U, 8936U, 15279U, 
    5073U, 6159U, 8158U, 13944U, 5520U, 7044U, 8696U, 14983U, 
    7657U, 4741U, 12286U, 9219U, 4565U, 12565U, 4596U, 9306U, 
    12630U, 9205U, 4550U, 12551U, 4581U, 7601U, 14071U, 7576U, 
    14100U, 7589U, 14056U, 14083U, 7503U, 10192U, 3976U, 4330U, 
    5985U, 4798U, 4700U, 4913U, 7722U, 7617U, 7882U, 13805U, 
    9441U, 13837U, 9457U, 14878U, 13453U, 15747U, 13652U, 13675U, 
    15477U, 2130U, 5961U, 13530U, 8994U, 1610U, 12209U, 1938U, 
    5003U, 13518U, 9005U, 1623U, 12406U, 13465U, 15760U, 7651U, 
    4735U, 15615U, 2204U, 13664U, 284U, 1192U, 9082U, 1761U, 
    12979U, 496U, 1461U, 9141U, 1905U, 13317U, 421U, 1386U, 
    9119U, 1879U, 13209U, 13687U, 4982U, 12336U, 12697U, 1988U, 
    10627U, 7932U, 4964U, 7673U, 4757U, 7052U, 13295U, 12686U, 
    13732U, 11113U, 10610U, 1275U, 13062U, 547U, 1512U, 11158U, 
    13360U, 10894U, 3096U, 2472U, 4617U, 2284U, 5453U, 6887U, 
    8619U, 14842U, 5656U, 7263U, 8879U, 15202U, 4993U, 9769U, 
    998U, 10057U, 5880U, 5952U, 4307U, 10098U, 4301U, 6035U, 
    12254U, 9898U, 10463U, 4360U, 38U, 948U, 9479U, 884U, 
    4260U, 926U, 13659U, 11081U, 9260U, 12613U, 81U, 963U, 
    4642U, 987U, 10037U, 3728U, 7561U, 1594U, 10216U, 3986U, 
    15424U, 2047U, 7397U, 4240U, 13412U, 15398U, 2038U, 7382U, 
    4219U, 13403U, 6463U, 13031U, 12523U, 15514U, 8091U, 9805U, 
    1605U, 5098U, 8183U, 14043U, 12220U, 13710U, 7923U, 4955U, 
    7871U, 14911U, 7665U, 4749U, 7792U, 14753U, 7914U, 4946U, 
    7770U, 4847U, 14568U, 7568U, 4667U, 7738U, 4815U, 14530U, 
    7941U, 4973U, 7681U, 4765U, 10229U, 5118U, 6352U, 8203U, 
    14138U, 5067U, 6153U, 8152U, 13938U, 9384U, 9852U, 803U, 
    2107U, 5148U, 6367U, 8218U, 14153U, 13699U, 11097U, 5280U, 
    6476U, 8321U, 10390U, 4052U, 14256U, 13445U, 2008U, 10968U, 
    15524U, 2167U, 11281U, 15828U, 2266U, 11356U, 15742U, 2247U, 
    11326U, 7448U, 15509U, 11650U, 11796U, 11880U, 11905U, 12051U, 
    5225U, 6430U, 8281U, 14216U, 5505U, 6959U, 8681U, 14938U, 
    4613U, 5111U, 6345U, 8196U, 14131U, 5178U, 6397U, 8248U, 
    14183U, 5313U, 6643U, 8423U, 14457U, 13635U, 11065U, 5014U, 
    6061U, 8099U, 10030U, 13853U, 9394U, 9861U, 5155U, 6374U, 
    8225U, 14160U, 5194U, 6413U, 8264U, 14199U, 5327U, 6657U, 
    8437U, 14471U, 13705U, 11105U, 5286U, 6498U, 8327U, 10397U, 
    14278U, 12279U, 10497U, 4389U, 1014U, 12321U, 12381U, 5536U, 
    7085U, 8712U, 15024U, 4999U, 7633U, 7748U, 14539U, 14115U, 
    7706U, 7811U, 14779U, 5645U, 7252U, 8868U, 15191U, 5469U, 
    6923U, 8635U, 14892U, 5435U, 6869U, 8601U, 14824U, 5627U, 
    7234U, 8850U, 15173U, 9965U, 4717U, 4825U, 4131U, 7898U, 
    4930U, 7851U, 4868U, 5242U, 6447U, 8298U, 14233U, 5698U, 
    7325U, 8921U, 15264U, 10064U, 3746U, 15721U, 11303U, 93U, 
    979U, 9562U, 13802U, 10002U, 2019U, 70U, 9545U, 906U, 
    4276U, 936U, 3967U, 9413U, 1932U, 10419U, 9879U, 9713U, 
    10433U, 10553U, 12707U, 2002U, 10643U, 10538U, 105U, 9580U, 
    11128U, 4211U, 5830U, 8970U, 10079U, 9354U, 10379U, 11663U, 
    11809U, 11893U, 11918U, 12064U, 3120U, 2483U, 2581U, 3287U, 
    3303U, 15449U, 15441U, 15677U, 15559U, 15703U, 15587U, 15849U, 
    15878U, 15664U, 15545U, 15690U, 15573U, 15834U, 15864U, 2613U, 
    2551U, 3442U, 3311U, 3356U, 2770U, 3197U, 2825U, 2785U, 
    3209U, 2852U, 3323U, 3387U, 3538U, 2465U, 3421U, 2558U, 
    3453U, 3512U, 2698U, 2757U, 9345U, 12711U, 12724U, 12527U, 
    9027U, 10273U, 10567U, 7423U, 8979U, 13569U, 11032U, 10241U, 
    13553U, 11024U, 10145U, 12260U, 10472U, 12531U, 10574U, 9047U, 
    10289U, 12691U, 10618U, 13449U, 9037U, 11041U, 10281U, 13617U, 
    11050U, 10975U, 7452U, 8984U, 10249U, 10168U, 12240U, 1263U, 
    13052U, 535U, 1500U, 11147U, 13350U, 10881U, 13575U, 13682U, 
    11089U, 15776U, 15892U, 13582U, 12U, 13595U, 5097U, 6323U, 
    8182U, 14042U, 13436U, 10960U, 12342U, 7556U, 10208U, 12681U, 
    9927U, 1982U, 5209U, 4022U, 10603U, 4112U, 13769U, 11781U, 
    11865U, 12036U, 15519U, 2160U, 11273U, 3487U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1862);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~MipsGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1862);
}
MipsGenInstrInfo::~MipsGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Mips {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Mips {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Mips {
namespace OpTypes { 
enum OperandType {
  InvertedImOperand = 0,
  InvertedImOperand64 = 1,
  LSAImm = 2,
  PtrRC = 3,
  brtarget = 4,
  brtarget10_mm = 5,
  brtarget21 = 6,
  brtarget26 = 7,
  brtarget7_mm = 8,
  brtarget_mm = 9,
  calloffset16 = 10,
  calltarget = 11,
  calltarget_mm = 12,
  condcode = 13,
  cpinst_operand = 14,
  f32imm = 15,
  f64imm = 16,
  i16imm = 17,
  i1imm = 18,
  i32imm = 19,
  i64imm = 20,
  i8imm = 21,
  imm32 = 22,
  imm64 = 23,
  jmpoffset16 = 24,
  jmptarget = 25,
  jmptarget_mm = 26,
  li_simm7 = 27,
  mem = 28,
  mem16 = 29,
  mem16_ea = 30,
  mem_ea = 31,
  mem_mm_12 = 32,
  mem_mm_4 = 33,
  mem_mm_4_lsl1 = 34,
  mem_mm_4_lsl2 = 35,
  mem_mm_4sp = 36,
  mem_mm_gp_imm7_lsl2 = 37,
  mem_mm_sp_imm5_lsl2 = 38,
  mem_msa = 39,
  mem_simm11 = 40,
  mem_simm16 = 41,
  mem_simm9 = 42,
  mem_simm9gpr = 43,
  movep_regpair = 44,
  pcrel16 = 45,
  reglist = 46,
  reglist16 = 47,
  regpair = 48,
  simm10 = 49,
  simm10_64 = 50,
  simm11 = 51,
  simm12 = 52,
  simm16 = 53,
  simm16_64 = 54,
  simm18_lsl3 = 55,
  simm19_lsl2 = 56,
  simm20 = 57,
  simm23_lsl2 = 58,
  simm3_lsa2 = 59,
  simm4 = 60,
  simm5 = 61,
  simm7 = 62,
  simm9 = 63,
  simm9_addiusp = 64,
  size_ext = 65,
  size_ins = 66,
  uimm10 = 67,
  uimm16 = 68,
  uimm16_64 = 69,
  uimm2 = 70,
  uimm20 = 71,
  uimm3 = 72,
  uimm3_shift = 73,
  uimm4 = 74,
  uimm4_andi = 75,
  uimm4_ptr = 76,
  uimm5 = 77,
  uimm5_64 = 78,
  uimm5_lsl2 = 79,
  uimm6 = 80,
  uimm6_lsl2 = 81,
  uimm6_ptr = 82,
  uimm8 = 83,
  uimmz = 84,
  vsplat_simm10 = 85,
  vsplat_simm5 = 86,
  vsplat_uimm1 = 87,
  vsplat_uimm2 = 88,
  vsplat_uimm3 = 89,
  vsplat_uimm4 = 90,
  vsplat_uimm5 = 91,
  vsplat_uimm6 = 92,
  vsplat_uimm8 = 93,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace Mips
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_mipsr6,
	Arch_micromipsr6,
	Arch_se,
	Arch_micromips
};

// MipsR62MicroMipsR6
int MipsR62MicroMipsR6(uint16_t Opcode, enum Arch inArch) {
static const uint16_t MipsR62MicroMipsR6Table[][3] = {
  { Mips::ADDIUPC, Mips::ADDIUPC, Mips::ADDIUPC_MMR6 },
  { Mips::ALIGN, Mips::ALIGN, Mips::ALIGN_MMR6 },
  { Mips::ALUIPC, Mips::ALUIPC, Mips::ALUIPC_MMR6 },
  { Mips::AUI, Mips::AUI, Mips::AUI_MMR6 },
  { Mips::AUIPC, Mips::AUIPC, Mips::AUIPC_MMR6 },
  { Mips::BALC, Mips::BALC, Mips::BALC_MMR6 },
  { Mips::BC, Mips::BC, Mips::BC_MMR6 },
  { Mips::BEQZALC, Mips::BEQZALC, Mips::BEQZALC_MMR6 },
  { Mips::BGEZALC, Mips::BGEZALC, Mips::BGEZALC_MMR6 },
  { Mips::BGTZALC, Mips::BGTZALC, Mips::BGTZALC_MMR6 },
  { Mips::BITSWAP, Mips::BITSWAP, Mips::BITSWAP_MMR6 },
  { Mips::BLEZALC, Mips::BLEZALC, Mips::BLEZALC_MMR6 },
  { Mips::BLTZALC, Mips::BLTZALC, Mips::BLTZALC_MMR6 },
  { Mips::BNEZALC, Mips::BNEZALC, Mips::BNEZALC_MMR6 },
  { Mips::CACHE_R6, Mips::CACHE_R6, Mips::CACHE_MMR6 },
  { Mips::CLO_R6, Mips::CLO_R6, Mips::CLO_MMR6 },
  { Mips::CLZ_R6, Mips::CLZ_R6, Mips::CLZ_MMR6 },
  { Mips::DIV, Mips::DIV, Mips::DIV_MMR6 },
  { Mips::DIVU, Mips::DIVU, Mips::DIVU_MMR6 },
  { Mips::JIALC, Mips::JIALC, Mips::JIALC_MMR6 },
  { Mips::JIC, Mips::JIC, Mips::JIC_MMR6 },
  { Mips::LSA_R6, Mips::LSA_R6, Mips::LSA_MMR6 },
  { Mips::LWPC, Mips::LWPC, Mips::LWPC_MMR6 },
  { Mips::MOD, Mips::MOD, Mips::MOD_MMR6 },
  { Mips::MODU, Mips::MODU, Mips::MODU_MMR6 },
  { Mips::MUH, Mips::MUH, Mips::MUH_MMR6 },
  { Mips::MUHU, Mips::MUHU, Mips::MUHU_MMR6 },
  { Mips::MULU, Mips::MULU, Mips::MULU_MMR6 },
  { Mips::MUL_R6, Mips::MUL_R6, Mips::MUL_MMR6 },
  { Mips::PREF_R6, Mips::PREF_R6, Mips::PREF_MMR6 },
  { Mips::SELEQZ, Mips::SELEQZ, Mips::SELEQZ_MMR6 },
  { Mips::SELNEZ, Mips::SELNEZ, Mips::SELNEZ_MMR6 },
}; // End of MipsR62MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 32;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == MipsR62MicroMipsR6Table[mid][0]) {
      break;
    }
    if (Opcode < MipsR62MicroMipsR6Table[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_mipsr6)
    return MipsR62MicroMipsR6Table[mid][1];
  if (inArch == Arch_micromipsr6)
    return MipsR62MicroMipsR6Table[mid][2];
  return -1;}

// Std2MicroMips
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::BC1F, Mips::BC1F, Mips::BC1F_MM },
  { Mips::BC1FL, Mips::BC1FL, (uint16_t)-1U },
  { Mips::BC1T, Mips::BC1T, Mips::BC1T_MM },
  { Mips::BC1TL, Mips::BC1TL, (uint16_t)-1U },
  { Mips::BEQ, Mips::BEQ, Mips::BEQ_MM },
  { Mips::BEQL, Mips::BEQL, (uint16_t)-1U },
  { Mips::BGEZ, Mips::BGEZ, Mips::BGEZ_MM },
  { Mips::BGEZAL, Mips::BGEZAL, Mips::BGEZAL_MM },
  { Mips::BGEZALL, Mips::BGEZALL, (uint16_t)-1U },
  { Mips::BGEZL, Mips::BGEZL, (uint16_t)-1U },
  { Mips::BGTZ, Mips::BGTZ, Mips::BGTZ_MM },
  { Mips::BGTZL, Mips::BGTZL, (uint16_t)-1U },
  { Mips::BLEZ, Mips::BLEZ, Mips::BLEZ_MM },
  { Mips::BLEZL, Mips::BLEZL, (uint16_t)-1U },
  { Mips::BLTZ, Mips::BLTZ, Mips::BLTZ_MM },
  { Mips::BLTZAL, Mips::BLTZAL, Mips::BLTZAL_MM },
  { Mips::BLTZALL, Mips::BLTZALL, (uint16_t)-1U },
  { Mips::BLTZL, Mips::BLTZL, (uint16_t)-1U },
  { Mips::BNE, Mips::BNE, Mips::BNE_MM },
  { Mips::BNEL, Mips::BNEL, (uint16_t)-1U },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MM },
  { Mips::CACHE, Mips::CACHE, Mips::CACHE_MM },
  { Mips::CEIL_W_D32, Mips::CEIL_W_D32, Mips::CEIL_W_MM },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MM },
  { Mips::CFC1, Mips::CFC1, Mips::CFC1_MM },
  { Mips::CLO, Mips::CLO, Mips::CLO_MM },
  { Mips::CLZ, Mips::CLZ, Mips::CLZ_MM },
  { Mips::CTC1, Mips::CTC1, Mips::CTC1_MM },
  { Mips::CVT_D32_S, Mips::CVT_D32_S, Mips::CVT_D_S_MM },
  { Mips::CVT_D32_W, Mips::CVT_D32_W, Mips::CVT_D32_W_MM },
  { Mips::CVT_L_D64, Mips::CVT_L_D64, Mips::CVT_L_D64_MM },
  { Mips::CVT_L_S, Mips::CVT_L_S, Mips::CVT_L_S_MM },
  { Mips::CVT_S_D32, Mips::CVT_S_D32, Mips::CVT_S_D32_MM },
  { Mips::CVT_S_W, Mips::CVT_S_W, Mips::CVT_S_W_MM },
  { Mips::CVT_W_D32, Mips::CVT_W_D32, Mips::CVT_W_MM },
  { Mips::CVT_W_S, Mips::CVT_W_S, Mips::CVT_W_S_MM },
  { Mips::DERET, Mips::DERET, Mips::DERET_MM },
  { Mips::DI, Mips::DI, Mips::DI_MM },
  { Mips::EHB, Mips::EHB, Mips::EHB_MM },
  { Mips::EI, Mips::EI, Mips::EI_MM },
  { Mips::ERET, Mips::ERET, Mips::ERET_MM },
  { Mips::ERETNC, Mips::ERETNC, (uint16_t)-1U },
  { Mips::EXT, Mips::EXT, Mips::EXT_MM },
  { Mips::FABS_D32, Mips::FABS_D32, Mips::FABS_MM },
  { Mips::FABS_S, Mips::FABS_S, Mips::FABS_S_MM },
  { Mips::FADD_D32, Mips::FADD_D32, Mips::FADD_MM },
  { Mips::FADD_S, Mips::FADD_S, Mips::FADD_S_MM },
  { Mips::FCMP_D32, Mips::FCMP_D32, Mips::FCMP_D32_MM },
  { Mips::FCMP_S32, Mips::FCMP_S32, Mips::FCMP_S32_MM },
  { Mips::FDIV_D32, Mips::FDIV_D32, Mips::FDIV_MM },
  { Mips::FDIV_S, Mips::FDIV_S, Mips::FDIV_S_MM },
  { Mips::FLOOR_W_D32, Mips::FLOOR_W_D32, Mips::FLOOR_W_MM },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MM },
  { Mips::FMOV_D32, Mips::FMOV_D32, Mips::FMOV_D32_MM },
  { Mips::FMOV_S, Mips::FMOV_S, Mips::FMOV_S_MM },
  { Mips::FMUL_D32, Mips::FMUL_D32, Mips::FMUL_MM },
  { Mips::FMUL_S, Mips::FMUL_S, Mips::FMUL_S_MM },
  { Mips::FNEG_D32, Mips::FNEG_D32, Mips::FNEG_MM },
  { Mips::FNEG_S, Mips::FNEG_S, Mips::FNEG_S_MM },
  { Mips::FSQRT_D32, Mips::FSQRT_D32, Mips::FSQRT_MM },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::FSQRT_S_MM },
  { Mips::FSUB_D32, Mips::FSUB_D32, Mips::FSUB_MM },
  { Mips::FSUB_S, Mips::FSUB_S, Mips::FSUB_S_MM },
  { Mips::INS, Mips::INS, Mips::INS_MM },
  { Mips::J, Mips::J, Mips::J_MM },
  { Mips::JAL, Mips::JAL, Mips::JAL_MM },
  { Mips::JALX, Mips::JALX, Mips::JALX_MM },
  { Mips::JR, Mips::JR, Mips::JR_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LDC1, Mips::LDC1, Mips::LDC1_MM },
  { Mips::LEA_ADDiu, Mips::LEA_ADDiu, Mips::LEA_ADDiu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LUXC1, Mips::LUXC1, Mips::LUXC1_MM },
  { Mips::LUi, Mips::LUi, Mips::LUi_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LWC1, Mips::LWC1, Mips::LWC1_MM },
  { Mips::LWXC1, Mips::LWXC1, Mips::LWXC1_MM },
  { Mips::MADD, Mips::MADD, Mips::MADD_MM },
  { Mips::MADDU, Mips::MADDU, Mips::MADDU_MM },
  { Mips::MADD_D32, Mips::MADD_D32, Mips::MADD_D32_MM },
  { Mips::MADD_S, Mips::MADD_S, Mips::MADD_S_MM },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MM },
  { Mips::MFHC1_D32, Mips::MFHC1_D32, Mips::MFHC1_MM },
  { Mips::MFHI, Mips::MFHI, Mips::MFHI_MM },
  { Mips::MFLO, Mips::MFLO, Mips::MFLO_MM },
  { Mips::MOVF_D32, Mips::MOVF_D32, Mips::MOVF_D32_MM },
  { Mips::MOVF_I, Mips::MOVF_I, Mips::MOVF_I_MM },
  { Mips::MOVF_S, Mips::MOVF_S, Mips::MOVF_S_MM },
  { Mips::MOVN_I_D32, Mips::MOVN_I_D32, Mips::MOVN_I_D32_MM },
  { Mips::MOVN_I_I, Mips::MOVN_I_I, Mips::MOVN_I_MM },
  { Mips::MOVN_I_S, Mips::MOVN_I_S, Mips::MOVN_I_S_MM },
  { Mips::MOVT_D32, Mips::MOVT_D32, Mips::MOVT_D32_MM },
  { Mips::MOVT_I, Mips::MOVT_I, Mips::MOVT_I_MM },
  { Mips::MOVT_S, Mips::MOVT_S, Mips::MOVT_S_MM },
  { Mips::MOVZ_I_D32, Mips::MOVZ_I_D32, Mips::MOVZ_I_D32_MM },
  { Mips::MOVZ_I_I, Mips::MOVZ_I_I, Mips::MOVZ_I_MM },
  { Mips::MOVZ_I_S, Mips::MOVZ_I_S, Mips::MOVZ_I_S_MM },
  { Mips::MSUB, Mips::MSUB, Mips::MSUB_MM },
  { Mips::MSUBU, Mips::MSUBU, Mips::MSUBU_MM },
  { Mips::MSUB_D32, Mips::MSUB_D32, Mips::MSUB_D32_MM },
  { Mips::MSUB_S, Mips::MSUB_S, Mips::MSUB_S_MM },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MM },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_MM },
  { Mips::MTHI, Mips::MTHI, Mips::MTHI_MM },
  { Mips::MTLO, Mips::MTLO, Mips::MTLO_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NMADD_D32, Mips::NMADD_D32, Mips::NMADD_D32_MM },
  { Mips::NMADD_S, Mips::NMADD_S, Mips::NMADD_S_MM },
  { Mips::NMSUB_D32, Mips::NMSUB_D32, Mips::NMSUB_D32_MM },
  { Mips::NMSUB_S, Mips::NMSUB_S, Mips::NMSUB_S_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::PAUSE, Mips::PAUSE, Mips::PAUSE_MM },
  { Mips::PREF, Mips::PREF, Mips::PREF_MM },
  { Mips::RDHWR, Mips::RDHWR, Mips::RDHWR_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::ROUND_W_D32, Mips::ROUND_W_D32, Mips::ROUND_W_MM },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SDBBP, Mips::SDBBP, Mips::SDBBP_MM },
  { Mips::SDC1, Mips::SDC1, Mips::SDC1_MM },
  { Mips::SDIV, Mips::SDIV, Mips::SDIV_MM },
  { Mips::SEB, Mips::SEB, Mips::SEB_MM },
  { Mips::SEH, Mips::SEH, Mips::SEH_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SSNOP, Mips::SSNOP, Mips::SSNOP_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SUXC1, Mips::SUXC1, Mips::SUXC1_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SWC1, Mips::SWC1, Mips::SWC1_MM },
  { Mips::SWXC1, Mips::SWXC1, Mips::SWXC1_MM },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MM },
  { Mips::SYNCI, Mips::SYNCI, (uint16_t)-1U },
  { Mips::SYSCALL, Mips::SYSCALL, Mips::SYSCALL_MM },
  { Mips::TEQ, Mips::TEQ, Mips::TEQ_MM },
  { Mips::TEQI, Mips::TEQI, Mips::TEQI_MM },
  { Mips::TGE, Mips::TGE, Mips::TGE_MM },
  { Mips::TGEI, Mips::TGEI, Mips::TGEI_MM },
  { Mips::TGEIU, Mips::TGEIU, Mips::TGEIU_MM },
  { Mips::TGEU, Mips::TGEU, Mips::TGEU_MM },
  { Mips::TLBP, Mips::TLBP, Mips::TLBP_MM },
  { Mips::TLBR, Mips::TLBR, Mips::TLBR_MM },
  { Mips::TLBWI, Mips::TLBWI, Mips::TLBWI_MM },
  { Mips::TLBWR, Mips::TLBWR, Mips::TLBWR_MM },
  { Mips::TLT, Mips::TLT, Mips::TLT_MM },
  { Mips::TLTI, Mips::TLTI, Mips::TLTI_MM },
  { Mips::TLTU, Mips::TLTU, Mips::TLTU_MM },
  { Mips::TNE, Mips::TNE, Mips::TNE_MM },
  { Mips::TNEI, Mips::TNEI, Mips::TNEI_MM },
  { Mips::TRUNC_W_D32, Mips::TRUNC_W_D32, Mips::TRUNC_W_MM },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MM },
  { Mips::TTLTIU, Mips::TTLTIU, Mips::TLTIU_MM },
  { Mips::UDIV, Mips::UDIV, Mips::UDIV_MM },
  { Mips::WSBH, Mips::WSBH, Mips::WSBH_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 179;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

// Std2MicroMipsR6
int Std2MicroMipsR6(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsR6Table[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MMR6 },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDIU_MMR6 },
  { Mips::ADDu, Mips::ADDu, Mips::ADDU_MMR6 },
  { Mips::AND, Mips::AND, Mips::AND_MMR6 },
  { Mips::ANDi, Mips::ANDi, Mips::ANDI_MMR6 },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MMR6 },
  { Mips::EI, Mips::EI, Mips::EI_MMR6 },
  { Mips::NOR, Mips::NOR, Mips::NOR_MMR6 },
  { Mips::OR, Mips::OR, Mips::OR_MMR6 },
  { Mips::ORi, Mips::ORi, Mips::ORI_MMR6 },
  { Mips::SEB, Mips::SEB, Mips::SEB_MMR6 },
  { Mips::SEH, Mips::SEH, Mips::SEH_MMR6 },
  { Mips::XOR, Mips::XOR, Mips::XOR_MMR6 },
  { Mips::XORi, Mips::XORi, Mips::XORI_MMR6 },
}; // End of Std2MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 14;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsR6Table[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsR6Table[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsR6Table[mid][1];
  if (inArch == Arch_micromipsr6)
    return Std2MicroMipsR6Table[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

