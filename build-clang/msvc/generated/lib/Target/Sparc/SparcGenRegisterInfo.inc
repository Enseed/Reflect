/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM
namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass SPMCRegisterClasses[];

namespace SP {
enum {
  NoRegister,
  FSR = 1,
  ICC = 2,
  PSR = 3,
  TBR = 4,
  WIM = 5,
  Y = 6,
  ASR1 = 7,
  ASR2 = 8,
  ASR3 = 9,
  ASR4 = 10,
  ASR5 = 11,
  ASR6 = 12,
  ASR7 = 13,
  ASR8 = 14,
  ASR9 = 15,
  ASR10 = 16,
  ASR11 = 17,
  ASR12 = 18,
  ASR13 = 19,
  ASR14 = 20,
  ASR15 = 21,
  ASR16 = 22,
  ASR17 = 23,
  ASR18 = 24,
  ASR19 = 25,
  ASR20 = 26,
  ASR21 = 27,
  ASR22 = 28,
  ASR23 = 29,
  ASR24 = 30,
  ASR25 = 31,
  ASR26 = 32,
  ASR27 = 33,
  ASR28 = 34,
  ASR29 = 35,
  ASR30 = 36,
  ASR31 = 37,
  D0 = 38,
  D1 = 39,
  D2 = 40,
  D3 = 41,
  D4 = 42,
  D5 = 43,
  D6 = 44,
  D7 = 45,
  D8 = 46,
  D9 = 47,
  D10 = 48,
  D11 = 49,
  D12 = 50,
  D13 = 51,
  D14 = 52,
  D15 = 53,
  D16 = 54,
  D17 = 55,
  D18 = 56,
  D19 = 57,
  D20 = 58,
  D21 = 59,
  D22 = 60,
  D23 = 61,
  D24 = 62,
  D25 = 63,
  D26 = 64,
  D27 = 65,
  D28 = 66,
  D29 = 67,
  D30 = 68,
  D31 = 69,
  F0 = 70,
  F1 = 71,
  F2 = 72,
  F3 = 73,
  F4 = 74,
  F5 = 75,
  F6 = 76,
  F7 = 77,
  F8 = 78,
  F9 = 79,
  F10 = 80,
  F11 = 81,
  F12 = 82,
  F13 = 83,
  F14 = 84,
  F15 = 85,
  F16 = 86,
  F17 = 87,
  F18 = 88,
  F19 = 89,
  F20 = 90,
  F21 = 91,
  F22 = 92,
  F23 = 93,
  F24 = 94,
  F25 = 95,
  F26 = 96,
  F27 = 97,
  F28 = 98,
  F29 = 99,
  F30 = 100,
  F31 = 101,
  FCC0 = 102,
  FCC1 = 103,
  FCC2 = 104,
  FCC3 = 105,
  G0 = 106,
  G1 = 107,
  G2 = 108,
  G3 = 109,
  G4 = 110,
  G5 = 111,
  G6 = 112,
  G7 = 113,
  I0 = 114,
  I1 = 115,
  I2 = 116,
  I3 = 117,
  I4 = 118,
  I5 = 119,
  I6 = 120,
  I7 = 121,
  L0 = 122,
  L1 = 123,
  L2 = 124,
  L3 = 125,
  L4 = 126,
  L5 = 127,
  L6 = 128,
  L7 = 129,
  O0 = 130,
  O1 = 131,
  O2 = 132,
  O3 = 133,
  O4 = 134,
  O5 = 135,
  O6 = 136,
  O7 = 137,
  Q0 = 138,
  Q1 = 139,
  Q2 = 140,
  Q3 = 141,
  Q4 = 142,
  Q5 = 143,
  Q6 = 144,
  Q7 = 145,
  Q8 = 146,
  Q9 = 147,
  Q10 = 148,
  Q11 = 149,
  Q12 = 150,
  Q13 = 151,
  Q14 = 152,
  Q15 = 153,
  G0_G1 = 154,
  G2_G3 = 155,
  G4_G5 = 156,
  G6_G7 = 157,
  I0_I1 = 158,
  I2_I3 = 159,
  I4_I5 = 160,
  I6_I7 = 161,
  L0_L1 = 162,
  L2_L3 = 163,
  L4_L5 = 164,
  L6_L7 = 165,
  O0_O1 = 166,
  O2_O3 = 167,
  O4_O5 = 168,
  O6_O7 = 169,
  NUM_TARGET_REGS 	// 170
};
}

// Register classes
namespace SP {
enum {
  FCCRegsRegClassID = 0,
  ASRRegsRegClassID = 1,
  FPRegsRegClassID = 2,
  IntRegsRegClassID = 3,
  DFPRegsRegClassID = 4,
  I64RegsRegClassID = 5,
  DFPRegs_with_sub_evenRegClassID = 6,
  IntPairRegClassID = 7,
  QFPRegsRegClassID = 8,
  QFPRegs_with_sub_evenRegClassID = 9,

  };
}

// Subregister indices
namespace SP {
enum {
  NoSubRegister,
  sub_even,	// 1
  sub_even64,	// 2
  sub_odd,	// 3
  sub_odd64,	// 4
  sub_odd64_then_sub_even,	// 5
  sub_odd64_then_sub_odd,	// 6
  NUM_TARGET_SUBREGS
};
}
} // End llvm namespace
#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC
namespace llvm {

extern const MCPhysReg SparcRegDiffLists[] = {
  /* 0 */ 65021, 1, 1, 1, 0,
  /* 5 */ 32, 1, 0,
  /* 8 */ 65436, 32, 1, 65504, 33, 1, 0,
  /* 15 */ 34, 1, 0,
  /* 18 */ 65437, 34, 1, 65502, 35, 1, 0,
  /* 25 */ 36, 1, 0,
  /* 28 */ 65438, 36, 1, 65500, 37, 1, 0,
  /* 35 */ 38, 1, 0,
  /* 38 */ 65439, 38, 1, 65498, 39, 1, 0,
  /* 45 */ 40, 1, 0,
  /* 48 */ 65440, 40, 1, 65496, 41, 1, 0,
  /* 55 */ 42, 1, 0,
  /* 58 */ 65441, 42, 1, 65494, 43, 1, 0,
  /* 65 */ 44, 1, 0,
  /* 68 */ 65442, 44, 1, 65492, 45, 1, 0,
  /* 75 */ 46, 1, 0,
  /* 78 */ 65443, 46, 1, 65490, 47, 1, 0,
  /* 85 */ 65313, 1, 0,
  /* 88 */ 65317, 1, 0,
  /* 91 */ 65444, 1, 0,
  /* 94 */ 65445, 1, 0,
  /* 97 */ 65446, 1, 0,
  /* 100 */ 65447, 1, 0,
  /* 103 */ 65448, 1, 0,
  /* 106 */ 65449, 1, 0,
  /* 109 */ 65450, 1, 0,
  /* 112 */ 65451, 1, 0,
  /* 115 */ 65488, 1, 0,
  /* 118 */ 65489, 1, 0,
  /* 121 */ 65490, 1, 0,
  /* 124 */ 65491, 1, 0,
  /* 127 */ 65492, 1, 0,
  /* 130 */ 65493, 1, 0,
  /* 133 */ 65494, 1, 0,
  /* 136 */ 65495, 1, 0,
  /* 139 */ 65496, 1, 0,
  /* 142 */ 65497, 1, 0,
  /* 145 */ 65498, 1, 0,
  /* 148 */ 65499, 1, 0,
  /* 151 */ 65500, 1, 0,
  /* 154 */ 65501, 1, 0,
  /* 157 */ 65502, 1, 0,
  /* 160 */ 65503, 1, 0,
  /* 163 */ 15, 0,
  /* 165 */ 32, 0,
  /* 167 */ 33, 0,
  /* 169 */ 34, 0,
  /* 171 */ 35, 0,
  /* 173 */ 36, 0,
  /* 175 */ 37, 0,
  /* 177 */ 38, 0,
  /* 179 */ 39, 0,
  /* 181 */ 40, 0,
  /* 183 */ 41, 0,
  /* 185 */ 42, 0,
  /* 187 */ 43, 0,
  /* 189 */ 44, 0,
  /* 191 */ 45, 0,
  /* 193 */ 46, 0,
  /* 195 */ 47, 0,
  /* 197 */ 48, 0,
  /* 199 */ 84, 0,
  /* 201 */ 85, 0,
  /* 203 */ 86, 0,
  /* 205 */ 87, 0,
  /* 207 */ 88, 0,
  /* 209 */ 89, 0,
  /* 211 */ 90, 0,
  /* 213 */ 91, 0,
  /* 215 */ 65488, 92, 0,
  /* 218 */ 65489, 92, 0,
  /* 221 */ 65489, 93, 0,
  /* 224 */ 65490, 93, 0,
  /* 227 */ 65491, 93, 0,
  /* 230 */ 65491, 94, 0,
  /* 233 */ 65492, 94, 0,
  /* 236 */ 65493, 94, 0,
  /* 239 */ 65493, 95, 0,
  /* 242 */ 65494, 95, 0,
  /* 245 */ 65495, 95, 0,
  /* 248 */ 65495, 96, 0,
  /* 251 */ 65496, 96, 0,
  /* 254 */ 65497, 96, 0,
  /* 257 */ 65497, 97, 0,
  /* 260 */ 65498, 97, 0,
  /* 263 */ 65499, 97, 0,
  /* 266 */ 65499, 98, 0,
  /* 269 */ 65500, 98, 0,
  /* 272 */ 65501, 98, 0,
  /* 275 */ 65501, 99, 0,
  /* 278 */ 65502, 99, 0,
  /* 281 */ 65503, 99, 0,
  /* 284 */ 65503, 100, 0,
  /* 287 */ 65504, 100, 0,
  /* 290 */ 65503, 0,
  /* 292 */ 65519, 0,
  /* 294 */ 65535, 0,
};

extern const unsigned SparcLaneMaskLists[] = {
  /* 0 */ 0x00000000, ~0u,
  /* 2 */ 0x00000001, 0x00000002, ~0u,
  /* 5 */ 0x00000001, 0x00000002, 0x00000004, 0x00000008, ~0u,
  /* 10 */ 0x00000003, 0x0000000C, ~0u,
};

extern const uint16_t SparcSubRegIdxLists[] = {
  /* 0 */ 1, 3, 0,
  /* 3 */ 2, 4, 0,
  /* 6 */ 2, 1, 3, 4, 5, 6, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits SparcSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_even
  { 0, 64 },	// sub_even64
  { 32, 32 },	// sub_odd
  { 64, 64 },	// sub_odd64
  { 64, 32 },	// sub_odd64_then_sub_even
  { 96, 32 },	// sub_odd64_then_sub_odd
};

extern const char SparcRegStrings[] = {
  /* 0 */ 'D', '1', '0', 0,
  /* 4 */ 'F', '1', '0', 0,
  /* 8 */ 'Q', '1', '0', 0,
  /* 12 */ 'A', 'S', 'R', '1', '0', 0,
  /* 18 */ 'D', '2', '0', 0,
  /* 22 */ 'F', '2', '0', 0,
  /* 26 */ 'A', 'S', 'R', '2', '0', 0,
  /* 32 */ 'D', '3', '0', 0,
  /* 36 */ 'F', '3', '0', 0,
  /* 40 */ 'A', 'S', 'R', '3', '0', 0,
  /* 46 */ 'F', 'C', 'C', '0', 0,
  /* 51 */ 'D', '0', 0,
  /* 54 */ 'F', '0', 0,
  /* 57 */ 'G', '0', 0,
  /* 60 */ 'I', '0', 0,
  /* 63 */ 'L', '0', 0,
  /* 66 */ 'O', '0', 0,
  /* 69 */ 'Q', '0', 0,
  /* 72 */ 'D', '1', '1', 0,
  /* 76 */ 'F', '1', '1', 0,
  /* 80 */ 'Q', '1', '1', 0,
  /* 84 */ 'A', 'S', 'R', '1', '1', 0,
  /* 90 */ 'D', '2', '1', 0,
  /* 94 */ 'F', '2', '1', 0,
  /* 98 */ 'A', 'S', 'R', '2', '1', 0,
  /* 104 */ 'D', '3', '1', 0,
  /* 108 */ 'F', '3', '1', 0,
  /* 112 */ 'A', 'S', 'R', '3', '1', 0,
  /* 118 */ 'F', 'C', 'C', '1', 0,
  /* 123 */ 'D', '1', 0,
  /* 126 */ 'F', '1', 0,
  /* 129 */ 'G', '0', '_', 'G', '1', 0,
  /* 135 */ 'I', '0', '_', 'I', '1', 0,
  /* 141 */ 'L', '0', '_', 'L', '1', 0,
  /* 147 */ 'O', '0', '_', 'O', '1', 0,
  /* 153 */ 'Q', '1', 0,
  /* 156 */ 'A', 'S', 'R', '1', 0,
  /* 161 */ 'D', '1', '2', 0,
  /* 165 */ 'F', '1', '2', 0,
  /* 169 */ 'Q', '1', '2', 0,
  /* 173 */ 'A', 'S', 'R', '1', '2', 0,
  /* 179 */ 'D', '2', '2', 0,
  /* 183 */ 'F', '2', '2', 0,
  /* 187 */ 'A', 'S', 'R', '2', '2', 0,
  /* 193 */ 'F', 'C', 'C', '2', 0,
  /* 198 */ 'D', '2', 0,
  /* 201 */ 'F', '2', 0,
  /* 204 */ 'G', '2', 0,
  /* 207 */ 'I', '2', 0,
  /* 210 */ 'L', '2', 0,
  /* 213 */ 'O', '2', 0,
  /* 216 */ 'Q', '2', 0,
  /* 219 */ 'A', 'S', 'R', '2', 0,
  /* 224 */ 'D', '1', '3', 0,
  /* 228 */ 'F', '1', '3', 0,
  /* 232 */ 'Q', '1', '3', 0,
  /* 236 */ 'A', 'S', 'R', '1', '3', 0,
  /* 242 */ 'D', '2', '3', 0,
  /* 246 */ 'F', '2', '3', 0,
  /* 250 */ 'A', 'S', 'R', '2', '3', 0,
  /* 256 */ 'F', 'C', 'C', '3', 0,
  /* 261 */ 'D', '3', 0,
  /* 264 */ 'F', '3', 0,
  /* 267 */ 'G', '2', '_', 'G', '3', 0,
  /* 273 */ 'I', '2', '_', 'I', '3', 0,
  /* 279 */ 'L', '2', '_', 'L', '3', 0,
  /* 285 */ 'O', '2', '_', 'O', '3', 0,
  /* 291 */ 'Q', '3', 0,
  /* 294 */ 'A', 'S', 'R', '3', 0,
  /* 299 */ 'D', '1', '4', 0,
  /* 303 */ 'F', '1', '4', 0,
  /* 307 */ 'Q', '1', '4', 0,
  /* 311 */ 'A', 'S', 'R', '1', '4', 0,
  /* 317 */ 'D', '2', '4', 0,
  /* 321 */ 'F', '2', '4', 0,
  /* 325 */ 'A', 'S', 'R', '2', '4', 0,
  /* 331 */ 'D', '4', 0,
  /* 334 */ 'F', '4', 0,
  /* 337 */ 'G', '4', 0,
  /* 340 */ 'I', '4', 0,
  /* 343 */ 'L', '4', 0,
  /* 346 */ 'O', '4', 0,
  /* 349 */ 'Q', '4', 0,
  /* 352 */ 'A', 'S', 'R', '4', 0,
  /* 357 */ 'D', '1', '5', 0,
  /* 361 */ 'F', '1', '5', 0,
  /* 365 */ 'Q', '1', '5', 0,
  /* 369 */ 'A', 'S', 'R', '1', '5', 0,
  /* 375 */ 'D', '2', '5', 0,
  /* 379 */ 'F', '2', '5', 0,
  /* 383 */ 'A', 'S', 'R', '2', '5', 0,
  /* 389 */ 'D', '5', 0,
  /* 392 */ 'F', '5', 0,
  /* 395 */ 'G', '4', '_', 'G', '5', 0,
  /* 401 */ 'I', '4', '_', 'I', '5', 0,
  /* 407 */ 'L', '4', '_', 'L', '5', 0,
  /* 413 */ 'O', '4', '_', 'O', '5', 0,
  /* 419 */ 'Q', '5', 0,
  /* 422 */ 'A', 'S', 'R', '5', 0,
  /* 427 */ 'D', '1', '6', 0,
  /* 431 */ 'F', '1', '6', 0,
  /* 435 */ 'A', 'S', 'R', '1', '6', 0,
  /* 441 */ 'D', '2', '6', 0,
  /* 445 */ 'F', '2', '6', 0,
  /* 449 */ 'A', 'S', 'R', '2', '6', 0,
  /* 455 */ 'D', '6', 0,
  /* 458 */ 'F', '6', 0,
  /* 461 */ 'G', '6', 0,
  /* 464 */ 'I', '6', 0,
  /* 467 */ 'L', '6', 0,
  /* 470 */ 'O', '6', 0,
  /* 473 */ 'Q', '6', 0,
  /* 476 */ 'A', 'S', 'R', '6', 0,
  /* 481 */ 'D', '1', '7', 0,
  /* 485 */ 'F', '1', '7', 0,
  /* 489 */ 'A', 'S', 'R', '1', '7', 0,
  /* 495 */ 'D', '2', '7', 0,
  /* 499 */ 'F', '2', '7', 0,
  /* 503 */ 'A', 'S', 'R', '2', '7', 0,
  /* 509 */ 'D', '7', 0,
  /* 512 */ 'F', '7', 0,
  /* 515 */ 'G', '6', '_', 'G', '7', 0,
  /* 521 */ 'I', '6', '_', 'I', '7', 0,
  /* 527 */ 'L', '6', '_', 'L', '7', 0,
  /* 533 */ 'O', '6', '_', 'O', '7', 0,
  /* 539 */ 'Q', '7', 0,
  /* 542 */ 'A', 'S', 'R', '7', 0,
  /* 547 */ 'D', '1', '8', 0,
  /* 551 */ 'F', '1', '8', 0,
  /* 555 */ 'A', 'S', 'R', '1', '8', 0,
  /* 561 */ 'D', '2', '8', 0,
  /* 565 */ 'F', '2', '8', 0,
  /* 569 */ 'A', 'S', 'R', '2', '8', 0,
  /* 575 */ 'D', '8', 0,
  /* 578 */ 'F', '8', 0,
  /* 581 */ 'Q', '8', 0,
  /* 584 */ 'A', 'S', 'R', '8', 0,
  /* 589 */ 'D', '1', '9', 0,
  /* 593 */ 'F', '1', '9', 0,
  /* 597 */ 'A', 'S', 'R', '1', '9', 0,
  /* 603 */ 'D', '2', '9', 0,
  /* 607 */ 'F', '2', '9', 0,
  /* 611 */ 'A', 'S', 'R', '2', '9', 0,
  /* 617 */ 'D', '9', 0,
  /* 620 */ 'F', '9', 0,
  /* 623 */ 'Q', '9', 0,
  /* 626 */ 'A', 'S', 'R', '9', 0,
  /* 631 */ 'I', 'C', 'C', 0,
  /* 635 */ 'W', 'I', 'M', 0,
  /* 639 */ 'T', 'B', 'R', 0,
  /* 643 */ 'F', 'S', 'R', 0,
  /* 647 */ 'P', 'S', 'R', 0,
  /* 651 */ 'Y', 0,
};

extern const MCRegisterDesc SparcRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 643, 4, 4, 2, 4705, 0 },
  { 631, 4, 4, 2, 4705, 0 },
  { 647, 4, 4, 2, 4705, 0 },
  { 639, 4, 4, 2, 4705, 0 },
  { 635, 4, 4, 2, 4705, 0 },
  { 651, 4, 4, 2, 4705, 0 },
  { 156, 4, 4, 2, 4705, 0 },
  { 219, 4, 4, 2, 4705, 0 },
  { 294, 4, 4, 2, 4705, 0 },
  { 352, 4, 4, 2, 4705, 0 },
  { 422, 4, 4, 2, 4705, 0 },
  { 476, 4, 4, 2, 4705, 0 },
  { 542, 4, 4, 2, 4705, 0 },
  { 584, 4, 4, 2, 4705, 0 },
  { 626, 4, 4, 2, 4705, 0 },
  { 12, 4, 4, 2, 4705, 0 },
  { 84, 4, 4, 2, 4705, 0 },
  { 173, 4, 4, 2, 4705, 0 },
  { 236, 4, 4, 2, 4705, 0 },
  { 311, 4, 4, 2, 4705, 0 },
  { 369, 4, 4, 2, 4705, 0 },
  { 435, 4, 4, 2, 4705, 0 },
  { 489, 4, 4, 2, 4705, 0 },
  { 555, 4, 4, 2, 4705, 0 },
  { 597, 4, 4, 2, 4705, 0 },
  { 26, 4, 4, 2, 4705, 0 },
  { 98, 4, 4, 2, 4705, 0 },
  { 187, 4, 4, 2, 4705, 0 },
  { 250, 4, 4, 2, 4705, 0 },
  { 325, 4, 4, 2, 4705, 0 },
  { 383, 4, 4, 2, 4705, 0 },
  { 449, 4, 4, 2, 4705, 0 },
  { 503, 4, 4, 2, 4705, 0 },
  { 569, 4, 4, 2, 4705, 0 },
  { 611, 4, 4, 2, 4705, 0 },
  { 40, 4, 4, 2, 4705, 0 },
  { 112, 4, 4, 2, 4705, 0 },
  { 51, 5, 285, 0, 2274, 2 },
  { 123, 12, 276, 0, 2274, 2 },
  { 198, 15, 276, 0, 2274, 2 },
  { 261, 22, 267, 0, 2274, 2 },
  { 331, 25, 267, 0, 2274, 2 },
  { 389, 32, 258, 0, 2274, 2 },
  { 455, 35, 258, 0, 2274, 2 },
  { 509, 42, 249, 0, 2274, 2 },
  { 575, 45, 249, 0, 2274, 2 },
  { 617, 52, 240, 0, 2274, 2 },
  { 0, 55, 240, 0, 2274, 2 },
  { 72, 62, 231, 0, 2274, 2 },
  { 161, 65, 231, 0, 2274, 2 },
  { 224, 72, 222, 0, 2274, 2 },
  { 299, 75, 222, 0, 2274, 2 },
  { 357, 82, 216, 0, 2274, 2 },
  { 427, 4, 216, 2, 2609, 0 },
  { 481, 4, 213, 2, 2609, 0 },
  { 547, 4, 213, 2, 2609, 0 },
  { 589, 4, 211, 2, 2609, 0 },
  { 18, 4, 211, 2, 2609, 0 },
  { 90, 4, 209, 2, 2609, 0 },
  { 179, 4, 209, 2, 2609, 0 },
  { 242, 4, 207, 2, 2609, 0 },
  { 317, 4, 207, 2, 2609, 0 },
  { 375, 4, 205, 2, 2609, 0 },
  { 441, 4, 205, 2, 2609, 0 },
  { 495, 4, 203, 2, 2609, 0 },
  { 561, 4, 203, 2, 2609, 0 },
  { 603, 4, 201, 2, 2609, 0 },
  { 32, 4, 201, 2, 2609, 0 },
  { 104, 4, 199, 2, 2609, 0 },
  { 54, 4, 287, 2, 4641, 0 },
  { 126, 4, 284, 2, 4641, 0 },
  { 201, 4, 281, 2, 4641, 0 },
  { 264, 4, 278, 2, 4641, 0 },
  { 334, 4, 278, 2, 4641, 0 },
  { 392, 4, 275, 2, 4641, 0 },
  { 458, 4, 272, 2, 4641, 0 },
  { 512, 4, 269, 2, 4641, 0 },
  { 578, 4, 269, 2, 4641, 0 },
  { 620, 4, 266, 2, 4641, 0 },
  { 4, 4, 263, 2, 4641, 0 },
  { 76, 4, 260, 2, 4641, 0 },
  { 165, 4, 260, 2, 4641, 0 },
  { 228, 4, 257, 2, 4641, 0 },
  { 303, 4, 254, 2, 4641, 0 },
  { 361, 4, 251, 2, 4641, 0 },
  { 431, 4, 251, 2, 4641, 0 },
  { 485, 4, 248, 2, 4641, 0 },
  { 551, 4, 245, 2, 4641, 0 },
  { 593, 4, 242, 2, 4641, 0 },
  { 22, 4, 242, 2, 4641, 0 },
  { 94, 4, 239, 2, 4641, 0 },
  { 183, 4, 236, 2, 4641, 0 },
  { 246, 4, 233, 2, 4641, 0 },
  { 321, 4, 233, 2, 4641, 0 },
  { 379, 4, 230, 2, 4641, 0 },
  { 445, 4, 227, 2, 4641, 0 },
  { 499, 4, 224, 2, 4641, 0 },
  { 565, 4, 224, 2, 4641, 0 },
  { 607, 4, 221, 2, 4641, 0 },
  { 36, 4, 218, 2, 4641, 0 },
  { 108, 4, 215, 2, 4641, 0 },
  { 46, 4, 4, 2, 4673, 0 },
  { 118, 4, 4, 2, 4673, 0 },
  { 193, 4, 4, 2, 4673, 0 },
  { 256, 4, 4, 2, 4673, 0 },
  { 57, 4, 197, 2, 4673, 0 },
  { 132, 4, 195, 2, 4673, 0 },
  { 204, 4, 195, 2, 4673, 0 },
  { 270, 4, 193, 2, 4673, 0 },
  { 337, 4, 193, 2, 4673, 0 },
  { 398, 4, 191, 2, 4673, 0 },
  { 461, 4, 191, 2, 4673, 0 },
  { 518, 4, 189, 2, 4673, 0 },
  { 60, 4, 189, 2, 4673, 0 },
  { 138, 4, 187, 2, 4673, 0 },
  { 207, 4, 187, 2, 4673, 0 },
  { 276, 4, 185, 2, 4673, 0 },
  { 340, 4, 185, 2, 4673, 0 },
  { 404, 4, 183, 2, 4673, 0 },
  { 464, 4, 183, 2, 4673, 0 },
  { 524, 4, 181, 2, 4673, 0 },
  { 63, 4, 181, 2, 4673, 0 },
  { 144, 4, 179, 2, 4673, 0 },
  { 210, 4, 179, 2, 4673, 0 },
  { 282, 4, 177, 2, 4673, 0 },
  { 343, 4, 177, 2, 4673, 0 },
  { 410, 4, 175, 2, 4673, 0 },
  { 467, 4, 175, 2, 4673, 0 },
  { 530, 4, 173, 2, 4673, 0 },
  { 66, 4, 173, 2, 4673, 0 },
  { 150, 4, 171, 2, 4673, 0 },
  { 213, 4, 171, 2, 4673, 0 },
  { 288, 4, 169, 2, 4673, 0 },
  { 346, 4, 169, 2, 4673, 0 },
  { 416, 4, 167, 2, 4673, 0 },
  { 470, 4, 167, 2, 4673, 0 },
  { 536, 4, 165, 2, 4673, 0 },
  { 69, 8, 4, 6, 4, 5 },
  { 153, 18, 4, 6, 4, 5 },
  { 216, 28, 4, 6, 4, 5 },
  { 291, 38, 4, 6, 4, 5 },
  { 349, 48, 4, 6, 4, 5 },
  { 419, 58, 4, 6, 4, 5 },
  { 473, 68, 4, 6, 4, 5 },
  { 539, 78, 4, 6, 4, 5 },
  { 581, 91, 4, 3, 1362, 10 },
  { 623, 94, 4, 3, 1362, 10 },
  { 8, 97, 4, 3, 1362, 10 },
  { 80, 100, 4, 3, 1362, 10 },
  { 169, 103, 4, 3, 1362, 10 },
  { 232, 106, 4, 3, 1362, 10 },
  { 307, 109, 4, 3, 1362, 10 },
  { 365, 112, 4, 3, 1362, 10 },
  { 129, 115, 4, 0, 1410, 2 },
  { 267, 118, 4, 0, 1410, 2 },
  { 395, 121, 4, 0, 1410, 2 },
  { 515, 124, 4, 0, 1410, 2 },
  { 135, 127, 4, 0, 1410, 2 },
  { 273, 130, 4, 0, 1410, 2 },
  { 401, 133, 4, 0, 1410, 2 },
  { 521, 136, 4, 0, 1410, 2 },
  { 141, 139, 4, 0, 1410, 2 },
  { 279, 142, 4, 0, 1410, 2 },
  { 407, 145, 4, 0, 1410, 2 },
  { 527, 148, 4, 0, 1410, 2 },
  { 147, 151, 4, 0, 1410, 2 },
  { 285, 154, 4, 0, 1410, 2 },
  { 413, 157, 4, 0, 1410, 2 },
  { 533, 160, 4, 0, 1410, 2 },
};

extern const MCPhysReg SparcRegUnitRoots[][2] = {
  { SP::FSR },
  { SP::ICC },
  { SP::PSR },
  { SP::TBR },
  { SP::WIM },
  { SP::Y },
  { SP::ASR1 },
  { SP::ASR2 },
  { SP::ASR3 },
  { SP::ASR4 },
  { SP::ASR5 },
  { SP::ASR6 },
  { SP::ASR7 },
  { SP::ASR8 },
  { SP::ASR9 },
  { SP::ASR10 },
  { SP::ASR11 },
  { SP::ASR12 },
  { SP::ASR13 },
  { SP::ASR14 },
  { SP::ASR15 },
  { SP::ASR16 },
  { SP::ASR17 },
  { SP::ASR18 },
  { SP::ASR19 },
  { SP::ASR20 },
  { SP::ASR21 },
  { SP::ASR22 },
  { SP::ASR23 },
  { SP::ASR24 },
  { SP::ASR25 },
  { SP::ASR26 },
  { SP::ASR27 },
  { SP::ASR28 },
  { SP::ASR29 },
  { SP::ASR30 },
  { SP::ASR31 },
  { SP::F0 },
  { SP::F1 },
  { SP::F2 },
  { SP::F3 },
  { SP::F4 },
  { SP::F5 },
  { SP::F6 },
  { SP::F7 },
  { SP::F8 },
  { SP::F9 },
  { SP::F10 },
  { SP::F11 },
  { SP::F12 },
  { SP::F13 },
  { SP::F14 },
  { SP::F15 },
  { SP::F16 },
  { SP::F17 },
  { SP::F18 },
  { SP::F19 },
  { SP::F20 },
  { SP::F21 },
  { SP::F22 },
  { SP::F23 },
  { SP::F24 },
  { SP::F25 },
  { SP::F26 },
  { SP::F27 },
  { SP::F28 },
  { SP::F29 },
  { SP::F30 },
  { SP::F31 },
  { SP::D16 },
  { SP::D17 },
  { SP::D18 },
  { SP::D19 },
  { SP::D20 },
  { SP::D21 },
  { SP::D22 },
  { SP::D23 },
  { SP::D24 },
  { SP::D25 },
  { SP::D26 },
  { SP::D27 },
  { SP::D28 },
  { SP::D29 },
  { SP::D30 },
  { SP::D31 },
  { SP::FCC0 },
  { SP::FCC1 },
  { SP::FCC2 },
  { SP::FCC3 },
  { SP::G0 },
  { SP::G1 },
  { SP::G2 },
  { SP::G3 },
  { SP::G4 },
  { SP::G5 },
  { SP::G6 },
  { SP::G7 },
  { SP::I0 },
  { SP::I1 },
  { SP::I2 },
  { SP::I3 },
  { SP::I4 },
  { SP::I5 },
  { SP::I6 },
  { SP::I7 },
  { SP::L0 },
  { SP::L1 },
  { SP::L2 },
  { SP::L3 },
  { SP::L4 },
  { SP::L5 },
  { SP::L6 },
  { SP::L7 },
  { SP::O0 },
  { SP::O1 },
  { SP::O2 },
  { SP::O3 },
  { SP::O4 },
  { SP::O5 },
  { SP::O6 },
  { SP::O7 },
};

namespace {     // Register classes...
  // FCCRegs Register Class...
  const MCPhysReg FCCRegs[] = {
    SP::FCC0, SP::FCC1, SP::FCC2, SP::FCC3, 
  };

  // FCCRegs Bit set.
  const uint8_t FCCRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 
  };

  // ASRRegs Register Class...
  const MCPhysReg ASRRegs[] = {
    SP::Y, SP::ASR1, SP::ASR2, SP::ASR3, SP::ASR4, SP::ASR5, SP::ASR6, SP::ASR7, SP::ASR8, SP::ASR9, SP::ASR10, SP::ASR11, SP::ASR12, SP::ASR13, SP::ASR14, SP::ASR15, SP::ASR16, SP::ASR17, SP::ASR18, SP::ASR19, SP::ASR20, SP::ASR21, SP::ASR22, SP::ASR23, SP::ASR24, SP::ASR25, SP::ASR26, SP::ASR27, SP::ASR28, SP::ASR29, SP::ASR30, SP::ASR31, 
  };

  // ASRRegs Bit set.
  const uint8_t ASRRegsBits[] = {
    0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // FPRegs Register Class...
  const MCPhysReg FPRegs[] = {
    SP::F0, SP::F1, SP::F2, SP::F3, SP::F4, SP::F5, SP::F6, SP::F7, SP::F8, SP::F9, SP::F10, SP::F11, SP::F12, SP::F13, SP::F14, SP::F15, SP::F16, SP::F17, SP::F18, SP::F19, SP::F20, SP::F21, SP::F22, SP::F23, SP::F24, SP::F25, SP::F26, SP::F27, SP::F28, SP::F29, SP::F30, SP::F31, 
  };

  // FPRegs Bit set.
  const uint8_t FPRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // IntRegs Register Class...
  const MCPhysReg IntRegs[] = {
    SP::I0, SP::I1, SP::I2, SP::I3, SP::I4, SP::I5, SP::I6, SP::I7, SP::G0, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::L0, SP::L1, SP::L2, SP::L3, SP::L4, SP::L5, SP::L6, SP::L7, SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O6, SP::O7, 
  };

  // IntRegs Bit set.
  const uint8_t IntRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // DFPRegs Register Class...
  const MCPhysReg DFPRegs[] = {
    SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, SP::D16, SP::D17, SP::D18, SP::D19, SP::D20, SP::D21, SP::D22, SP::D23, SP::D24, SP::D25, SP::D26, SP::D27, SP::D28, SP::D29, SP::D30, SP::D31, 
  };

  // DFPRegs Bit set.
  const uint8_t DFPRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // I64Regs Register Class...
  const MCPhysReg I64Regs[] = {
    SP::I0, SP::I1, SP::I2, SP::I3, SP::I4, SP::I5, SP::I6, SP::I7, SP::G0, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::L0, SP::L1, SP::L2, SP::L3, SP::L4, SP::L5, SP::L6, SP::L7, SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O6, SP::O7, 
  };

  // I64Regs Bit set.
  const uint8_t I64RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // DFPRegs_with_sub_even Register Class...
  const MCPhysReg DFPRegs_with_sub_even[] = {
    SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, 
  };

  // DFPRegs_with_sub_even Bit set.
  const uint8_t DFPRegs_with_sub_evenBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // IntPair Register Class...
  const MCPhysReg IntPair[] = {
    SP::I0_I1, SP::I2_I3, SP::I4_I5, SP::I6_I7, SP::G0_G1, SP::G2_G3, SP::G4_G5, SP::G6_G7, SP::L0_L1, SP::L2_L3, SP::L4_L5, SP::L6_L7, SP::O0_O1, SP::O2_O3, SP::O4_O5, SP::O6_O7, 
  };

  // IntPair Bit set.
  const uint8_t IntPairBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // QFPRegs Register Class...
  const MCPhysReg QFPRegs[] = {
    SP::Q0, SP::Q1, SP::Q2, SP::Q3, SP::Q4, SP::Q5, SP::Q6, SP::Q7, SP::Q8, SP::Q9, SP::Q10, SP::Q11, SP::Q12, SP::Q13, SP::Q14, SP::Q15, 
  };

  // QFPRegs Bit set.
  const uint8_t QFPRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // QFPRegs_with_sub_even Register Class...
  const MCPhysReg QFPRegs_with_sub_even[] = {
    SP::Q0, SP::Q1, SP::Q2, SP::Q3, SP::Q4, SP::Q5, SP::Q6, SP::Q7, 
  };

  // QFPRegs_with_sub_even Bit set.
  const uint8_t QFPRegs_with_sub_evenBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

}

extern const char SparcRegClassStrings[] = {
  /* 0 */ 'D', 'F', 'P', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'e', 'v', 'e', 'n', 0,
  /* 22 */ 'Q', 'F', 'P', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', '_', 'e', 'v', 'e', 'n', 0,
  /* 44 */ 'I', 'n', 't', 'P', 'a', 'i', 'r', 0,
  /* 52 */ 'I', '6', '4', 'R', 'e', 'g', 's', 0,
  /* 60 */ 'F', 'C', 'C', 'R', 'e', 'g', 's', 0,
  /* 68 */ 'D', 'F', 'P', 'R', 'e', 'g', 's', 0,
  /* 76 */ 'Q', 'F', 'P', 'R', 'e', 'g', 's', 0,
  /* 84 */ 'A', 'S', 'R', 'R', 'e', 'g', 's', 0,
  /* 92 */ 'I', 'n', 't', 'R', 'e', 'g', 's', 0,
};

extern const MCRegisterClass SparcMCRegisterClasses[] = {
  { FCCRegs, FCCRegsBits, 60, 4, sizeof(FCCRegsBits), SP::FCCRegsRegClassID, 0, 0, 1, 1 },
  { ASRRegs, ASRRegsBits, 84, 32, sizeof(ASRRegsBits), SP::ASRRegsRegClassID, 4, 4, 1, 0 },
  { FPRegs, FPRegsBits, 69, 32, sizeof(FPRegsBits), SP::FPRegsRegClassID, 4, 4, 1, 1 },
  { IntRegs, IntRegsBits, 92, 32, sizeof(IntRegsBits), SP::IntRegsRegClassID, 4, 4, 1, 1 },
  { DFPRegs, DFPRegsBits, 68, 32, sizeof(DFPRegsBits), SP::DFPRegsRegClassID, 8, 8, 1, 1 },
  { I64Regs, I64RegsBits, 52, 32, sizeof(I64RegsBits), SP::I64RegsRegClassID, 8, 8, 1, 1 },
  { DFPRegs_with_sub_even, DFPRegs_with_sub_evenBits, 0, 16, sizeof(DFPRegs_with_sub_evenBits), SP::DFPRegs_with_sub_evenRegClassID, 8, 8, 1, 1 },
  { IntPair, IntPairBits, 44, 16, sizeof(IntPairBits), SP::IntPairRegClassID, 8, 8, 1, 1 },
  { QFPRegs, QFPRegsBits, 76, 16, sizeof(QFPRegsBits), SP::QFPRegsRegClassID, 16, 16, 1, 1 },
  { QFPRegs_with_sub_even, QFPRegs_with_sub_evenBits, 22, 8, sizeof(QFPRegs_with_sub_evenBits), SP::QFPRegs_with_sub_evenRegClassID, 16, 16, 1, 1 },
};

// SP Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 64U, SP::Y },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPDwarfFlavour0Dwarf2LSize = array_lengthof(SPDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 64U, SP::Y },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPEHFlavour0Dwarf2LSize = array_lengthof(SPEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0L2Dwarf[] = {
  { SP::Y, 64U },
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPDwarfFlavour0L2DwarfSize = array_lengthof(SPDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0L2Dwarf[] = {
  { SP::Y, 64U },
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPEHFlavour0L2DwarfSize = array_lengthof(SPEHFlavour0L2Dwarf);

extern const uint16_t SparcRegEncodingTable[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  1,
  3,
  5,
  7,
  9,
  11,
  13,
  15,
  17,
  19,
  21,
  23,
  25,
  27,
  29,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  4,
  8,
  12,
  16,
  20,
  24,
  28,
  1,
  5,
  9,
  13,
  17,
  21,
  25,
  29,
  0,
  2,
  4,
  6,
  24,
  26,
  28,
  30,
  16,
  18,
  20,
  22,
  8,
  10,
  12,
  14,
};
static inline void InitSparcMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(SparcRegDesc, 170, RA, PC, SparcMCRegisterClasses, 10, SparcRegUnitRoots, 121, SparcRegDiffLists, SparcLaneMaskLists, SparcRegStrings, SparcRegClassStrings, SparcSubRegIdxLists, 7,
SparcSubRegIdxRanges, SparcRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPDwarfFlavour0Dwarf2L, SPDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPEHFlavour0Dwarf2L, SPEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPDwarfFlavour0L2Dwarf, SPDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPEHFlavour0L2Dwarf, SPEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // End llvm namespace
#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER
#include "llvm/Target/TargetRegisterInfo.h"

namespace llvm {

class SparcFrameLowering;

struct SparcGenRegisterInfo : public TargetRegisterInfo {
  explicit SparcGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  unsigned composeSubRegIndexLaneMaskImpl(unsigned, unsigned) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const override;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  /// Devirtualized TargetFrameLowering.
  static const SparcFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace SP { // Register classes
  extern const TargetRegisterClass FCCRegsRegClass;
  extern const TargetRegisterClass ASRRegsRegClass;
  extern const TargetRegisterClass FPRegsRegClass;
  extern const TargetRegisterClass IntRegsRegClass;
  extern const TargetRegisterClass DFPRegsRegClass;
  extern const TargetRegisterClass I64RegsRegClass;
  extern const TargetRegisterClass DFPRegs_with_sub_evenRegClass;
  extern const TargetRegisterClass IntPairRegClass;
  extern const TargetRegisterClass QFPRegsRegClass;
  extern const TargetRegisterClass QFPRegs_with_sub_evenRegClass;
} // end of namespace Sparc

} // End llvm namespace
#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC
namespace llvm {

extern const MCRegisterClass SparcMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i32, MVT::Other,
  /* 4 */ MVT::i32, MVT::i64, MVT::Other,
  /* 7 */ MVT::f32, MVT::Other,
  /* 9 */ MVT::f64, MVT::Other,
  /* 11 */ MVT::f128, MVT::Other,
  /* 13 */ MVT::v2i32, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_even", "sub_even64", "sub_odd", "sub_odd64", "sub_odd64_then_sub_even", "sub_odd64_then_sub_odd", "" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // sub_even
  0x00000003, // sub_even64
  0x00000002, // sub_odd
  0x0000000c, // sub_odd64
  0x00000004, // sub_odd64_then_sub_even
  0x00000008, // sub_odd64_then_sub_odd
 };



static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t FCCRegsSubClassMask[] = {
  0x00000001, 
};

static const uint32_t ASRRegsSubClassMask[] = {
  0x00000002, 
};

static const uint32_t FPRegsSubClassMask[] = {
  0x00000004, 
  0x00000240, // sub_even
  0x00000240, // sub_odd
  0x00000200, // sub_odd64_then_sub_even
  0x00000200, // sub_odd64_then_sub_odd
};

static const uint32_t IntRegsSubClassMask[] = {
  0x00000028, 
  0x00000080, // sub_even
  0x00000080, // sub_odd
};

static const uint32_t DFPRegsSubClassMask[] = {
  0x00000050, 
  0x00000300, // sub_even64
  0x00000300, // sub_odd64
};

static const uint32_t I64RegsSubClassMask[] = {
  0x00000020, 
  0x00000080, // sub_even
  0x00000080, // sub_odd
};

static const uint32_t DFPRegs_with_sub_evenSubClassMask[] = {
  0x00000040, 
  0x00000200, // sub_even64
  0x00000200, // sub_odd64
};

static const uint32_t IntPairSubClassMask[] = {
  0x00000080, 
};

static const uint32_t QFPRegsSubClassMask[] = {
  0x00000300, 
};

static const uint32_t QFPRegs_with_sub_evenSubClassMask[] = {
  0x00000200, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 3, 0,
  /* 3 */ 2, 4, 0,
  /* 6 */ 1, 3, 5, 6, 0,
};

static const TargetRegisterClass *const I64RegsSuperclasses[] = {
  &SP::IntRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const DFPRegs_with_sub_evenSuperclasses[] = {
  &SP::DFPRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const QFPRegs_with_sub_evenSuperclasses[] = {
  &SP::QFPRegsRegClass,
  nullptr
};


namespace SP {   // Register class instances
  extern const TargetRegisterClass FCCRegsRegClass = {
    &SparcMCRegisterClasses[FCCRegsRegClassID],
    VTLists + 0,
    FCCRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    0x00000000,
    0,
    false, /* HasDisjunctSubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass ASRRegsRegClass = {
    &SparcMCRegisterClasses[ASRRegsRegClassID],
    VTLists + 2,
    ASRRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    0x00000000,
    0,
    false, /* HasDisjunctSubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FPRegsRegClass = {
    &SparcMCRegisterClasses[FPRegsRegClassID],
    VTLists + 7,
    FPRegsSubClassMask,
    SuperRegIdxSeqs + 6,
    0x00000000,
    0,
    false, /* HasDisjunctSubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass IntRegsRegClass = {
    &SparcMCRegisterClasses[IntRegsRegClassID],
    VTLists + 4,
    IntRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    0x00000000,
    0,
    false, /* HasDisjunctSubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DFPRegsRegClass = {
    &SparcMCRegisterClasses[DFPRegsRegClassID],
    VTLists + 9,
    DFPRegsSubClassMask,
    SuperRegIdxSeqs + 3,
    0x00000003,
    0,
    true, /* HasDisjunctSubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass I64RegsRegClass = {
    &SparcMCRegisterClasses[I64RegsRegClassID],
    VTLists + 5,
    I64RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    0x00000000,
    0,
    false, /* HasDisjunctSubRegs */
    I64RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DFPRegs_with_sub_evenRegClass = {
    &SparcMCRegisterClasses[DFPRegs_with_sub_evenRegClassID],
    VTLists + 9,
    DFPRegs_with_sub_evenSubClassMask,
    SuperRegIdxSeqs + 3,
    0x00000003,
    0,
    true, /* HasDisjunctSubRegs */
    DFPRegs_with_sub_evenSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass IntPairRegClass = {
    &SparcMCRegisterClasses[IntPairRegClassID],
    VTLists + 13,
    IntPairSubClassMask,
    SuperRegIdxSeqs + 2,
    0x00000003,
    0,
    true, /* HasDisjunctSubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass QFPRegsRegClass = {
    &SparcMCRegisterClasses[QFPRegsRegClassID],
    VTLists + 11,
    QFPRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    0x0000000f,
    0,
    true, /* HasDisjunctSubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass QFPRegs_with_sub_evenRegClass = {
    &SparcMCRegisterClasses[QFPRegs_with_sub_evenRegClassID],
    VTLists + 11,
    QFPRegs_with_sub_evenSubClassMask,
    SuperRegIdxSeqs + 2,
    0x0000000f,
    0,
    true, /* HasDisjunctSubRegs */
    QFPRegs_with_sub_evenSuperclasses,
    nullptr
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SP::FCCRegsRegClass,
    &SP::ASRRegsRegClass,
    &SP::FPRegsRegClass,
    &SP::IntRegsRegClass,
    &SP::DFPRegsRegClass,
    &SP::I64RegsRegClass,
    &SP::DFPRegs_with_sub_evenRegClass,
    &SP::IntPairRegClass,
    &SP::QFPRegsRegClass,
    &SP::QFPRegs_with_sub_evenRegClass,
  };
}

static const TargetRegisterInfoDesc SparcRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
};
unsigned SparcGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[6] = {
    0, 0, 0, 1, 0, 0, 
  };
  static const uint8_t Rows[2][6] = {
    { 1, 0, 3, 0, 0, 0, },
    { 5, 0, 6, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 6);
  --IdxB; assert(IdxB < 6);
  return Rows[RowMap[IdxA]][IdxB];
}

unsigned SparcGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, unsigned LaneMask) const {
  struct MaskRolOp {
    unsigned Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp Seqs[] = {
    { 0xFFFFFFFF,  0 }, { 0, 0 },   // Sequence 0
    { 0xFFFFFFFF,  2 }, { 0, 0 }  // Sequence 2
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &Seqs[0], // to sub_even
    &Seqs[0], // to sub_even64
    &Seqs[0], // to sub_odd
    &Seqs[2], // to sub_odd64
    &Seqs[0], // to sub_odd64_then_sub_even
    &Seqs[0] // to sub_odd64_then_sub_odd
  };

  --IdxA; assert(IdxA < 6 && "Subregister index out of bounds");
  unsigned Result = 0;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask != 0; ++Ops) {
    unsigned Masked = LaneMask & Ops->Mask;
    Result |= (Masked << Ops->RotateLeft) & 0xFFFFFFFF;
    Result |= (Masked >> ((32 - Ops->RotateLeft) & 0x1F));
  }
  return Result;
}
const TargetRegisterClass *SparcGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[10][6] = {
    {	// FCCRegs
      0,	// sub_even
      0,	// sub_even64
      0,	// sub_odd
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// ASRRegs
      0,	// sub_even
      0,	// sub_even64
      0,	// sub_odd
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// FPRegs
      0,	// sub_even
      0,	// sub_even64
      0,	// sub_odd
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// IntRegs
      0,	// sub_even
      0,	// sub_even64
      0,	// sub_odd
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// DFPRegs
      7,	// sub_even -> DFPRegs_with_sub_even
      0,	// sub_even64
      7,	// sub_odd -> DFPRegs_with_sub_even
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// I64Regs
      0,	// sub_even
      0,	// sub_even64
      0,	// sub_odd
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// DFPRegs_with_sub_even
      7,	// sub_even -> DFPRegs_with_sub_even
      0,	// sub_even64
      7,	// sub_odd -> DFPRegs_with_sub_even
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// IntPair
      8,	// sub_even -> IntPair
      0,	// sub_even64
      8,	// sub_odd -> IntPair
      0,	// sub_odd64
      0,	// sub_odd64_then_sub_even
      0,	// sub_odd64_then_sub_odd
    },
    {	// QFPRegs
      10,	// sub_even -> QFPRegs_with_sub_even
      9,	// sub_even64 -> QFPRegs
      10,	// sub_odd -> QFPRegs_with_sub_even
      9,	// sub_odd64 -> QFPRegs
      10,	// sub_odd64_then_sub_even -> QFPRegs_with_sub_even
      10,	// sub_odd64_then_sub_odd -> QFPRegs_with_sub_even
    },
    {	// QFPRegs_with_sub_even
      10,	// sub_even -> QFPRegs_with_sub_even
      10,	// sub_even64 -> QFPRegs_with_sub_even
      10,	// sub_odd -> QFPRegs_with_sub_even
      10,	// sub_odd64 -> QFPRegs_with_sub_even
      10,	// sub_odd64_then_sub_even -> QFPRegs_with_sub_even
      10,	// sub_odd64_then_sub_odd -> QFPRegs_with_sub_even
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 6 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &SparcGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 4},  	// FCCRegs
    {0, 0},  	// ASRRegs
    {1, 32},  	// FPRegs
    {1, 32},  	// IntRegs
    {2, 64},  	// DFPRegs
    {1, 32},  	// I64Regs
    {2, 32},  	// DFPRegs_with_sub_even
    {2, 32},  	// IntPair
    {4, 64},  	// QFPRegs
    {4, 32},  	// QFPRegs_with_sub_even
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned SparcGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 121 && "invalid register unit");
  static const uint8_t RUWeightTable[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, };
  return RUWeightTable[RegUnit];
}


// Get the number of dimensions of register pressure.
unsigned SparcGenRegisterInfo::getNumRegPressureSets() const {
  return 4;
}

// Get the name of this register unit pressure set.
const char *SparcGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "FCCRegs",
    "FPRegs",
    "IntRegs",
    "DFPRegs",
    nullptr };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned SparcGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    4,  	// 0: FCCRegs
    32,  	// 1: FPRegs
    32,  	// 2: IntRegs
    64,  	// 3: DFPRegs
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
  /* 2 */ 2, -1,
  /* 4 */ 1, 3, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* SparcGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    0,1,4,2,5,2,4,2,5,4,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* SparcGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 121 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc SparcRegDesc[];
extern const MCPhysReg SparcRegDiffLists[];
extern const unsigned SparcLaneMaskLists[];
extern const char SparcRegStrings[];
extern const char SparcRegClassStrings[];
extern const MCPhysReg SparcRegUnitRoots[][2];
extern const uint16_t SparcSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits SparcSubRegIdxRanges[];
extern const uint16_t SparcRegEncodingTable[];
// SP Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0Dwarf2L[];
extern const unsigned SPDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0Dwarf2L[];
extern const unsigned SPEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0L2Dwarf[];
extern const unsigned SPDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0L2Dwarf[];
extern const unsigned SPEHFlavour0L2DwarfSize;

SparcGenRegisterInfo::
SparcGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(SparcRegInfoDesc, RegisterClasses, RegisterClasses+10,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xffffffff) {
  InitMCRegisterInfo(SparcRegDesc, 170, RA, PC,
                     SparcMCRegisterClasses, 10,
                     SparcRegUnitRoots,
                     121,
                     SparcRegDiffLists,
                     SparcLaneMaskLists,
                     SparcRegStrings,
                     SparcRegClassStrings,
                     SparcSubRegIdxLists,
                     7,
                     SparcSubRegIdxRanges,
                     SparcRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPDwarfFlavour0Dwarf2L, SPDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPEHFlavour0Dwarf2L, SPEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPDwarfFlavour0L2Dwarf, SPDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPEHFlavour0L2Dwarf, SPEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_SaveList[] = { 0 };
static const uint32_t CSR_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0xfffc0000, 0xc0000003, 0x0000003f, };
static const MCPhysReg RTCSR_SaveList[] = { 0 };
static const uint32_t RTCSR_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x03000000, 0x00000000, 0x00000002, };


ArrayRef<const uint32_t *> SparcGenRegisterInfo::getRegMasks() const {
  static const uint32_t *Masks[] = {
    CSR_RegMask, 
    RTCSR_RegMask, 
    nullptr
  };
  return ArrayRef<const uint32_t *>(Masks, (size_t)2);
}

ArrayRef<const char *> SparcGenRegisterInfo::getRegMaskNames() const {
  static const char *Names[] = {
    "CSR",
    "RTCSR",
    nullptr
  };
  return ArrayRef<const char *>(Names, (size_t)2);
}

const SparcFrameLowering *SparcGenRegisterInfo::
    getFrameLowering(const MachineFunction &MF) {
  return static_cast<const SparcFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // End llvm namespace
#endif // GET_REGINFO_TARGET_DESC

