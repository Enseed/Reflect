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

namespace SP {
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
    ADDCCri	= 23,
    ADDCCrr	= 24,
    ADDCri	= 25,
    ADDCrr	= 26,
    ADDEri	= 27,
    ADDErr	= 28,
    ADDXC	= 29,
    ADDXCCC	= 30,
    ADDXri	= 31,
    ADDXrr	= 32,
    ADDri	= 33,
    ADDrr	= 34,
    ADJCALLSTACKDOWN	= 35,
    ADJCALLSTACKUP	= 36,
    ALIGNADDR	= 37,
    ALIGNADDRL	= 38,
    ANDCCri	= 39,
    ANDCCrr	= 40,
    ANDNCCri	= 41,
    ANDNCCrr	= 42,
    ANDNri	= 43,
    ANDNrr	= 44,
    ANDXNrr	= 45,
    ANDXri	= 46,
    ANDXrr	= 47,
    ANDri	= 48,
    ANDrr	= 49,
    ARRAY16	= 50,
    ARRAY32	= 51,
    ARRAY8	= 52,
    ATOMIC_LOAD_ADD_32	= 53,
    ATOMIC_LOAD_ADD_64	= 54,
    ATOMIC_LOAD_AND_32	= 55,
    ATOMIC_LOAD_AND_64	= 56,
    ATOMIC_LOAD_MAX_32	= 57,
    ATOMIC_LOAD_MAX_64	= 58,
    ATOMIC_LOAD_MIN_32	= 59,
    ATOMIC_LOAD_MIN_64	= 60,
    ATOMIC_LOAD_NAND_32	= 61,
    ATOMIC_LOAD_NAND_64	= 62,
    ATOMIC_LOAD_OR_32	= 63,
    ATOMIC_LOAD_OR_64	= 64,
    ATOMIC_LOAD_SUB_32	= 65,
    ATOMIC_LOAD_SUB_64	= 66,
    ATOMIC_LOAD_UMAX_32	= 67,
    ATOMIC_LOAD_UMAX_64	= 68,
    ATOMIC_LOAD_UMIN_32	= 69,
    ATOMIC_LOAD_UMIN_64	= 70,
    ATOMIC_LOAD_XOR_32	= 71,
    ATOMIC_LOAD_XOR_64	= 72,
    ATOMIC_SWAP_64	= 73,
    BA	= 74,
    BCOND	= 75,
    BCONDA	= 76,
    BINDri	= 77,
    BINDrr	= 78,
    BMASK	= 79,
    BPFCC	= 80,
    BPFCCA	= 81,
    BPFCCANT	= 82,
    BPFCCNT	= 83,
    BPGEZapn	= 84,
    BPGEZapt	= 85,
    BPGEZnapn	= 86,
    BPGEZnapt	= 87,
    BPGZapn	= 88,
    BPGZapt	= 89,
    BPGZnapn	= 90,
    BPGZnapt	= 91,
    BPICC	= 92,
    BPICCA	= 93,
    BPICCANT	= 94,
    BPICCNT	= 95,
    BPLEZapn	= 96,
    BPLEZapt	= 97,
    BPLEZnapn	= 98,
    BPLEZnapt	= 99,
    BPLZapn	= 100,
    BPLZapt	= 101,
    BPLZnapn	= 102,
    BPLZnapt	= 103,
    BPNZapn	= 104,
    BPNZapt	= 105,
    BPNZnapn	= 106,
    BPNZnapt	= 107,
    BPXCC	= 108,
    BPXCCA	= 109,
    BPXCCANT	= 110,
    BPXCCNT	= 111,
    BPZapn	= 112,
    BPZapt	= 113,
    BPZnapn	= 114,
    BPZnapt	= 115,
    BSHUFFLE	= 116,
    CALL	= 117,
    CALLri	= 118,
    CALLrr	= 119,
    CASXrr	= 120,
    CASrr	= 121,
    CMASK16	= 122,
    CMASK32	= 123,
    CMASK8	= 124,
    CMPri	= 125,
    CMPrr	= 126,
    EDGE16	= 127,
    EDGE16L	= 128,
    EDGE16LN	= 129,
    EDGE16N	= 130,
    EDGE32	= 131,
    EDGE32L	= 132,
    EDGE32LN	= 133,
    EDGE32N	= 134,
    EDGE8	= 135,
    EDGE8L	= 136,
    EDGE8LN	= 137,
    EDGE8N	= 138,
    FABSD	= 139,
    FABSQ	= 140,
    FABSS	= 141,
    FADDD	= 142,
    FADDQ	= 143,
    FADDS	= 144,
    FALIGNADATA	= 145,
    FAND	= 146,
    FANDNOT1	= 147,
    FANDNOT1S	= 148,
    FANDNOT2	= 149,
    FANDNOT2S	= 150,
    FANDS	= 151,
    FBCOND	= 152,
    FBCONDA	= 153,
    FCHKSM16	= 154,
    FCMPD	= 155,
    FCMPEQ16	= 156,
    FCMPEQ32	= 157,
    FCMPGT16	= 158,
    FCMPGT32	= 159,
    FCMPLE16	= 160,
    FCMPLE32	= 161,
    FCMPNE16	= 162,
    FCMPNE32	= 163,
    FCMPQ	= 164,
    FCMPS	= 165,
    FDIVD	= 166,
    FDIVQ	= 167,
    FDIVS	= 168,
    FDMULQ	= 169,
    FDTOI	= 170,
    FDTOQ	= 171,
    FDTOS	= 172,
    FDTOX	= 173,
    FEXPAND	= 174,
    FHADDD	= 175,
    FHADDS	= 176,
    FHSUBD	= 177,
    FHSUBS	= 178,
    FITOD	= 179,
    FITOQ	= 180,
    FITOS	= 181,
    FLCMPD	= 182,
    FLCMPS	= 183,
    FLUSH	= 184,
    FLUSHW	= 185,
    FLUSHri	= 186,
    FLUSHrr	= 187,
    FMEAN16	= 188,
    FMOVD	= 189,
    FMOVD_FCC	= 190,
    FMOVD_ICC	= 191,
    FMOVD_XCC	= 192,
    FMOVQ	= 193,
    FMOVQ_FCC	= 194,
    FMOVQ_ICC	= 195,
    FMOVQ_XCC	= 196,
    FMOVRGEZD	= 197,
    FMOVRGEZQ	= 198,
    FMOVRGEZS	= 199,
    FMOVRGZD	= 200,
    FMOVRGZQ	= 201,
    FMOVRGZS	= 202,
    FMOVRLEZD	= 203,
    FMOVRLEZQ	= 204,
    FMOVRLEZS	= 205,
    FMOVRLZD	= 206,
    FMOVRLZQ	= 207,
    FMOVRLZS	= 208,
    FMOVRNZD	= 209,
    FMOVRNZQ	= 210,
    FMOVRNZS	= 211,
    FMOVRZD	= 212,
    FMOVRZQ	= 213,
    FMOVRZS	= 214,
    FMOVS	= 215,
    FMOVS_FCC	= 216,
    FMOVS_ICC	= 217,
    FMOVS_XCC	= 218,
    FMUL8SUX16	= 219,
    FMUL8ULX16	= 220,
    FMUL8X16	= 221,
    FMUL8X16AL	= 222,
    FMUL8X16AU	= 223,
    FMULD	= 224,
    FMULD8SUX16	= 225,
    FMULD8ULX16	= 226,
    FMULQ	= 227,
    FMULS	= 228,
    FNADDD	= 229,
    FNADDS	= 230,
    FNAND	= 231,
    FNANDS	= 232,
    FNEGD	= 233,
    FNEGQ	= 234,
    FNEGS	= 235,
    FNHADDD	= 236,
    FNHADDS	= 237,
    FNMULD	= 238,
    FNMULS	= 239,
    FNOR	= 240,
    FNORS	= 241,
    FNOT1	= 242,
    FNOT1S	= 243,
    FNOT2	= 244,
    FNOT2S	= 245,
    FNSMULD	= 246,
    FONE	= 247,
    FONES	= 248,
    FOR	= 249,
    FORNOT1	= 250,
    FORNOT1S	= 251,
    FORNOT2	= 252,
    FORNOT2S	= 253,
    FORS	= 254,
    FPACK16	= 255,
    FPACK32	= 256,
    FPACKFIX	= 257,
    FPADD16	= 258,
    FPADD16S	= 259,
    FPADD32	= 260,
    FPADD32S	= 261,
    FPADD64	= 262,
    FPMERGE	= 263,
    FPSUB16	= 264,
    FPSUB16S	= 265,
    FPSUB32	= 266,
    FPSUB32S	= 267,
    FQTOD	= 268,
    FQTOI	= 269,
    FQTOS	= 270,
    FQTOX	= 271,
    FSLAS16	= 272,
    FSLAS32	= 273,
    FSLL16	= 274,
    FSLL32	= 275,
    FSMULD	= 276,
    FSQRTD	= 277,
    FSQRTQ	= 278,
    FSQRTS	= 279,
    FSRA16	= 280,
    FSRA32	= 281,
    FSRC1	= 282,
    FSRC1S	= 283,
    FSRC2	= 284,
    FSRC2S	= 285,
    FSRL16	= 286,
    FSRL32	= 287,
    FSTOD	= 288,
    FSTOI	= 289,
    FSTOQ	= 290,
    FSTOX	= 291,
    FSUBD	= 292,
    FSUBQ	= 293,
    FSUBS	= 294,
    FXNOR	= 295,
    FXNORS	= 296,
    FXOR	= 297,
    FXORS	= 298,
    FXTOD	= 299,
    FXTOQ	= 300,
    FXTOS	= 301,
    FZERO	= 302,
    FZEROS	= 303,
    GETPCX	= 304,
    JMPLri	= 305,
    JMPLrr	= 306,
    LDArr	= 307,
    LDDArr	= 308,
    LDDFArr	= 309,
    LDDFri	= 310,
    LDDFrr	= 311,
    LDDri	= 312,
    LDDrr	= 313,
    LDFArr	= 314,
    LDFSRri	= 315,
    LDFSRrr	= 316,
    LDFri	= 317,
    LDFrr	= 318,
    LDQFArr	= 319,
    LDQFri	= 320,
    LDQFrr	= 321,
    LDSBArr	= 322,
    LDSBri	= 323,
    LDSBrr	= 324,
    LDSHArr	= 325,
    LDSHri	= 326,
    LDSHrr	= 327,
    LDSTUBArr	= 328,
    LDSTUBri	= 329,
    LDSTUBrr	= 330,
    LDSWri	= 331,
    LDSWrr	= 332,
    LDUBArr	= 333,
    LDUBri	= 334,
    LDUBrr	= 335,
    LDUHArr	= 336,
    LDUHri	= 337,
    LDUHrr	= 338,
    LDXFSRri	= 339,
    LDXFSRrr	= 340,
    LDXri	= 341,
    LDXrr	= 342,
    LDri	= 343,
    LDrr	= 344,
    LEAX_ADDri	= 345,
    LEA_ADDri	= 346,
    LZCNT	= 347,
    MEMBARi	= 348,
    MOVDTOX	= 349,
    MOVFCCri	= 350,
    MOVFCCrr	= 351,
    MOVICCri	= 352,
    MOVICCrr	= 353,
    MOVRGEZri	= 354,
    MOVRGEZrr	= 355,
    MOVRGZri	= 356,
    MOVRGZrr	= 357,
    MOVRLEZri	= 358,
    MOVRLEZrr	= 359,
    MOVRLZri	= 360,
    MOVRLZrr	= 361,
    MOVRNZri	= 362,
    MOVRNZrr	= 363,
    MOVRRZri	= 364,
    MOVRRZrr	= 365,
    MOVSTOSW	= 366,
    MOVSTOUW	= 367,
    MOVWTOS	= 368,
    MOVXCCri	= 369,
    MOVXCCrr	= 370,
    MOVXTOD	= 371,
    MULXri	= 372,
    MULXrr	= 373,
    NOP	= 374,
    ORCCri	= 375,
    ORCCrr	= 376,
    ORNCCri	= 377,
    ORNCCrr	= 378,
    ORNri	= 379,
    ORNrr	= 380,
    ORXNrr	= 381,
    ORXri	= 382,
    ORXrr	= 383,
    ORri	= 384,
    ORrr	= 385,
    PDIST	= 386,
    PDISTN	= 387,
    POPCrr	= 388,
    RDASR	= 389,
    RDPSR	= 390,
    RDTBR	= 391,
    RDWIM	= 392,
    RESTOREri	= 393,
    RESTORErr	= 394,
    RET	= 395,
    RETL	= 396,
    RETTri	= 397,
    RETTrr	= 398,
    SAVEri	= 399,
    SAVErr	= 400,
    SDIVCCri	= 401,
    SDIVCCrr	= 402,
    SDIVXri	= 403,
    SDIVXrr	= 404,
    SDIVri	= 405,
    SDIVrr	= 406,
    SELECT_CC_DFP_FCC	= 407,
    SELECT_CC_DFP_ICC	= 408,
    SELECT_CC_FP_FCC	= 409,
    SELECT_CC_FP_ICC	= 410,
    SELECT_CC_Int_FCC	= 411,
    SELECT_CC_Int_ICC	= 412,
    SELECT_CC_QFP_FCC	= 413,
    SELECT_CC_QFP_ICC	= 414,
    SET	= 415,
    SETHIXi	= 416,
    SETHIi	= 417,
    SHUTDOWN	= 418,
    SIAM	= 419,
    SLLXri	= 420,
    SLLXrr	= 421,
    SLLri	= 422,
    SLLrr	= 423,
    SMULCCri	= 424,
    SMULCCrr	= 425,
    SMULri	= 426,
    SMULrr	= 427,
    SRAXri	= 428,
    SRAXrr	= 429,
    SRAri	= 430,
    SRArr	= 431,
    SRLXri	= 432,
    SRLXrr	= 433,
    SRLri	= 434,
    SRLrr	= 435,
    STArr	= 436,
    STBAR	= 437,
    STBArr	= 438,
    STBri	= 439,
    STBrr	= 440,
    STDArr	= 441,
    STDFArr	= 442,
    STDFri	= 443,
    STDFrr	= 444,
    STDri	= 445,
    STDrr	= 446,
    STFArr	= 447,
    STFri	= 448,
    STFrr	= 449,
    STHArr	= 450,
    STHri	= 451,
    STHrr	= 452,
    STQFArr	= 453,
    STQFri	= 454,
    STQFrr	= 455,
    STXri	= 456,
    STXrr	= 457,
    STri	= 458,
    STrr	= 459,
    SUBCCri	= 460,
    SUBCCrr	= 461,
    SUBCri	= 462,
    SUBCrr	= 463,
    SUBEri	= 464,
    SUBErr	= 465,
    SUBXri	= 466,
    SUBXrr	= 467,
    SUBri	= 468,
    SUBrr	= 469,
    SWAPArr	= 470,
    SWAPri	= 471,
    SWAPrr	= 472,
    TA3	= 473,
    TA5	= 474,
    TADDCCTVri	= 475,
    TADDCCTVrr	= 476,
    TADDCCri	= 477,
    TADDCCrr	= 478,
    TICCri	= 479,
    TICCrr	= 480,
    TLS_ADDXrr	= 481,
    TLS_ADDrr	= 482,
    TLS_CALL	= 483,
    TLS_LDXrr	= 484,
    TLS_LDrr	= 485,
    TSUBCCTVri	= 486,
    TSUBCCTVrr	= 487,
    TSUBCCri	= 488,
    TSUBCCrr	= 489,
    TXCCri	= 490,
    TXCCrr	= 491,
    UDIVCCri	= 492,
    UDIVCCrr	= 493,
    UDIVXri	= 494,
    UDIVXrr	= 495,
    UDIVri	= 496,
    UDIVrr	= 497,
    UMULCCri	= 498,
    UMULCCrr	= 499,
    UMULXHI	= 500,
    UMULri	= 501,
    UMULrr	= 502,
    UNIMP	= 503,
    V9FCMPD	= 504,
    V9FCMPED	= 505,
    V9FCMPEQ	= 506,
    V9FCMPES	= 507,
    V9FCMPQ	= 508,
    V9FCMPS	= 509,
    V9FMOVD_FCC	= 510,
    V9FMOVQ_FCC	= 511,
    V9FMOVS_FCC	= 512,
    V9MOVFCCri	= 513,
    V9MOVFCCrr	= 514,
    WRASRri	= 515,
    WRASRrr	= 516,
    WRPSRri	= 517,
    WRPSRrr	= 518,
    WRTBRri	= 519,
    WRTBRrr	= 520,
    WRWIMri	= 521,
    WRWIMrr	= 522,
    XMULX	= 523,
    XMULXHI	= 524,
    XNORCCri	= 525,
    XNORCCrr	= 526,
    XNORXrr	= 527,
    XNORri	= 528,
    XNORrr	= 529,
    XORCCri	= 530,
    XORCCrr	= 531,
    XORXri	= 532,
    XORXrr	= 533,
    XORri	= 534,
    XORrr	= 535,
    INSTRUCTION_LIST_END = 536
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // End Sched namespace
} // End SP namespace
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

static const uint16_t ImplicitList1[] = { SP::ICC, 0 };
static const uint16_t ImplicitList2[] = { SP::O6, 0 };
static const uint16_t ImplicitList3[] = { SP::FCC0, 0 };
static const uint16_t ImplicitList4[] = { SP::O7, 0 };
static const uint16_t ImplicitList5[] = { SP::FSR, 0 };
static const uint16_t ImplicitList6[] = { SP::PSR, 0 };
static const uint16_t ImplicitList7[] = { SP::TBR, 0 };
static const uint16_t ImplicitList8[] = { SP::WIM, 0 };
static const uint16_t ImplicitList9[] = { SP::Y, 0 };
static const uint16_t ImplicitList10[] = { SP::Y, SP::ICC, 0 };

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
static const MCOperandInfo OperandInfo12[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo24[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo25[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo45[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo46[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo98[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo99[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo100[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
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
  { 23,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #23 = ADDCCri
  { 24,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #24 = ADDCCrr
  { 25,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #25 = ADDCri
  { 26,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #26 = ADDCrr
  { 27,	3,	1,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #27 = ADDEri
  { 28,	3,	1,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #28 = ADDErr
  { 29,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #29 = ADDXC
  { 30,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #30 = ADDXCCC
  { 31,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #31 = ADDXri
  { 32,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #32 = ADDXrr
  { 33,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = ADDri
  { 34,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #34 = ADDrr
  { 35,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #35 = ADJCALLSTACKDOWN
  { 36,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo8, -1 ,nullptr },  // Inst #36 = ADJCALLSTACKUP
  { 37,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #37 = ALIGNADDR
  { 38,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #38 = ALIGNADDRL
  { 39,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #39 = ANDCCri
  { 40,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #40 = ANDCCrr
  { 41,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #41 = ANDNCCri
  { 42,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #42 = ANDNCCrr
  { 43,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #43 = ANDNri
  { 44,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #44 = ANDNrr
  { 45,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #45 = ANDXNrr
  { 46,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #46 = ANDXri
  { 47,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #47 = ANDXrr
  { 48,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #48 = ANDri
  { 49,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #49 = ANDrr
  { 50,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #50 = ARRAY16
  { 51,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #51 = ARRAY32
  { 52,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #52 = ARRAY8
  { 53,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #53 = ATOMIC_LOAD_ADD_32
  { 54,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #54 = ATOMIC_LOAD_ADD_64
  { 55,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #55 = ATOMIC_LOAD_AND_32
  { 56,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #56 = ATOMIC_LOAD_AND_64
  { 57,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #57 = ATOMIC_LOAD_MAX_32
  { 58,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #58 = ATOMIC_LOAD_MAX_64
  { 59,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #59 = ATOMIC_LOAD_MIN_32
  { 60,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #60 = ATOMIC_LOAD_MIN_64
  { 61,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #61 = ATOMIC_LOAD_NAND_32
  { 62,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #62 = ATOMIC_LOAD_NAND_64
  { 63,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #63 = ATOMIC_LOAD_OR_32
  { 64,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #64 = ATOMIC_LOAD_OR_64
  { 65,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #65 = ATOMIC_LOAD_SUB_32
  { 66,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #66 = ATOMIC_LOAD_SUB_64
  { 67,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #67 = ATOMIC_LOAD_UMAX_32
  { 68,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #68 = ATOMIC_LOAD_UMAX_64
  { 69,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #69 = ATOMIC_LOAD_UMIN_32
  { 70,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #70 = ATOMIC_LOAD_UMIN_64
  { 71,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #71 = ATOMIC_LOAD_XOR_32
  { 72,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #72 = ATOMIC_LOAD_XOR_64
  { 73,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #73 = ATOMIC_SWAP_64
  { 74,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #74 = BA
  { 75,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #75 = BCOND
  { 76,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #76 = BCONDA
  { 77,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #77 = BINDri
  { 78,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #78 = BINDrr
  { 79,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #79 = BMASK
  { 80,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #80 = BPFCC
  { 81,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #81 = BPFCCA
  { 82,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #82 = BPFCCANT
  { 83,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #83 = BPFCCNT
  { 84,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #84 = BPGEZapn
  { 85,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #85 = BPGEZapt
  { 86,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #86 = BPGEZnapn
  { 87,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #87 = BPGEZnapt
  { 88,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #88 = BPGZapn
  { 89,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #89 = BPGZapt
  { 90,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #90 = BPGZnapn
  { 91,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #91 = BPGZnapt
  { 92,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #92 = BPICC
  { 93,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #93 = BPICCA
  { 94,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #94 = BPICCANT
  { 95,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #95 = BPICCNT
  { 96,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #96 = BPLEZapn
  { 97,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #97 = BPLEZapt
  { 98,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #98 = BPLEZnapn
  { 99,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #99 = BPLEZnapt
  { 100,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #100 = BPLZapn
  { 101,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #101 = BPLZapt
  { 102,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #102 = BPLZnapn
  { 103,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #103 = BPLZnapt
  { 104,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #104 = BPNZapn
  { 105,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #105 = BPNZapt
  { 106,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #106 = BPNZnapn
  { 107,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #107 = BPNZnapt
  { 108,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #108 = BPXCC
  { 109,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #109 = BPXCCA
  { 110,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #110 = BPXCCANT
  { 111,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #111 = BPXCCNT
  { 112,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #112 = BPZapn
  { 113,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #113 = BPZapt
  { 114,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #114 = BPZnapn
  { 115,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #115 = BPZnapt
  { 116,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #116 = BSHUFFLE
  { 117,	1,	0,	4,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #117 = CALL
  { 118,	2,	0,	4,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #118 = CALLri
  { 119,	2,	0,	4,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #119 = CALLrr
  { 120,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #120 = CASXrr
  { 121,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #121 = CASrr
  { 122,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #122 = CMASK16
  { 123,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #123 = CMASK32
  { 124,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #124 = CMASK8
  { 125,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo26, -1 ,nullptr },  // Inst #125 = CMPri
  { 126,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo27, -1 ,nullptr },  // Inst #126 = CMPrr
  { 127,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #127 = EDGE16
  { 128,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #128 = EDGE16L
  { 129,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #129 = EDGE16LN
  { 130,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #130 = EDGE16N
  { 131,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #131 = EDGE32
  { 132,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #132 = EDGE32L
  { 133,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #133 = EDGE32LN
  { 134,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #134 = EDGE32N
  { 135,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #135 = EDGE8
  { 136,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #136 = EDGE8L
  { 137,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #137 = EDGE8LN
  { 138,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #138 = EDGE8N
  { 139,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #139 = FABSD
  { 140,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #140 = FABSQ
  { 141,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #141 = FABSS
  { 142,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #142 = FADDD
  { 143,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #143 = FADDQ
  { 144,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #144 = FADDS
  { 145,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #145 = FALIGNADATA
  { 146,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #146 = FAND
  { 147,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #147 = FANDNOT1
  { 148,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #148 = FANDNOT1S
  { 149,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #149 = FANDNOT2
  { 150,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #150 = FANDNOT2S
  { 151,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #151 = FANDS
  { 152,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #152 = FBCOND
  { 153,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #153 = FBCONDA
  { 154,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #154 = FCHKSM16
  { 155,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo28, -1 ,nullptr },  // Inst #155 = FCMPD
  { 156,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #156 = FCMPEQ16
  { 157,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #157 = FCMPEQ32
  { 158,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #158 = FCMPGT16
  { 159,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #159 = FCMPGT32
  { 160,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #160 = FCMPLE16
  { 161,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #161 = FCMPLE32
  { 162,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #162 = FCMPNE16
  { 163,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #163 = FCMPNE32
  { 164,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo29, -1 ,nullptr },  // Inst #164 = FCMPQ
  { 165,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo30, -1 ,nullptr },  // Inst #165 = FCMPS
  { 166,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #166 = FDIVD
  { 167,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #167 = FDIVQ
  { 168,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #168 = FDIVS
  { 169,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #169 = FDMULQ
  { 170,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #170 = FDTOI
  { 171,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #171 = FDTOQ
  { 172,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #172 = FDTOS
  { 173,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #173 = FDTOX
  { 174,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #174 = FEXPAND
  { 175,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #175 = FHADDD
  { 176,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #176 = FHADDS
  { 177,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #177 = FHSUBD
  { 178,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #178 = FHSUBS
  { 179,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #179 = FITOD
  { 180,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #180 = FITOQ
  { 181,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #181 = FITOS
  { 182,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #182 = FLCMPD
  { 183,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #183 = FLCMPS
  { 184,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #184 = FLUSH
  { 185,	0,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #185 = FLUSHW
  { 186,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #186 = FLUSHri
  { 187,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #187 = FLUSHrr
  { 188,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #188 = FMEAN16
  { 189,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #189 = FMOVD
  { 190,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #190 = FMOVD_FCC
  { 191,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #191 = FMOVD_ICC
  { 192,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #192 = FMOVD_XCC
  { 193,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #193 = FMOVQ
  { 194,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #194 = FMOVQ_FCC
  { 195,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #195 = FMOVQ_ICC
  { 196,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #196 = FMOVQ_XCC
  { 197,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #197 = FMOVRGEZD
  { 198,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #198 = FMOVRGEZQ
  { 199,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #199 = FMOVRGEZS
  { 200,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #200 = FMOVRGZD
  { 201,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #201 = FMOVRGZQ
  { 202,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #202 = FMOVRGZS
  { 203,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #203 = FMOVRLEZD
  { 204,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #204 = FMOVRLEZQ
  { 205,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #205 = FMOVRLEZS
  { 206,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #206 = FMOVRLZD
  { 207,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #207 = FMOVRLZQ
  { 208,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #208 = FMOVRLZS
  { 209,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #209 = FMOVRNZD
  { 210,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #210 = FMOVRNZQ
  { 211,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #211 = FMOVRNZS
  { 212,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #212 = FMOVRZD
  { 213,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #213 = FMOVRZQ
  { 214,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #214 = FMOVRZS
  { 215,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #215 = FMOVS
  { 216,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #216 = FMOVS_FCC
  { 217,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #217 = FMOVS_ICC
  { 218,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #218 = FMOVS_XCC
  { 219,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #219 = FMUL8SUX16
  { 220,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #220 = FMUL8ULX16
  { 221,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #221 = FMUL8X16
  { 222,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #222 = FMUL8X16AL
  { 223,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #223 = FMUL8X16AU
  { 224,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #224 = FMULD
  { 225,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #225 = FMULD8SUX16
  { 226,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #226 = FMULD8ULX16
  { 227,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #227 = FMULQ
  { 228,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #228 = FMULS
  { 229,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #229 = FNADDD
  { 230,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #230 = FNADDS
  { 231,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #231 = FNAND
  { 232,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #232 = FNANDS
  { 233,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #233 = FNEGD
  { 234,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #234 = FNEGQ
  { 235,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #235 = FNEGS
  { 236,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #236 = FNHADDD
  { 237,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #237 = FNHADDS
  { 238,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #238 = FNMULD
  { 239,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #239 = FNMULS
  { 240,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #240 = FNOR
  { 241,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #241 = FNORS
  { 242,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #242 = FNOT1
  { 243,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #243 = FNOT1S
  { 244,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #244 = FNOT2
  { 245,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #245 = FNOT2S
  { 246,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #246 = FNSMULD
  { 247,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #247 = FONE
  { 248,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #248 = FONES
  { 249,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #249 = FOR
  { 250,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #250 = FORNOT1
  { 251,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #251 = FORNOT1S
  { 252,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #252 = FORNOT2
  { 253,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #253 = FORNOT2S
  { 254,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #254 = FORS
  { 255,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #255 = FPACK16
  { 256,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #256 = FPACK32
  { 257,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #257 = FPACKFIX
  { 258,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #258 = FPADD16
  { 259,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #259 = FPADD16S
  { 260,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #260 = FPADD32
  { 261,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #261 = FPADD32S
  { 262,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #262 = FPADD64
  { 263,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #263 = FPMERGE
  { 264,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #264 = FPSUB16
  { 265,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #265 = FPSUB16S
  { 266,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #266 = FPSUB32
  { 267,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #267 = FPSUB32S
  { 268,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #268 = FQTOD
  { 269,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #269 = FQTOI
  { 270,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #270 = FQTOS
  { 271,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #271 = FQTOX
  { 272,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #272 = FSLAS16
  { 273,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #273 = FSLAS32
  { 274,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #274 = FSLL16
  { 275,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #275 = FSLL32
  { 276,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #276 = FSMULD
  { 277,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #277 = FSQRTD
  { 278,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #278 = FSQRTQ
  { 279,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #279 = FSQRTS
  { 280,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #280 = FSRA16
  { 281,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #281 = FSRA32
  { 282,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #282 = FSRC1
  { 283,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #283 = FSRC1S
  { 284,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #284 = FSRC2
  { 285,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #285 = FSRC2S
  { 286,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #286 = FSRL16
  { 287,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #287 = FSRL32
  { 288,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #288 = FSTOD
  { 289,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #289 = FSTOI
  { 290,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #290 = FSTOQ
  { 291,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #291 = FSTOX
  { 292,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #292 = FSUBD
  { 293,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #293 = FSUBQ
  { 294,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #294 = FSUBS
  { 295,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #295 = FXNOR
  { 296,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #296 = FXNORS
  { 297,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #297 = FXOR
  { 298,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #298 = FXORS
  { 299,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #299 = FXTOD
  { 300,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #300 = FXTOQ
  { 301,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #301 = FXTOS
  { 302,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #302 = FZERO
  { 303,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #303 = FZEROS
  { 304,	1,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #304 = GETPCX
  { 305,	3,	1,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #305 = JMPLri
  { 306,	3,	1,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #306 = JMPLrr
  { 307,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #307 = LDArr
  { 308,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #308 = LDDArr
  { 309,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #309 = LDDFArr
  { 310,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #310 = LDDFri
  { 311,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #311 = LDDFrr
  { 312,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #312 = LDDri
  { 313,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #313 = LDDrr
  { 314,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #314 = LDFArr
  { 315,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo18, -1 ,nullptr },  // Inst #315 = LDFSRri
  { 316,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo19, -1 ,nullptr },  // Inst #316 = LDFSRrr
  { 317,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #317 = LDFri
  { 318,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #318 = LDFrr
  { 319,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #319 = LDQFArr
  { 320,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #320 = LDQFri
  { 321,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #321 = LDQFrr
  { 322,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #322 = LDSBArr
  { 323,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #323 = LDSBri
  { 324,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #324 = LDSBrr
  { 325,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #325 = LDSHArr
  { 326,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #326 = LDSHri
  { 327,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #327 = LDSHrr
  { 328,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #328 = LDSTUBArr
  { 329,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #329 = LDSTUBri
  { 330,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #330 = LDSTUBrr
  { 331,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #331 = LDSWri
  { 332,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #332 = LDSWrr
  { 333,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #333 = LDUBArr
  { 334,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #334 = LDUBri
  { 335,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #335 = LDUBrr
  { 336,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #336 = LDUHArr
  { 337,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #337 = LDUHri
  { 338,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #338 = LDUHrr
  { 339,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo18, -1 ,nullptr },  // Inst #339 = LDXFSRri
  { 340,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo19, -1 ,nullptr },  // Inst #340 = LDXFSRrr
  { 341,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #341 = LDXri
  { 342,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #342 = LDXrr
  { 343,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #343 = LDri
  { 344,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #344 = LDrr
  { 345,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #345 = LEAX_ADDri
  { 346,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #346 = LEA_ADDri
  { 347,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #347 = LZCNT
  { 348,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #348 = MEMBARi
  { 349,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #349 = MOVDTOX
  { 350,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #350 = MOVFCCri
  { 351,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #351 = MOVFCCrr
  { 352,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #352 = MOVICCri
  { 353,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #353 = MOVICCrr
  { 354,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #354 = MOVRGEZri
  { 355,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #355 = MOVRGEZrr
  { 356,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #356 = MOVRGZri
  { 357,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #357 = MOVRGZrr
  { 358,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #358 = MOVRLEZri
  { 359,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #359 = MOVRLEZrr
  { 360,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #360 = MOVRLZri
  { 361,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #361 = MOVRLZrr
  { 362,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #362 = MOVRNZri
  { 363,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #363 = MOVRNZrr
  { 364,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #364 = MOVRRZri
  { 365,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #365 = MOVRRZrr
  { 366,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #366 = MOVSTOSW
  { 367,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #367 = MOVSTOUW
  { 368,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #368 = MOVWTOS
  { 369,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #369 = MOVXCCri
  { 370,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList1, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #370 = MOVXCCrr
  { 371,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #371 = MOVXTOD
  { 372,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #372 = MULXri
  { 373,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #373 = MULXrr
  { 374,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #374 = NOP
  { 375,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #375 = ORCCri
  { 376,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #376 = ORCCrr
  { 377,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #377 = ORNCCri
  { 378,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #378 = ORNCCrr
  { 379,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #379 = ORNri
  { 380,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #380 = ORNrr
  { 381,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #381 = ORXNrr
  { 382,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #382 = ORXri
  { 383,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #383 = ORXrr
  { 384,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #384 = ORri
  { 385,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #385 = ORrr
  { 386,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #386 = PDIST
  { 387,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #387 = PDISTN
  { 388,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #388 = POPCrr
  { 389,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #389 = RDASR
  { 390,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList6, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #390 = RDPSR
  { 391,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #391 = RDTBR
  { 392,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #392 = RDWIM
  { 393,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #393 = RESTOREri
  { 394,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #394 = RESTORErr
  { 395,	1,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #395 = RET
  { 396,	1,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #396 = RETL
  { 397,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #397 = RETTri
  { 398,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #398 = RETTrr
  { 399,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #399 = SAVEri
  { 400,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #400 = SAVErr
  { 401,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, ImplicitList10, OperandInfo12, -1 ,nullptr },  // Inst #401 = SDIVCCri
  { 402,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, ImplicitList10, OperandInfo13, -1 ,nullptr },  // Inst #402 = SDIVCCrr
  { 403,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #403 = SDIVXri
  { 404,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #404 = SDIVXrr
  { 405,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, ImplicitList9, OperandInfo12, -1 ,nullptr },  // Inst #405 = SDIVri
  { 406,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, ImplicitList9, OperandInfo13, -1 ,nullptr },  // Inst #406 = SDIVrr
  { 407,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #407 = SELECT_CC_DFP_FCC
  { 408,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #408 = SELECT_CC_DFP_ICC
  { 409,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #409 = SELECT_CC_FP_FCC
  { 410,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #410 = SELECT_CC_FP_ICC
  { 411,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #411 = SELECT_CC_Int_FCC
  { 412,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #412 = SELECT_CC_Int_ICC
  { 413,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #413 = SELECT_CC_QFP_FCC
  { 414,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #414 = SELECT_CC_QFP_ICC
  { 415,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #415 = SET
  { 416,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #416 = SETHIXi
  { 417,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #417 = SETHIi
  { 418,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #418 = SHUTDOWN
  { 419,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #419 = SIAM
  { 420,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #420 = SLLXri
  { 421,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #421 = SLLXrr
  { 422,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #422 = SLLri
  { 423,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #423 = SLLrr
  { 424,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo12, -1 ,nullptr },  // Inst #424 = SMULCCri
  { 425,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo13, -1 ,nullptr },  // Inst #425 = SMULCCrr
  { 426,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList9, OperandInfo12, -1 ,nullptr },  // Inst #426 = SMULri
  { 427,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList9, OperandInfo13, -1 ,nullptr },  // Inst #427 = SMULrr
  { 428,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #428 = SRAXri
  { 429,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #429 = SRAXrr
  { 430,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #430 = SRAri
  { 431,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #431 = SRArr
  { 432,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #432 = SRLXri
  { 433,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #433 = SRLXrr
  { 434,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #434 = SRLri
  { 435,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #435 = SRLrr
  { 436,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #436 = STArr
  { 437,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #437 = STBAR
  { 438,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #438 = STBArr
  { 439,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #439 = STBri
  { 440,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #440 = STBrr
  { 441,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #441 = STDArr
  { 442,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #442 = STDFArr
  { 443,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #443 = STDFri
  { 444,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #444 = STDFrr
  { 445,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #445 = STDri
  { 446,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #446 = STDrr
  { 447,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #447 = STFArr
  { 448,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #448 = STFri
  { 449,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #449 = STFrr
  { 450,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #450 = STHArr
  { 451,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #451 = STHri
  { 452,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #452 = STHrr
  { 453,	4,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #453 = STQFArr
  { 454,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #454 = STQFri
  { 455,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #455 = STQFrr
  { 456,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #456 = STXri
  { 457,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #457 = STXrr
  { 458,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #458 = STri
  { 459,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #459 = STrr
  { 460,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #460 = SUBCCri
  { 461,	3,	1,	4,	0,	0, 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #461 = SUBCCrr
  { 462,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #462 = SUBCri
  { 463,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #463 = SUBCrr
  { 464,	3,	1,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #464 = SUBEri
  { 465,	3,	1,	4,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #465 = SUBErr
  { 466,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #466 = SUBXri
  { 467,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #467 = SUBXrr
  { 468,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #468 = SUBri
  { 469,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #469 = SUBrr
  { 470,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #470 = SWAPArr
  { 471,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #471 = SWAPri
  { 472,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #472 = SWAPrr
  { 473,	0,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #473 = TA3
  { 474,	0,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #474 = TA5
  { 475,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #475 = TADDCCTVri
  { 476,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #476 = TADDCCTVrr
  { 477,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #477 = TADDCCri
  { 478,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #478 = TADDCCrr
  { 479,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #479 = TICCri
  { 480,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #480 = TICCrr
  { 481,	4,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #481 = TLS_ADDXrr
  { 482,	4,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #482 = TLS_ADDrr
  { 483,	2,	0,	4,	0,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList2, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #483 = TLS_CALL
  { 484,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #484 = TLS_LDXrr
  { 485,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #485 = TLS_LDrr
  { 486,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #486 = TSUBCCTVri
  { 487,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #487 = TSUBCCTVrr
  { 488,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #488 = TSUBCCri
  { 489,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #489 = TSUBCCrr
  { 490,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #490 = TXCCri
  { 491,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #491 = TXCCrr
  { 492,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, ImplicitList10, OperandInfo12, -1 ,nullptr },  // Inst #492 = UDIVCCri
  { 493,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, ImplicitList10, OperandInfo13, -1 ,nullptr },  // Inst #493 = UDIVCCrr
  { 494,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #494 = UDIVXri
  { 495,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #495 = UDIVXrr
  { 496,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, ImplicitList9, OperandInfo12, -1 ,nullptr },  // Inst #496 = UDIVri
  { 497,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, ImplicitList9, OperandInfo13, -1 ,nullptr },  // Inst #497 = UDIVrr
  { 498,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo12, -1 ,nullptr },  // Inst #498 = UMULCCri
  { 499,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo13, -1 ,nullptr },  // Inst #499 = UMULCCrr
  { 500,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #500 = UMULXHI
  { 501,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo12, -1 ,nullptr },  // Inst #501 = UMULri
  { 502,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo13, -1 ,nullptr },  // Inst #502 = UMULrr
  { 503,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #503 = UNIMP
  { 504,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #504 = V9FCMPD
  { 505,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #505 = V9FCMPED
  { 506,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #506 = V9FCMPEQ
  { 507,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #507 = V9FCMPES
  { 508,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #508 = V9FCMPQ
  { 509,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #509 = V9FCMPS
  { 510,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #510 = V9FMOVD_FCC
  { 511,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #511 = V9FMOVQ_FCC
  { 512,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #512 = V9FMOVS_FCC
  { 513,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #513 = V9MOVFCCri
  { 514,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #514 = V9MOVFCCrr
  { 515,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #515 = WRASRri
  { 516,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #516 = WRASRrr
  { 517,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo26, -1 ,nullptr },  // Inst #517 = WRPSRri
  { 518,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo27, -1 ,nullptr },  // Inst #518 = WRPSRrr
  { 519,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo26, -1 ,nullptr },  // Inst #519 = WRTBRri
  { 520,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo27, -1 ,nullptr },  // Inst #520 = WRTBRrr
  { 521,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo26, -1 ,nullptr },  // Inst #521 = WRWIMri
  { 522,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo27, -1 ,nullptr },  // Inst #522 = WRWIMrr
  { 523,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #523 = XMULX
  { 524,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #524 = XMULXHI
  { 525,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #525 = XNORCCri
  { 526,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #526 = XNORCCrr
  { 527,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #527 = XNORXrr
  { 528,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #528 = XNORri
  { 529,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #529 = XNORrr
  { 530,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #530 = XORCCri
  { 531,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #531 = XORCCrr
  { 532,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #532 = XORXri
  { 533,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #533 = XORXrr
  { 534,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #534 = XORri
  { 535,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #535 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'F', 'S', 'R', 'C', '1', 0,
  /* 6 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 0,
  /* 15 */ 'F', 'N', 'O', 'T', '1', 0,
  /* 21 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 0,
  /* 29 */ 'F', 'S', 'R', 'A', '3', '2', 0,
  /* 36 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 0,
  /* 44 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 0,
  /* 52 */ 'E', 'D', 'G', 'E', '3', '2', 0,
  /* 59 */ 'F', 'C', 'M', 'P', 'L', 'E', '3', '2', 0,
  /* 68 */ 'F', 'C', 'M', 'P', 'N', 'E', '3', '2', 0,
  /* 77 */ 'F', 'P', 'A', 'C', 'K', '3', '2', 0,
  /* 85 */ 'C', 'M', 'A', 'S', 'K', '3', '2', 0,
  /* 93 */ 'F', 'S', 'L', 'L', '3', '2', 0,
  /* 100 */ 'F', 'S', 'R', 'L', '3', '2', 0,
  /* 107 */ 'F', 'C', 'M', 'P', 'E', 'Q', '3', '2', 0,
  /* 116 */ 'F', 'S', 'L', 'A', 'S', '3', '2', 0,
  /* 124 */ 'F', 'C', 'M', 'P', 'G', 'T', '3', '2', 0,
  /* 133 */ 'A', 'R', 'R', 'A', 'Y', '3', '2', 0,
  /* 141 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', '3', '2', 0,
  /* 160 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', '3', '2', 0,
  /* 179 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', '3', '2', 0,
  /* 199 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', '3', '2', 0,
  /* 218 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 238 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 257 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', '3', '2', 0,
  /* 276 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', '3', '2', 0,
  /* 294 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 314 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 333 */ 'F', 'S', 'R', 'C', '2', 0,
  /* 339 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 0,
  /* 348 */ 'F', 'N', 'O', 'T', '2', 0,
  /* 354 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 0,
  /* 362 */ 'T', 'A', '3', 0,
  /* 366 */ 'F', 'P', 'A', 'D', 'D', '6', '4', 0,
  /* 374 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', '6', '4', 0,
  /* 393 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', '6', '4', 0,
  /* 412 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', '6', '4', 0,
  /* 432 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', '6', '4', 0,
  /* 451 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 471 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 490 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '6', '4', 0,
  /* 505 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', '6', '4', 0,
  /* 524 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', '6', '4', 0,
  /* 542 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 562 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 581 */ 'T', 'A', '5', 0,
  /* 585 */ 'F', 'S', 'R', 'A', '1', '6', 0,
  /* 592 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 0,
  /* 600 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 0,
  /* 608 */ 'E', 'D', 'G', 'E', '1', '6', 0,
  /* 615 */ 'F', 'C', 'M', 'P', 'L', 'E', '1', '6', 0,
  /* 624 */ 'F', 'C', 'M', 'P', 'N', 'E', '1', '6', 0,
  /* 633 */ 'F', 'P', 'A', 'C', 'K', '1', '6', 0,
  /* 641 */ 'C', 'M', 'A', 'S', 'K', '1', '6', 0,
  /* 649 */ 'F', 'S', 'L', 'L', '1', '6', 0,
  /* 656 */ 'F', 'S', 'R', 'L', '1', '6', 0,
  /* 663 */ 'F', 'C', 'H', 'K', 'S', 'M', '1', '6', 0,
  /* 672 */ 'F', 'M', 'E', 'A', 'N', '1', '6', 0,
  /* 680 */ 'F', 'C', 'M', 'P', 'E', 'Q', '1', '6', 0,
  /* 689 */ 'F', 'S', 'L', 'A', 'S', '1', '6', 0,
  /* 697 */ 'F', 'C', 'M', 'P', 'G', 'T', '1', '6', 0,
  /* 706 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 0,
  /* 715 */ 'F', 'M', 'U', 'L', 'D', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 727 */ 'F', 'M', 'U', 'L', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 738 */ 'F', 'M', 'U', 'L', 'D', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 750 */ 'F', 'M', 'U', 'L', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 761 */ 'A', 'R', 'R', 'A', 'Y', '1', '6', 0,
  /* 769 */ 'E', 'D', 'G', 'E', '8', 0,
  /* 775 */ 'C', 'M', 'A', 'S', 'K', '8', 0,
  /* 782 */ 'A', 'R', 'R', 'A', 'Y', '8', 0,
  /* 789 */ 'B', 'A', 0,
  /* 792 */ 'B', 'P', 'F', 'C', 'C', 'A', 0,
  /* 799 */ 'B', 'P', 'I', 'C', 'C', 'A', 0,
  /* 806 */ 'B', 'P', 'X', 'C', 'C', 'A', 0,
  /* 813 */ 'F', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 821 */ 'F', 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'A', 'T', 'A', 0,
  /* 833 */ 'A', 'D', 'D', 'X', 'C', 'C', 'C', 0,
  /* 841 */ 'B', 'P', 'F', 'C', 'C', 0,
  /* 847 */ 'V', '9', 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 859 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 877 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 895 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 912 */ 'V', '9', 'F', 'M', 'O', 'V', 'Q', '_', 'F', 'C', 'C', 0,
  /* 924 */ 'V', '9', 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 936 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 954 */ 'B', 'P', 'I', 'C', 'C', 0,
  /* 960 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 970 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 988 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 1006 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 1023 */ 'F', 'M', 'O', 'V', 'Q', '_', 'I', 'C', 'C', 0,
  /* 1033 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 1043 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 1061 */ 'B', 'P', 'X', 'C', 'C', 0,
  /* 1067 */ 'F', 'M', 'O', 'V', 'D', '_', 'X', 'C', 'C', 0,
  /* 1077 */ 'F', 'M', 'O', 'V', 'Q', '_', 'X', 'C', 'C', 0,
  /* 1087 */ 'F', 'M', 'O', 'V', 'S', '_', 'X', 'C', 'C', 0,
  /* 1097 */ 'A', 'D', 'D', 'X', 'C', 0,
  /* 1103 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 1109 */ 'F', 'H', 'S', 'U', 'B', 'D', 0,
  /* 1116 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 1122 */ 'F', 'H', 'A', 'D', 'D', 'D', 0,
  /* 1129 */ 'F', 'N', 'H', 'A', 'D', 'D', 'D', 0,
  /* 1137 */ 'F', 'N', 'A', 'D', 'D', 'D', 0,
  /* 1144 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'D', 0,
  /* 1153 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1159 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 1165 */ 'F', 'N', 'M', 'U', 'L', 'D', 0,
  /* 1172 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 1179 */ 'F', 'N', 'S', 'M', 'U', 'L', 'D', 0,
  /* 1187 */ 'F', 'A', 'N', 'D', 0,
  /* 1192 */ 'F', 'N', 'A', 'N', 'D', 0,
  /* 1198 */ 'F', 'E', 'X', 'P', 'A', 'N', 'D', 0,
  /* 1206 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1219 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1226 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 1232 */ 'F', 'Q', 'T', 'O', 'D', 0,
  /* 1238 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 1244 */ 'F', 'X', 'T', 'O', 'D', 0,
  /* 1250 */ 'M', 'O', 'V', 'X', 'T', 'O', 'D', 0,
  /* 1258 */ 'V', '9', 'F', 'C', 'M', 'P', 'D', 0,
  /* 1266 */ 'F', 'L', 'C', 'M', 'P', 'D', 0,
  /* 1273 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1290 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1296 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 1303 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 1309 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 1315 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'D', 0,
  /* 1325 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'D', 0,
  /* 1335 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'D', 0,
  /* 1344 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'D', 0,
  /* 1353 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'D', 0,
  /* 1362 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'D', 0,
  /* 1370 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1383 */ 'F', 'P', 'M', 'E', 'R', 'G', 'E', 0,
  /* 1391 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1398 */ 'B', 'S', 'H', 'U', 'F', 'F', 'L', 'E', 0,
  /* 1407 */ 'F', 'O', 'N', 'E', 0,
  /* 1412 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1425 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1435 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1448 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1463 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1477 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1491 */ 'F', 'L', 'U', 'S', 'H', 0,
  /* 1497 */ 'P', 'H', 'I', 0,
  /* 1501 */ 'U', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1509 */ 'X', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1517 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 1523 */ 'F', 'Q', 'T', 'O', 'I', 0,
  /* 1529 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 1535 */ 'B', 'M', 'A', 'S', 'K', 0,
  /* 1541 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 0,
  /* 1549 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 0,
  /* 1557 */ 'E', 'D', 'G', 'E', '8', 'L', 0,
  /* 1564 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'L', 0,
  /* 1575 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1584 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1593 */ 'T', 'L', 'S', '_', 'C', 'A', 'L', 'L', 0,
  /* 1602 */ 'K', 'I', 'L', 'L', 0,
  /* 1607 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 'L', 0,
  /* 1618 */ 'R', 'E', 'T', 'L', 0,
  /* 1623 */ 'S', 'I', 'A', 'M', 0,
  /* 1628 */ 'R', 'D', 'W', 'I', 'M', 0,
  /* 1634 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1644 */ 'E', 'D', 'G', 'E', '3', '2', 'N', 0,
  /* 1652 */ 'E', 'D', 'G', 'E', '1', '6', 'N', 0,
  /* 1660 */ 'E', 'D', 'G', 'E', '8', 'N', 0,
  /* 1667 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 'N', 0,
  /* 1676 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 'N', 0,
  /* 1685 */ 'E', 'D', 'G', 'E', '8', 'L', 'N', 0,
  /* 1693 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 1709 */ 'P', 'D', 'I', 'S', 'T', 'N', 0,
  /* 1716 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 1733 */ 'S', 'H', 'U', 'T', 'D', 'O', 'W', 'N', 0,
  /* 1742 */ 'F', 'Z', 'E', 'R', 'O', 0,
  /* 1748 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 1757 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 1763 */ 'N', 'O', 'P', 0,
  /* 1767 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 1784 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1799 */ 'F', 'S', 'U', 'B', 'Q', 0,
  /* 1805 */ 'F', 'A', 'D', 'D', 'Q', 0,
  /* 1811 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 1820 */ 'F', 'N', 'E', 'G', 'Q', 0,
  /* 1826 */ 'F', 'D', 'M', 'U', 'L', 'Q', 0,
  /* 1833 */ 'F', 'M', 'U', 'L', 'Q', 0,
  /* 1839 */ 'F', 'D', 'T', 'O', 'Q', 0,
  /* 1845 */ 'F', 'I', 'T', 'O', 'Q', 0,
  /* 1851 */ 'F', 'S', 'T', 'O', 'Q', 0,
  /* 1857 */ 'F', 'X', 'T', 'O', 'Q', 0,
  /* 1863 */ 'V', '9', 'F', 'C', 'M', 'P', 'Q', 0,
  /* 1871 */ 'F', 'A', 'B', 'S', 'Q', 0,
  /* 1877 */ 'F', 'S', 'Q', 'R', 'T', 'Q', 0,
  /* 1884 */ 'F', 'D', 'I', 'V', 'Q', 0,
  /* 1890 */ 'F', 'M', 'O', 'V', 'Q', 0,
  /* 1896 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'Q', 0,
  /* 1906 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'Q', 0,
  /* 1916 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'Q', 0,
  /* 1925 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'Q', 0,
  /* 1934 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'Q', 0,
  /* 1943 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'Q', 0,
  /* 1951 */ 'S', 'T', 'B', 'A', 'R', 0,
  /* 1957 */ 'R', 'D', 'T', 'B', 'R', 0,
  /* 1963 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 0,
  /* 1973 */ 'F', 'O', 'R', 0,
  /* 1977 */ 'F', 'N', 'O', 'R', 0,
  /* 1982 */ 'F', 'X', 'N', 'O', 'R', 0,
  /* 1988 */ 'F', 'X', 'O', 'R', 0,
  /* 1993 */ 'R', 'D', 'A', 'S', 'R', 0,
  /* 1999 */ 'R', 'D', 'P', 'S', 'R', 0,
  /* 2005 */ 'F', 'S', 'R', 'C', '1', 'S', 0,
  /* 2012 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 'S', 0,
  /* 2022 */ 'F', 'N', 'O', 'T', '1', 'S', 0,
  /* 2029 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 'S', 0,
  /* 2038 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 'S', 0,
  /* 2047 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 'S', 0,
  /* 2056 */ 'F', 'S', 'R', 'C', '2', 'S', 0,
  /* 2063 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 'S', 0,
  /* 2073 */ 'F', 'N', 'O', 'T', '2', 'S', 0,
  /* 2080 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 'S', 0,
  /* 2089 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 'S', 0,
  /* 2098 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 'S', 0,
  /* 2107 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 2113 */ 'F', 'H', 'S', 'U', 'B', 'S', 0,
  /* 2120 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 2126 */ 'F', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2133 */ 'F', 'N', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2141 */ 'F', 'N', 'A', 'D', 'D', 'S', 0,
  /* 2148 */ 'F', 'A', 'N', 'D', 'S', 0,
  /* 2154 */ 'F', 'N', 'A', 'N', 'D', 'S', 0,
  /* 2161 */ 'F', 'O', 'N', 'E', 'S', 0,
  /* 2167 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'S', 0,
  /* 2176 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 2182 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 2188 */ 'F', 'N', 'M', 'U', 'L', 'S', 0,
  /* 2195 */ 'F', 'Z', 'E', 'R', 'O', 'S', 0,
  /* 2202 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 2208 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 2214 */ 'F', 'Q', 'T', 'O', 'S', 0,
  /* 2220 */ 'M', 'O', 'V', 'W', 'T', 'O', 'S', 0,
  /* 2228 */ 'F', 'X', 'T', 'O', 'S', 0,
  /* 2234 */ 'V', '9', 'F', 'C', 'M', 'P', 'S', 0,
  /* 2242 */ 'F', 'L', 'C', 'M', 'P', 'S', 0,
  /* 2249 */ 'F', 'O', 'R', 'S', 0,
  /* 2254 */ 'F', 'N', 'O', 'R', 'S', 0,
  /* 2260 */ 'F', 'X', 'N', 'O', 'R', 'S', 0,
  /* 2267 */ 'F', 'X', 'O', 'R', 'S', 0,
  /* 2273 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2290 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 2296 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 2303 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 2309 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 2315 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'S', 0,
  /* 2325 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'S', 0,
  /* 2335 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'S', 0,
  /* 2344 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'S', 0,
  /* 2353 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'S', 0,
  /* 2362 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'S', 0,
  /* 2370 */ 'R', 'E', 'T', 0,
  /* 2374 */ 'S', 'E', 'T', 0,
  /* 2378 */ 'B', 'P', 'F', 'C', 'C', 'A', 'N', 'T', 0,
  /* 2387 */ 'B', 'P', 'I', 'C', 'C', 'A', 'N', 'T', 0,
  /* 2396 */ 'B', 'P', 'X', 'C', 'C', 'A', 'N', 'T', 0,
  /* 2405 */ 'B', 'P', 'F', 'C', 'C', 'N', 'T', 0,
  /* 2413 */ 'B', 'P', 'I', 'C', 'C', 'N', 'T', 0,
  /* 2421 */ 'B', 'P', 'X', 'C', 'C', 'N', 'T', 0,
  /* 2429 */ 'L', 'Z', 'C', 'N', 'T', 0,
  /* 2435 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 2446 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 2457 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 2472 */ 'P', 'D', 'I', 'S', 'T', 0,
  /* 2478 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'U', 0,
  /* 2489 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 2496 */ 'M', 'O', 'V', 'S', 'T', 'O', 'S', 'W', 0,
  /* 2505 */ 'M', 'O', 'V', 'S', 'T', 'O', 'U', 'W', 0,
  /* 2514 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 2521 */ 'F', 'P', 'A', 'C', 'K', 'F', 'I', 'X', 0,
  /* 2530 */ 'X', 'M', 'U', 'L', 'X', 0,
  /* 2536 */ 'F', 'D', 'T', 'O', 'X', 0,
  /* 2542 */ 'M', 'O', 'V', 'D', 'T', 'O', 'X', 0,
  /* 2550 */ 'F', 'Q', 'T', 'O', 'X', 0,
  /* 2556 */ 'F', 'S', 'T', 'O', 'X', 0,
  /* 2562 */ 'C', 'O', 'P', 'Y', 0,
  /* 2567 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 2574 */ 'M', 'E', 'M', 'B', 'A', 'R', 'i', 0,
  /* 2582 */ 'S', 'E', 'T', 'H', 'I', 'X', 'i', 0,
  /* 2590 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 2596 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 2603 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 2609 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 2616 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 2622 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'i', 0,
  /* 2631 */ 'S', 'U', 'B', 'C', 'r', 'i', 0,
  /* 2638 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 2647 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 2656 */ 'A', 'N', 'D', 'C', 'C', 'r', 'i', 0,
  /* 2664 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 2675 */ 'T', 'I', 'C', 'C', 'r', 'i', 0,
  /* 2682 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 2691 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 2700 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 2709 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'i', 0,
  /* 2718 */ 'O', 'R', 'N', 'C', 'C', 'r', 'i', 0,
  /* 2726 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 2735 */ 'X', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 2743 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 2752 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 2761 */ 'T', 'X', 'C', 'C', 'r', 'i', 0,
  /* 2768 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'i', 0,
  /* 2777 */ 'A', 'D', 'D', 'C', 'r', 'i', 0,
  /* 2784 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 2794 */ 'L', 'E', 'A', 'X', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 2805 */ 'L', 'D', 'D', 'r', 'i', 0,
  /* 2811 */ 'L', 'D', 'r', 'i', 0,
  /* 2816 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 2822 */ 'B', 'I', 'N', 'D', 'r', 'i', 0,
  /* 2829 */ 'S', 'T', 'D', 'r', 'i', 0,
  /* 2835 */ 'S', 'U', 'B', 'E', 'r', 'i', 0,
  /* 2842 */ 'A', 'D', 'D', 'E', 'r', 'i', 0,
  /* 2849 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 2859 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 2866 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 2873 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 2879 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 2886 */ 'L', 'D', 'Q', 'F', 'r', 'i', 0,
  /* 2893 */ 'S', 'T', 'Q', 'F', 'r', 'i', 0,
  /* 2900 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 2906 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 2913 */ 'F', 'L', 'U', 'S', 'H', 'r', 'i', 0,
  /* 2921 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 2927 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 2934 */ 'C', 'A', 'L', 'L', 'r', 'i', 0,
  /* 2941 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 2947 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 2954 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 2960 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 2967 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 2974 */ 'W', 'R', 'W', 'I', 'M', 'r', 'i', 0,
  /* 2982 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 2989 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 2995 */ 'S', 'W', 'A', 'P', 'r', 'i', 0,
  /* 3002 */ 'C', 'M', 'P', 'r', 'i', 0,
  /* 3008 */ 'W', 'R', 'T', 'B', 'R', 'r', 'i', 0,
  /* 3016 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 3023 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 3029 */ 'W', 'R', 'A', 'S', 'R', 'r', 'i', 0,
  /* 3037 */ 'L', 'D', 'F', 'S', 'R', 'r', 'i', 0,
  /* 3045 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 3054 */ 'W', 'R', 'P', 'S', 'R', 'r', 'i', 0,
  /* 3062 */ 'S', 'T', 'r', 'i', 0,
  /* 3067 */ 'R', 'E', 'T', 'T', 'r', 'i', 0,
  /* 3074 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 3081 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 3088 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 3099 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 3110 */ 'L', 'D', 'S', 'W', 'r', 'i', 0,
  /* 3117 */ 'S', 'R', 'A', 'X', 'r', 'i', 0,
  /* 3124 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 3131 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 3138 */ 'L', 'D', 'X', 'r', 'i', 0,
  /* 3144 */ 'A', 'N', 'D', 'X', 'r', 'i', 0,
  /* 3151 */ 'S', 'L', 'L', 'X', 'r', 'i', 0,
  /* 3158 */ 'S', 'R', 'L', 'X', 'r', 'i', 0,
  /* 3165 */ 'M', 'U', 'L', 'X', 'r', 'i', 0,
  /* 3172 */ 'X', 'O', 'R', 'X', 'r', 'i', 0,
  /* 3179 */ 'S', 'T', 'X', 'r', 'i', 0,
  /* 3185 */ 'S', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 3193 */ 'U', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 3201 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'i', 0,
  /* 3211 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'i', 0,
  /* 3221 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'i', 0,
  /* 3230 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'i', 0,
  /* 3239 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'i', 0,
  /* 3248 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'i', 0,
  /* 3257 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 3266 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 3275 */ 'B', 'P', 'G', 'Z', 'a', 'p', 'n', 0,
  /* 3283 */ 'B', 'P', 'L', 'Z', 'a', 'p', 'n', 0,
  /* 3291 */ 'B', 'P', 'N', 'Z', 'a', 'p', 'n', 0,
  /* 3299 */ 'B', 'P', 'Z', 'a', 'p', 'n', 0,
  /* 3306 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3316 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3326 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3335 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3344 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3353 */ 'B', 'P', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 3361 */ 'L', 'D', 'S', 'B', 'A', 'r', 'r', 0,
  /* 3369 */ 'S', 'T', 'B', 'A', 'r', 'r', 0,
  /* 3376 */ 'L', 'D', 'U', 'B', 'A', 'r', 'r', 0,
  /* 3384 */ 'L', 'D', 'S', 'T', 'U', 'B', 'A', 'r', 'r', 0,
  /* 3394 */ 'L', 'D', 'D', 'A', 'r', 'r', 0,
  /* 3401 */ 'L', 'D', 'A', 'r', 'r', 0,
  /* 3407 */ 'S', 'T', 'D', 'A', 'r', 'r', 0,
  /* 3414 */ 'L', 'D', 'D', 'F', 'A', 'r', 'r', 0,
  /* 3422 */ 'L', 'D', 'F', 'A', 'r', 'r', 0,
  /* 3429 */ 'S', 'T', 'D', 'F', 'A', 'r', 'r', 0,
  /* 3437 */ 'L', 'D', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 3445 */ 'S', 'T', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 3453 */ 'S', 'T', 'F', 'A', 'r', 'r', 0,
  /* 3460 */ 'L', 'D', 'S', 'H', 'A', 'r', 'r', 0,
  /* 3468 */ 'S', 'T', 'H', 'A', 'r', 'r', 0,
  /* 3475 */ 'L', 'D', 'U', 'H', 'A', 'r', 'r', 0,
  /* 3483 */ 'S', 'W', 'A', 'P', 'A', 'r', 'r', 0,
  /* 3491 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 3497 */ 'S', 'T', 'A', 'r', 'r', 0,
  /* 3503 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 3510 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 3516 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 3523 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 3529 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'r', 0,
  /* 3538 */ 'S', 'U', 'B', 'C', 'r', 'r', 0,
  /* 3545 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 3554 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 3563 */ 'A', 'N', 'D', 'C', 'C', 'r', 'r', 0,
  /* 3571 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 3582 */ 'T', 'I', 'C', 'C', 'r', 'r', 0,
  /* 3589 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 3598 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 3607 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 3616 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'r', 0,
  /* 3625 */ 'O', 'R', 'N', 'C', 'C', 'r', 'r', 0,
  /* 3633 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 3642 */ 'X', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 3650 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 3659 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 3668 */ 'T', 'X', 'C', 'C', 'r', 'r', 0,
  /* 3675 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'r', 0,
  /* 3684 */ 'A', 'D', 'D', 'C', 'r', 'r', 0,
  /* 3691 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 3698 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'r', 'r', 0,
  /* 3708 */ 'L', 'D', 'D', 'r', 'r', 0,
  /* 3714 */ 'T', 'L', 'S', '_', 'L', 'D', 'r', 'r', 0,
  /* 3723 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 3729 */ 'B', 'I', 'N', 'D', 'r', 'r', 0,
  /* 3736 */ 'S', 'T', 'D', 'r', 'r', 0,
  /* 3742 */ 'S', 'U', 'B', 'E', 'r', 'r', 0,
  /* 3749 */ 'A', 'D', 'D', 'E', 'r', 'r', 0,
  /* 3756 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 3766 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 3773 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 3780 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 3786 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 3793 */ 'L', 'D', 'Q', 'F', 'r', 'r', 0,
  /* 3800 */ 'S', 'T', 'Q', 'F', 'r', 'r', 0,
  /* 3807 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 3813 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 3820 */ 'F', 'L', 'U', 'S', 'H', 'r', 'r', 0,
  /* 3828 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 3834 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 3841 */ 'C', 'A', 'L', 'L', 'r', 'r', 0,
  /* 3848 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 3854 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 3861 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 3867 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 3874 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 3881 */ 'W', 'R', 'W', 'I', 'M', 'r', 'r', 0,
  /* 3889 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 3896 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 3902 */ 'A', 'N', 'D', 'X', 'N', 'r', 'r', 0,
  /* 3910 */ 'O', 'R', 'X', 'N', 'r', 'r', 0,
  /* 3917 */ 'S', 'W', 'A', 'P', 'r', 'r', 0,
  /* 3924 */ 'C', 'M', 'P', 'r', 'r', 0,
  /* 3930 */ 'W', 'R', 'T', 'B', 'R', 'r', 'r', 0,
  /* 3938 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 3945 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 3951 */ 'W', 'R', 'A', 'S', 'R', 'r', 'r', 0,
  /* 3959 */ 'L', 'D', 'F', 'S', 'R', 'r', 'r', 0,
  /* 3967 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 3976 */ 'W', 'R', 'P', 'S', 'R', 'r', 'r', 0,
  /* 3984 */ 'C', 'A', 'S', 'r', 'r', 0,
  /* 3990 */ 'S', 'T', 'r', 'r', 0,
  /* 3995 */ 'R', 'E', 'T', 'T', 'r', 'r', 0,
  /* 4002 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 4009 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 4016 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 4027 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 4038 */ 'L', 'D', 'S', 'W', 'r', 'r', 0,
  /* 4045 */ 'S', 'R', 'A', 'X', 'r', 'r', 0,
  /* 4052 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 4059 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 4070 */ 'T', 'L', 'S', '_', 'L', 'D', 'X', 'r', 'r', 0,
  /* 4080 */ 'A', 'N', 'D', 'X', 'r', 'r', 0,
  /* 4087 */ 'S', 'L', 'L', 'X', 'r', 'r', 0,
  /* 4094 */ 'S', 'R', 'L', 'X', 'r', 'r', 0,
  /* 4101 */ 'M', 'U', 'L', 'X', 'r', 'r', 0,
  /* 4108 */ 'X', 'N', 'O', 'R', 'X', 'r', 'r', 0,
  /* 4116 */ 'X', 'O', 'R', 'X', 'r', 'r', 0,
  /* 4123 */ 'C', 'A', 'S', 'X', 'r', 'r', 0,
  /* 4130 */ 'S', 'T', 'X', 'r', 'r', 0,
  /* 4136 */ 'S', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 4144 */ 'U', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 4152 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'r', 0,
  /* 4162 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'r', 0,
  /* 4172 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'r', 0,
  /* 4181 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'r', 0,
  /* 4190 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'r', 0,
  /* 4199 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'r', 0,
  /* 4208 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 't', 0,
  /* 4217 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 't', 0,
  /* 4226 */ 'B', 'P', 'G', 'Z', 'a', 'p', 't', 0,
  /* 4234 */ 'B', 'P', 'L', 'Z', 'a', 'p', 't', 0,
  /* 4242 */ 'B', 'P', 'N', 'Z', 'a', 'p', 't', 0,
  /* 4250 */ 'B', 'P', 'Z', 'a', 'p', 't', 0,
  /* 4257 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4267 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4277 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4286 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4295 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 't', 0,
  /* 4304 */ 'B', 'P', 'Z', 'n', 'a', 'p', 't', 0,
};

extern const unsigned SparcInstrNameIndices[] = {
    1497U, 1634U, 1693U, 1584U, 1575U, 1602U, 1448U, 1463U, 
    1435U, 1477U, 2273U, 1425U, 1370U, 2562U, 1391U, 2457U, 
    1206U, 1748U, 2446U, 1273U, 2435U, 1412U, 1767U, 2648U, 
    3555U, 2777U, 3684U, 2842U, 3749U, 1097U, 833U, 3131U, 
    4063U, 2788U, 3702U, 1716U, 1784U, 1963U, 1607U, 2656U, 
    3563U, 2709U, 3616U, 2982U, 3889U, 3902U, 3144U, 4080U, 
    2816U, 3723U, 761U, 133U, 782U, 160U, 393U, 199U, 
    432U, 314U, 562U, 238U, 471U, 179U, 412U, 276U, 
    524U, 141U, 374U, 294U, 542U, 218U, 451U, 257U, 
    505U, 490U, 789U, 1220U, 814U, 2822U, 3729U, 1535U, 
    841U, 792U, 2378U, 2405U, 3257U, 4208U, 3306U, 4257U, 
    3275U, 4226U, 3326U, 4277U, 954U, 799U, 2387U, 2413U, 
    3266U, 4217U, 3316U, 4267U, 3283U, 4234U, 3335U, 4286U, 
    3291U, 4242U, 3344U, 4295U, 1061U, 806U, 2396U, 2421U, 
    3299U, 4250U, 3353U, 4304U, 1398U, 1597U, 2934U, 3841U, 
    4123U, 3984U, 641U, 85U, 775U, 3002U, 3924U, 608U, 
    1549U, 1676U, 1652U, 52U, 1541U, 1667U, 1644U, 769U, 
    1557U, 1685U, 1660U, 1290U, 1871U, 2290U, 1116U, 1805U, 
    2120U, 821U, 1187U, 6U, 2012U, 339U, 2063U, 2148U, 
    1219U, 813U, 663U, 1260U, 680U, 107U, 697U, 124U, 
    615U, 59U, 624U, 68U, 1865U, 2236U, 1303U, 1884U, 
    2303U, 1826U, 1517U, 1839U, 2202U, 2536U, 1198U, 1122U, 
    2126U, 1109U, 2113U, 1226U, 1845U, 2208U, 1266U, 2242U, 
    1491U, 2489U, 2913U, 3820U, 672U, 1309U, 849U, 960U, 
    1067U, 1890U, 914U, 1023U, 1077U, 1315U, 1896U, 2315U, 
    1335U, 1916U, 2335U, 1325U, 1906U, 2325U, 1344U, 1925U, 
    2344U, 1353U, 1934U, 2353U, 1362U, 1943U, 2362U, 2309U, 
    926U, 1033U, 1087U, 750U, 727U, 706U, 1564U, 2478U, 
    1159U, 738U, 715U, 1833U, 2182U, 1137U, 2141U, 1192U, 
    2154U, 1153U, 1820U, 2176U, 1129U, 2133U, 1165U, 2188U, 
    1977U, 2254U, 15U, 2022U, 348U, 2073U, 1179U, 1407U, 
    2161U, 1973U, 21U, 2029U, 354U, 2080U, 2249U, 633U, 
    77U, 2521U, 600U, 2098U, 44U, 2047U, 366U, 1383U, 
    592U, 2089U, 36U, 2038U, 1232U, 1523U, 2214U, 2550U, 
    689U, 116U, 649U, 93U, 1172U, 1296U, 1877U, 2296U, 
    585U, 29U, 0U, 2005U, 333U, 2056U, 656U, 100U, 
    1238U, 1529U, 1851U, 2556U, 1103U, 1799U, 2107U, 1982U, 
    2260U, 1988U, 2267U, 1244U, 1857U, 2228U, 1742U, 2195U, 
    2514U, 2947U, 3854U, 3401U, 3394U, 3414U, 2866U, 3773U, 
    2805U, 3708U, 3422U, 3037U, 3959U, 2873U, 3780U, 3437U, 
    2886U, 3793U, 3361U, 2596U, 3503U, 3460U, 2906U, 3813U, 
    3384U, 2622U, 3529U, 3110U, 4038U, 3376U, 2609U, 3516U, 
    3475U, 2927U, 3834U, 3045U, 3967U, 3138U, 4074U, 2811U, 
    3718U, 2794U, 2784U, 2429U, 2574U, 2542U, 2666U, 3573U, 
    2682U, 3589U, 3201U, 4152U, 3221U, 4172U, 3211U, 4162U, 
    3230U, 4181U, 3239U, 4190U, 3248U, 4199U, 2496U, 2505U, 
    2220U, 2768U, 3675U, 1250U, 3165U, 4101U, 1763U, 2728U, 
    3635U, 2718U, 3625U, 2989U, 3896U, 3910U, 3173U, 4110U, 
    3018U, 3940U, 2472U, 1709U, 3691U, 1993U, 1999U, 1957U, 
    1628U, 2849U, 3756U, 2370U, 1618U, 3067U, 3995U, 2859U, 
    3766U, 2743U, 3650U, 3185U, 4136U, 3074U, 4002U, 859U, 
    970U, 895U, 1006U, 936U, 1043U, 877U, 988U, 2374U, 
    2582U, 2567U, 1733U, 1623U, 3151U, 4087U, 2941U, 3848U, 
    2691U, 3598U, 2960U, 3867U, 3117U, 4045U, 2590U, 3491U, 
    3158U, 4094U, 2954U, 3861U, 3497U, 1951U, 3369U, 2603U, 
    3510U, 3407U, 3429U, 2879U, 3786U, 2829U, 3736U, 3453U, 
    2900U, 3807U, 3468U, 2921U, 3828U, 3445U, 2893U, 3800U, 
    3179U, 4130U, 3062U, 3990U, 2639U, 3546U, 2631U, 3538U, 
    2835U, 3742U, 3124U, 4052U, 2616U, 3523U, 3483U, 2995U, 
    3917U, 362U, 581U, 3099U, 4027U, 2647U, 3554U, 2675U, 
    3582U, 4059U, 3698U, 1593U, 4070U, 3714U, 3088U, 4016U, 
    2638U, 3545U, 2761U, 3668U, 2752U, 3659U, 3193U, 4144U, 
    3081U, 4009U, 2700U, 3607U, 1501U, 2967U, 3874U, 1757U, 
    1258U, 1144U, 1811U, 2167U, 1863U, 2234U, 847U, 912U, 
    924U, 2664U, 3571U, 3029U, 3951U, 3054U, 3976U, 3008U, 
    3930U, 2974U, 3881U, 2530U, 1509U, 2726U, 3633U, 4108U, 
    3016U, 3938U, 2735U, 3642U, 3172U, 4116U, 3023U, 3945U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 536);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~SparcGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 536);
}
SparcGenInstrInfo::~SparcGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace SP
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace SP
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes { 
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  TLSSym = 3,
  bprtarget = 4,
  bprtarget16 = 5,
  brtarget = 6,
  calltarget = 7,
  f32imm = 8,
  f64imm = 9,
  getPCX = 10,
  i16imm = 11,
  i1imm = 12,
  i32imm = 13,
  i64imm = 14,
  i8imm = 15,
  simm13Op = 16,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace SP
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
