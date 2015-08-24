/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Mips Disassembler                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 245, 1, // Skip to: 512
/* 11 */      MCD::OPC_Decode, 215, 2, 0, // Opcode: Bimm16
/* 15 */      MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 233, 1, // Skip to: 512
/* 23 */      MCD::OPC_Decode, 213, 2, 1, // Opcode: BeqzRxImm16
/* 27 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 221, 1, // Skip to: 512
/* 35 */      MCD::OPC_Decode, 218, 2, 1, // Opcode: BnezRxImm16
/* 39 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 209, 1, // Skip to: 512
/* 47 */      MCD::OPC_Decode, 168, 1, 2, // Opcode: AddiuRxRxImm16
/* 51 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 197, 1, // Skip to: 512
/* 59 */      MCD::OPC_Decode, 237, 13, 1, // Opcode: SltiRxImm16
/* 63 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 75
/* 67 */      MCD::OPC_CheckPredicate, 0, 185, 1, // Skip to: 512
/* 71 */      MCD::OPC_Decode, 240, 13, 1, // Opcode: SltiuRxImm16
/* 75 */      MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 142
/* 79 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 82 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 512
/* 90 */      MCD::OPC_Decode, 221, 2, 0, // Opcode: Bteqz16
/* 94 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 512
/* 102 */     MCD::OPC_Decode, 229, 2, 0, // Opcode: Btnez16
/* 106 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 512
/* 114 */     MCD::OPC_Decode, 171, 1, 0, // Opcode: AddiuSpImm16
/* 118 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 512
/* 126 */     MCD::OPC_Decode, 157, 10, 3, // Opcode: Move32R16
/* 130 */     MCD::OPC_FilterValue, 7, 122, 1, // Skip to: 512
/* 134 */     MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 512
/* 138 */     MCD::OPC_Decode, 158, 10, 4, // Opcode: MoveR3216
/* 142 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 154
/* 146 */     MCD::OPC_CheckPredicate, 0, 106, 1, // Skip to: 512
/* 150 */     MCD::OPC_Decode, 170, 8, 1, // Opcode: LiRxImm16
/* 154 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 166
/* 158 */     MCD::OPC_CheckPredicate, 0, 94, 1, // Skip to: 512
/* 162 */     MCD::OPC_Decode, 178, 4, 1, // Opcode: CmpiRxImm16
/* 166 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 512
/* 174 */     MCD::OPC_Decode, 180, 8, 1, // Opcode: LwRxPcTcp16
/* 178 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 209
/* 182 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 185 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 197
/* 189 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 512
/* 193 */     MCD::OPC_Decode, 173, 1, 5, // Opcode: AdduRxRyRz16
/* 197 */     MCD::OPC_FilterValue, 3, 55, 1, // Skip to: 512
/* 201 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 512
/* 205 */     MCD::OPC_Decode, 249, 13, 5, // Opcode: SubuRxRyRz16
/* 209 */     MCD::OPC_FilterValue, 29, 43, 1, // Skip to: 512
/* 213 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 216 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 283
/* 220 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 223 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 235
/* 227 */     MCD::OPC_CheckPredicate, 0, 25, 1, // Skip to: 512
/* 231 */     MCD::OPC_Decode, 202, 7, 0, // Opcode: JumpLinkReg16
/* 235 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 0, 13, 1, // Skip to: 512
/* 243 */     MCD::OPC_CheckField, 8, 3, 0, 7, 1, // Skip to: 512
/* 249 */     MCD::OPC_Decode, 199, 7, 0, // Opcode: JrRa16
/* 253 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 265
/* 257 */     MCD::OPC_CheckPredicate, 0, 251, 0, // Skip to: 512
/* 261 */     MCD::OPC_Decode, 201, 7, 1, // Opcode: JrcRx16
/* 265 */     MCD::OPC_FilterValue, 7, 243, 0, // Skip to: 512
/* 269 */     MCD::OPC_CheckPredicate, 0, 239, 0, // Skip to: 512
/* 273 */     MCD::OPC_CheckField, 8, 3, 0, 233, 0, // Skip to: 512
/* 279 */     MCD::OPC_Decode, 200, 7, 0, // Opcode: JrcRa16
/* 283 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 295
/* 287 */     MCD::OPC_CheckPredicate, 0, 221, 0, // Skip to: 512
/* 291 */     MCD::OPC_Decode, 235, 13, 6, // Opcode: SltRxRy16
/* 295 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 307
/* 299 */     MCD::OPC_CheckPredicate, 0, 209, 0, // Skip to: 512
/* 303 */     MCD::OPC_Decode, 243, 13, 6, // Opcode: SltuRxRy16
/* 307 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 0, 197, 0, // Skip to: 512
/* 315 */     MCD::OPC_Decode, 233, 13, 7, // Opcode: SllvRxRy16
/* 319 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 0, 185, 0, // Skip to: 512
/* 327 */     MCD::OPC_CheckField, 5, 6, 0, 179, 0, // Skip to: 512
/* 333 */     MCD::OPC_Decode, 220, 2, 0, // Opcode: Break16
/* 337 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 167, 0, // Skip to: 512
/* 345 */     MCD::OPC_Decode, 248, 13, 7, // Opcode: SrlvRxRy16
/* 349 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 155, 0, // Skip to: 512
/* 357 */     MCD::OPC_Decode, 246, 13, 7, // Opcode: SravRxRy16
/* 361 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 143, 0, // Skip to: 512
/* 369 */     MCD::OPC_Decode, 177, 4, 6, // Opcode: CmpRxRy16
/* 373 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 131, 0, // Skip to: 512
/* 381 */     MCD::OPC_Decode, 174, 1, 7, // Opcode: AndRxRxRy16
/* 385 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 119, 0, // Skip to: 512
/* 393 */     MCD::OPC_Decode, 208, 10, 7, // Opcode: OrRxRxRy16
/* 397 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 107, 0, // Skip to: 512
/* 405 */     MCD::OPC_Decode, 197, 14, 7, // Opcode: XorRxRxRy16
/* 409 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 95, 0, // Skip to: 512
/* 417 */     MCD::OPC_Decode, 193, 10, 6, // Opcode: NotRxRy16
/* 421 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 512
/* 429 */     MCD::OPC_Decode, 155, 10, 1, // Opcode: Mfhi16
/* 433 */     MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 464
/* 437 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 440 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 512
/* 448 */     MCD::OPC_Decode, 215, 13, 2, // Opcode: SebRx16
/* 452 */     MCD::OPC_FilterValue, 5, 56, 0, // Skip to: 512
/* 456 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 512
/* 460 */     MCD::OPC_Decode, 216, 13, 2, // Opcode: SehRx16
/* 464 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 512
/* 472 */     MCD::OPC_Decode, 156, 10, 1, // Opcode: Mflo16
/* 476 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 512
/* 484 */     MCD::OPC_Decode, 174, 5, 6, // Opcode: DivRxRy16
/* 488 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 512
/* 496 */     MCD::OPC_Decode, 175, 5, 6, // Opcode: DivuRxRy16
/* 500 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 192, 10, 6, // Opcode: NegRxRy16
/* 512 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 198, 1, // Skip to: 465
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 192, 1, // Skip to: 465
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 186, 1, // Skip to: 465
/* 23 */      MCD::OPC_Decode, 167, 1, 1, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 174, 1, // Skip to: 465
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 168, 1, // Skip to: 465
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 162, 1, // Skip to: 465
/* 47 */      MCD::OPC_Decode, 216, 2, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 465
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 144, 1, // Skip to: 465
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 138, 1, // Skip to: 465
/* 71 */      MCD::OPC_Decode, 214, 2, 1, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 126, 1, // Skip to: 465
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 120, 1, // Skip to: 465
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 114, 1, // Skip to: 465
/* 95 */      MCD::OPC_Decode, 219, 2, 1, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 99, 1, // Skip to: 465
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 232, 13, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 247, 13, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 245, 13, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 42, 1, // Skip to: 465
/* 167 */     MCD::OPC_Decode, 228, 2, 0, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 465
/* 179 */     MCD::OPC_Decode, 236, 2, 0, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 22, 1, // Skip to: 465
/* 187 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 465
/* 191 */     MCD::OPC_Decode, 172, 1, 0, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 465
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 0, 1, // Skip to: 465
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 250, 0, // Skip to: 465
/* 215 */     MCD::OPC_Decode, 170, 1, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 238, 0, // Skip to: 465
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 232, 0, // Skip to: 465
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 226, 0, // Skip to: 465
/* 239 */     MCD::OPC_Decode, 166, 1, 1, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 214, 0, // Skip to: 465
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 208, 0, // Skip to: 465
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 202, 0, // Skip to: 465
/* 263 */     MCD::OPC_Decode, 238, 13, 1, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 190, 0, // Skip to: 465
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 184, 0, // Skip to: 465
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 178, 0, // Skip to: 465
/* 287 */     MCD::OPC_Decode, 241, 13, 1, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 166, 0, // Skip to: 465
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 160, 0, // Skip to: 465
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 154, 0, // Skip to: 465
/* 311 */     MCD::OPC_Decode, 172, 8, 1, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 142, 0, // Skip to: 465
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 136, 0, // Skip to: 465
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 130, 0, // Skip to: 465
/* 335 */     MCD::OPC_Decode, 179, 4, 1, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 363
/* 343 */     MCD::OPC_CheckPredicate, 0, 118, 0, // Skip to: 465
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 112, 0, // Skip to: 465
/* 353 */     MCD::OPC_CheckField, 5, 3, 0, 106, 0, // Skip to: 465
/* 359 */     MCD::OPC_Decode, 183, 8, 1, // Opcode: LwRxSpImmX16
/* 363 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 387
/* 367 */     MCD::OPC_CheckPredicate, 0, 94, 0, // Skip to: 465
/* 371 */     MCD::OPC_CheckField, 27, 5, 30, 88, 0, // Skip to: 465
/* 377 */     MCD::OPC_CheckField, 5, 3, 0, 82, 0, // Skip to: 465
/* 383 */     MCD::OPC_Decode, 181, 8, 1, // Opcode: LwRxPcTcpX16
/* 387 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 405
/* 391 */     MCD::OPC_CheckPredicate, 0, 70, 0, // Skip to: 465
/* 395 */     MCD::OPC_CheckField, 27, 5, 30, 64, 0, // Skip to: 465
/* 401 */     MCD::OPC_Decode, 214, 13, 9, // Opcode: SbRxRyOffMemX16
/* 405 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 423
/* 409 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 465
/* 413 */     MCD::OPC_CheckField, 27, 5, 30, 46, 0, // Skip to: 465
/* 419 */     MCD::OPC_Decode, 231, 13, 9, // Opcode: ShRxRyOffMemX16
/* 423 */     MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 447
/* 427 */     MCD::OPC_CheckPredicate, 0, 34, 0, // Skip to: 465
/* 431 */     MCD::OPC_CheckField, 27, 5, 30, 28, 0, // Skip to: 465
/* 437 */     MCD::OPC_CheckField, 5, 3, 0, 22, 0, // Skip to: 465
/* 443 */     MCD::OPC_Decode, 251, 13, 1, // Opcode: SwRxSpImmX16
/* 447 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 465
/* 451 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 465
/* 455 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 465
/* 461 */     MCD::OPC_Decode, 250, 13, 9, // Opcode: SwRxRyOffMemX16
/* 465 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCOP3_32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 51
/* 11 */      MCD::OPC_Decode, 143, 8, 10, // Opcode: LWC3
/* 15 */      MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 51
/* 23 */      MCD::OPC_Decode, 217, 7, 10, // Opcode: LDC3
/* 27 */      MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 51
/* 35 */      MCD::OPC_Decode, 185, 13, 10, // Opcode: SWC3
/* 39 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 225, 11, 10, // Opcode: SDC3
/* 51 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCnMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 18, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 3, 169, 1, // Skip to: 443
/* 18 */      MCD::OPC_Decode, 232, 4, 11, // Opcode: DMFC2_OCTEON
/* 22 */      MCD::OPC_FilterValue, 5, 161, 1, // Skip to: 443
/* 26 */      MCD::OPC_CheckPredicate, 3, 157, 1, // Skip to: 443
/* 30 */      MCD::OPC_Decode, 240, 4, 11, // Opcode: DMTC2_OCTEON
/* 34 */      MCD::OPC_FilterValue, 28, 101, 1, // Skip to: 395
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 59
/* 45 */      MCD::OPC_CheckPredicate, 3, 138, 1, // Skip to: 443
/* 49 */      MCD::OPC_CheckField, 6, 5, 0, 132, 1, // Skip to: 443
/* 55 */      MCD::OPC_Decode, 243, 4, 12, // Opcode: DMUL
/* 59 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 3, 120, 1, // Skip to: 443
/* 67 */      MCD::OPC_CheckField, 6, 15, 0, 114, 1, // Skip to: 443
/* 73 */      MCD::OPC_Decode, 241, 9, 13, // Opcode: MTM0
/* 77 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 3, 102, 1, // Skip to: 443
/* 85 */      MCD::OPC_CheckField, 6, 15, 0, 96, 1, // Skip to: 443
/* 91 */      MCD::OPC_Decode, 244, 9, 13, // Opcode: MTP0
/* 95 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 3, 84, 1, // Skip to: 443
/* 103 */     MCD::OPC_CheckField, 6, 15, 0, 78, 1, // Skip to: 443
/* 109 */     MCD::OPC_Decode, 245, 9, 13, // Opcode: MTP1
/* 113 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 3, 66, 1, // Skip to: 443
/* 121 */     MCD::OPC_CheckField, 6, 15, 0, 60, 1, // Skip to: 443
/* 127 */     MCD::OPC_Decode, 246, 9, 13, // Opcode: MTP2
/* 131 */     MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 3, 48, 1, // Skip to: 443
/* 139 */     MCD::OPC_CheckField, 6, 15, 0, 42, 1, // Skip to: 443
/* 145 */     MCD::OPC_Decode, 242, 9, 13, // Opcode: MTM1
/* 149 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 3, 30, 1, // Skip to: 443
/* 157 */     MCD::OPC_CheckField, 6, 15, 0, 24, 1, // Skip to: 443
/* 163 */     MCD::OPC_Decode, 243, 9, 13, // Opcode: MTM2
/* 167 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 3, 12, 1, // Skip to: 443
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 6, 1, // Skip to: 443
/* 181 */     MCD::OPC_Decode, 173, 14, 12, // Opcode: VMULU
/* 185 */     MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 3, 250, 0, // Skip to: 443
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 244, 0, // Skip to: 443
/* 199 */     MCD::OPC_Decode, 172, 14, 12, // Opcode: VMM0
/* 203 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 3, 232, 0, // Skip to: 443
/* 211 */     MCD::OPC_CheckField, 6, 5, 0, 226, 0, // Skip to: 443
/* 217 */     MCD::OPC_Decode, 171, 14, 12, // Opcode: V3MULU
/* 221 */     MCD::OPC_FilterValue, 40, 14, 0, // Skip to: 239
/* 225 */     MCD::OPC_CheckPredicate, 3, 214, 0, // Skip to: 443
/* 229 */     MCD::OPC_CheckField, 6, 5, 0, 208, 0, // Skip to: 443
/* 235 */     MCD::OPC_Decode, 177, 1, 12, // Opcode: BADDu
/* 239 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 257
/* 243 */     MCD::OPC_CheckPredicate, 3, 196, 0, // Skip to: 443
/* 247 */     MCD::OPC_CheckField, 6, 5, 0, 190, 0, // Skip to: 443
/* 253 */     MCD::OPC_Decode, 252, 11, 12, // Opcode: SEQ
/* 257 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 275
/* 261 */     MCD::OPC_CheckPredicate, 3, 178, 0, // Skip to: 443
/* 265 */     MCD::OPC_CheckField, 6, 5, 0, 172, 0, // Skip to: 443
/* 271 */     MCD::OPC_Decode, 193, 12, 12, // Opcode: SNE
/* 275 */     MCD::OPC_FilterValue, 44, 20, 0, // Skip to: 299
/* 279 */     MCD::OPC_CheckPredicate, 3, 160, 0, // Skip to: 443
/* 283 */     MCD::OPC_CheckField, 16, 5, 0, 154, 0, // Skip to: 443
/* 289 */     MCD::OPC_CheckField, 6, 5, 0, 148, 0, // Skip to: 443
/* 295 */     MCD::OPC_Decode, 226, 10, 14, // Opcode: POP
/* 299 */     MCD::OPC_FilterValue, 45, 20, 0, // Skip to: 323
/* 303 */     MCD::OPC_CheckPredicate, 3, 136, 0, // Skip to: 443
/* 307 */     MCD::OPC_CheckField, 16, 5, 0, 130, 0, // Skip to: 443
/* 313 */     MCD::OPC_CheckField, 6, 5, 0, 124, 0, // Skip to: 443
/* 319 */     MCD::OPC_Decode, 140, 5, 15, // Opcode: DPOP
/* 323 */     MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 335
/* 327 */     MCD::OPC_CheckPredicate, 3, 112, 0, // Skip to: 443
/* 331 */     MCD::OPC_Decode, 253, 11, 16, // Opcode: SEQi
/* 335 */     MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 347
/* 339 */     MCD::OPC_CheckPredicate, 3, 100, 0, // Skip to: 443
/* 343 */     MCD::OPC_Decode, 194, 12, 16, // Opcode: SNEi
/* 347 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 359
/* 351 */     MCD::OPC_CheckPredicate, 3, 88, 0, // Skip to: 443
/* 355 */     MCD::OPC_Decode, 133, 3, 17, // Opcode: CINS
/* 359 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 371
/* 363 */     MCD::OPC_CheckPredicate, 3, 76, 0, // Skip to: 443
/* 367 */     MCD::OPC_Decode, 134, 3, 17, // Opcode: CINS32
/* 371 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 383
/* 375 */     MCD::OPC_CheckPredicate, 3, 64, 0, // Skip to: 443
/* 379 */     MCD::OPC_Decode, 200, 5, 17, // Opcode: EXTS
/* 383 */     MCD::OPC_FilterValue, 59, 56, 0, // Skip to: 443
/* 387 */     MCD::OPC_CheckPredicate, 3, 52, 0, // Skip to: 443
/* 391 */     MCD::OPC_Decode, 201, 5, 17, // Opcode: EXTS32
/* 395 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 407
/* 399 */     MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 443
/* 403 */     MCD::OPC_Decode, 183, 1, 18, // Opcode: BBIT0
/* 407 */     MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 419
/* 411 */     MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 443
/* 415 */     MCD::OPC_Decode, 184, 1, 18, // Opcode: BBIT032
/* 419 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 431
/* 423 */     MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 443
/* 427 */     MCD::OPC_Decode, 185, 1, 18, // Opcode: BBIT1
/* 431 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 443
/* 435 */     MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 443
/* 439 */     MCD::OPC_Decode, 186, 1, 18, // Opcode: BBIT132
/* 443 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 21
/* 14 */      MCD::OPC_CheckPredicate, 4, 19, 2, // Skip to: 549
/* 18 */      MCD::OPC_Decode, 55, 19, // Opcode: ADDU16_MM
/* 21 */      MCD::OPC_FilterValue, 1, 12, 2, // Skip to: 549
/* 25 */      MCD::OPC_CheckPredicate, 4, 8, 2, // Skip to: 549
/* 29 */      MCD::OPC_Decode, 155, 13, 19, // Opcode: SUBU16_MM
/* 33 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 45
/* 37 */      MCD::OPC_CheckPredicate, 4, 252, 1, // Skip to: 549
/* 41 */      MCD::OPC_Decode, 205, 7, 20, // Opcode: LBU16_MM
/* 45 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 57
/* 49 */      MCD::OPC_CheckPredicate, 4, 240, 1, // Skip to: 549
/* 53 */      MCD::OPC_Decode, 161, 9, 21, // Opcode: MOVE16_MM
/* 57 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 88
/* 61 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 64 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 76
/* 68 */      MCD::OPC_CheckPredicate, 4, 221, 1, // Skip to: 549
/* 72 */      MCD::OPC_Decode, 166, 12, 22, // Opcode: SLL16_MM
/* 76 */      MCD::OPC_FilterValue, 1, 213, 1, // Skip to: 549
/* 80 */      MCD::OPC_CheckPredicate, 4, 209, 1, // Skip to: 549
/* 84 */      MCD::OPC_Decode, 229, 12, 22, // Opcode: SRL16_MM
/* 88 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 100
/* 92 */      MCD::OPC_CheckPredicate, 4, 197, 1, // Skip to: 549
/* 96 */      MCD::OPC_Decode, 236, 7, 20, // Opcode: LHU16_MM
/* 100 */     MCD::OPC_FilterValue, 11, 7, 0, // Skip to: 111
/* 104 */     MCD::OPC_CheckPredicate, 4, 185, 1, // Skip to: 549
/* 108 */     MCD::OPC_Decode, 93, 23, // Opcode: ANDI16_MM
/* 111 */     MCD::OPC_FilterValue, 17, 226, 0, // Skip to: 341
/* 115 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 118 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 4, 167, 1, // Skip to: 549
/* 126 */     MCD::OPC_Decode, 191, 10, 24, // Opcode: NOT16_MM
/* 130 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 142
/* 134 */     MCD::OPC_CheckPredicate, 4, 155, 1, // Skip to: 549
/* 138 */     MCD::OPC_Decode, 184, 14, 25, // Opcode: XOR16_MM
/* 142 */     MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 153
/* 146 */     MCD::OPC_CheckPredicate, 4, 143, 1, // Skip to: 549
/* 150 */     MCD::OPC_Decode, 91, 25, // Opcode: AND16_MM
/* 153 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 165
/* 157 */     MCD::OPC_CheckPredicate, 4, 132, 1, // Skip to: 549
/* 161 */     MCD::OPC_Decode, 195, 10, 25, // Opcode: OR16_MM
/* 165 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 177
/* 169 */     MCD::OPC_CheckPredicate, 4, 120, 1, // Skip to: 549
/* 173 */     MCD::OPC_Decode, 148, 8, 26, // Opcode: LWM16_MM
/* 177 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 4, 108, 1, // Skip to: 549
/* 185 */     MCD::OPC_Decode, 190, 13, 26, // Opcode: SWM16_MM
/* 189 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 220
/* 193 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 196 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 208
/* 200 */     MCD::OPC_CheckPredicate, 4, 89, 1, // Skip to: 549
/* 204 */     MCD::OPC_Decode, 187, 7, 27, // Opcode: JR16_MM
/* 208 */     MCD::OPC_FilterValue, 1, 81, 1, // Skip to: 549
/* 212 */     MCD::OPC_CheckPredicate, 4, 77, 1, // Skip to: 549
/* 216 */     MCD::OPC_Decode, 190, 7, 27, // Opcode: JRC16_MM
/* 220 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 251
/* 224 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 227 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 239
/* 231 */     MCD::OPC_CheckPredicate, 4, 58, 1, // Skip to: 549
/* 235 */     MCD::OPC_Decode, 170, 7, 27, // Opcode: JALR16_MM
/* 239 */     MCD::OPC_FilterValue, 1, 50, 1, // Skip to: 549
/* 243 */     MCD::OPC_CheckPredicate, 4, 46, 1, // Skip to: 549
/* 247 */     MCD::OPC_Decode, 174, 7, 27, // Opcode: JALRS16_MM
/* 251 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 269
/* 255 */     MCD::OPC_CheckPredicate, 4, 34, 1, // Skip to: 549
/* 259 */     MCD::OPC_CheckField, 5, 1, 0, 28, 1, // Skip to: 549
/* 265 */     MCD::OPC_Decode, 241, 8, 27, // Opcode: MFHI16_MM
/* 269 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 287
/* 273 */     MCD::OPC_CheckPredicate, 4, 16, 1, // Skip to: 549
/* 277 */     MCD::OPC_CheckField, 5, 1, 0, 10, 1, // Skip to: 549
/* 283 */     MCD::OPC_Decode, 246, 8, 27, // Opcode: MFLO16_MM
/* 287 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 305
/* 291 */     MCD::OPC_CheckPredicate, 4, 254, 0, // Skip to: 549
/* 295 */     MCD::OPC_CheckField, 4, 2, 0, 248, 0, // Skip to: 549
/* 301 */     MCD::OPC_Decode, 188, 2, 28, // Opcode: BREAK16_MM
/* 305 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 323
/* 309 */     MCD::OPC_CheckPredicate, 4, 236, 0, // Skip to: 549
/* 313 */     MCD::OPC_CheckField, 4, 2, 0, 230, 0, // Skip to: 549
/* 319 */     MCD::OPC_Decode, 217, 11, 28, // Opcode: SDBBP16_MM
/* 323 */     MCD::OPC_FilterValue, 12, 222, 0, // Skip to: 549
/* 327 */     MCD::OPC_CheckPredicate, 4, 218, 0, // Skip to: 549
/* 331 */     MCD::OPC_CheckField, 5, 1, 0, 212, 0, // Skip to: 549
/* 337 */     MCD::OPC_Decode, 189, 7, 29, // Opcode: JRADDIUSP
/* 341 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 353
/* 345 */     MCD::OPC_CheckPredicate, 4, 200, 0, // Skip to: 549
/* 349 */     MCD::OPC_Decode, 157, 8, 30, // Opcode: LWSP_MM
/* 353 */     MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 382
/* 357 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 360 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 371
/* 364 */     MCD::OPC_CheckPredicate, 4, 181, 0, // Skip to: 549
/* 368 */     MCD::OPC_Decode, 32, 31, // Opcode: ADDIUS5_MM
/* 371 */     MCD::OPC_FilterValue, 1, 174, 0, // Skip to: 549
/* 375 */     MCD::OPC_CheckPredicate, 4, 170, 0, // Skip to: 549
/* 379 */     MCD::OPC_Decode, 33, 32, // Opcode: ADDIUSP_MM
/* 382 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 394
/* 386 */     MCD::OPC_CheckPredicate, 4, 159, 0, // Skip to: 549
/* 390 */     MCD::OPC_Decode, 144, 8, 33, // Opcode: LWGP_MM
/* 394 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 4, 147, 0, // Skip to: 549
/* 402 */     MCD::OPC_Decode, 137, 8, 20, // Opcode: LW16_MM
/* 406 */     MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 435
/* 410 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 413 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 424
/* 417 */     MCD::OPC_CheckPredicate, 4, 128, 0, // Skip to: 549
/* 421 */     MCD::OPC_Decode, 31, 34, // Opcode: ADDIUR2_MM
/* 424 */     MCD::OPC_FilterValue, 1, 121, 0, // Skip to: 549
/* 428 */     MCD::OPC_CheckPredicate, 4, 117, 0, // Skip to: 549
/* 432 */     MCD::OPC_Decode, 30, 35, // Opcode: ADDIUR1SP_MM
/* 435 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 453
/* 439 */     MCD::OPC_CheckPredicate, 4, 106, 0, // Skip to: 549
/* 443 */     MCD::OPC_CheckField, 0, 1, 0, 100, 0, // Skip to: 549
/* 449 */     MCD::OPC_Decode, 162, 9, 36, // Opcode: MOVEP_MM
/* 453 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 465
/* 457 */     MCD::OPC_CheckPredicate, 4, 88, 0, // Skip to: 549
/* 461 */     MCD::OPC_Decode, 207, 11, 20, // Opcode: SB16_MM
/* 465 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 477
/* 469 */     MCD::OPC_CheckPredicate, 4, 76, 0, // Skip to: 549
/* 473 */     MCD::OPC_Decode, 211, 1, 37, // Opcode: BEQZ16_MM
/* 477 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 489
/* 481 */     MCD::OPC_CheckPredicate, 4, 64, 0, // Skip to: 549
/* 485 */     MCD::OPC_Decode, 255, 11, 20, // Opcode: SH16_MM
/* 489 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 501
/* 493 */     MCD::OPC_CheckPredicate, 4, 52, 0, // Skip to: 549
/* 497 */     MCD::OPC_Decode, 172, 2, 37, // Opcode: BNEZ16_MM
/* 501 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 513
/* 505 */     MCD::OPC_CheckPredicate, 4, 40, 0, // Skip to: 549
/* 509 */     MCD::OPC_Decode, 197, 13, 30, // Opcode: SWSP_MM
/* 513 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 525
/* 517 */     MCD::OPC_CheckPredicate, 4, 28, 0, // Skip to: 549
/* 521 */     MCD::OPC_Decode, 176, 1, 38, // Opcode: B16_MM
/* 525 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 537
/* 529 */     MCD::OPC_CheckPredicate, 4, 16, 0, // Skip to: 549
/* 533 */     MCD::OPC_Decode, 179, 13, 20, // Opcode: SW16_MM
/* 537 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 549
/* 541 */     MCD::OPC_CheckPredicate, 4, 4, 0, // Skip to: 549
/* 545 */     MCD::OPC_Decode, 242, 7, 39, // Opcode: LI16_MM
/* 549 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 189, 3, // Skip to: 964
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 104
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 4, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 250, 12, 0, // Opcode: SSNOP_MM
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 4, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 177, 5, 0, // Opcode: EHB_MM
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 4, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 211, 10, 0, // Opcode: PAUSE_MM
/* 60 */      MCD::OPC_CheckPredicate, 4, 38, 6, // Skip to: 1638
/* 64 */      MCD::OPC_Decode, 178, 12, 40, // Opcode: SLL_MM
/* 68 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 4, 26, 6, // Skip to: 1638
/* 76 */      MCD::OPC_Decode, 247, 12, 40, // Opcode: SRL_MM
/* 80 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 4, 14, 6, // Skip to: 1638
/* 88 */      MCD::OPC_Decode, 226, 12, 40, // Opcode: SRA_MM
/* 92 */      MCD::OPC_FilterValue, 3, 6, 6, // Skip to: 1638
/* 96 */      MCD::OPC_CheckPredicate, 4, 2, 6, // Skip to: 1638
/* 100 */     MCD::OPC_Decode, 186, 11, 40, // Opcode: ROTR_MM
/* 104 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 116
/* 108 */     MCD::OPC_CheckPredicate, 4, 246, 5, // Skip to: 1638
/* 112 */     MCD::OPC_Decode, 189, 2, 41, // Opcode: BREAK_MM
/* 116 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 128
/* 120 */     MCD::OPC_CheckPredicate, 4, 234, 5, // Skip to: 1638
/* 124 */     MCD::OPC_Decode, 166, 7, 42, // Opcode: INS_MM
/* 128 */     MCD::OPC_FilterValue, 16, 180, 0, // Skip to: 312
/* 132 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 135 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 147
/* 139 */     MCD::OPC_CheckPredicate, 4, 215, 5, // Skip to: 1638
/* 143 */     MCD::OPC_Decode, 174, 12, 43, // Opcode: SLLV_MM
/* 147 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 159
/* 151 */     MCD::OPC_CheckPredicate, 4, 203, 5, // Skip to: 1638
/* 155 */     MCD::OPC_Decode, 243, 12, 43, // Opcode: SRLV_MM
/* 159 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 4, 191, 5, // Skip to: 1638
/* 167 */     MCD::OPC_Decode, 222, 12, 43, // Opcode: SRAV_MM
/* 171 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 4, 179, 5, // Skip to: 1638
/* 179 */     MCD::OPC_Decode, 185, 11, 43, // Opcode: ROTRV_MM
/* 183 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 194
/* 187 */     MCD::OPC_CheckPredicate, 4, 167, 5, // Skip to: 1638
/* 191 */     MCD::OPC_Decode, 76, 44, // Opcode: ADD_MM
/* 194 */     MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 205
/* 198 */     MCD::OPC_CheckPredicate, 4, 156, 5, // Skip to: 1638
/* 202 */     MCD::OPC_Decode, 83, 44, // Opcode: ADDu_MM
/* 205 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 217
/* 209 */     MCD::OPC_CheckPredicate, 4, 145, 5, // Skip to: 1638
/* 213 */     MCD::OPC_Decode, 171, 13, 44, // Opcode: SUB_MM
/* 217 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 229
/* 221 */     MCD::OPC_CheckPredicate, 4, 133, 5, // Skip to: 1638
/* 225 */     MCD::OPC_Decode, 174, 13, 44, // Opcode: SUBu_MM
/* 229 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 241
/* 233 */     MCD::OPC_CheckPredicate, 4, 121, 5, // Skip to: 1638
/* 237 */     MCD::OPC_Decode, 148, 10, 44, // Opcode: MUL_MM
/* 241 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 252
/* 245 */     MCD::OPC_CheckPredicate, 4, 109, 5, // Skip to: 1638
/* 249 */     MCD::OPC_Decode, 96, 44, // Opcode: AND_MM
/* 252 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 264
/* 256 */     MCD::OPC_CheckPredicate, 4, 98, 5, // Skip to: 1638
/* 260 */     MCD::OPC_Decode, 199, 10, 44, // Opcode: OR_MM
/* 264 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 276
/* 268 */     MCD::OPC_CheckPredicate, 4, 86, 5, // Skip to: 1638
/* 272 */     MCD::OPC_Decode, 185, 10, 44, // Opcode: NOR_MM
/* 276 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 4, 74, 5, // Skip to: 1638
/* 284 */     MCD::OPC_Decode, 188, 14, 44, // Opcode: XOR_MM
/* 288 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 300
/* 292 */     MCD::OPC_CheckPredicate, 4, 62, 5, // Skip to: 1638
/* 296 */     MCD::OPC_Decode, 183, 12, 44, // Opcode: SLT_MM
/* 300 */     MCD::OPC_FilterValue, 14, 54, 5, // Skip to: 1638
/* 304 */     MCD::OPC_CheckPredicate, 4, 50, 5, // Skip to: 1638
/* 308 */     MCD::OPC_Decode, 192, 12, 44, // Opcode: SLTu_MM
/* 312 */     MCD::OPC_FilterValue, 24, 39, 0, // Skip to: 355
/* 316 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 319 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 331
/* 323 */     MCD::OPC_CheckPredicate, 4, 31, 5, // Skip to: 1638
/* 327 */     MCD::OPC_Decode, 181, 9, 45, // Opcode: MOVN_I_MM
/* 331 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 343
/* 335 */     MCD::OPC_CheckPredicate, 4, 19, 5, // Skip to: 1638
/* 339 */     MCD::OPC_Decode, 201, 9, 45, // Opcode: MOVZ_I_MM
/* 343 */     MCD::OPC_FilterValue, 4, 11, 5, // Skip to: 1638
/* 347 */     MCD::OPC_CheckPredicate, 4, 7, 5, // Skip to: 1638
/* 351 */     MCD::OPC_Decode, 163, 8, 46, // Opcode: LWXS_MM
/* 355 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 367
/* 359 */     MCD::OPC_CheckPredicate, 4, 251, 4, // Skip to: 1638
/* 363 */     MCD::OPC_Decode, 202, 5, 47, // Opcode: EXT_MM
/* 367 */     MCD::OPC_FilterValue, 60, 243, 4, // Skip to: 1638
/* 371 */     MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 374 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 386
/* 378 */     MCD::OPC_CheckPredicate, 4, 232, 4, // Skip to: 1638
/* 382 */     MCD::OPC_Decode, 130, 14, 48, // Opcode: TEQ_MM
/* 386 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 398
/* 390 */     MCD::OPC_CheckPredicate, 4, 220, 4, // Skip to: 1638
/* 394 */     MCD::OPC_Decode, 138, 14, 48, // Opcode: TGE_MM
/* 398 */     MCD::OPC_FilterValue, 13, 123, 0, // Skip to: 525
/* 402 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 405 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 423
/* 409 */     MCD::OPC_CheckPredicate, 4, 201, 4, // Skip to: 1638
/* 413 */     MCD::OPC_CheckField, 16, 10, 0, 195, 4, // Skip to: 1638
/* 419 */     MCD::OPC_Decode, 140, 14, 0, // Opcode: TLBP_MM
/* 423 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 441
/* 427 */     MCD::OPC_CheckPredicate, 4, 183, 4, // Skip to: 1638
/* 431 */     MCD::OPC_CheckField, 16, 10, 0, 177, 4, // Skip to: 1638
/* 437 */     MCD::OPC_Decode, 142, 14, 0, // Opcode: TLBR_MM
/* 441 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 459
/* 445 */     MCD::OPC_CheckPredicate, 4, 165, 4, // Skip to: 1638
/* 449 */     MCD::OPC_CheckField, 16, 10, 0, 159, 4, // Skip to: 1638
/* 455 */     MCD::OPC_Decode, 144, 14, 0, // Opcode: TLBWI_MM
/* 459 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 477
/* 463 */     MCD::OPC_CheckPredicate, 4, 147, 4, // Skip to: 1638
/* 467 */     MCD::OPC_CheckField, 16, 10, 0, 141, 4, // Skip to: 1638
/* 473 */     MCD::OPC_Decode, 146, 14, 0, // Opcode: TLBWR_MM
/* 477 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 489
/* 481 */     MCD::OPC_CheckPredicate, 4, 129, 4, // Skip to: 1638
/* 485 */     MCD::OPC_Decode, 179, 14, 49, // Opcode: WAIT_MM
/* 489 */     MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 507
/* 493 */     MCD::OPC_CheckPredicate, 4, 117, 4, // Skip to: 1638
/* 497 */     MCD::OPC_CheckField, 16, 10, 0, 111, 4, // Skip to: 1638
/* 503 */     MCD::OPC_Decode, 203, 4, 0, // Opcode: DERET_MM
/* 507 */     MCD::OPC_FilterValue, 15, 103, 4, // Skip to: 1638
/* 511 */     MCD::OPC_CheckPredicate, 4, 99, 4, // Skip to: 1638
/* 515 */     MCD::OPC_CheckField, 16, 10, 0, 93, 4, // Skip to: 1638
/* 521 */     MCD::OPC_Decode, 185, 5, 0, // Opcode: ERET_MM
/* 525 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 537
/* 529 */     MCD::OPC_CheckPredicate, 4, 81, 4, // Skip to: 1638
/* 533 */     MCD::OPC_Decode, 137, 14, 48, // Opcode: TGEU_MM
/* 537 */     MCD::OPC_FilterValue, 29, 39, 0, // Skip to: 580
/* 541 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 544 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 562
/* 548 */     MCD::OPC_CheckPredicate, 4, 62, 4, // Skip to: 1638
/* 552 */     MCD::OPC_CheckField, 21, 5, 0, 56, 4, // Skip to: 1638
/* 558 */     MCD::OPC_Decode, 226, 4, 50, // Opcode: DI_MM
/* 562 */     MCD::OPC_FilterValue, 5, 48, 4, // Skip to: 1638
/* 566 */     MCD::OPC_CheckPredicate, 4, 44, 4, // Skip to: 1638
/* 570 */     MCD::OPC_CheckField, 21, 5, 0, 38, 4, // Skip to: 1638
/* 576 */     MCD::OPC_Decode, 180, 5, 50, // Opcode: EI_MM
/* 580 */     MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 592
/* 584 */     MCD::OPC_CheckPredicate, 4, 26, 4, // Skip to: 1638
/* 588 */     MCD::OPC_Decode, 153, 14, 48, // Opcode: TLT_MM
/* 592 */     MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 604
/* 596 */     MCD::OPC_CheckPredicate, 4, 14, 4, // Skip to: 1638
/* 600 */     MCD::OPC_Decode, 152, 14, 48, // Opcode: TLTU_MM
/* 604 */     MCD::OPC_FilterValue, 44, 171, 0, // Skip to: 779
/* 608 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 611 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 623
/* 615 */     MCD::OPC_CheckPredicate, 4, 251, 3, // Skip to: 1638
/* 619 */     MCD::OPC_Decode, 234, 11, 51, // Opcode: SEB_MM
/* 623 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 635
/* 627 */     MCD::OPC_CheckPredicate, 4, 239, 3, // Skip to: 1638
/* 631 */     MCD::OPC_Decode, 238, 11, 51, // Opcode: SEH_MM
/* 635 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 647
/* 639 */     MCD::OPC_CheckPredicate, 4, 227, 3, // Skip to: 1638
/* 643 */     MCD::OPC_Decode, 154, 3, 51, // Opcode: CLO_MM
/* 647 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 659
/* 651 */     MCD::OPC_CheckPredicate, 4, 215, 3, // Skip to: 1638
/* 655 */     MCD::OPC_Decode, 174, 3, 51, // Opcode: CLZ_MM
/* 659 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 671
/* 663 */     MCD::OPC_CheckPredicate, 4, 203, 3, // Skip to: 1638
/* 667 */     MCD::OPC_Decode, 176, 11, 52, // Opcode: RDHWR_MM
/* 671 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 683
/* 675 */     MCD::OPC_CheckPredicate, 4, 191, 3, // Skip to: 1638
/* 679 */     MCD::OPC_Decode, 182, 14, 51, // Opcode: WSBH_MM
/* 683 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 695
/* 687 */     MCD::OPC_CheckPredicate, 4, 179, 3, // Skip to: 1638
/* 691 */     MCD::OPC_Decode, 139, 10, 53, // Opcode: MULT_MM
/* 695 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 707
/* 699 */     MCD::OPC_CheckPredicate, 4, 167, 3, // Skip to: 1638
/* 703 */     MCD::OPC_Decode, 141, 10, 53, // Opcode: MULTu_MM
/* 707 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 719
/* 711 */     MCD::OPC_CheckPredicate, 4, 155, 3, // Skip to: 1638
/* 715 */     MCD::OPC_Decode, 227, 11, 53, // Opcode: SDIV_MM
/* 719 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 731
/* 723 */     MCD::OPC_CheckPredicate, 4, 143, 3, // Skip to: 1638
/* 727 */     MCD::OPC_Decode, 168, 14, 53, // Opcode: UDIV_MM
/* 731 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 743
/* 735 */     MCD::OPC_CheckPredicate, 4, 131, 3, // Skip to: 1638
/* 739 */     MCD::OPC_Decode, 200, 8, 53, // Opcode: MADD_MM
/* 743 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 755
/* 747 */     MCD::OPC_CheckPredicate, 4, 119, 3, // Skip to: 1638
/* 751 */     MCD::OPC_Decode, 191, 8, 53, // Opcode: MADDU_MM
/* 755 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 767
/* 759 */     MCD::OPC_CheckPredicate, 4, 107, 3, // Skip to: 1638
/* 763 */     MCD::OPC_Decode, 220, 9, 53, // Opcode: MSUB_MM
/* 767 */     MCD::OPC_FilterValue, 15, 99, 3, // Skip to: 1638
/* 771 */     MCD::OPC_CheckPredicate, 4, 95, 3, // Skip to: 1638
/* 775 */     MCD::OPC_Decode, 211, 9, 53, // Opcode: MSUBU_MM
/* 779 */     MCD::OPC_FilterValue, 45, 45, 0, // Skip to: 828
/* 783 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 786 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 804
/* 790 */     MCD::OPC_CheckPredicate, 4, 76, 3, // Skip to: 1638
/* 794 */     MCD::OPC_CheckField, 21, 5, 0, 70, 3, // Skip to: 1638
/* 800 */     MCD::OPC_Decode, 204, 13, 54, // Opcode: SYNC_MM
/* 804 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 816
/* 808 */     MCD::OPC_CheckPredicate, 4, 58, 3, // Skip to: 1638
/* 812 */     MCD::OPC_Decode, 206, 13, 49, // Opcode: SYSCALL_MM
/* 816 */     MCD::OPC_FilterValue, 13, 50, 3, // Skip to: 1638
/* 820 */     MCD::OPC_CheckPredicate, 4, 46, 3, // Skip to: 1638
/* 824 */     MCD::OPC_Decode, 218, 11, 49, // Opcode: SDBBP_MM
/* 828 */     MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 840
/* 832 */     MCD::OPC_CheckPredicate, 4, 34, 3, // Skip to: 1638
/* 836 */     MCD::OPC_Decode, 157, 14, 48, // Opcode: TNE_MM
/* 840 */     MCD::OPC_FilterValue, 53, 75, 0, // Skip to: 919
/* 844 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 847 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 865
/* 851 */     MCD::OPC_CheckPredicate, 4, 15, 3, // Skip to: 1638
/* 855 */     MCD::OPC_CheckField, 21, 5, 0, 9, 3, // Skip to: 1638
/* 861 */     MCD::OPC_Decode, 244, 8, 50, // Opcode: MFHI_MM
/* 865 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 883
/* 869 */     MCD::OPC_CheckPredicate, 4, 253, 2, // Skip to: 1638
/* 873 */     MCD::OPC_CheckField, 21, 5, 0, 247, 2, // Skip to: 1638
/* 879 */     MCD::OPC_Decode, 249, 8, 50, // Opcode: MFLO_MM
/* 883 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 901
/* 887 */     MCD::OPC_CheckPredicate, 4, 235, 2, // Skip to: 1638
/* 891 */     MCD::OPC_CheckField, 21, 5, 0, 229, 2, // Skip to: 1638
/* 897 */     MCD::OPC_Decode, 235, 9, 50, // Opcode: MTHI_MM
/* 901 */     MCD::OPC_FilterValue, 3, 221, 2, // Skip to: 1638
/* 905 */     MCD::OPC_CheckPredicate, 4, 217, 2, // Skip to: 1638
/* 909 */     MCD::OPC_CheckField, 21, 5, 0, 211, 2, // Skip to: 1638
/* 915 */     MCD::OPC_Decode, 240, 9, 50, // Opcode: MTLO_MM
/* 919 */     MCD::OPC_FilterValue, 60, 203, 2, // Skip to: 1638
/* 923 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 926 */     MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 952
/* 930 */     MCD::OPC_CheckPredicate, 4, 10, 0, // Skip to: 944
/* 934 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 944
/* 940 */     MCD::OPC_Decode, 193, 7, 50, // Opcode: JR_MM
/* 944 */     MCD::OPC_CheckPredicate, 4, 178, 2, // Skip to: 1638
/* 948 */     MCD::OPC_Decode, 177, 7, 51, // Opcode: JALR_MM
/* 952 */     MCD::OPC_FilterValue, 4, 170, 2, // Skip to: 1638
/* 956 */     MCD::OPC_CheckPredicate, 4, 166, 2, // Skip to: 1638
/* 960 */     MCD::OPC_Decode, 175, 7, 51, // Opcode: JALRS_MM
/* 964 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 975
/* 968 */     MCD::OPC_CheckPredicate, 4, 154, 2, // Skip to: 1638
/* 972 */     MCD::OPC_Decode, 79, 55, // Opcode: ADDi_MM
/* 975 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 987
/* 979 */     MCD::OPC_CheckPredicate, 4, 143, 2, // Skip to: 1638
/* 983 */     MCD::OPC_Decode, 210, 7, 56, // Opcode: LBu_MM
/* 987 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 999
/* 991 */     MCD::OPC_CheckPredicate, 4, 131, 2, // Skip to: 1638
/* 995 */     MCD::OPC_Decode, 209, 11, 56, // Opcode: SB_MM
/* 999 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1011
/* 1003 */    MCD::OPC_CheckPredicate, 4, 119, 2, // Skip to: 1638
/* 1007 */    MCD::OPC_Decode, 207, 7, 56, // Opcode: LB_MM
/* 1011 */    MCD::OPC_FilterValue, 8, 63, 0, // Skip to: 1078
/* 1015 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1018 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1030
/* 1022 */    MCD::OPC_CheckPredicate, 4, 100, 2, // Skip to: 1638
/* 1026 */    MCD::OPC_Decode, 153, 8, 57, // Opcode: LWP_MM
/* 1030 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1042
/* 1034 */    MCD::OPC_CheckPredicate, 4, 88, 2, // Skip to: 1638
/* 1038 */    MCD::OPC_Decode, 149, 8, 57, // Opcode: LWM32_MM
/* 1042 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1054
/* 1046 */    MCD::OPC_CheckPredicate, 4, 76, 2, // Skip to: 1638
/* 1050 */    MCD::OPC_Decode, 240, 2, 58, // Opcode: CACHE_MM
/* 1054 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1066
/* 1058 */    MCD::OPC_CheckPredicate, 4, 64, 2, // Skip to: 1638
/* 1062 */    MCD::OPC_Decode, 193, 13, 57, // Opcode: SWP_MM
/* 1066 */    MCD::OPC_FilterValue, 13, 56, 2, // Skip to: 1638
/* 1070 */    MCD::OPC_CheckPredicate, 4, 52, 2, // Skip to: 1638
/* 1074 */    MCD::OPC_Decode, 191, 13, 57, // Opcode: SWM32_MM
/* 1078 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1089
/* 1082 */    MCD::OPC_CheckPredicate, 4, 40, 2, // Skip to: 1638
/* 1086 */    MCD::OPC_Decode, 81, 55, // Opcode: ADDiu_MM
/* 1089 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1101
/* 1093 */    MCD::OPC_CheckPredicate, 4, 29, 2, // Skip to: 1638
/* 1097 */    MCD::OPC_Decode, 241, 7, 56, // Opcode: LHu_MM
/* 1101 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1113
/* 1105 */    MCD::OPC_CheckPredicate, 4, 17, 2, // Skip to: 1638
/* 1109 */    MCD::OPC_Decode, 156, 12, 56, // Opcode: SH_MM
/* 1113 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1125
/* 1117 */    MCD::OPC_CheckPredicate, 4, 5, 2, // Skip to: 1638
/* 1121 */    MCD::OPC_Decode, 238, 7, 56, // Opcode: LH_MM
/* 1125 */    MCD::OPC_FilterValue, 16, 207, 0, // Skip to: 1336
/* 1129 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1132 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1144
/* 1136 */    MCD::OPC_CheckPredicate, 4, 242, 1, // Skip to: 1638
/* 1140 */    MCD::OPC_Decode, 155, 2, 59, // Opcode: BLTZ_MM
/* 1144 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1156
/* 1148 */    MCD::OPC_CheckPredicate, 4, 230, 1, // Skip to: 1638
/* 1152 */    MCD::OPC_Decode, 152, 2, 59, // Opcode: BLTZAL_MM
/* 1156 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1168
/* 1160 */    MCD::OPC_CheckPredicate, 4, 218, 1, // Skip to: 1638
/* 1164 */    MCD::OPC_Decode, 231, 1, 59, // Opcode: BGEZ_MM
/* 1168 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1180
/* 1172 */    MCD::OPC_CheckPredicate, 4, 206, 1, // Skip to: 1638
/* 1176 */    MCD::OPC_Decode, 228, 1, 59, // Opcode: BGEZAL_MM
/* 1180 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1192
/* 1184 */    MCD::OPC_CheckPredicate, 4, 194, 1, // Skip to: 1638
/* 1188 */    MCD::OPC_Decode, 140, 2, 59, // Opcode: BLEZ_MM
/* 1192 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1204
/* 1196 */    MCD::OPC_CheckPredicate, 4, 182, 1, // Skip to: 1638
/* 1200 */    MCD::OPC_Decode, 176, 2, 59, // Opcode: BNEZC_MM
/* 1204 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1216
/* 1208 */    MCD::OPC_CheckPredicate, 4, 170, 1, // Skip to: 1638
/* 1212 */    MCD::OPC_Decode, 240, 1, 59, // Opcode: BGTZ_MM
/* 1216 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1228
/* 1220 */    MCD::OPC_CheckPredicate, 4, 158, 1, // Skip to: 1638
/* 1224 */    MCD::OPC_Decode, 215, 1, 59, // Opcode: BEQZC_MM
/* 1228 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1240
/* 1232 */    MCD::OPC_CheckPredicate, 4, 146, 1, // Skip to: 1638
/* 1236 */    MCD::OPC_Decode, 150, 14, 60, // Opcode: TLTI_MM
/* 1240 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1252
/* 1244 */    MCD::OPC_CheckPredicate, 4, 134, 1, // Skip to: 1638
/* 1248 */    MCD::OPC_Decode, 135, 14, 60, // Opcode: TGEI_MM
/* 1252 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1264
/* 1256 */    MCD::OPC_CheckPredicate, 4, 122, 1, // Skip to: 1638
/* 1260 */    MCD::OPC_Decode, 149, 14, 60, // Opcode: TLTIU_MM
/* 1264 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1276
/* 1268 */    MCD::OPC_CheckPredicate, 4, 110, 1, // Skip to: 1638
/* 1272 */    MCD::OPC_Decode, 134, 14, 60, // Opcode: TGEIU_MM
/* 1276 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1288
/* 1280 */    MCD::OPC_CheckPredicate, 4, 98, 1, // Skip to: 1638
/* 1284 */    MCD::OPC_Decode, 156, 14, 60, // Opcode: TNEI_MM
/* 1288 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1300
/* 1292 */    MCD::OPC_CheckPredicate, 4, 86, 1, // Skip to: 1638
/* 1296 */    MCD::OPC_Decode, 135, 8, 60, // Opcode: LUi_MM
/* 1300 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1312
/* 1304 */    MCD::OPC_CheckPredicate, 4, 74, 1, // Skip to: 1638
/* 1308 */    MCD::OPC_Decode, 129, 14, 60, // Opcode: TEQI_MM
/* 1312 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 1324
/* 1316 */    MCD::OPC_CheckPredicate, 4, 62, 1, // Skip to: 1638
/* 1320 */    MCD::OPC_Decode, 151, 2, 59, // Opcode: BLTZALS_MM
/* 1324 */    MCD::OPC_FilterValue, 19, 54, 1, // Skip to: 1638
/* 1328 */    MCD::OPC_CheckPredicate, 4, 50, 1, // Skip to: 1638
/* 1332 */    MCD::OPC_Decode, 227, 1, 59, // Opcode: BGEZALS_MM
/* 1336 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 1348
/* 1340 */    MCD::OPC_CheckPredicate, 4, 38, 1, // Skip to: 1638
/* 1344 */    MCD::OPC_Decode, 207, 10, 61, // Opcode: ORi_MM
/* 1348 */    MCD::OPC_FilterValue, 21, 29, 0, // Skip to: 1381
/* 1352 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1355 */    MCD::OPC_FilterValue, 251, 2, 8, 0, // Skip to: 1368
/* 1360 */    MCD::OPC_CheckPredicate, 4, 18, 1, // Skip to: 1638
/* 1364 */    MCD::OPC_Decode, 169, 9, 62, // Opcode: MOVF_I_MM
/* 1368 */    MCD::OPC_FilterValue, 251, 18, 9, 1, // Skip to: 1638
/* 1373 */    MCD::OPC_CheckPredicate, 4, 5, 1, // Skip to: 1638
/* 1377 */    MCD::OPC_Decode, 189, 9, 62, // Opcode: MOVT_I_MM
/* 1381 */    MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 1484
/* 1385 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1388 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1400
/* 1392 */    MCD::OPC_CheckPredicate, 4, 242, 0, // Skip to: 1638
/* 1396 */    MCD::OPC_Decode, 147, 8, 57, // Opcode: LWL_MM
/* 1400 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1412
/* 1404 */    MCD::OPC_CheckPredicate, 4, 230, 0, // Skip to: 1638
/* 1408 */    MCD::OPC_Decode, 156, 8, 57, // Opcode: LWR_MM
/* 1412 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1424
/* 1416 */    MCD::OPC_CheckPredicate, 4, 218, 0, // Skip to: 1638
/* 1420 */    MCD::OPC_Decode, 245, 10, 58, // Opcode: PREF_MM
/* 1424 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1436
/* 1428 */    MCD::OPC_CheckPredicate, 4, 206, 0, // Skip to: 1638
/* 1432 */    MCD::OPC_Decode, 246, 7, 57, // Opcode: LL_MM
/* 1436 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1448
/* 1440 */    MCD::OPC_CheckPredicate, 4, 194, 0, // Skip to: 1638
/* 1444 */    MCD::OPC_Decode, 189, 13, 57, // Opcode: SWL_MM
/* 1448 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1460
/* 1452 */    MCD::OPC_CheckPredicate, 4, 182, 0, // Skip to: 1638
/* 1456 */    MCD::OPC_Decode, 196, 13, 57, // Opcode: SWR_MM
/* 1460 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1472
/* 1464 */    MCD::OPC_CheckPredicate, 4, 170, 0, // Skip to: 1638
/* 1468 */    MCD::OPC_Decode, 213, 11, 57, // Opcode: SC_MM
/* 1472 */    MCD::OPC_FilterValue, 14, 162, 0, // Skip to: 1638
/* 1476 */    MCD::OPC_CheckPredicate, 4, 158, 0, // Skip to: 1638
/* 1480 */    MCD::OPC_Decode, 159, 8, 57, // Opcode: LWU_MM
/* 1484 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 1496
/* 1488 */    MCD::OPC_CheckPredicate, 4, 146, 0, // Skip to: 1638
/* 1492 */    MCD::OPC_Decode, 196, 14, 61, // Opcode: XORi_MM
/* 1496 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 1508
/* 1500 */    MCD::OPC_CheckPredicate, 4, 134, 0, // Skip to: 1638
/* 1504 */    MCD::OPC_Decode, 178, 7, 63, // Opcode: JALS_MM
/* 1508 */    MCD::OPC_FilterValue, 30, 7, 0, // Skip to: 1519
/* 1512 */    MCD::OPC_CheckPredicate, 4, 122, 0, // Skip to: 1638
/* 1516 */    MCD::OPC_Decode, 28, 64, // Opcode: ADDIUPC_MM
/* 1519 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1531
/* 1523 */    MCD::OPC_CheckPredicate, 4, 111, 0, // Skip to: 1638
/* 1527 */    MCD::OPC_Decode, 186, 12, 55, // Opcode: SLTi_MM
/* 1531 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 1543
/* 1535 */    MCD::OPC_CheckPredicate, 4, 99, 0, // Skip to: 1638
/* 1539 */    MCD::OPC_Decode, 216, 1, 65, // Opcode: BEQ_MM
/* 1543 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1555
/* 1547 */    MCD::OPC_CheckPredicate, 4, 87, 0, // Skip to: 1638
/* 1551 */    MCD::OPC_Decode, 189, 12, 55, // Opcode: SLTiu_MM
/* 1555 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 1567
/* 1559 */    MCD::OPC_CheckPredicate, 4, 75, 0, // Skip to: 1638
/* 1563 */    MCD::OPC_Decode, 177, 2, 65, // Opcode: BNE_MM
/* 1567 */    MCD::OPC_FilterValue, 52, 7, 0, // Skip to: 1578
/* 1571 */    MCD::OPC_CheckPredicate, 4, 63, 0, // Skip to: 1638
/* 1575 */    MCD::OPC_Decode, 104, 61, // Opcode: ANDi_MM
/* 1578 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 1590
/* 1582 */    MCD::OPC_CheckPredicate, 4, 52, 0, // Skip to: 1638
/* 1586 */    MCD::OPC_Decode, 194, 7, 63, // Opcode: J_MM
/* 1590 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 1602
/* 1594 */    MCD::OPC_CheckPredicate, 4, 40, 0, // Skip to: 1638
/* 1598 */    MCD::OPC_Decode, 180, 7, 63, // Opcode: JALX_MM
/* 1602 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 1614
/* 1606 */    MCD::OPC_CheckPredicate, 4, 28, 0, // Skip to: 1638
/* 1610 */    MCD::OPC_Decode, 181, 7, 63, // Opcode: JAL_MM
/* 1614 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 1626
/* 1618 */    MCD::OPC_CheckPredicate, 4, 16, 0, // Skip to: 1638
/* 1622 */    MCD::OPC_Decode, 200, 13, 56, // Opcode: SW_MM
/* 1626 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 1638
/* 1630 */    MCD::OPC_CheckPredicate, 4, 4, 0, // Skip to: 1638
/* 1634 */    MCD::OPC_Decode, 164, 8, 56, // Opcode: LW_MM
/* 1638 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 181, 1, // Skip to: 444
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 53, 0, // Skip to: 67
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 43
/* 21 */      MCD::OPC_CheckPredicate, 5, 10, 0, // Skip to: 35
/* 25 */      MCD::OPC_CheckField, 11, 15, 3, 4, 0, // Skip to: 35
/* 31 */      MCD::OPC_Decode, 178, 5, 0, // Opcode: EHB_MMR6
/* 35 */      MCD::OPC_CheckPredicate, 5, 129, 3, // Skip to: 936
/* 39 */      MCD::OPC_Decode, 179, 12, 40, // Opcode: SLL_MMR6
/* 43 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 55
/* 47 */      MCD::OPC_CheckPredicate, 5, 117, 3, // Skip to: 936
/* 51 */      MCD::OPC_Decode, 243, 11, 44, // Opcode: SELEQZ_MMR6
/* 55 */      MCD::OPC_FilterValue, 6, 109, 3, // Skip to: 936
/* 59 */      MCD::OPC_CheckPredicate, 5, 105, 3, // Skip to: 936
/* 63 */      MCD::OPC_Decode, 248, 11, 44, // Opcode: SELNEZ_MMR6
/* 67 */      MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 79
/* 71 */      MCD::OPC_CheckPredicate, 5, 93, 3, // Skip to: 936
/* 75 */      MCD::OPC_Decode, 190, 2, 41, // Opcode: BREAK_MMR6
/* 79 */      MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 97
/* 83 */      MCD::OPC_CheckPredicate, 5, 81, 3, // Skip to: 936
/* 87 */      MCD::OPC_CheckField, 6, 3, 0, 75, 3, // Skip to: 936
/* 93 */      MCD::OPC_Decode, 128, 8, 66, // Opcode: LSA_MMR6
/* 97 */      MCD::OPC_FilterValue, 16, 114, 0, // Skip to: 215
/* 101 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 104 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 122
/* 108 */     MCD::OPC_CheckPredicate, 5, 56, 3, // Skip to: 936
/* 112 */     MCD::OPC_CheckField, 16, 5, 0, 50, 3, // Skip to: 936
/* 118 */     MCD::OPC_Decode, 175, 3, 14, // Opcode: CLZ_MMR6
/* 122 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 133
/* 126 */     MCD::OPC_CheckPredicate, 5, 38, 3, // Skip to: 936
/* 130 */     MCD::OPC_Decode, 77, 44, // Opcode: ADD_MMR6
/* 133 */     MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 144
/* 137 */     MCD::OPC_CheckPredicate, 5, 27, 3, // Skip to: 936
/* 141 */     MCD::OPC_Decode, 58, 44, // Opcode: ADDU_MMR6
/* 144 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 5, 16, 3, // Skip to: 936
/* 152 */     MCD::OPC_Decode, 172, 13, 44, // Opcode: SUB_MMR6
/* 156 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 168
/* 160 */     MCD::OPC_CheckPredicate, 5, 4, 3, // Skip to: 936
/* 164 */     MCD::OPC_Decode, 158, 13, 44, // Opcode: SUBU_MMR6
/* 168 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 179
/* 172 */     MCD::OPC_CheckPredicate, 5, 248, 2, // Skip to: 936
/* 176 */     MCD::OPC_Decode, 97, 44, // Opcode: AND_MMR6
/* 179 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 191
/* 183 */     MCD::OPC_CheckPredicate, 5, 237, 2, // Skip to: 936
/* 187 */     MCD::OPC_Decode, 200, 10, 44, // Opcode: OR_MMR6
/* 191 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 203
/* 195 */     MCD::OPC_CheckPredicate, 5, 225, 2, // Skip to: 936
/* 199 */     MCD::OPC_Decode, 186, 10, 44, // Opcode: NOR_MMR6
/* 203 */     MCD::OPC_FilterValue, 12, 217, 2, // Skip to: 936
/* 207 */     MCD::OPC_CheckPredicate, 5, 213, 2, // Skip to: 936
/* 211 */     MCD::OPC_Decode, 189, 14, 44, // Opcode: XOR_MMR6
/* 215 */     MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 318
/* 219 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 222 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 234
/* 226 */     MCD::OPC_CheckPredicate, 5, 194, 2, // Skip to: 936
/* 230 */     MCD::OPC_Decode, 149, 10, 44, // Opcode: MUL_MMR6
/* 234 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 246
/* 238 */     MCD::OPC_CheckPredicate, 5, 182, 2, // Skip to: 936
/* 242 */     MCD::OPC_Decode, 250, 9, 44, // Opcode: MUH_MMR6
/* 246 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 258
/* 250 */     MCD::OPC_CheckPredicate, 5, 170, 2, // Skip to: 936
/* 254 */     MCD::OPC_Decode, 143, 10, 44, // Opcode: MULU_MMR6
/* 258 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 270
/* 262 */     MCD::OPC_CheckPredicate, 5, 158, 2, // Skip to: 936
/* 266 */     MCD::OPC_Decode, 249, 9, 44, // Opcode: MUHU_MMR6
/* 270 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 282
/* 274 */     MCD::OPC_CheckPredicate, 5, 146, 2, // Skip to: 936
/* 278 */     MCD::OPC_Decode, 217, 4, 44, // Opcode: DIV_MMR6
/* 282 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 294
/* 286 */     MCD::OPC_CheckPredicate, 5, 134, 2, // Skip to: 936
/* 290 */     MCD::OPC_Decode, 152, 9, 44, // Opcode: MOD_MMR6
/* 294 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 306
/* 298 */     MCD::OPC_CheckPredicate, 5, 122, 2, // Skip to: 936
/* 302 */     MCD::OPC_Decode, 216, 4, 44, // Opcode: DIVU_MMR6
/* 306 */     MCD::OPC_FilterValue, 7, 114, 2, // Skip to: 936
/* 310 */     MCD::OPC_CheckPredicate, 5, 110, 2, // Skip to: 936
/* 314 */     MCD::OPC_Decode, 151, 9, 44, // Opcode: MODU_MMR6
/* 318 */     MCD::OPC_FilterValue, 31, 13, 0, // Skip to: 335
/* 322 */     MCD::OPC_CheckPredicate, 5, 98, 2, // Skip to: 936
/* 326 */     MCD::OPC_CheckField, 6, 3, 0, 92, 2, // Skip to: 936
/* 332 */     MCD::OPC_Decode, 87, 67, // Opcode: ALIGN_MMR6
/* 335 */     MCD::OPC_FilterValue, 60, 85, 2, // Skip to: 936
/* 339 */     MCD::OPC_ExtractField, 6, 10,  // Inst{15-6} ...
/* 342 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 354
/* 346 */     MCD::OPC_CheckPredicate, 5, 74, 2, // Skip to: 936
/* 350 */     MCD::OPC_Decode, 131, 2, 53, // Opcode: BITSWAP_MMR6
/* 354 */     MCD::OPC_FilterValue, 172, 1, 8, 0, // Skip to: 367
/* 359 */     MCD::OPC_CheckPredicate, 5, 61, 2, // Skip to: 936
/* 363 */     MCD::OPC_Decode, 235, 11, 51, // Opcode: SEB_MMR6
/* 367 */     MCD::OPC_FilterValue, 236, 1, 8, 0, // Skip to: 380
/* 372 */     MCD::OPC_CheckPredicate, 5, 48, 2, // Skip to: 936
/* 376 */     MCD::OPC_Decode, 239, 11, 51, // Opcode: SEH_MMR6
/* 380 */     MCD::OPC_FilterValue, 172, 2, 8, 0, // Skip to: 393
/* 385 */     MCD::OPC_CheckPredicate, 5, 35, 2, // Skip to: 936
/* 389 */     MCD::OPC_Decode, 155, 3, 51, // Opcode: CLO_MMR6
/* 393 */     MCD::OPC_FilterValue, 221, 2, 14, 0, // Skip to: 412
/* 398 */     MCD::OPC_CheckPredicate, 5, 22, 2, // Skip to: 936
/* 402 */     MCD::OPC_CheckField, 21, 5, 0, 16, 2, // Skip to: 936
/* 408 */     MCD::OPC_Decode, 181, 5, 50, // Opcode: EI_MMR6
/* 412 */     MCD::OPC_FilterValue, 205, 7, 7, 2, // Skip to: 936
/* 417 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 420 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 432
/* 424 */     MCD::OPC_CheckPredicate, 5, 252, 1, // Skip to: 936
/* 428 */     MCD::OPC_Decode, 186, 5, 0, // Opcode: ERET_MMR6
/* 432 */     MCD::OPC_FilterValue, 1, 244, 1, // Skip to: 936
/* 436 */     MCD::OPC_CheckPredicate, 5, 240, 1, // Skip to: 936
/* 440 */     MCD::OPC_Decode, 184, 5, 0, // Opcode: ERETNC_MMR6
/* 444 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 456
/* 448 */     MCD::OPC_CheckPredicate, 5, 228, 1, // Skip to: 936
/* 452 */     MCD::OPC_Decode, 149, 1, 55, // Opcode: AUI_MMR6
/* 456 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 474
/* 460 */     MCD::OPC_CheckPredicate, 5, 216, 1, // Skip to: 936
/* 464 */     MCD::OPC_CheckField, 12, 4, 6, 210, 1, // Skip to: 936
/* 470 */     MCD::OPC_Decode, 241, 2, 58, // Opcode: CACHE_MMR6
/* 474 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 485
/* 478 */     MCD::OPC_CheckPredicate, 5, 198, 1, // Skip to: 936
/* 482 */     MCD::OPC_Decode, 34, 55, // Opcode: ADDIU_MMR6
/* 485 */     MCD::OPC_FilterValue, 16, 27, 0, // Skip to: 516
/* 489 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 492 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 504
/* 496 */     MCD::OPC_CheckPredicate, 6, 180, 1, // Skip to: 936
/* 500 */     MCD::OPC_Decode, 190, 4, 68, // Opcode: DATI_MM64R6
/* 504 */     MCD::OPC_FilterValue, 17, 172, 1, // Skip to: 936
/* 508 */     MCD::OPC_CheckPredicate, 6, 168, 1, // Skip to: 936
/* 512 */     MCD::OPC_Decode, 186, 4, 68, // Opcode: DAHI_MM64R6
/* 516 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 528
/* 520 */     MCD::OPC_CheckPredicate, 5, 156, 1, // Skip to: 936
/* 524 */     MCD::OPC_Decode, 198, 10, 55, // Opcode: ORI_MMR6
/* 528 */     MCD::OPC_FilterValue, 22, 112, 0, // Skip to: 644
/* 532 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 535 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 547
/* 539 */     MCD::OPC_CheckPredicate, 6, 137, 1, // Skip to: 936
/* 543 */     MCD::OPC_Decode, 208, 4, 69, // Opcode: DEXTU_MM64R6
/* 547 */     MCD::OPC_FilterValue, 24, 51, 0, // Skip to: 602
/* 551 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 554 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 566
/* 558 */     MCD::OPC_CheckPredicate, 6, 118, 1, // Skip to: 936
/* 562 */     MCD::OPC_Decode, 201, 4, 70, // Opcode: DDIV_MM64R6
/* 566 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 578
/* 570 */     MCD::OPC_CheckPredicate, 6, 106, 1, // Skip to: 936
/* 574 */     MCD::OPC_Decode, 236, 4, 70, // Opcode: DMOD_MM64R6
/* 578 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 590
/* 582 */     MCD::OPC_CheckPredicate, 6, 94, 1, // Skip to: 936
/* 586 */     MCD::OPC_Decode, 200, 4, 70, // Opcode: DDIVU_MM64R6
/* 590 */     MCD::OPC_FilterValue, 7, 86, 1, // Skip to: 936
/* 594 */     MCD::OPC_CheckPredicate, 6, 82, 1, // Skip to: 936
/* 598 */     MCD::OPC_Decode, 235, 4, 70, // Opcode: DMODU_MM64R6
/* 602 */     MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 620
/* 606 */     MCD::OPC_CheckPredicate, 6, 70, 1, // Skip to: 936
/* 610 */     MCD::OPC_CheckField, 6, 2, 0, 64, 1, // Skip to: 936
/* 616 */     MCD::OPC_Decode, 188, 4, 71, // Opcode: DALIGN_MM64R6
/* 620 */     MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 632
/* 624 */     MCD::OPC_CheckPredicate, 6, 52, 1, // Skip to: 936
/* 628 */     MCD::OPC_Decode, 206, 4, 69, // Opcode: DEXTM_MM64R6
/* 632 */     MCD::OPC_FilterValue, 44, 44, 1, // Skip to: 936
/* 636 */     MCD::OPC_CheckPredicate, 6, 40, 1, // Skip to: 936
/* 640 */     MCD::OPC_Decode, 209, 4, 69, // Opcode: DEXT_MM64R6
/* 644 */     MCD::OPC_FilterValue, 24, 33, 0, // Skip to: 681
/* 648 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 651 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 663
/* 655 */     MCD::OPC_CheckPredicate, 5, 21, 1, // Skip to: 936
/* 659 */     MCD::OPC_Decode, 246, 10, 58, // Opcode: PREF_MMR6
/* 663 */     MCD::OPC_FilterValue, 10, 13, 1, // Skip to: 936
/* 667 */     MCD::OPC_CheckPredicate, 5, 9, 1, // Skip to: 936
/* 671 */     MCD::OPC_CheckField, 9, 3, 7, 3, 1, // Skip to: 936
/* 677 */     MCD::OPC_Decode, 186, 13, 72, // Opcode: SWE_MMR6
/* 681 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 693
/* 685 */     MCD::OPC_CheckPredicate, 5, 247, 0, // Skip to: 936
/* 689 */     MCD::OPC_Decode, 187, 14, 55, // Opcode: XORI_MMR6
/* 693 */     MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 711
/* 697 */     MCD::OPC_CheckPredicate, 5, 235, 0, // Skip to: 936
/* 701 */     MCD::OPC_CheckField, 16, 5, 0, 229, 0, // Skip to: 936
/* 707 */     MCD::OPC_Decode, 213, 1, 73, // Opcode: BEQZALC_MMR6
/* 711 */     MCD::OPC_FilterValue, 30, 56, 0, // Skip to: 771
/* 715 */     MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 718 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 729
/* 722 */     MCD::OPC_CheckPredicate, 5, 210, 0, // Skip to: 936
/* 726 */     MCD::OPC_Decode, 29, 74, // Opcode: ADDIUPC_MMR6
/* 729 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 741
/* 733 */     MCD::OPC_CheckPredicate, 5, 199, 0, // Skip to: 936
/* 737 */     MCD::OPC_Decode, 152, 8, 74, // Opcode: LWPC_MMR6
/* 741 */     MCD::OPC_FilterValue, 3, 191, 0, // Skip to: 936
/* 745 */     MCD::OPC_ExtractField, 16, 3,  // Inst{18-16} ...
/* 748 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 760
/* 752 */     MCD::OPC_CheckPredicate, 5, 180, 0, // Skip to: 936
/* 756 */     MCD::OPC_Decode, 148, 1, 75, // Opcode: AUIPC_MMR6
/* 760 */     MCD::OPC_FilterValue, 7, 172, 0, // Skip to: 936
/* 764 */     MCD::OPC_CheckPredicate, 5, 168, 0, // Skip to: 936
/* 768 */     MCD::OPC_Decode, 89, 75, // Opcode: ALUIPC_MMR6
/* 771 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 789
/* 775 */     MCD::OPC_CheckPredicate, 5, 157, 0, // Skip to: 936
/* 779 */     MCD::OPC_CheckField, 16, 5, 0, 151, 0, // Skip to: 936
/* 785 */     MCD::OPC_Decode, 174, 2, 73, // Opcode: BNEZALC_MMR6
/* 789 */     MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 807
/* 793 */     MCD::OPC_CheckPredicate, 5, 139, 0, // Skip to: 936
/* 797 */     MCD::OPC_CheckField, 21, 5, 0, 133, 0, // Skip to: 936
/* 803 */     MCD::OPC_Decode, 183, 7, 60, // Opcode: JIALC_MMR6
/* 807 */     MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 819
/* 811 */     MCD::OPC_CheckPredicate, 5, 121, 0, // Skip to: 936
/* 815 */     MCD::OPC_Decode, 206, 1, 76, // Opcode: BC_MMR6
/* 819 */     MCD::OPC_FilterValue, 40, 14, 0, // Skip to: 837
/* 823 */     MCD::OPC_CheckPredicate, 5, 109, 0, // Skip to: 936
/* 827 */     MCD::OPC_CheckField, 21, 5, 0, 103, 0, // Skip to: 936
/* 833 */     MCD::OPC_Decode, 185, 7, 60, // Opcode: JIC_MMR6
/* 837 */     MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 849
/* 841 */     MCD::OPC_CheckPredicate, 5, 91, 0, // Skip to: 936
/* 845 */     MCD::OPC_Decode, 180, 1, 76, // Opcode: BALC_MMR6
/* 849 */     MCD::OPC_FilterValue, 48, 22, 0, // Skip to: 875
/* 853 */     MCD::OPC_CheckPredicate, 5, 10, 0, // Skip to: 867
/* 857 */     MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 867
/* 863 */     MCD::OPC_Decode, 137, 2, 73, // Opcode: BLEZALC_MMR6
/* 867 */     MCD::OPC_CheckPredicate, 5, 65, 0, // Skip to: 936
/* 871 */     MCD::OPC_Decode, 225, 1, 77, // Opcode: BGEZALC_MMR6
/* 875 */     MCD::OPC_FilterValue, 52, 7, 0, // Skip to: 886
/* 879 */     MCD::OPC_CheckPredicate, 5, 53, 0, // Skip to: 936
/* 883 */     MCD::OPC_Decode, 95, 55, // Opcode: ANDI_MMR6
/* 886 */     MCD::OPC_FilterValue, 56, 22, 0, // Skip to: 912
/* 890 */     MCD::OPC_CheckPredicate, 5, 10, 0, // Skip to: 904
/* 894 */     MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 904
/* 900 */     MCD::OPC_Decode, 237, 1, 73, // Opcode: BGTZALC_MMR6
/* 904 */     MCD::OPC_CheckPredicate, 5, 28, 0, // Skip to: 936
/* 908 */     MCD::OPC_Decode, 149, 2, 77, // Opcode: BLTZALC_MMR6
/* 912 */     MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 924
/* 916 */     MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 936
/* 920 */     MCD::OPC_Decode, 192, 4, 78, // Opcode: DAUI_MM64R6
/* 924 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 936
/* 928 */     MCD::OPC_CheckPredicate, 5, 4, 0, // Skip to: 936
/* 932 */     MCD::OPC_Decode, 201, 13, 56, // Opcode: SW_MMR6
/* 936 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 173, 3, // Skip to: 948
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 68
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 192, 53, // Skip to: 13781
/* 21 */      MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 7, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 249, 12, 0, // Opcode: SSNOP
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 7, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 176, 5, 0, // Opcode: EHB
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 8, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 210, 10, 0, // Opcode: PAUSE
/* 60 */      MCD::OPC_CheckPredicate, 1, 149, 53, // Skip to: 13781
/* 64 */      MCD::OPC_Decode, 165, 12, 79, // Opcode: SLL
/* 68 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 111
/* 72 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 75 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 93
/* 79 */      MCD::OPC_CheckPredicate, 9, 130, 53, // Skip to: 13781
/* 83 */      MCD::OPC_CheckField, 6, 5, 0, 124, 53, // Skip to: 13781
/* 89 */      MCD::OPC_Decode, 167, 9, 80, // Opcode: MOVF_I
/* 93 */      MCD::OPC_FilterValue, 1, 116, 53, // Skip to: 13781
/* 97 */      MCD::OPC_CheckPredicate, 9, 112, 53, // Skip to: 13781
/* 101 */     MCD::OPC_CheckField, 6, 5, 0, 106, 53, // Skip to: 13781
/* 107 */     MCD::OPC_Decode, 187, 9, 80, // Opcode: MOVT_I
/* 111 */     MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 142
/* 115 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 118 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 1, 87, 53, // Skip to: 13781
/* 126 */     MCD::OPC_Decode, 228, 12, 79, // Opcode: SRL
/* 130 */     MCD::OPC_FilterValue, 1, 79, 53, // Skip to: 13781
/* 134 */     MCD::OPC_CheckPredicate, 8, 75, 53, // Skip to: 13781
/* 138 */     MCD::OPC_Decode, 183, 11, 79, // Opcode: ROTR
/* 142 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 160
/* 146 */     MCD::OPC_CheckPredicate, 7, 63, 53, // Skip to: 13781
/* 150 */     MCD::OPC_CheckField, 21, 5, 0, 57, 53, // Skip to: 13781
/* 156 */     MCD::OPC_Decode, 208, 12, 79, // Opcode: SRA
/* 160 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 178
/* 164 */     MCD::OPC_CheckPredicate, 7, 45, 53, // Skip to: 13781
/* 168 */     MCD::OPC_CheckField, 6, 5, 0, 39, 53, // Skip to: 13781
/* 174 */     MCD::OPC_Decode, 173, 12, 44, // Opcode: SLLV
/* 178 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 196
/* 182 */     MCD::OPC_CheckPredicate, 10, 27, 53, // Skip to: 13781
/* 186 */     MCD::OPC_CheckField, 8, 3, 0, 21, 53, // Skip to: 13781
/* 192 */     MCD::OPC_Decode, 255, 7, 81, // Opcode: LSA
/* 196 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 227
/* 200 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 203 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 215
/* 207 */     MCD::OPC_CheckPredicate, 7, 2, 53, // Skip to: 13781
/* 211 */     MCD::OPC_Decode, 242, 12, 44, // Opcode: SRLV
/* 215 */     MCD::OPC_FilterValue, 1, 250, 52, // Skip to: 13781
/* 219 */     MCD::OPC_CheckPredicate, 8, 246, 52, // Skip to: 13781
/* 223 */     MCD::OPC_Decode, 184, 11, 44, // Opcode: ROTRV
/* 227 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 245
/* 231 */     MCD::OPC_CheckPredicate, 7, 234, 52, // Skip to: 13781
/* 235 */     MCD::OPC_CheckField, 6, 5, 0, 228, 52, // Skip to: 13781
/* 241 */     MCD::OPC_Decode, 221, 12, 44, // Opcode: SRAV
/* 245 */     MCD::OPC_FilterValue, 8, 27, 0, // Skip to: 276
/* 249 */     MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 252 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 264
/* 256 */     MCD::OPC_CheckPredicate, 7, 209, 52, // Skip to: 13781
/* 260 */     MCD::OPC_Decode, 186, 7, 82, // Opcode: JR
/* 264 */     MCD::OPC_FilterValue, 16, 201, 52, // Skip to: 13781
/* 268 */     MCD::OPC_CheckPredicate, 11, 197, 52, // Skip to: 13781
/* 272 */     MCD::OPC_Decode, 191, 7, 82, // Opcode: JR_HB
/* 276 */     MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 319
/* 280 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 283 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 301
/* 287 */     MCD::OPC_CheckPredicate, 1, 178, 52, // Skip to: 13781
/* 291 */     MCD::OPC_CheckField, 16, 5, 0, 172, 52, // Skip to: 13781
/* 297 */     MCD::OPC_Decode, 169, 7, 14, // Opcode: JALR
/* 301 */     MCD::OPC_FilterValue, 16, 164, 52, // Skip to: 13781
/* 305 */     MCD::OPC_CheckPredicate, 12, 160, 52, // Skip to: 13781
/* 309 */     MCD::OPC_CheckField, 16, 5, 0, 154, 52, // Skip to: 13781
/* 315 */     MCD::OPC_Decode, 176, 7, 14, // Opcode: JALR_HB
/* 319 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 13, 142, 52, // Skip to: 13781
/* 327 */     MCD::OPC_CheckField, 6, 5, 0, 136, 52, // Skip to: 13781
/* 333 */     MCD::OPC_Decode, 199, 9, 83, // Opcode: MOVZ_I_I
/* 337 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 355
/* 341 */     MCD::OPC_CheckPredicate, 13, 124, 52, // Skip to: 13781
/* 345 */     MCD::OPC_CheckField, 6, 5, 0, 118, 52, // Skip to: 13781
/* 351 */     MCD::OPC_Decode, 179, 9, 83, // Opcode: MOVN_I_I
/* 355 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 367
/* 359 */     MCD::OPC_CheckPredicate, 7, 106, 52, // Skip to: 13781
/* 363 */     MCD::OPC_Decode, 205, 13, 84, // Opcode: SYSCALL
/* 367 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 379
/* 371 */     MCD::OPC_CheckPredicate, 1, 94, 52, // Skip to: 13781
/* 375 */     MCD::OPC_Decode, 187, 2, 41, // Opcode: BREAK
/* 379 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 12, 82, 52, // Skip to: 13781
/* 387 */     MCD::OPC_Decode, 202, 13, 85, // Opcode: SYNC
/* 391 */     MCD::OPC_FilterValue, 16, 43, 0, // Skip to: 438
/* 395 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 398 */     MCD::OPC_FilterValue, 0, 67, 52, // Skip to: 13781
/* 402 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 405 */     MCD::OPC_FilterValue, 0, 60, 52, // Skip to: 13781
/* 409 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 412 */     MCD::OPC_FilterValue, 0, 53, 52, // Skip to: 13781
/* 416 */     MCD::OPC_CheckPredicate, 14, 10, 0, // Skip to: 430
/* 420 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 430
/* 426 */     MCD::OPC_Decode, 240, 8, 86, // Opcode: MFHI
/* 430 */     MCD::OPC_CheckPredicate, 15, 35, 52, // Skip to: 13781
/* 434 */     MCD::OPC_Decode, 243, 8, 87, // Opcode: MFHI_DSP
/* 438 */     MCD::OPC_FilterValue, 17, 36, 0, // Skip to: 478
/* 442 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 445 */     MCD::OPC_FilterValue, 0, 20, 52, // Skip to: 13781
/* 449 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 452 */     MCD::OPC_FilterValue, 0, 13, 52, // Skip to: 13781
/* 456 */     MCD::OPC_CheckPredicate, 16, 10, 0, // Skip to: 470
/* 460 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 470
/* 466 */     MCD::OPC_Decode, 232, 9, 82, // Opcode: MTHI
/* 470 */     MCD::OPC_CheckPredicate, 15, 251, 51, // Skip to: 13781
/* 474 */     MCD::OPC_Decode, 234, 9, 88, // Opcode: MTHI_DSP
/* 478 */     MCD::OPC_FilterValue, 18, 43, 0, // Skip to: 525
/* 482 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 485 */     MCD::OPC_FilterValue, 0, 236, 51, // Skip to: 13781
/* 489 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 492 */     MCD::OPC_FilterValue, 0, 229, 51, // Skip to: 13781
/* 496 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 499 */     MCD::OPC_FilterValue, 0, 222, 51, // Skip to: 13781
/* 503 */     MCD::OPC_CheckPredicate, 14, 10, 0, // Skip to: 517
/* 507 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 517
/* 513 */     MCD::OPC_Decode, 245, 8, 86, // Opcode: MFLO
/* 517 */     MCD::OPC_CheckPredicate, 15, 204, 51, // Skip to: 13781
/* 521 */     MCD::OPC_Decode, 248, 8, 87, // Opcode: MFLO_DSP
/* 525 */     MCD::OPC_FilterValue, 19, 36, 0, // Skip to: 565
/* 529 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 532 */     MCD::OPC_FilterValue, 0, 189, 51, // Skip to: 13781
/* 536 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 539 */     MCD::OPC_FilterValue, 0, 182, 51, // Skip to: 13781
/* 543 */     MCD::OPC_CheckPredicate, 16, 10, 0, // Skip to: 557
/* 547 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 557
/* 553 */     MCD::OPC_Decode, 237, 9, 82, // Opcode: MTLO
/* 557 */     MCD::OPC_CheckPredicate, 15, 164, 51, // Skip to: 13781
/* 561 */     MCD::OPC_Decode, 239, 9, 89, // Opcode: MTLO_DSP
/* 565 */     MCD::OPC_FilterValue, 21, 14, 0, // Skip to: 583
/* 569 */     MCD::OPC_CheckPredicate, 17, 152, 51, // Skip to: 13781
/* 573 */     MCD::OPC_CheckField, 8, 3, 0, 146, 51, // Skip to: 13781
/* 579 */     MCD::OPC_Decode, 227, 4, 90, // Opcode: DLSA
/* 583 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 623
/* 587 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 590 */     MCD::OPC_FilterValue, 0, 131, 51, // Skip to: 13781
/* 594 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 597 */     MCD::OPC_FilterValue, 0, 124, 51, // Skip to: 13781
/* 601 */     MCD::OPC_CheckPredicate, 16, 10, 0, // Skip to: 615
/* 605 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 615
/* 611 */     MCD::OPC_Decode, 136, 10, 51, // Opcode: MULT
/* 615 */     MCD::OPC_CheckPredicate, 15, 106, 51, // Skip to: 13781
/* 619 */     MCD::OPC_Decode, 138, 10, 91, // Opcode: MULT_DSP
/* 623 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 663
/* 627 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 630 */     MCD::OPC_FilterValue, 0, 91, 51, // Skip to: 13781
/* 634 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 637 */     MCD::OPC_FilterValue, 0, 84, 51, // Skip to: 13781
/* 641 */     MCD::OPC_CheckPredicate, 16, 10, 0, // Skip to: 655
/* 645 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 655
/* 651 */     MCD::OPC_Decode, 140, 10, 51, // Opcode: MULTu
/* 655 */     MCD::OPC_CheckPredicate, 15, 66, 51, // Skip to: 13781
/* 659 */     MCD::OPC_Decode, 137, 10, 91, // Opcode: MULTU_DSP
/* 663 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 681
/* 667 */     MCD::OPC_CheckPredicate, 16, 54, 51, // Skip to: 13781
/* 671 */     MCD::OPC_CheckField, 6, 10, 0, 48, 51, // Skip to: 13781
/* 677 */     MCD::OPC_Decode, 226, 11, 51, // Opcode: SDIV
/* 681 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 699
/* 685 */     MCD::OPC_CheckPredicate, 16, 36, 51, // Skip to: 13781
/* 689 */     MCD::OPC_CheckField, 6, 10, 0, 30, 51, // Skip to: 13781
/* 695 */     MCD::OPC_Decode, 167, 14, 51, // Opcode: UDIV
/* 699 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 716
/* 703 */     MCD::OPC_CheckPredicate, 7, 18, 51, // Skip to: 13781
/* 707 */     MCD::OPC_CheckField, 6, 5, 0, 12, 51, // Skip to: 13781
/* 713 */     MCD::OPC_Decode, 26, 43, // Opcode: ADD
/* 716 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 733
/* 720 */     MCD::OPC_CheckPredicate, 1, 1, 51, // Skip to: 13781
/* 724 */     MCD::OPC_CheckField, 6, 5, 0, 251, 50, // Skip to: 13781
/* 730 */     MCD::OPC_Decode, 82, 43, // Opcode: ADDu
/* 733 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 751
/* 737 */     MCD::OPC_CheckPredicate, 7, 240, 50, // Skip to: 13781
/* 741 */     MCD::OPC_CheckField, 6, 5, 0, 234, 50, // Skip to: 13781
/* 747 */     MCD::OPC_Decode, 131, 13, 43, // Opcode: SUB
/* 751 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 769
/* 755 */     MCD::OPC_CheckPredicate, 1, 222, 50, // Skip to: 13781
/* 759 */     MCD::OPC_CheckField, 6, 5, 0, 216, 50, // Skip to: 13781
/* 765 */     MCD::OPC_Decode, 173, 13, 43, // Opcode: SUBu
/* 769 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 786
/* 773 */     MCD::OPC_CheckPredicate, 1, 204, 50, // Skip to: 13781
/* 777 */     MCD::OPC_CheckField, 6, 5, 0, 198, 50, // Skip to: 13781
/* 783 */     MCD::OPC_Decode, 90, 43, // Opcode: AND
/* 786 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 804
/* 790 */     MCD::OPC_CheckPredicate, 1, 187, 50, // Skip to: 13781
/* 794 */     MCD::OPC_CheckField, 6, 5, 0, 181, 50, // Skip to: 13781
/* 800 */     MCD::OPC_Decode, 194, 10, 43, // Opcode: OR
/* 804 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 822
/* 808 */     MCD::OPC_CheckPredicate, 1, 169, 50, // Skip to: 13781
/* 812 */     MCD::OPC_CheckField, 6, 5, 0, 163, 50, // Skip to: 13781
/* 818 */     MCD::OPC_Decode, 183, 14, 43, // Opcode: XOR
/* 822 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 840
/* 826 */     MCD::OPC_CheckPredicate, 7, 151, 50, // Skip to: 13781
/* 830 */     MCD::OPC_CheckField, 6, 5, 0, 145, 50, // Skip to: 13781
/* 836 */     MCD::OPC_Decode, 182, 10, 43, // Opcode: NOR
/* 840 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 858
/* 844 */     MCD::OPC_CheckPredicate, 7, 133, 50, // Skip to: 13781
/* 848 */     MCD::OPC_CheckField, 6, 5, 0, 127, 50, // Skip to: 13781
/* 854 */     MCD::OPC_Decode, 181, 12, 43, // Opcode: SLT
/* 858 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 876
/* 862 */     MCD::OPC_CheckPredicate, 7, 115, 50, // Skip to: 13781
/* 866 */     MCD::OPC_CheckField, 6, 5, 0, 109, 50, // Skip to: 13781
/* 872 */     MCD::OPC_Decode, 190, 12, 43, // Opcode: SLTu
/* 876 */     MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 888
/* 880 */     MCD::OPC_CheckPredicate, 18, 97, 50, // Skip to: 13781
/* 884 */     MCD::OPC_Decode, 131, 14, 92, // Opcode: TGE
/* 888 */     MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 900
/* 892 */     MCD::OPC_CheckPredicate, 18, 85, 50, // Skip to: 13781
/* 896 */     MCD::OPC_Decode, 136, 14, 92, // Opcode: TGEU
/* 900 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 912
/* 904 */     MCD::OPC_CheckPredicate, 18, 73, 50, // Skip to: 13781
/* 908 */     MCD::OPC_Decode, 147, 14, 92, // Opcode: TLT
/* 912 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 924
/* 916 */     MCD::OPC_CheckPredicate, 18, 61, 50, // Skip to: 13781
/* 920 */     MCD::OPC_Decode, 151, 14, 92, // Opcode: TLTU
/* 924 */     MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 936
/* 928 */     MCD::OPC_CheckPredicate, 18, 49, 50, // Skip to: 13781
/* 932 */     MCD::OPC_Decode, 255, 13, 92, // Opcode: TEQ
/* 936 */     MCD::OPC_FilterValue, 54, 41, 50, // Skip to: 13781
/* 940 */     MCD::OPC_CheckPredicate, 18, 37, 50, // Skip to: 13781
/* 944 */     MCD::OPC_Decode, 154, 14, 92, // Opcode: TNE
/* 948 */     MCD::OPC_FilterValue, 1, 201, 0, // Skip to: 1153
/* 952 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 955 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 967
/* 959 */     MCD::OPC_CheckPredicate, 7, 18, 50, // Skip to: 13781
/* 963 */     MCD::OPC_Decode, 145, 2, 93, // Opcode: BLTZ
/* 967 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 979
/* 971 */     MCD::OPC_CheckPredicate, 7, 6, 50, // Skip to: 13781
/* 975 */     MCD::OPC_Decode, 221, 1, 93, // Opcode: BGEZ
/* 979 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 991
/* 983 */     MCD::OPC_CheckPredicate, 19, 250, 49, // Skip to: 13781
/* 987 */     MCD::OPC_Decode, 154, 2, 93, // Opcode: BLTZL
/* 991 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1003
/* 995 */     MCD::OPC_CheckPredicate, 19, 238, 49, // Skip to: 13781
/* 999 */     MCD::OPC_Decode, 230, 1, 93, // Opcode: BGEZL
/* 1003 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1015
/* 1007 */    MCD::OPC_CheckPredicate, 19, 226, 49, // Skip to: 13781
/* 1011 */    MCD::OPC_Decode, 132, 14, 94, // Opcode: TGEI
/* 1015 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1027
/* 1019 */    MCD::OPC_CheckPredicate, 19, 214, 49, // Skip to: 13781
/* 1023 */    MCD::OPC_Decode, 133, 14, 94, // Opcode: TGEIU
/* 1027 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1039
/* 1031 */    MCD::OPC_CheckPredicate, 19, 202, 49, // Skip to: 13781
/* 1035 */    MCD::OPC_Decode, 148, 14, 94, // Opcode: TLTI
/* 1039 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1051
/* 1043 */    MCD::OPC_CheckPredicate, 19, 190, 49, // Skip to: 13781
/* 1047 */    MCD::OPC_Decode, 166, 14, 94, // Opcode: TTLTIU
/* 1051 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1063
/* 1055 */    MCD::OPC_CheckPredicate, 19, 178, 49, // Skip to: 13781
/* 1059 */    MCD::OPC_Decode, 128, 14, 94, // Opcode: TEQI
/* 1063 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1075
/* 1067 */    MCD::OPC_CheckPredicate, 19, 166, 49, // Skip to: 13781
/* 1071 */    MCD::OPC_Decode, 155, 14, 94, // Opcode: TNEI
/* 1075 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1087
/* 1079 */    MCD::OPC_CheckPredicate, 16, 154, 49, // Skip to: 13781
/* 1083 */    MCD::OPC_Decode, 147, 2, 93, // Opcode: BLTZAL
/* 1087 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 1099
/* 1091 */    MCD::OPC_CheckPredicate, 16, 142, 49, // Skip to: 13781
/* 1095 */    MCD::OPC_Decode, 223, 1, 93, // Opcode: BGEZAL
/* 1099 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 1111
/* 1103 */    MCD::OPC_CheckPredicate, 19, 130, 49, // Skip to: 13781
/* 1107 */    MCD::OPC_Decode, 150, 2, 93, // Opcode: BLTZALL
/* 1111 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 1123
/* 1115 */    MCD::OPC_CheckPredicate, 19, 118, 49, // Skip to: 13781
/* 1119 */    MCD::OPC_Decode, 226, 1, 93, // Opcode: BGEZALL
/* 1123 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 1141
/* 1127 */    MCD::OPC_CheckPredicate, 15, 106, 49, // Skip to: 13781
/* 1131 */    MCD::OPC_CheckField, 21, 5, 0, 100, 49, // Skip to: 13781
/* 1137 */    MCD::OPC_Decode, 185, 2, 95, // Opcode: BPOSGE32
/* 1141 */    MCD::OPC_FilterValue, 31, 92, 49, // Skip to: 13781
/* 1145 */    MCD::OPC_CheckPredicate, 8, 88, 49, // Skip to: 13781
/* 1149 */    MCD::OPC_Decode, 203, 13, 96, // Opcode: SYNCI
/* 1153 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1165
/* 1157 */    MCD::OPC_CheckPredicate, 7, 76, 49, // Skip to: 13781
/* 1161 */    MCD::OPC_Decode, 167, 7, 97, // Opcode: J
/* 1165 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1177
/* 1169 */    MCD::OPC_CheckPredicate, 7, 64, 49, // Skip to: 13781
/* 1173 */    MCD::OPC_Decode, 168, 7, 97, // Opcode: JAL
/* 1177 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1189
/* 1181 */    MCD::OPC_CheckPredicate, 7, 52, 49, // Skip to: 13781
/* 1185 */    MCD::OPC_Decode, 207, 1, 98, // Opcode: BEQ
/* 1189 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1201
/* 1193 */    MCD::OPC_CheckPredicate, 7, 40, 49, // Skip to: 13781
/* 1197 */    MCD::OPC_Decode, 160, 2, 98, // Opcode: BNE
/* 1201 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1219
/* 1205 */    MCD::OPC_CheckPredicate, 7, 28, 49, // Skip to: 13781
/* 1209 */    MCD::OPC_CheckField, 16, 5, 0, 22, 49, // Skip to: 13781
/* 1215 */    MCD::OPC_Decode, 134, 2, 93, // Opcode: BLEZ
/* 1219 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1237
/* 1223 */    MCD::OPC_CheckPredicate, 7, 10, 49, // Skip to: 13781
/* 1227 */    MCD::OPC_CheckField, 16, 5, 0, 4, 49, // Skip to: 13781
/* 1233 */    MCD::OPC_Decode, 234, 1, 93, // Opcode: BGTZ
/* 1237 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 1248
/* 1241 */    MCD::OPC_CheckPredicate, 16, 248, 48, // Skip to: 13781
/* 1245 */    MCD::OPC_Decode, 78, 99, // Opcode: ADDi
/* 1248 */    MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 1259
/* 1252 */    MCD::OPC_CheckPredicate, 1, 237, 48, // Skip to: 13781
/* 1256 */    MCD::OPC_Decode, 80, 99, // Opcode: ADDiu
/* 1259 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1271
/* 1263 */    MCD::OPC_CheckPredicate, 7, 226, 48, // Skip to: 13781
/* 1267 */    MCD::OPC_Decode, 184, 12, 99, // Opcode: SLTi
/* 1271 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1283
/* 1275 */    MCD::OPC_CheckPredicate, 7, 214, 48, // Skip to: 13781
/* 1279 */    MCD::OPC_Decode, 187, 12, 99, // Opcode: SLTiu
/* 1283 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1294
/* 1287 */    MCD::OPC_CheckPredicate, 1, 202, 48, // Skip to: 13781
/* 1291 */    MCD::OPC_Decode, 102, 100, // Opcode: ANDi
/* 1294 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1306
/* 1298 */    MCD::OPC_CheckPredicate, 7, 191, 48, // Skip to: 13781
/* 1302 */    MCD::OPC_Decode, 205, 10, 100, // Opcode: ORi
/* 1306 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1318
/* 1310 */    MCD::OPC_CheckPredicate, 7, 179, 48, // Skip to: 13781
/* 1314 */    MCD::OPC_Decode, 194, 14, 100, // Opcode: XORi
/* 1318 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1336
/* 1322 */    MCD::OPC_CheckPredicate, 7, 167, 48, // Skip to: 13781
/* 1326 */    MCD::OPC_CheckField, 21, 5, 0, 161, 48, // Skip to: 13781
/* 1332 */    MCD::OPC_Decode, 133, 8, 60, // Opcode: LUi
/* 1336 */    MCD::OPC_FilterValue, 16, 18, 1, // Skip to: 1614
/* 1340 */    MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 1343 */    MCD::OPC_FilterValue, 0, 112, 0, // Skip to: 1459
/* 1347 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1350 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1362
/* 1354 */    MCD::OPC_CheckPredicate, 12, 135, 48, // Skip to: 13781
/* 1358 */    MCD::OPC_Decode, 233, 8, 101, // Opcode: MFC0
/* 1362 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1374
/* 1366 */    MCD::OPC_CheckPredicate, 12, 123, 48, // Skip to: 13781
/* 1370 */    MCD::OPC_Decode, 225, 9, 102, // Opcode: MTC0
/* 1374 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 1398
/* 1378 */    MCD::OPC_CheckPredicate, 8, 111, 48, // Skip to: 13781
/* 1382 */    MCD::OPC_CheckField, 11, 5, 12, 105, 48, // Skip to: 13781
/* 1388 */    MCD::OPC_CheckField, 0, 3, 0, 99, 48, // Skip to: 13781
/* 1394 */    MCD::OPC_Decode, 210, 4, 50, // Opcode: DI
/* 1398 */    MCD::OPC_FilterValue, 16, 91, 48, // Skip to: 13781
/* 1402 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1405 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1423
/* 1409 */    MCD::OPC_CheckPredicate, 7, 80, 48, // Skip to: 13781
/* 1413 */    MCD::OPC_CheckField, 11, 10, 0, 74, 48, // Skip to: 13781
/* 1419 */    MCD::OPC_Decode, 141, 14, 0, // Opcode: TLBR
/* 1423 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1441
/* 1427 */    MCD::OPC_CheckPredicate, 7, 62, 48, // Skip to: 13781
/* 1431 */    MCD::OPC_CheckField, 11, 10, 0, 56, 48, // Skip to: 13781
/* 1437 */    MCD::OPC_Decode, 143, 14, 0, // Opcode: TLBWI
/* 1441 */    MCD::OPC_FilterValue, 6, 48, 48, // Skip to: 13781
/* 1445 */    MCD::OPC_CheckPredicate, 7, 44, 48, // Skip to: 13781
/* 1449 */    MCD::OPC_CheckField, 11, 10, 0, 38, 48, // Skip to: 13781
/* 1455 */    MCD::OPC_Decode, 145, 14, 0, // Opcode: TLBWR
/* 1459 */    MCD::OPC_FilterValue, 1, 22, 0, // Skip to: 1485
/* 1463 */    MCD::OPC_CheckPredicate, 7, 26, 48, // Skip to: 13781
/* 1467 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 18, 48, // Skip to: 13781
/* 1475 */    MCD::OPC_CheckField, 0, 3, 0, 12, 48, // Skip to: 13781
/* 1481 */    MCD::OPC_Decode, 139, 14, 0, // Opcode: TLBP
/* 1485 */    MCD::OPC_FilterValue, 3, 43, 0, // Skip to: 1532
/* 1489 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1492 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1512
/* 1496 */    MCD::OPC_CheckPredicate, 20, 249, 47, // Skip to: 13781
/* 1500 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 241, 47, // Skip to: 13781
/* 1508 */    MCD::OPC_Decode, 182, 5, 0, // Opcode: ERET
/* 1512 */    MCD::OPC_FilterValue, 7, 233, 47, // Skip to: 13781
/* 1516 */    MCD::OPC_CheckPredicate, 12, 229, 47, // Skip to: 13781
/* 1520 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 221, 47, // Skip to: 13781
/* 1528 */    MCD::OPC_Decode, 202, 4, 0, // Opcode: DERET
/* 1532 */    MCD::OPC_FilterValue, 4, 52, 0, // Skip to: 1588
/* 1536 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1539 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1564
/* 1543 */    MCD::OPC_CheckPredicate, 21, 202, 47, // Skip to: 13781
/* 1547 */    MCD::OPC_CheckField, 16, 10, 128, 4, 195, 47, // Skip to: 13781
/* 1554 */    MCD::OPC_CheckField, 0, 3, 0, 189, 47, // Skip to: 13781
/* 1560 */    MCD::OPC_Decode, 178, 14, 0, // Opcode: WAIT
/* 1564 */    MCD::OPC_FilterValue, 12, 181, 47, // Skip to: 13781
/* 1568 */    MCD::OPC_CheckPredicate, 22, 177, 47, // Skip to: 13781
/* 1572 */    MCD::OPC_CheckField, 21, 5, 11, 171, 47, // Skip to: 13781
/* 1578 */    MCD::OPC_CheckField, 0, 3, 0, 165, 47, // Skip to: 13781
/* 1584 */    MCD::OPC_Decode, 179, 5, 50, // Opcode: EI
/* 1588 */    MCD::OPC_FilterValue, 11, 157, 47, // Skip to: 13781
/* 1592 */    MCD::OPC_CheckPredicate, 23, 153, 47, // Skip to: 13781
/* 1596 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 145, 47, // Skip to: 13781
/* 1604 */    MCD::OPC_CheckField, 0, 3, 0, 139, 47, // Skip to: 13781
/* 1610 */    MCD::OPC_Decode, 183, 5, 0, // Opcode: ERETNC
/* 1614 */    MCD::OPC_FilterValue, 17, 25, 6, // Skip to: 3179
/* 1618 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1621 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1639
/* 1625 */    MCD::OPC_CheckPredicate, 24, 120, 47, // Skip to: 13781
/* 1629 */    MCD::OPC_CheckField, 0, 11, 0, 114, 47, // Skip to: 13781
/* 1635 */    MCD::OPC_Decode, 234, 8, 103, // Opcode: MFC1
/* 1639 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1657
/* 1643 */    MCD::OPC_CheckPredicate, 25, 102, 47, // Skip to: 13781
/* 1647 */    MCD::OPC_CheckField, 0, 11, 0, 96, 47, // Skip to: 13781
/* 1653 */    MCD::OPC_Decode, 230, 4, 104, // Opcode: DMFC1
/* 1657 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1675
/* 1661 */    MCD::OPC_CheckPredicate, 24, 84, 47, // Skip to: 13781
/* 1665 */    MCD::OPC_CheckField, 0, 11, 0, 78, 47, // Skip to: 13781
/* 1671 */    MCD::OPC_Decode, 130, 3, 105, // Opcode: CFC1
/* 1675 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 1693
/* 1679 */    MCD::OPC_CheckPredicate, 26, 66, 47, // Skip to: 13781
/* 1683 */    MCD::OPC_CheckField, 0, 11, 0, 60, 47, // Skip to: 13781
/* 1689 */    MCD::OPC_Decode, 237, 8, 106, // Opcode: MFHC1_D32
/* 1693 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1711
/* 1697 */    MCD::OPC_CheckPredicate, 24, 48, 47, // Skip to: 13781
/* 1701 */    MCD::OPC_CheckField, 0, 11, 0, 42, 47, // Skip to: 13781
/* 1707 */    MCD::OPC_Decode, 226, 9, 107, // Opcode: MTC1
/* 1711 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1729
/* 1715 */    MCD::OPC_CheckPredicate, 25, 30, 47, // Skip to: 13781
/* 1719 */    MCD::OPC_CheckField, 0, 11, 0, 24, 47, // Skip to: 13781
/* 1725 */    MCD::OPC_Decode, 238, 4, 108, // Opcode: DMTC1
/* 1729 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1747
/* 1733 */    MCD::OPC_CheckPredicate, 24, 12, 47, // Skip to: 13781
/* 1737 */    MCD::OPC_CheckField, 0, 11, 0, 6, 47, // Skip to: 13781
/* 1743 */    MCD::OPC_Decode, 232, 3, 109, // Opcode: CTC1
/* 1747 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1765
/* 1751 */    MCD::OPC_CheckPredicate, 26, 250, 46, // Skip to: 13781
/* 1755 */    MCD::OPC_CheckField, 0, 11, 0, 244, 46, // Skip to: 13781
/* 1761 */    MCD::OPC_Decode, 229, 9, 110, // Opcode: MTHC1_D32
/* 1765 */    MCD::OPC_FilterValue, 8, 51, 0, // Skip to: 1820
/* 1769 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1772 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1784
/* 1776 */    MCD::OPC_CheckPredicate, 27, 225, 46, // Skip to: 13781
/* 1780 */    MCD::OPC_Decode, 189, 1, 111, // Opcode: BC1F
/* 1784 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1796
/* 1788 */    MCD::OPC_CheckPredicate, 27, 213, 46, // Skip to: 13781
/* 1792 */    MCD::OPC_Decode, 193, 1, 111, // Opcode: BC1T
/* 1796 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1808
/* 1800 */    MCD::OPC_CheckPredicate, 28, 201, 46, // Skip to: 13781
/* 1804 */    MCD::OPC_Decode, 190, 1, 111, // Opcode: BC1FL
/* 1808 */    MCD::OPC_FilterValue, 3, 193, 46, // Skip to: 13781
/* 1812 */    MCD::OPC_CheckPredicate, 28, 189, 46, // Skip to: 13781
/* 1816 */    MCD::OPC_Decode, 194, 1, 111, // Opcode: BC1TL
/* 1820 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1832
/* 1824 */    MCD::OPC_CheckPredicate, 10, 177, 46, // Skip to: 13781
/* 1828 */    MCD::OPC_Decode, 209, 2, 112, // Opcode: BZ_V
/* 1832 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1844
/* 1836 */    MCD::OPC_CheckPredicate, 10, 165, 46, // Skip to: 13781
/* 1840 */    MCD::OPC_Decode, 182, 2, 112, // Opcode: BNZ_V
/* 1844 */    MCD::OPC_FilterValue, 16, 80, 2, // Skip to: 2440
/* 1848 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1851 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1863
/* 1855 */    MCD::OPC_CheckPredicate, 24, 146, 46, // Skip to: 13781
/* 1859 */    MCD::OPC_Decode, 216, 5, 113, // Opcode: FADD_S
/* 1863 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1875
/* 1867 */    MCD::OPC_CheckPredicate, 24, 134, 46, // Skip to: 13781
/* 1871 */    MCD::OPC_Decode, 218, 6, 113, // Opcode: FSUB_S
/* 1875 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1887
/* 1879 */    MCD::OPC_CheckPredicate, 24, 122, 46, // Skip to: 13781
/* 1883 */    MCD::OPC_Decode, 181, 6, 113, // Opcode: FMUL_S
/* 1887 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1899
/* 1891 */    MCD::OPC_CheckPredicate, 24, 110, 46, // Skip to: 13781
/* 1895 */    MCD::OPC_Decode, 252, 5, 113, // Opcode: FDIV_S
/* 1899 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1917
/* 1903 */    MCD::OPC_CheckPredicate, 29, 98, 46, // Skip to: 13781
/* 1907 */    MCD::OPC_CheckField, 16, 5, 0, 92, 46, // Skip to: 13781
/* 1913 */    MCD::OPC_Decode, 211, 6, 114, // Opcode: FSQRT_S
/* 1917 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1935
/* 1921 */    MCD::OPC_CheckPredicate, 24, 80, 46, // Skip to: 13781
/* 1925 */    MCD::OPC_CheckField, 16, 5, 0, 74, 46, // Skip to: 13781
/* 1931 */    MCD::OPC_Decode, 209, 5, 114, // Opcode: FABS_S
/* 1935 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1953
/* 1939 */    MCD::OPC_CheckPredicate, 24, 62, 46, // Skip to: 13781
/* 1943 */    MCD::OPC_CheckField, 16, 5, 0, 56, 46, // Skip to: 13781
/* 1949 */    MCD::OPC_Decode, 173, 6, 114, // Opcode: FMOV_S
/* 1953 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1971
/* 1957 */    MCD::OPC_CheckPredicate, 24, 44, 46, // Skip to: 13781
/* 1961 */    MCD::OPC_CheckField, 16, 5, 0, 38, 46, // Skip to: 13781
/* 1967 */    MCD::OPC_Decode, 187, 6, 114, // Opcode: FNEG_S
/* 1971 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1989
/* 1975 */    MCD::OPC_CheckPredicate, 29, 26, 46, // Skip to: 13781
/* 1979 */    MCD::OPC_CheckField, 16, 5, 0, 20, 46, // Skip to: 13781
/* 1985 */    MCD::OPC_Decode, 192, 11, 114, // Opcode: ROUND_W_S
/* 1989 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2007
/* 1993 */    MCD::OPC_CheckPredicate, 29, 8, 46, // Skip to: 13781
/* 1997 */    MCD::OPC_CheckField, 16, 5, 0, 2, 46, // Skip to: 13781
/* 2003 */    MCD::OPC_Decode, 164, 14, 114, // Opcode: TRUNC_W_S
/* 2007 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2025
/* 2011 */    MCD::OPC_CheckPredicate, 29, 246, 45, // Skip to: 13781
/* 2015 */    MCD::OPC_CheckField, 16, 5, 0, 240, 45, // Skip to: 13781
/* 2021 */    MCD::OPC_Decode, 248, 2, 114, // Opcode: CEIL_W_S
/* 2025 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2043
/* 2029 */    MCD::OPC_CheckPredicate, 29, 228, 45, // Skip to: 13781
/* 2033 */    MCD::OPC_CheckField, 16, 5, 0, 222, 45, // Skip to: 13781
/* 2039 */    MCD::OPC_Decode, 158, 6, 114, // Opcode: FLOOR_W_S
/* 2043 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2074
/* 2047 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2050 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2062
/* 2054 */    MCD::OPC_CheckPredicate, 9, 203, 45, // Skip to: 13781
/* 2058 */    MCD::OPC_Decode, 170, 9, 115, // Opcode: MOVF_S
/* 2062 */    MCD::OPC_FilterValue, 1, 195, 45, // Skip to: 13781
/* 2066 */    MCD::OPC_CheckPredicate, 9, 191, 45, // Skip to: 13781
/* 2070 */    MCD::OPC_Decode, 190, 9, 115, // Opcode: MOVT_S
/* 2074 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2086
/* 2078 */    MCD::OPC_CheckPredicate, 9, 179, 45, // Skip to: 13781
/* 2082 */    MCD::OPC_Decode, 202, 9, 116, // Opcode: MOVZ_I_S
/* 2086 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2098
/* 2090 */    MCD::OPC_CheckPredicate, 9, 167, 45, // Skip to: 13781
/* 2094 */    MCD::OPC_Decode, 182, 9, 116, // Opcode: MOVN_I_S
/* 2098 */    MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 2116
/* 2102 */    MCD::OPC_CheckPredicate, 30, 155, 45, // Skip to: 13781
/* 2106 */    MCD::OPC_CheckField, 16, 5, 0, 149, 45, // Skip to: 13781
/* 2112 */    MCD::OPC_Decode, 235, 3, 117, // Opcode: CVT_D32_S
/* 2116 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2134
/* 2120 */    MCD::OPC_CheckPredicate, 24, 137, 45, // Skip to: 13781
/* 2124 */    MCD::OPC_CheckField, 16, 5, 0, 131, 45, // Skip to: 13781
/* 2130 */    MCD::OPC_Decode, 255, 3, 114, // Opcode: CVT_W_S
/* 2134 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2152
/* 2138 */    MCD::OPC_CheckPredicate, 31, 119, 45, // Skip to: 13781
/* 2142 */    MCD::OPC_CheckField, 16, 5, 0, 113, 45, // Skip to: 13781
/* 2148 */    MCD::OPC_Decode, 244, 3, 118, // Opcode: CVT_L_S
/* 2152 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2170
/* 2156 */    MCD::OPC_CheckPredicate, 27, 101, 45, // Skip to: 13781
/* 2160 */    MCD::OPC_CheckField, 6, 5, 0, 95, 45, // Skip to: 13781
/* 2166 */    MCD::OPC_Decode, 134, 4, 119, // Opcode: C_F_S
/* 2170 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2188
/* 2174 */    MCD::OPC_CheckPredicate, 27, 83, 45, // Skip to: 13781
/* 2178 */    MCD::OPC_CheckField, 6, 5, 0, 77, 45, // Skip to: 13781
/* 2184 */    MCD::OPC_Decode, 176, 4, 119, // Opcode: C_UN_S
/* 2188 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2206
/* 2192 */    MCD::OPC_CheckPredicate, 27, 65, 45, // Skip to: 13781
/* 2196 */    MCD::OPC_CheckField, 6, 5, 0, 59, 45, // Skip to: 13781
/* 2202 */    MCD::OPC_Decode, 131, 4, 119, // Opcode: C_EQ_S
/* 2206 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2224
/* 2210 */    MCD::OPC_CheckPredicate, 27, 47, 45, // Skip to: 13781
/* 2214 */    MCD::OPC_CheckField, 6, 5, 0, 41, 45, // Skip to: 13781
/* 2220 */    MCD::OPC_Decode, 167, 4, 119, // Opcode: C_UEQ_S
/* 2224 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2242
/* 2228 */    MCD::OPC_CheckPredicate, 27, 29, 45, // Skip to: 13781
/* 2232 */    MCD::OPC_CheckField, 6, 5, 0, 23, 45, // Skip to: 13781
/* 2238 */    MCD::OPC_Decode, 158, 4, 119, // Opcode: C_OLT_S
/* 2242 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2260
/* 2246 */    MCD::OPC_CheckPredicate, 27, 11, 45, // Skip to: 13781
/* 2250 */    MCD::OPC_CheckField, 6, 5, 0, 5, 45, // Skip to: 13781
/* 2256 */    MCD::OPC_Decode, 173, 4, 119, // Opcode: C_ULT_S
/* 2260 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2278
/* 2264 */    MCD::OPC_CheckPredicate, 27, 249, 44, // Skip to: 13781
/* 2268 */    MCD::OPC_CheckField, 6, 5, 0, 243, 44, // Skip to: 13781
/* 2274 */    MCD::OPC_Decode, 155, 4, 119, // Opcode: C_OLE_S
/* 2278 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2296
/* 2282 */    MCD::OPC_CheckPredicate, 27, 231, 44, // Skip to: 13781
/* 2286 */    MCD::OPC_CheckField, 6, 5, 0, 225, 44, // Skip to: 13781
/* 2292 */    MCD::OPC_Decode, 170, 4, 119, // Opcode: C_ULE_S
/* 2296 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2314
/* 2300 */    MCD::OPC_CheckPredicate, 27, 213, 44, // Skip to: 13781
/* 2304 */    MCD::OPC_CheckField, 6, 5, 0, 207, 44, // Skip to: 13781
/* 2310 */    MCD::OPC_Decode, 164, 4, 119, // Opcode: C_SF_S
/* 2314 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2332
/* 2318 */    MCD::OPC_CheckPredicate, 27, 195, 44, // Skip to: 13781
/* 2322 */    MCD::OPC_CheckField, 6, 5, 0, 189, 44, // Skip to: 13781
/* 2328 */    MCD::OPC_Decode, 146, 4, 119, // Opcode: C_NGLE_S
/* 2332 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2350
/* 2336 */    MCD::OPC_CheckPredicate, 27, 177, 44, // Skip to: 13781
/* 2340 */    MCD::OPC_CheckField, 6, 5, 0, 171, 44, // Skip to: 13781
/* 2346 */    MCD::OPC_Decode, 161, 4, 119, // Opcode: C_SEQ_S
/* 2350 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2368
/* 2354 */    MCD::OPC_CheckPredicate, 27, 159, 44, // Skip to: 13781
/* 2358 */    MCD::OPC_CheckField, 6, 5, 0, 153, 44, // Skip to: 13781
/* 2364 */    MCD::OPC_Decode, 149, 4, 119, // Opcode: C_NGL_S
/* 2368 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2386
/* 2372 */    MCD::OPC_CheckPredicate, 27, 141, 44, // Skip to: 13781
/* 2376 */    MCD::OPC_CheckField, 6, 5, 0, 135, 44, // Skip to: 13781
/* 2382 */    MCD::OPC_Decode, 140, 4, 119, // Opcode: C_LT_S
/* 2386 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2404
/* 2390 */    MCD::OPC_CheckPredicate, 27, 123, 44, // Skip to: 13781
/* 2394 */    MCD::OPC_CheckField, 6, 5, 0, 117, 44, // Skip to: 13781
/* 2400 */    MCD::OPC_Decode, 143, 4, 119, // Opcode: C_NGE_S
/* 2404 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2422
/* 2408 */    MCD::OPC_CheckPredicate, 27, 105, 44, // Skip to: 13781
/* 2412 */    MCD::OPC_CheckField, 6, 5, 0, 99, 44, // Skip to: 13781
/* 2418 */    MCD::OPC_Decode, 137, 4, 119, // Opcode: C_LE_S
/* 2422 */    MCD::OPC_FilterValue, 63, 91, 44, // Skip to: 13781
/* 2426 */    MCD::OPC_CheckPredicate, 27, 87, 44, // Skip to: 13781
/* 2430 */    MCD::OPC_CheckField, 6, 5, 0, 81, 44, // Skip to: 13781
/* 2436 */    MCD::OPC_Decode, 152, 4, 119, // Opcode: C_NGT_S
/* 2440 */    MCD::OPC_FilterValue, 17, 80, 2, // Skip to: 3036
/* 2444 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2447 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2459
/* 2451 */    MCD::OPC_CheckPredicate, 30, 62, 44, // Skip to: 13781
/* 2455 */    MCD::OPC_Decode, 213, 5, 120, // Opcode: FADD_D32
/* 2459 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2471
/* 2463 */    MCD::OPC_CheckPredicate, 30, 50, 44, // Skip to: 13781
/* 2467 */    MCD::OPC_Decode, 215, 6, 120, // Opcode: FSUB_D32
/* 2471 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2483
/* 2475 */    MCD::OPC_CheckPredicate, 30, 38, 44, // Skip to: 13781
/* 2479 */    MCD::OPC_Decode, 178, 6, 120, // Opcode: FMUL_D32
/* 2483 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2495
/* 2487 */    MCD::OPC_CheckPredicate, 30, 26, 44, // Skip to: 13781
/* 2491 */    MCD::OPC_Decode, 249, 5, 120, // Opcode: FDIV_D32
/* 2495 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2513
/* 2499 */    MCD::OPC_CheckPredicate, 32, 14, 44, // Skip to: 13781
/* 2503 */    MCD::OPC_CheckField, 16, 5, 0, 8, 44, // Skip to: 13781
/* 2509 */    MCD::OPC_Decode, 208, 6, 121, // Opcode: FSQRT_D32
/* 2513 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2531
/* 2517 */    MCD::OPC_CheckPredicate, 30, 252, 43, // Skip to: 13781
/* 2521 */    MCD::OPC_CheckField, 16, 5, 0, 246, 43, // Skip to: 13781
/* 2527 */    MCD::OPC_Decode, 206, 5, 121, // Opcode: FABS_D32
/* 2531 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2549
/* 2535 */    MCD::OPC_CheckPredicate, 30, 234, 43, // Skip to: 13781
/* 2539 */    MCD::OPC_CheckField, 16, 5, 0, 228, 43, // Skip to: 13781
/* 2545 */    MCD::OPC_Decode, 170, 6, 121, // Opcode: FMOV_D32
/* 2549 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2567
/* 2553 */    MCD::OPC_CheckPredicate, 30, 216, 43, // Skip to: 13781
/* 2557 */    MCD::OPC_CheckField, 16, 5, 0, 210, 43, // Skip to: 13781
/* 2563 */    MCD::OPC_Decode, 184, 6, 121, // Opcode: FNEG_D32
/* 2567 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2585
/* 2571 */    MCD::OPC_CheckPredicate, 32, 198, 43, // Skip to: 13781
/* 2575 */    MCD::OPC_CheckField, 16, 5, 0, 192, 43, // Skip to: 13781
/* 2581 */    MCD::OPC_Decode, 189, 11, 122, // Opcode: ROUND_W_D32
/* 2585 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2603
/* 2589 */    MCD::OPC_CheckPredicate, 32, 180, 43, // Skip to: 13781
/* 2593 */    MCD::OPC_CheckField, 16, 5, 0, 174, 43, // Skip to: 13781
/* 2599 */    MCD::OPC_Decode, 161, 14, 122, // Opcode: TRUNC_W_D32
/* 2603 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2621
/* 2607 */    MCD::OPC_CheckPredicate, 32, 162, 43, // Skip to: 13781
/* 2611 */    MCD::OPC_CheckField, 16, 5, 0, 156, 43, // Skip to: 13781
/* 2617 */    MCD::OPC_Decode, 245, 2, 122, // Opcode: CEIL_W_D32
/* 2621 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2639
/* 2625 */    MCD::OPC_CheckPredicate, 32, 144, 43, // Skip to: 13781
/* 2629 */    MCD::OPC_CheckField, 16, 5, 0, 138, 43, // Skip to: 13781
/* 2635 */    MCD::OPC_Decode, 155, 6, 122, // Opcode: FLOOR_W_D32
/* 2639 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2670
/* 2643 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2646 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2658
/* 2650 */    MCD::OPC_CheckPredicate, 33, 119, 43, // Skip to: 13781
/* 2654 */    MCD::OPC_Decode, 164, 9, 123, // Opcode: MOVF_D32
/* 2658 */    MCD::OPC_FilterValue, 1, 111, 43, // Skip to: 13781
/* 2662 */    MCD::OPC_CheckPredicate, 33, 107, 43, // Skip to: 13781
/* 2666 */    MCD::OPC_Decode, 184, 9, 123, // Opcode: MOVT_D32
/* 2670 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2682
/* 2674 */    MCD::OPC_CheckPredicate, 33, 95, 43, // Skip to: 13781
/* 2678 */    MCD::OPC_Decode, 196, 9, 124, // Opcode: MOVZ_I_D32
/* 2682 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2694
/* 2686 */    MCD::OPC_CheckPredicate, 33, 83, 43, // Skip to: 13781
/* 2690 */    MCD::OPC_Decode, 176, 9, 124, // Opcode: MOVN_I_D32
/* 2694 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2712
/* 2698 */    MCD::OPC_CheckPredicate, 30, 71, 43, // Skip to: 13781
/* 2702 */    MCD::OPC_CheckField, 16, 5, 0, 65, 43, // Skip to: 13781
/* 2708 */    MCD::OPC_Decode, 246, 3, 122, // Opcode: CVT_S_D32
/* 2712 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2730
/* 2716 */    MCD::OPC_CheckPredicate, 30, 53, 43, // Skip to: 13781
/* 2720 */    MCD::OPC_CheckField, 16, 5, 0, 47, 43, // Skip to: 13781
/* 2726 */    MCD::OPC_Decode, 252, 3, 122, // Opcode: CVT_W_D32
/* 2730 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2748
/* 2734 */    MCD::OPC_CheckPredicate, 31, 35, 43, // Skip to: 13781
/* 2738 */    MCD::OPC_CheckField, 16, 5, 0, 29, 43, // Skip to: 13781
/* 2744 */    MCD::OPC_Decode, 242, 3, 125, // Opcode: CVT_L_D64
/* 2748 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2766
/* 2752 */    MCD::OPC_CheckPredicate, 34, 17, 43, // Skip to: 13781
/* 2756 */    MCD::OPC_CheckField, 6, 5, 0, 11, 43, // Skip to: 13781
/* 2762 */    MCD::OPC_Decode, 132, 4, 126, // Opcode: C_F_D32
/* 2766 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2784
/* 2770 */    MCD::OPC_CheckPredicate, 34, 255, 42, // Skip to: 13781
/* 2774 */    MCD::OPC_CheckField, 6, 5, 0, 249, 42, // Skip to: 13781
/* 2780 */    MCD::OPC_Decode, 174, 4, 126, // Opcode: C_UN_D32
/* 2784 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2802
/* 2788 */    MCD::OPC_CheckPredicate, 34, 237, 42, // Skip to: 13781
/* 2792 */    MCD::OPC_CheckField, 6, 5, 0, 231, 42, // Skip to: 13781
/* 2798 */    MCD::OPC_Decode, 129, 4, 126, // Opcode: C_EQ_D32
/* 2802 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2820
/* 2806 */    MCD::OPC_CheckPredicate, 34, 219, 42, // Skip to: 13781
/* 2810 */    MCD::OPC_CheckField, 6, 5, 0, 213, 42, // Skip to: 13781
/* 2816 */    MCD::OPC_Decode, 165, 4, 126, // Opcode: C_UEQ_D32
/* 2820 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2838
/* 2824 */    MCD::OPC_CheckPredicate, 34, 201, 42, // Skip to: 13781
/* 2828 */    MCD::OPC_CheckField, 6, 5, 0, 195, 42, // Skip to: 13781
/* 2834 */    MCD::OPC_Decode, 156, 4, 126, // Opcode: C_OLT_D32
/* 2838 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2856
/* 2842 */    MCD::OPC_CheckPredicate, 34, 183, 42, // Skip to: 13781
/* 2846 */    MCD::OPC_CheckField, 6, 5, 0, 177, 42, // Skip to: 13781
/* 2852 */    MCD::OPC_Decode, 171, 4, 126, // Opcode: C_ULT_D32
/* 2856 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2874
/* 2860 */    MCD::OPC_CheckPredicate, 34, 165, 42, // Skip to: 13781
/* 2864 */    MCD::OPC_CheckField, 6, 5, 0, 159, 42, // Skip to: 13781
/* 2870 */    MCD::OPC_Decode, 153, 4, 126, // Opcode: C_OLE_D32
/* 2874 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2892
/* 2878 */    MCD::OPC_CheckPredicate, 34, 147, 42, // Skip to: 13781
/* 2882 */    MCD::OPC_CheckField, 6, 5, 0, 141, 42, // Skip to: 13781
/* 2888 */    MCD::OPC_Decode, 168, 4, 126, // Opcode: C_ULE_D32
/* 2892 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2910
/* 2896 */    MCD::OPC_CheckPredicate, 34, 129, 42, // Skip to: 13781
/* 2900 */    MCD::OPC_CheckField, 6, 5, 0, 123, 42, // Skip to: 13781
/* 2906 */    MCD::OPC_Decode, 162, 4, 126, // Opcode: C_SF_D32
/* 2910 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2928
/* 2914 */    MCD::OPC_CheckPredicate, 34, 111, 42, // Skip to: 13781
/* 2918 */    MCD::OPC_CheckField, 6, 5, 0, 105, 42, // Skip to: 13781
/* 2924 */    MCD::OPC_Decode, 144, 4, 126, // Opcode: C_NGLE_D32
/* 2928 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2946
/* 2932 */    MCD::OPC_CheckPredicate, 34, 93, 42, // Skip to: 13781
/* 2936 */    MCD::OPC_CheckField, 6, 5, 0, 87, 42, // Skip to: 13781
/* 2942 */    MCD::OPC_Decode, 159, 4, 126, // Opcode: C_SEQ_D32
/* 2946 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2964
/* 2950 */    MCD::OPC_CheckPredicate, 34, 75, 42, // Skip to: 13781
/* 2954 */    MCD::OPC_CheckField, 6, 5, 0, 69, 42, // Skip to: 13781
/* 2960 */    MCD::OPC_Decode, 147, 4, 126, // Opcode: C_NGL_D32
/* 2964 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2982
/* 2968 */    MCD::OPC_CheckPredicate, 34, 57, 42, // Skip to: 13781
/* 2972 */    MCD::OPC_CheckField, 6, 5, 0, 51, 42, // Skip to: 13781
/* 2978 */    MCD::OPC_Decode, 138, 4, 126, // Opcode: C_LT_D32
/* 2982 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 3000
/* 2986 */    MCD::OPC_CheckPredicate, 34, 39, 42, // Skip to: 13781
/* 2990 */    MCD::OPC_CheckField, 6, 5, 0, 33, 42, // Skip to: 13781
/* 2996 */    MCD::OPC_Decode, 141, 4, 126, // Opcode: C_NGE_D32
/* 3000 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 3018
/* 3004 */    MCD::OPC_CheckPredicate, 34, 21, 42, // Skip to: 13781
/* 3008 */    MCD::OPC_CheckField, 6, 5, 0, 15, 42, // Skip to: 13781
/* 3014 */    MCD::OPC_Decode, 135, 4, 126, // Opcode: C_LE_D32
/* 3018 */    MCD::OPC_FilterValue, 63, 7, 42, // Skip to: 13781
/* 3022 */    MCD::OPC_CheckPredicate, 34, 3, 42, // Skip to: 13781
/* 3026 */    MCD::OPC_CheckField, 6, 5, 0, 253, 41, // Skip to: 13781
/* 3032 */    MCD::OPC_Decode, 150, 4, 126, // Opcode: C_NGT_D32
/* 3036 */    MCD::OPC_FilterValue, 20, 39, 0, // Skip to: 3079
/* 3040 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3043 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 3061
/* 3047 */    MCD::OPC_CheckPredicate, 24, 234, 41, // Skip to: 13781
/* 3051 */    MCD::OPC_CheckField, 16, 5, 0, 228, 41, // Skip to: 13781
/* 3057 */    MCD::OPC_Decode, 250, 3, 114, // Opcode: CVT_S_W
/* 3061 */    MCD::OPC_FilterValue, 33, 220, 41, // Skip to: 13781
/* 3065 */    MCD::OPC_CheckPredicate, 30, 216, 41, // Skip to: 13781
/* 3069 */    MCD::OPC_CheckField, 16, 5, 0, 210, 41, // Skip to: 13781
/* 3075 */    MCD::OPC_Decode, 236, 3, 117, // Opcode: CVT_D32_W
/* 3079 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 3091
/* 3083 */    MCD::OPC_CheckPredicate, 10, 198, 41, // Skip to: 13781
/* 3087 */    MCD::OPC_Decode, 206, 2, 112, // Opcode: BZ_B
/* 3091 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3103
/* 3095 */    MCD::OPC_CheckPredicate, 10, 186, 41, // Skip to: 13781
/* 3099 */    MCD::OPC_Decode, 208, 2, 127, // Opcode: BZ_H
/* 3103 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 3116
/* 3107 */    MCD::OPC_CheckPredicate, 10, 174, 41, // Skip to: 13781
/* 3111 */    MCD::OPC_Decode, 210, 2, 128, 1, // Opcode: BZ_W
/* 3116 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 3129
/* 3120 */    MCD::OPC_CheckPredicate, 10, 161, 41, // Skip to: 13781
/* 3124 */    MCD::OPC_Decode, 207, 2, 129, 1, // Opcode: BZ_D
/* 3129 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3141
/* 3133 */    MCD::OPC_CheckPredicate, 10, 148, 41, // Skip to: 13781
/* 3137 */    MCD::OPC_Decode, 179, 2, 112, // Opcode: BNZ_B
/* 3141 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3153
/* 3145 */    MCD::OPC_CheckPredicate, 10, 136, 41, // Skip to: 13781
/* 3149 */    MCD::OPC_Decode, 181, 2, 127, // Opcode: BNZ_H
/* 3153 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 3166
/* 3157 */    MCD::OPC_CheckPredicate, 10, 124, 41, // Skip to: 13781
/* 3161 */    MCD::OPC_Decode, 183, 2, 128, 1, // Opcode: BNZ_W
/* 3166 */    MCD::OPC_FilterValue, 31, 115, 41, // Skip to: 13781
/* 3170 */    MCD::OPC_CheckPredicate, 10, 111, 41, // Skip to: 13781
/* 3174 */    MCD::OPC_Decode, 180, 2, 129, 1, // Opcode: BNZ_D
/* 3179 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 3224
/* 3183 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3186 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3205
/* 3190 */    MCD::OPC_CheckPredicate, 7, 91, 41, // Skip to: 13781
/* 3194 */    MCD::OPC_CheckField, 3, 8, 0, 85, 41, // Skip to: 13781
/* 3200 */    MCD::OPC_Decode, 236, 8, 130, 1, // Opcode: MFC2
/* 3205 */    MCD::OPC_FilterValue, 4, 76, 41, // Skip to: 13781
/* 3209 */    MCD::OPC_CheckPredicate, 7, 72, 41, // Skip to: 13781
/* 3213 */    MCD::OPC_CheckField, 3, 8, 0, 66, 41, // Skip to: 13781
/* 3219 */    MCD::OPC_Decode, 228, 9, 131, 1, // Opcode: MTC2
/* 3224 */    MCD::OPC_FilterValue, 19, 221, 0, // Skip to: 3449
/* 3228 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3231 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3250
/* 3235 */    MCD::OPC_CheckPredicate, 35, 46, 41, // Skip to: 13781
/* 3239 */    MCD::OPC_CheckField, 11, 5, 0, 40, 41, // Skip to: 13781
/* 3245 */    MCD::OPC_Decode, 161, 8, 132, 1, // Opcode: LWXC1
/* 3250 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 3269
/* 3254 */    MCD::OPC_CheckPredicate, 36, 27, 41, // Skip to: 13781
/* 3258 */    MCD::OPC_CheckField, 11, 5, 0, 21, 41, // Skip to: 13781
/* 3264 */    MCD::OPC_Decode, 225, 7, 133, 1, // Opcode: LDXC1
/* 3269 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 3288
/* 3273 */    MCD::OPC_CheckPredicate, 37, 8, 41, // Skip to: 13781
/* 3277 */    MCD::OPC_CheckField, 11, 5, 0, 2, 41, // Skip to: 13781
/* 3283 */    MCD::OPC_Decode, 130, 8, 133, 1, // Opcode: LUXC1
/* 3288 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 3307
/* 3292 */    MCD::OPC_CheckPredicate, 35, 245, 40, // Skip to: 13781
/* 3296 */    MCD::OPC_CheckField, 6, 5, 0, 239, 40, // Skip to: 13781
/* 3302 */    MCD::OPC_Decode, 198, 13, 134, 1, // Opcode: SWXC1
/* 3307 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 3326
/* 3311 */    MCD::OPC_CheckPredicate, 36, 226, 40, // Skip to: 13781
/* 3315 */    MCD::OPC_CheckField, 6, 5, 0, 220, 40, // Skip to: 13781
/* 3321 */    MCD::OPC_Decode, 230, 11, 135, 1, // Opcode: SDXC1
/* 3326 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 3345
/* 3330 */    MCD::OPC_CheckPredicate, 37, 207, 40, // Skip to: 13781
/* 3334 */    MCD::OPC_CheckField, 6, 5, 0, 201, 40, // Skip to: 13781
/* 3340 */    MCD::OPC_Decode, 175, 13, 135, 1, // Opcode: SUXC1
/* 3345 */    MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 3358
/* 3349 */    MCD::OPC_CheckPredicate, 35, 188, 40, // Skip to: 13781
/* 3353 */    MCD::OPC_Decode, 203, 8, 136, 1, // Opcode: MADD_S
/* 3358 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 3371
/* 3362 */    MCD::OPC_CheckPredicate, 38, 175, 40, // Skip to: 13781
/* 3366 */    MCD::OPC_Decode, 196, 8, 137, 1, // Opcode: MADD_D32
/* 3371 */    MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 3384
/* 3375 */    MCD::OPC_CheckPredicate, 35, 162, 40, // Skip to: 13781
/* 3379 */    MCD::OPC_Decode, 223, 9, 136, 1, // Opcode: MSUB_S
/* 3384 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 3397
/* 3388 */    MCD::OPC_CheckPredicate, 38, 149, 40, // Skip to: 13781
/* 3392 */    MCD::OPC_Decode, 216, 9, 137, 1, // Opcode: MSUB_D32
/* 3397 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3410
/* 3401 */    MCD::OPC_CheckPredicate, 35, 136, 40, // Skip to: 13781
/* 3405 */    MCD::OPC_Decode, 174, 10, 136, 1, // Opcode: NMADD_S
/* 3410 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 3423
/* 3414 */    MCD::OPC_CheckPredicate, 38, 123, 40, // Skip to: 13781
/* 3418 */    MCD::OPC_Decode, 171, 10, 137, 1, // Opcode: NMADD_D32
/* 3423 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3436
/* 3427 */    MCD::OPC_CheckPredicate, 35, 110, 40, // Skip to: 13781
/* 3431 */    MCD::OPC_Decode, 179, 10, 136, 1, // Opcode: NMSUB_S
/* 3436 */    MCD::OPC_FilterValue, 57, 101, 40, // Skip to: 13781
/* 3440 */    MCD::OPC_CheckPredicate, 38, 97, 40, // Skip to: 13781
/* 3444 */    MCD::OPC_Decode, 176, 10, 137, 1, // Opcode: NMSUB_D32
/* 3449 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3461
/* 3453 */    MCD::OPC_CheckPredicate, 19, 84, 40, // Skip to: 13781
/* 3457 */    MCD::OPC_Decode, 210, 1, 98, // Opcode: BEQL
/* 3461 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3473
/* 3465 */    MCD::OPC_CheckPredicate, 19, 72, 40, // Skip to: 13781
/* 3469 */    MCD::OPC_Decode, 171, 2, 98, // Opcode: BNEL
/* 3473 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 3491
/* 3477 */    MCD::OPC_CheckPredicate, 19, 60, 40, // Skip to: 13781
/* 3481 */    MCD::OPC_CheckField, 16, 5, 0, 54, 40, // Skip to: 13781
/* 3487 */    MCD::OPC_Decode, 139, 2, 93, // Opcode: BLEZL
/* 3491 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3509
/* 3495 */    MCD::OPC_CheckPredicate, 19, 42, 40, // Skip to: 13781
/* 3499 */    MCD::OPC_CheckField, 16, 5, 0, 36, 40, // Skip to: 13781
/* 3505 */    MCD::OPC_Decode, 239, 1, 93, // Opcode: BGTZL
/* 3509 */    MCD::OPC_FilterValue, 28, 235, 0, // Skip to: 3748
/* 3513 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3516 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 3557
/* 3520 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3523 */    MCD::OPC_FilterValue, 0, 14, 40, // Skip to: 13781
/* 3527 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3530 */    MCD::OPC_FilterValue, 0, 7, 40, // Skip to: 13781
/* 3534 */    MCD::OPC_CheckPredicate, 11, 10, 0, // Skip to: 3548
/* 3538 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3548
/* 3544 */    MCD::OPC_Decode, 184, 8, 51, // Opcode: MADD
/* 3548 */    MCD::OPC_CheckPredicate, 15, 245, 39, // Skip to: 13781
/* 3552 */    MCD::OPC_Decode, 199, 8, 138, 1, // Opcode: MADD_DSP
/* 3557 */    MCD::OPC_FilterValue, 1, 37, 0, // Skip to: 3598
/* 3561 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3564 */    MCD::OPC_FilterValue, 0, 229, 39, // Skip to: 13781
/* 3568 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3571 */    MCD::OPC_FilterValue, 0, 222, 39, // Skip to: 13781
/* 3575 */    MCD::OPC_CheckPredicate, 11, 10, 0, // Skip to: 3589
/* 3579 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3589
/* 3585 */    MCD::OPC_Decode, 189, 8, 51, // Opcode: MADDU
/* 3589 */    MCD::OPC_CheckPredicate, 15, 204, 39, // Skip to: 13781
/* 3593 */    MCD::OPC_Decode, 190, 8, 138, 1, // Opcode: MADDU_DSP
/* 3598 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3616
/* 3602 */    MCD::OPC_CheckPredicate, 11, 191, 39, // Skip to: 13781
/* 3606 */    MCD::OPC_CheckField, 6, 5, 0, 185, 39, // Skip to: 13781
/* 3612 */    MCD::OPC_Decode, 251, 9, 43, // Opcode: MUL
/* 3616 */    MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 3657
/* 3620 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3623 */    MCD::OPC_FilterValue, 0, 170, 39, // Skip to: 13781
/* 3627 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3630 */    MCD::OPC_FilterValue, 0, 163, 39, // Skip to: 13781
/* 3634 */    MCD::OPC_CheckPredicate, 11, 10, 0, // Skip to: 3648
/* 3638 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3648
/* 3644 */    MCD::OPC_Decode, 204, 9, 51, // Opcode: MSUB
/* 3648 */    MCD::OPC_CheckPredicate, 15, 145, 39, // Skip to: 13781
/* 3652 */    MCD::OPC_Decode, 219, 9, 138, 1, // Opcode: MSUB_DSP
/* 3657 */    MCD::OPC_FilterValue, 5, 37, 0, // Skip to: 3698
/* 3661 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3664 */    MCD::OPC_FilterValue, 0, 129, 39, // Skip to: 13781
/* 3668 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3671 */    MCD::OPC_FilterValue, 0, 122, 39, // Skip to: 13781
/* 3675 */    MCD::OPC_CheckPredicate, 11, 10, 0, // Skip to: 3689
/* 3679 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3689
/* 3685 */    MCD::OPC_Decode, 209, 9, 51, // Opcode: MSUBU
/* 3689 */    MCD::OPC_CheckPredicate, 15, 104, 39, // Skip to: 13781
/* 3693 */    MCD::OPC_Decode, 210, 9, 138, 1, // Opcode: MSUBU_DSP
/* 3698 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 3717
/* 3702 */    MCD::OPC_CheckPredicate, 11, 91, 39, // Skip to: 13781
/* 3706 */    MCD::OPC_CheckField, 6, 5, 0, 85, 39, // Skip to: 13781
/* 3712 */    MCD::OPC_Decode, 173, 3, 139, 1, // Opcode: CLZ
/* 3717 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 3736
/* 3721 */    MCD::OPC_CheckPredicate, 11, 72, 39, // Skip to: 13781
/* 3725 */    MCD::OPC_CheckField, 6, 5, 0, 66, 39, // Skip to: 13781
/* 3731 */    MCD::OPC_Decode, 153, 3, 139, 1, // Opcode: CLO
/* 3736 */    MCD::OPC_FilterValue, 63, 57, 39, // Skip to: 13781
/* 3740 */    MCD::OPC_CheckPredicate, 11, 53, 39, // Skip to: 13781
/* 3744 */    MCD::OPC_Decode, 216, 11, 84, // Opcode: SDBBP
/* 3748 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3760
/* 3752 */    MCD::OPC_CheckPredicate, 11, 41, 39, // Skip to: 13781
/* 3756 */    MCD::OPC_Decode, 179, 7, 97, // Opcode: JALX
/* 3760 */    MCD::OPC_FilterValue, 30, 94, 28, // Skip to: 11026
/* 3764 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3767 */    MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 3825
/* 3771 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3774 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3786
/* 3778 */    MCD::OPC_CheckPredicate, 10, 15, 39, // Skip to: 13781
/* 3782 */    MCD::OPC_Decode, 94, 140, 1, // Opcode: ANDI_B
/* 3786 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3799
/* 3790 */    MCD::OPC_CheckPredicate, 10, 3, 39, // Skip to: 13781
/* 3794 */    MCD::OPC_Decode, 197, 10, 140, 1, // Opcode: ORI_B
/* 3799 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3812
/* 3803 */    MCD::OPC_CheckPredicate, 10, 246, 38, // Skip to: 13781
/* 3807 */    MCD::OPC_Decode, 184, 10, 140, 1, // Opcode: NORI_B
/* 3812 */    MCD::OPC_FilterValue, 3, 237, 38, // Skip to: 13781
/* 3816 */    MCD::OPC_CheckPredicate, 10, 233, 38, // Skip to: 13781
/* 3820 */    MCD::OPC_Decode, 186, 14, 140, 1, // Opcode: XORI_B
/* 3825 */    MCD::OPC_FilterValue, 1, 42, 0, // Skip to: 3871
/* 3829 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3832 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3845
/* 3836 */    MCD::OPC_CheckPredicate, 10, 213, 38, // Skip to: 13781
/* 3840 */    MCD::OPC_Decode, 156, 2, 141, 1, // Opcode: BMNZI_B
/* 3845 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3858
/* 3849 */    MCD::OPC_CheckPredicate, 10, 200, 38, // Skip to: 13781
/* 3853 */    MCD::OPC_Decode, 158, 2, 141, 1, // Opcode: BMZI_B
/* 3858 */    MCD::OPC_FilterValue, 2, 191, 38, // Skip to: 13781
/* 3862 */    MCD::OPC_CheckPredicate, 10, 187, 38, // Skip to: 13781
/* 3866 */    MCD::OPC_Decode, 191, 2, 141, 1, // Opcode: BSELI_B
/* 3871 */    MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 3917
/* 3875 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3878 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3891
/* 3882 */    MCD::OPC_CheckPredicate, 10, 167, 38, // Skip to: 13781
/* 3886 */    MCD::OPC_Decode, 129, 12, 140, 1, // Opcode: SHF_B
/* 3891 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3904
/* 3895 */    MCD::OPC_CheckPredicate, 10, 154, 38, // Skip to: 13781
/* 3899 */    MCD::OPC_Decode, 130, 12, 142, 1, // Opcode: SHF_H
/* 3904 */    MCD::OPC_FilterValue, 2, 145, 38, // Skip to: 13781
/* 3908 */    MCD::OPC_CheckPredicate, 10, 141, 38, // Skip to: 13781
/* 3912 */    MCD::OPC_Decode, 131, 12, 143, 1, // Opcode: SHF_W
/* 3917 */    MCD::OPC_FilterValue, 6, 55, 1, // Skip to: 4232
/* 3921 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3924 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3936
/* 3928 */    MCD::OPC_CheckPredicate, 10, 121, 38, // Skip to: 13781
/* 3932 */    MCD::OPC_Decode, 63, 144, 1, // Opcode: ADDVI_B
/* 3936 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3948
/* 3940 */    MCD::OPC_CheckPredicate, 10, 109, 38, // Skip to: 13781
/* 3944 */    MCD::OPC_Decode, 65, 145, 1, // Opcode: ADDVI_H
/* 3948 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3960
/* 3952 */    MCD::OPC_CheckPredicate, 10, 97, 38, // Skip to: 13781
/* 3956 */    MCD::OPC_Decode, 66, 146, 1, // Opcode: ADDVI_W
/* 3960 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3972
/* 3964 */    MCD::OPC_CheckPredicate, 10, 85, 38, // Skip to: 13781
/* 3968 */    MCD::OPC_Decode, 64, 147, 1, // Opcode: ADDVI_D
/* 3972 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3985
/* 3976 */    MCD::OPC_CheckPredicate, 10, 73, 38, // Skip to: 13781
/* 3980 */    MCD::OPC_Decode, 163, 13, 144, 1, // Opcode: SUBVI_B
/* 3985 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3998
/* 3989 */    MCD::OPC_CheckPredicate, 10, 60, 38, // Skip to: 13781
/* 3993 */    MCD::OPC_Decode, 165, 13, 145, 1, // Opcode: SUBVI_H
/* 3998 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 4011
/* 4002 */    MCD::OPC_CheckPredicate, 10, 47, 38, // Skip to: 13781
/* 4006 */    MCD::OPC_Decode, 166, 13, 146, 1, // Opcode: SUBVI_W
/* 4011 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 4024
/* 4015 */    MCD::OPC_CheckPredicate, 10, 34, 38, // Skip to: 13781
/* 4019 */    MCD::OPC_Decode, 164, 13, 147, 1, // Opcode: SUBVI_D
/* 4024 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4037
/* 4028 */    MCD::OPC_CheckPredicate, 10, 21, 38, // Skip to: 13781
/* 4032 */    MCD::OPC_Decode, 211, 8, 144, 1, // Opcode: MAXI_S_B
/* 4037 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4050
/* 4041 */    MCD::OPC_CheckPredicate, 10, 8, 38, // Skip to: 13781
/* 4045 */    MCD::OPC_Decode, 213, 8, 145, 1, // Opcode: MAXI_S_H
/* 4050 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4063
/* 4054 */    MCD::OPC_CheckPredicate, 10, 251, 37, // Skip to: 13781
/* 4058 */    MCD::OPC_Decode, 214, 8, 146, 1, // Opcode: MAXI_S_W
/* 4063 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4076
/* 4067 */    MCD::OPC_CheckPredicate, 10, 238, 37, // Skip to: 13781
/* 4071 */    MCD::OPC_Decode, 212, 8, 147, 1, // Opcode: MAXI_S_D
/* 4076 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4089
/* 4080 */    MCD::OPC_CheckPredicate, 10, 225, 37, // Skip to: 13781
/* 4084 */    MCD::OPC_Decode, 215, 8, 144, 1, // Opcode: MAXI_U_B
/* 4089 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 4102
/* 4093 */    MCD::OPC_CheckPredicate, 10, 212, 37, // Skip to: 13781
/* 4097 */    MCD::OPC_Decode, 217, 8, 145, 1, // Opcode: MAXI_U_H
/* 4102 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4115
/* 4106 */    MCD::OPC_CheckPredicate, 10, 199, 37, // Skip to: 13781
/* 4110 */    MCD::OPC_Decode, 218, 8, 146, 1, // Opcode: MAXI_U_W
/* 4115 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 4128
/* 4119 */    MCD::OPC_CheckPredicate, 10, 186, 37, // Skip to: 13781
/* 4123 */    MCD::OPC_Decode, 216, 8, 147, 1, // Opcode: MAXI_U_D
/* 4128 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 4141
/* 4132 */    MCD::OPC_CheckPredicate, 10, 173, 37, // Skip to: 13781
/* 4136 */    MCD::OPC_Decode, 252, 8, 144, 1, // Opcode: MINI_S_B
/* 4141 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 4154
/* 4145 */    MCD::OPC_CheckPredicate, 10, 160, 37, // Skip to: 13781
/* 4149 */    MCD::OPC_Decode, 254, 8, 145, 1, // Opcode: MINI_S_H
/* 4154 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 4167
/* 4158 */    MCD::OPC_CheckPredicate, 10, 147, 37, // Skip to: 13781
/* 4162 */    MCD::OPC_Decode, 255, 8, 146, 1, // Opcode: MINI_S_W
/* 4167 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 4180
/* 4171 */    MCD::OPC_CheckPredicate, 10, 134, 37, // Skip to: 13781
/* 4175 */    MCD::OPC_Decode, 253, 8, 147, 1, // Opcode: MINI_S_D
/* 4180 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 4193
/* 4184 */    MCD::OPC_CheckPredicate, 10, 121, 37, // Skip to: 13781
/* 4188 */    MCD::OPC_Decode, 128, 9, 144, 1, // Opcode: MINI_U_B
/* 4193 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 4206
/* 4197 */    MCD::OPC_CheckPredicate, 10, 108, 37, // Skip to: 13781
/* 4201 */    MCD::OPC_Decode, 130, 9, 145, 1, // Opcode: MINI_U_H
/* 4206 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 4219
/* 4210 */    MCD::OPC_CheckPredicate, 10, 95, 37, // Skip to: 13781
/* 4214 */    MCD::OPC_Decode, 131, 9, 146, 1, // Opcode: MINI_U_W
/* 4219 */    MCD::OPC_FilterValue, 23, 86, 37, // Skip to: 13781
/* 4223 */    MCD::OPC_CheckPredicate, 10, 82, 37, // Skip to: 13781
/* 4227 */    MCD::OPC_Decode, 129, 9, 147, 1, // Opcode: MINI_U_D
/* 4232 */    MCD::OPC_FilterValue, 7, 59, 1, // Skip to: 4551
/* 4236 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4239 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4252
/* 4243 */    MCD::OPC_CheckPredicate, 10, 62, 37, // Skip to: 13781
/* 4247 */    MCD::OPC_Decode, 250, 2, 144, 1, // Opcode: CEQI_B
/* 4252 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4265
/* 4256 */    MCD::OPC_CheckPredicate, 10, 49, 37, // Skip to: 13781
/* 4260 */    MCD::OPC_Decode, 252, 2, 145, 1, // Opcode: CEQI_H
/* 4265 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4278
/* 4269 */    MCD::OPC_CheckPredicate, 10, 36, 37, // Skip to: 13781
/* 4273 */    MCD::OPC_Decode, 253, 2, 146, 1, // Opcode: CEQI_W
/* 4278 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 4291
/* 4282 */    MCD::OPC_CheckPredicate, 10, 23, 37, // Skip to: 13781
/* 4286 */    MCD::OPC_Decode, 251, 2, 147, 1, // Opcode: CEQI_D
/* 4291 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4304
/* 4295 */    MCD::OPC_CheckPredicate, 10, 10, 37, // Skip to: 13781
/* 4299 */    MCD::OPC_Decode, 157, 3, 144, 1, // Opcode: CLTI_S_B
/* 4304 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4317
/* 4308 */    MCD::OPC_CheckPredicate, 10, 253, 36, // Skip to: 13781
/* 4312 */    MCD::OPC_Decode, 159, 3, 145, 1, // Opcode: CLTI_S_H
/* 4317 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4330
/* 4321 */    MCD::OPC_CheckPredicate, 10, 240, 36, // Skip to: 13781
/* 4325 */    MCD::OPC_Decode, 160, 3, 146, 1, // Opcode: CLTI_S_W
/* 4330 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4343
/* 4334 */    MCD::OPC_CheckPredicate, 10, 227, 36, // Skip to: 13781
/* 4338 */    MCD::OPC_Decode, 158, 3, 147, 1, // Opcode: CLTI_S_D
/* 4343 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4356
/* 4347 */    MCD::OPC_CheckPredicate, 10, 214, 36, // Skip to: 13781
/* 4351 */    MCD::OPC_Decode, 161, 3, 144, 1, // Opcode: CLTI_U_B
/* 4356 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 4369
/* 4360 */    MCD::OPC_CheckPredicate, 10, 201, 36, // Skip to: 13781
/* 4364 */    MCD::OPC_Decode, 163, 3, 145, 1, // Opcode: CLTI_U_H
/* 4369 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4382
/* 4373 */    MCD::OPC_CheckPredicate, 10, 188, 36, // Skip to: 13781
/* 4377 */    MCD::OPC_Decode, 164, 3, 146, 1, // Opcode: CLTI_U_W
/* 4382 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 4395
/* 4386 */    MCD::OPC_CheckPredicate, 10, 175, 36, // Skip to: 13781
/* 4390 */    MCD::OPC_Decode, 162, 3, 147, 1, // Opcode: CLTI_U_D
/* 4395 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 4408
/* 4399 */    MCD::OPC_CheckPredicate, 10, 162, 36, // Skip to: 13781
/* 4403 */    MCD::OPC_Decode, 137, 3, 144, 1, // Opcode: CLEI_S_B
/* 4408 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 4421
/* 4412 */    MCD::OPC_CheckPredicate, 10, 149, 36, // Skip to: 13781
/* 4416 */    MCD::OPC_Decode, 139, 3, 145, 1, // Opcode: CLEI_S_H
/* 4421 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 4434
/* 4425 */    MCD::OPC_CheckPredicate, 10, 136, 36, // Skip to: 13781
/* 4429 */    MCD::OPC_Decode, 140, 3, 146, 1, // Opcode: CLEI_S_W
/* 4434 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 4447
/* 4438 */    MCD::OPC_CheckPredicate, 10, 123, 36, // Skip to: 13781
/* 4442 */    MCD::OPC_Decode, 138, 3, 147, 1, // Opcode: CLEI_S_D
/* 4447 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 4460
/* 4451 */    MCD::OPC_CheckPredicate, 10, 110, 36, // Skip to: 13781
/* 4455 */    MCD::OPC_Decode, 141, 3, 144, 1, // Opcode: CLEI_U_B
/* 4460 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 4473
/* 4464 */    MCD::OPC_CheckPredicate, 10, 97, 36, // Skip to: 13781
/* 4468 */    MCD::OPC_Decode, 143, 3, 145, 1, // Opcode: CLEI_U_H
/* 4473 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 4486
/* 4477 */    MCD::OPC_CheckPredicate, 10, 84, 36, // Skip to: 13781
/* 4481 */    MCD::OPC_Decode, 144, 3, 146, 1, // Opcode: CLEI_U_W
/* 4486 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 4499
/* 4490 */    MCD::OPC_CheckPredicate, 10, 71, 36, // Skip to: 13781
/* 4494 */    MCD::OPC_Decode, 142, 3, 147, 1, // Opcode: CLEI_U_D
/* 4499 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 4512
/* 4503 */    MCD::OPC_CheckPredicate, 10, 58, 36, // Skip to: 13781
/* 4507 */    MCD::OPC_Decode, 218, 7, 148, 1, // Opcode: LDI_B
/* 4512 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 4525
/* 4516 */    MCD::OPC_CheckPredicate, 10, 45, 36, // Skip to: 13781
/* 4520 */    MCD::OPC_Decode, 220, 7, 149, 1, // Opcode: LDI_H
/* 4525 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 4538
/* 4529 */    MCD::OPC_CheckPredicate, 10, 32, 36, // Skip to: 13781
/* 4533 */    MCD::OPC_Decode, 221, 7, 150, 1, // Opcode: LDI_W
/* 4538 */    MCD::OPC_FilterValue, 27, 23, 36, // Skip to: 13781
/* 4542 */    MCD::OPC_CheckPredicate, 10, 19, 36, // Skip to: 13781
/* 4546 */    MCD::OPC_Decode, 219, 7, 151, 1, // Opcode: LDI_D
/* 4551 */    MCD::OPC_FilterValue, 9, 67, 2, // Skip to: 5134
/* 4555 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 4558 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4571
/* 4562 */    MCD::OPC_CheckPredicate, 10, 255, 35, // Skip to: 13781
/* 4566 */    MCD::OPC_Decode, 170, 12, 152, 1, // Opcode: SLLI_D
/* 4571 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 4630
/* 4575 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4578 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4591
/* 4582 */    MCD::OPC_CheckPredicate, 10, 235, 35, // Skip to: 13781
/* 4586 */    MCD::OPC_Decode, 172, 12, 146, 1, // Opcode: SLLI_W
/* 4591 */    MCD::OPC_FilterValue, 1, 226, 35, // Skip to: 13781
/* 4595 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4598 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4611
/* 4602 */    MCD::OPC_CheckPredicate, 10, 215, 35, // Skip to: 13781
/* 4606 */    MCD::OPC_Decode, 171, 12, 153, 1, // Opcode: SLLI_H
/* 4611 */    MCD::OPC_FilterValue, 1, 206, 35, // Skip to: 13781
/* 4615 */    MCD::OPC_CheckPredicate, 10, 202, 35, // Skip to: 13781
/* 4619 */    MCD::OPC_CheckField, 19, 1, 0, 196, 35, // Skip to: 13781
/* 4625 */    MCD::OPC_Decode, 169, 12, 154, 1, // Opcode: SLLI_B
/* 4630 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4643
/* 4634 */    MCD::OPC_CheckPredicate, 10, 183, 35, // Skip to: 13781
/* 4638 */    MCD::OPC_Decode, 210, 12, 152, 1, // Opcode: SRAI_D
/* 4643 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 4702
/* 4647 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4650 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4663
/* 4654 */    MCD::OPC_CheckPredicate, 10, 163, 35, // Skip to: 13781
/* 4658 */    MCD::OPC_Decode, 212, 12, 146, 1, // Opcode: SRAI_W
/* 4663 */    MCD::OPC_FilterValue, 1, 154, 35, // Skip to: 13781
/* 4667 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4670 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4683
/* 4674 */    MCD::OPC_CheckPredicate, 10, 143, 35, // Skip to: 13781
/* 4678 */    MCD::OPC_Decode, 211, 12, 153, 1, // Opcode: SRAI_H
/* 4683 */    MCD::OPC_FilterValue, 1, 134, 35, // Skip to: 13781
/* 4687 */    MCD::OPC_CheckPredicate, 10, 130, 35, // Skip to: 13781
/* 4691 */    MCD::OPC_CheckField, 19, 1, 0, 124, 35, // Skip to: 13781
/* 4697 */    MCD::OPC_Decode, 209, 12, 154, 1, // Opcode: SRAI_B
/* 4702 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 4715
/* 4706 */    MCD::OPC_CheckPredicate, 10, 111, 35, // Skip to: 13781
/* 4710 */    MCD::OPC_Decode, 231, 12, 152, 1, // Opcode: SRLI_D
/* 4715 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 4774
/* 4719 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4722 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4735
/* 4726 */    MCD::OPC_CheckPredicate, 10, 91, 35, // Skip to: 13781
/* 4730 */    MCD::OPC_Decode, 233, 12, 146, 1, // Opcode: SRLI_W
/* 4735 */    MCD::OPC_FilterValue, 1, 82, 35, // Skip to: 13781
/* 4739 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4742 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4755
/* 4746 */    MCD::OPC_CheckPredicate, 10, 71, 35, // Skip to: 13781
/* 4750 */    MCD::OPC_Decode, 232, 12, 153, 1, // Opcode: SRLI_H
/* 4755 */    MCD::OPC_FilterValue, 1, 62, 35, // Skip to: 13781
/* 4759 */    MCD::OPC_CheckPredicate, 10, 58, 35, // Skip to: 13781
/* 4763 */    MCD::OPC_CheckField, 19, 1, 0, 52, 35, // Skip to: 13781
/* 4769 */    MCD::OPC_Decode, 230, 12, 154, 1, // Opcode: SRLI_B
/* 4774 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 4787
/* 4778 */    MCD::OPC_CheckPredicate, 10, 39, 35, // Skip to: 13781
/* 4782 */    MCD::OPC_Decode, 199, 1, 152, 1, // Opcode: BCLRI_D
/* 4787 */    MCD::OPC_FilterValue, 7, 55, 0, // Skip to: 4846
/* 4791 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4794 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4807
/* 4798 */    MCD::OPC_CheckPredicate, 10, 19, 35, // Skip to: 13781
/* 4802 */    MCD::OPC_Decode, 201, 1, 146, 1, // Opcode: BCLRI_W
/* 4807 */    MCD::OPC_FilterValue, 1, 10, 35, // Skip to: 13781
/* 4811 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4814 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4827
/* 4818 */    MCD::OPC_CheckPredicate, 10, 255, 34, // Skip to: 13781
/* 4822 */    MCD::OPC_Decode, 200, 1, 153, 1, // Opcode: BCLRI_H
/* 4827 */    MCD::OPC_FilterValue, 1, 246, 34, // Skip to: 13781
/* 4831 */    MCD::OPC_CheckPredicate, 10, 242, 34, // Skip to: 13781
/* 4835 */    MCD::OPC_CheckField, 19, 1, 0, 236, 34, // Skip to: 13781
/* 4841 */    MCD::OPC_Decode, 198, 1, 154, 1, // Opcode: BCLRI_B
/* 4846 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4859
/* 4850 */    MCD::OPC_CheckPredicate, 10, 223, 34, // Skip to: 13781
/* 4854 */    MCD::OPC_Decode, 199, 2, 152, 1, // Opcode: BSETI_D
/* 4859 */    MCD::OPC_FilterValue, 9, 55, 0, // Skip to: 4918
/* 4863 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4866 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4879
/* 4870 */    MCD::OPC_CheckPredicate, 10, 203, 34, // Skip to: 13781
/* 4874 */    MCD::OPC_Decode, 201, 2, 146, 1, // Opcode: BSETI_W
/* 4879 */    MCD::OPC_FilterValue, 1, 194, 34, // Skip to: 13781
/* 4883 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4886 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4899
/* 4890 */    MCD::OPC_CheckPredicate, 10, 183, 34, // Skip to: 13781
/* 4894 */    MCD::OPC_Decode, 200, 2, 153, 1, // Opcode: BSETI_H
/* 4899 */    MCD::OPC_FilterValue, 1, 174, 34, // Skip to: 13781
/* 4903 */    MCD::OPC_CheckPredicate, 10, 170, 34, // Skip to: 13781
/* 4907 */    MCD::OPC_CheckField, 19, 1, 0, 164, 34, // Skip to: 13781
/* 4913 */    MCD::OPC_Decode, 198, 2, 154, 1, // Opcode: BSETI_B
/* 4918 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4931
/* 4922 */    MCD::OPC_CheckPredicate, 10, 151, 34, // Skip to: 13781
/* 4926 */    MCD::OPC_Decode, 164, 2, 152, 1, // Opcode: BNEGI_D
/* 4931 */    MCD::OPC_FilterValue, 11, 55, 0, // Skip to: 4990
/* 4935 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4938 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4951
/* 4942 */    MCD::OPC_CheckPredicate, 10, 131, 34, // Skip to: 13781
/* 4946 */    MCD::OPC_Decode, 166, 2, 146, 1, // Opcode: BNEGI_W
/* 4951 */    MCD::OPC_FilterValue, 1, 122, 34, // Skip to: 13781
/* 4955 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4958 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4971
/* 4962 */    MCD::OPC_CheckPredicate, 10, 111, 34, // Skip to: 13781
/* 4966 */    MCD::OPC_Decode, 165, 2, 153, 1, // Opcode: BNEGI_H
/* 4971 */    MCD::OPC_FilterValue, 1, 102, 34, // Skip to: 13781
/* 4975 */    MCD::OPC_CheckPredicate, 10, 98, 34, // Skip to: 13781
/* 4979 */    MCD::OPC_CheckField, 19, 1, 0, 92, 34, // Skip to: 13781
/* 4985 */    MCD::OPC_Decode, 163, 2, 154, 1, // Opcode: BNEGI_B
/* 4990 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5003
/* 4994 */    MCD::OPC_CheckPredicate, 10, 79, 34, // Skip to: 13781
/* 4998 */    MCD::OPC_Decode, 242, 1, 155, 1, // Opcode: BINSLI_D
/* 5003 */    MCD::OPC_FilterValue, 13, 55, 0, // Skip to: 5062
/* 5007 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5010 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5023
/* 5014 */    MCD::OPC_CheckPredicate, 10, 59, 34, // Skip to: 13781
/* 5018 */    MCD::OPC_Decode, 244, 1, 156, 1, // Opcode: BINSLI_W
/* 5023 */    MCD::OPC_FilterValue, 1, 50, 34, // Skip to: 13781
/* 5027 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5030 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5043
/* 5034 */    MCD::OPC_CheckPredicate, 10, 39, 34, // Skip to: 13781
/* 5038 */    MCD::OPC_Decode, 243, 1, 157, 1, // Opcode: BINSLI_H
/* 5043 */    MCD::OPC_FilterValue, 1, 30, 34, // Skip to: 13781
/* 5047 */    MCD::OPC_CheckPredicate, 10, 26, 34, // Skip to: 13781
/* 5051 */    MCD::OPC_CheckField, 19, 1, 0, 20, 34, // Skip to: 13781
/* 5057 */    MCD::OPC_Decode, 241, 1, 158, 1, // Opcode: BINSLI_B
/* 5062 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5075
/* 5066 */    MCD::OPC_CheckPredicate, 10, 7, 34, // Skip to: 13781
/* 5070 */    MCD::OPC_Decode, 250, 1, 155, 1, // Opcode: BINSRI_D
/* 5075 */    MCD::OPC_FilterValue, 15, 254, 33, // Skip to: 13781
/* 5079 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5082 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5095
/* 5086 */    MCD::OPC_CheckPredicate, 10, 243, 33, // Skip to: 13781
/* 5090 */    MCD::OPC_Decode, 252, 1, 156, 1, // Opcode: BINSRI_W
/* 5095 */    MCD::OPC_FilterValue, 1, 234, 33, // Skip to: 13781
/* 5099 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5102 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5115
/* 5106 */    MCD::OPC_CheckPredicate, 10, 223, 33, // Skip to: 13781
/* 5110 */    MCD::OPC_Decode, 251, 1, 157, 1, // Opcode: BINSRI_H
/* 5115 */    MCD::OPC_FilterValue, 1, 214, 33, // Skip to: 13781
/* 5119 */    MCD::OPC_CheckPredicate, 10, 210, 33, // Skip to: 13781
/* 5123 */    MCD::OPC_CheckField, 19, 1, 0, 204, 33, // Skip to: 13781
/* 5129 */    MCD::OPC_Decode, 249, 1, 158, 1, // Opcode: BINSRI_B
/* 5134 */    MCD::OPC_FilterValue, 10, 35, 1, // Skip to: 5429
/* 5138 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5141 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5154
/* 5145 */    MCD::OPC_CheckPredicate, 10, 184, 33, // Skip to: 13781
/* 5149 */    MCD::OPC_Decode, 199, 11, 152, 1, // Opcode: SAT_S_D
/* 5154 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 5213
/* 5158 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5161 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5174
/* 5165 */    MCD::OPC_CheckPredicate, 10, 164, 33, // Skip to: 13781
/* 5169 */    MCD::OPC_Decode, 201, 11, 146, 1, // Opcode: SAT_S_W
/* 5174 */    MCD::OPC_FilterValue, 1, 155, 33, // Skip to: 13781
/* 5178 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5181 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5194
/* 5185 */    MCD::OPC_CheckPredicate, 10, 144, 33, // Skip to: 13781
/* 5189 */    MCD::OPC_Decode, 200, 11, 153, 1, // Opcode: SAT_S_H
/* 5194 */    MCD::OPC_FilterValue, 1, 135, 33, // Skip to: 13781
/* 5198 */    MCD::OPC_CheckPredicate, 10, 131, 33, // Skip to: 13781
/* 5202 */    MCD::OPC_CheckField, 19, 1, 0, 125, 33, // Skip to: 13781
/* 5208 */    MCD::OPC_Decode, 198, 11, 154, 1, // Opcode: SAT_S_B
/* 5213 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5226
/* 5217 */    MCD::OPC_CheckPredicate, 10, 112, 33, // Skip to: 13781
/* 5221 */    MCD::OPC_Decode, 203, 11, 152, 1, // Opcode: SAT_U_D
/* 5226 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 5285
/* 5230 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5233 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5246
/* 5237 */    MCD::OPC_CheckPredicate, 10, 92, 33, // Skip to: 13781
/* 5241 */    MCD::OPC_Decode, 205, 11, 146, 1, // Opcode: SAT_U_W
/* 5246 */    MCD::OPC_FilterValue, 1, 83, 33, // Skip to: 13781
/* 5250 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5253 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5266
/* 5257 */    MCD::OPC_CheckPredicate, 10, 72, 33, // Skip to: 13781
/* 5261 */    MCD::OPC_Decode, 204, 11, 153, 1, // Opcode: SAT_U_H
/* 5266 */    MCD::OPC_FilterValue, 1, 63, 33, // Skip to: 13781
/* 5270 */    MCD::OPC_CheckPredicate, 10, 59, 33, // Skip to: 13781
/* 5274 */    MCD::OPC_CheckField, 19, 1, 0, 53, 33, // Skip to: 13781
/* 5280 */    MCD::OPC_Decode, 202, 11, 154, 1, // Opcode: SAT_U_B
/* 5285 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5298
/* 5289 */    MCD::OPC_CheckPredicate, 10, 40, 33, // Skip to: 13781
/* 5293 */    MCD::OPC_Decode, 214, 12, 152, 1, // Opcode: SRARI_D
/* 5298 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 5357
/* 5302 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5305 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5318
/* 5309 */    MCD::OPC_CheckPredicate, 10, 20, 33, // Skip to: 13781
/* 5313 */    MCD::OPC_Decode, 216, 12, 146, 1, // Opcode: SRARI_W
/* 5318 */    MCD::OPC_FilterValue, 1, 11, 33, // Skip to: 13781
/* 5322 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5325 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5338
/* 5329 */    MCD::OPC_CheckPredicate, 10, 0, 33, // Skip to: 13781
/* 5333 */    MCD::OPC_Decode, 215, 12, 153, 1, // Opcode: SRARI_H
/* 5338 */    MCD::OPC_FilterValue, 1, 247, 32, // Skip to: 13781
/* 5342 */    MCD::OPC_CheckPredicate, 10, 243, 32, // Skip to: 13781
/* 5346 */    MCD::OPC_CheckField, 19, 1, 0, 237, 32, // Skip to: 13781
/* 5352 */    MCD::OPC_Decode, 213, 12, 154, 1, // Opcode: SRARI_B
/* 5357 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5370
/* 5361 */    MCD::OPC_CheckPredicate, 10, 224, 32, // Skip to: 13781
/* 5365 */    MCD::OPC_Decode, 235, 12, 152, 1, // Opcode: SRLRI_D
/* 5370 */    MCD::OPC_FilterValue, 7, 215, 32, // Skip to: 13781
/* 5374 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5377 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5390
/* 5381 */    MCD::OPC_CheckPredicate, 10, 204, 32, // Skip to: 13781
/* 5385 */    MCD::OPC_Decode, 237, 12, 146, 1, // Opcode: SRLRI_W
/* 5390 */    MCD::OPC_FilterValue, 1, 195, 32, // Skip to: 13781
/* 5394 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5397 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5410
/* 5401 */    MCD::OPC_CheckPredicate, 10, 184, 32, // Skip to: 13781
/* 5405 */    MCD::OPC_Decode, 236, 12, 153, 1, // Opcode: SRLRI_H
/* 5410 */    MCD::OPC_FilterValue, 1, 175, 32, // Skip to: 13781
/* 5414 */    MCD::OPC_CheckPredicate, 10, 171, 32, // Skip to: 13781
/* 5418 */    MCD::OPC_CheckField, 19, 1, 0, 165, 32, // Skip to: 13781
/* 5424 */    MCD::OPC_Decode, 234, 12, 154, 1, // Opcode: SRLRI_B
/* 5429 */    MCD::OPC_FilterValue, 13, 163, 1, // Skip to: 5852
/* 5433 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5436 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5449
/* 5440 */    MCD::OPC_CheckPredicate, 10, 145, 32, // Skip to: 13781
/* 5444 */    MCD::OPC_Decode, 175, 12, 159, 1, // Opcode: SLL_B
/* 5449 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5462
/* 5453 */    MCD::OPC_CheckPredicate, 10, 132, 32, // Skip to: 13781
/* 5457 */    MCD::OPC_Decode, 177, 12, 160, 1, // Opcode: SLL_H
/* 5462 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5475
/* 5466 */    MCD::OPC_CheckPredicate, 10, 119, 32, // Skip to: 13781
/* 5470 */    MCD::OPC_Decode, 180, 12, 161, 1, // Opcode: SLL_W
/* 5475 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 5488
/* 5479 */    MCD::OPC_CheckPredicate, 10, 106, 32, // Skip to: 13781
/* 5483 */    MCD::OPC_Decode, 176, 12, 162, 1, // Opcode: SLL_D
/* 5488 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5501
/* 5492 */    MCD::OPC_CheckPredicate, 10, 93, 32, // Skip to: 13781
/* 5496 */    MCD::OPC_Decode, 223, 12, 159, 1, // Opcode: SRA_B
/* 5501 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 5514
/* 5505 */    MCD::OPC_CheckPredicate, 10, 80, 32, // Skip to: 13781
/* 5509 */    MCD::OPC_Decode, 225, 12, 160, 1, // Opcode: SRA_H
/* 5514 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5527
/* 5518 */    MCD::OPC_CheckPredicate, 10, 67, 32, // Skip to: 13781
/* 5522 */    MCD::OPC_Decode, 227, 12, 161, 1, // Opcode: SRA_W
/* 5527 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 5540
/* 5531 */    MCD::OPC_CheckPredicate, 10, 54, 32, // Skip to: 13781
/* 5535 */    MCD::OPC_Decode, 224, 12, 162, 1, // Opcode: SRA_D
/* 5540 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5553
/* 5544 */    MCD::OPC_CheckPredicate, 10, 41, 32, // Skip to: 13781
/* 5548 */    MCD::OPC_Decode, 244, 12, 159, 1, // Opcode: SRL_B
/* 5553 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5566
/* 5557 */    MCD::OPC_CheckPredicate, 10, 28, 32, // Skip to: 13781
/* 5561 */    MCD::OPC_Decode, 246, 12, 160, 1, // Opcode: SRL_H
/* 5566 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5579
/* 5570 */    MCD::OPC_CheckPredicate, 10, 15, 32, // Skip to: 13781
/* 5574 */    MCD::OPC_Decode, 248, 12, 161, 1, // Opcode: SRL_W
/* 5579 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5592
/* 5583 */    MCD::OPC_CheckPredicate, 10, 2, 32, // Skip to: 13781
/* 5587 */    MCD::OPC_Decode, 245, 12, 162, 1, // Opcode: SRL_D
/* 5592 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5605
/* 5596 */    MCD::OPC_CheckPredicate, 10, 245, 31, // Skip to: 13781
/* 5600 */    MCD::OPC_Decode, 202, 1, 159, 1, // Opcode: BCLR_B
/* 5605 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5618
/* 5609 */    MCD::OPC_CheckPredicate, 10, 232, 31, // Skip to: 13781
/* 5613 */    MCD::OPC_Decode, 204, 1, 160, 1, // Opcode: BCLR_H
/* 5618 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5631
/* 5622 */    MCD::OPC_CheckPredicate, 10, 219, 31, // Skip to: 13781
/* 5626 */    MCD::OPC_Decode, 205, 1, 161, 1, // Opcode: BCLR_W
/* 5631 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5644
/* 5635 */    MCD::OPC_CheckPredicate, 10, 206, 31, // Skip to: 13781
/* 5639 */    MCD::OPC_Decode, 203, 1, 162, 1, // Opcode: BCLR_D
/* 5644 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5657
/* 5648 */    MCD::OPC_CheckPredicate, 10, 193, 31, // Skip to: 13781
/* 5652 */    MCD::OPC_Decode, 202, 2, 159, 1, // Opcode: BSET_B
/* 5657 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5670
/* 5661 */    MCD::OPC_CheckPredicate, 10, 180, 31, // Skip to: 13781
/* 5665 */    MCD::OPC_Decode, 204, 2, 160, 1, // Opcode: BSET_H
/* 5670 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5683
/* 5674 */    MCD::OPC_CheckPredicate, 10, 167, 31, // Skip to: 13781
/* 5678 */    MCD::OPC_Decode, 205, 2, 161, 1, // Opcode: BSET_W
/* 5683 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5696
/* 5687 */    MCD::OPC_CheckPredicate, 10, 154, 31, // Skip to: 13781
/* 5691 */    MCD::OPC_Decode, 203, 2, 162, 1, // Opcode: BSET_D
/* 5696 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5709
/* 5700 */    MCD::OPC_CheckPredicate, 10, 141, 31, // Skip to: 13781
/* 5704 */    MCD::OPC_Decode, 167, 2, 159, 1, // Opcode: BNEG_B
/* 5709 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5722
/* 5713 */    MCD::OPC_CheckPredicate, 10, 128, 31, // Skip to: 13781
/* 5717 */    MCD::OPC_Decode, 169, 2, 160, 1, // Opcode: BNEG_H
/* 5722 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5735
/* 5726 */    MCD::OPC_CheckPredicate, 10, 115, 31, // Skip to: 13781
/* 5730 */    MCD::OPC_Decode, 170, 2, 161, 1, // Opcode: BNEG_W
/* 5735 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 5748
/* 5739 */    MCD::OPC_CheckPredicate, 10, 102, 31, // Skip to: 13781
/* 5743 */    MCD::OPC_Decode, 168, 2, 162, 1, // Opcode: BNEG_D
/* 5748 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 5761
/* 5752 */    MCD::OPC_CheckPredicate, 10, 89, 31, // Skip to: 13781
/* 5756 */    MCD::OPC_Decode, 245, 1, 163, 1, // Opcode: BINSL_B
/* 5761 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 5774
/* 5765 */    MCD::OPC_CheckPredicate, 10, 76, 31, // Skip to: 13781
/* 5769 */    MCD::OPC_Decode, 247, 1, 164, 1, // Opcode: BINSL_H
/* 5774 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 5787
/* 5778 */    MCD::OPC_CheckPredicate, 10, 63, 31, // Skip to: 13781
/* 5782 */    MCD::OPC_Decode, 248, 1, 165, 1, // Opcode: BINSL_W
/* 5787 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 5800
/* 5791 */    MCD::OPC_CheckPredicate, 10, 50, 31, // Skip to: 13781
/* 5795 */    MCD::OPC_Decode, 246, 1, 166, 1, // Opcode: BINSL_D
/* 5800 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 5813
/* 5804 */    MCD::OPC_CheckPredicate, 10, 37, 31, // Skip to: 13781
/* 5808 */    MCD::OPC_Decode, 253, 1, 163, 1, // Opcode: BINSR_B
/* 5813 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 5826
/* 5817 */    MCD::OPC_CheckPredicate, 10, 24, 31, // Skip to: 13781
/* 5821 */    MCD::OPC_Decode, 255, 1, 164, 1, // Opcode: BINSR_H
/* 5826 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 5839
/* 5830 */    MCD::OPC_CheckPredicate, 10, 11, 31, // Skip to: 13781
/* 5834 */    MCD::OPC_Decode, 128, 2, 165, 1, // Opcode: BINSR_W
/* 5839 */    MCD::OPC_FilterValue, 31, 2, 31, // Skip to: 13781
/* 5843 */    MCD::OPC_CheckPredicate, 10, 254, 30, // Skip to: 13781
/* 5847 */    MCD::OPC_Decode, 254, 1, 166, 1, // Opcode: BINSR_D
/* 5852 */    MCD::OPC_FilterValue, 14, 159, 1, // Skip to: 6271
/* 5856 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5859 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 5871
/* 5863 */    MCD::OPC_CheckPredicate, 10, 234, 30, // Skip to: 13781
/* 5867 */    MCD::OPC_Decode, 67, 159, 1, // Opcode: ADDV_B
/* 5871 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 5883
/* 5875 */    MCD::OPC_CheckPredicate, 10, 222, 30, // Skip to: 13781
/* 5879 */    MCD::OPC_Decode, 69, 160, 1, // Opcode: ADDV_H
/* 5883 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 5895
/* 5887 */    MCD::OPC_CheckPredicate, 10, 210, 30, // Skip to: 13781
/* 5891 */    MCD::OPC_Decode, 70, 161, 1, // Opcode: ADDV_W
/* 5895 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 5907
/* 5899 */    MCD::OPC_CheckPredicate, 10, 198, 30, // Skip to: 13781
/* 5903 */    MCD::OPC_Decode, 68, 162, 1, // Opcode: ADDV_D
/* 5907 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5920
/* 5911 */    MCD::OPC_CheckPredicate, 10, 186, 30, // Skip to: 13781
/* 5915 */    MCD::OPC_Decode, 167, 13, 159, 1, // Opcode: SUBV_B
/* 5920 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 5933
/* 5924 */    MCD::OPC_CheckPredicate, 10, 173, 30, // Skip to: 13781
/* 5928 */    MCD::OPC_Decode, 169, 13, 160, 1, // Opcode: SUBV_H
/* 5933 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5946
/* 5937 */    MCD::OPC_CheckPredicate, 10, 160, 30, // Skip to: 13781
/* 5941 */    MCD::OPC_Decode, 170, 13, 161, 1, // Opcode: SUBV_W
/* 5946 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 5959
/* 5950 */    MCD::OPC_CheckPredicate, 10, 147, 30, // Skip to: 13781
/* 5954 */    MCD::OPC_Decode, 168, 13, 162, 1, // Opcode: SUBV_D
/* 5959 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5972
/* 5963 */    MCD::OPC_CheckPredicate, 10, 134, 30, // Skip to: 13781
/* 5967 */    MCD::OPC_Decode, 225, 8, 159, 1, // Opcode: MAX_S_B
/* 5972 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5985
/* 5976 */    MCD::OPC_CheckPredicate, 10, 121, 30, // Skip to: 13781
/* 5980 */    MCD::OPC_Decode, 227, 8, 160, 1, // Opcode: MAX_S_H
/* 5985 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5998
/* 5989 */    MCD::OPC_CheckPredicate, 10, 108, 30, // Skip to: 13781
/* 5993 */    MCD::OPC_Decode, 228, 8, 161, 1, // Opcode: MAX_S_W
/* 5998 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6011
/* 6002 */    MCD::OPC_CheckPredicate, 10, 95, 30, // Skip to: 13781
/* 6006 */    MCD::OPC_Decode, 226, 8, 162, 1, // Opcode: MAX_S_D
/* 6011 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6024
/* 6015 */    MCD::OPC_CheckPredicate, 10, 82, 30, // Skip to: 13781
/* 6019 */    MCD::OPC_Decode, 229, 8, 159, 1, // Opcode: MAX_U_B
/* 6024 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6037
/* 6028 */    MCD::OPC_CheckPredicate, 10, 69, 30, // Skip to: 13781
/* 6032 */    MCD::OPC_Decode, 231, 8, 160, 1, // Opcode: MAX_U_H
/* 6037 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6050
/* 6041 */    MCD::OPC_CheckPredicate, 10, 56, 30, // Skip to: 13781
/* 6045 */    MCD::OPC_Decode, 232, 8, 161, 1, // Opcode: MAX_U_W
/* 6050 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6063
/* 6054 */    MCD::OPC_CheckPredicate, 10, 43, 30, // Skip to: 13781
/* 6058 */    MCD::OPC_Decode, 230, 8, 162, 1, // Opcode: MAX_U_D
/* 6063 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6076
/* 6067 */    MCD::OPC_CheckPredicate, 10, 30, 30, // Skip to: 13781
/* 6071 */    MCD::OPC_Decode, 138, 9, 159, 1, // Opcode: MIN_S_B
/* 6076 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6089
/* 6080 */    MCD::OPC_CheckPredicate, 10, 17, 30, // Skip to: 13781
/* 6084 */    MCD::OPC_Decode, 140, 9, 160, 1, // Opcode: MIN_S_H
/* 6089 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6102
/* 6093 */    MCD::OPC_CheckPredicate, 10, 4, 30, // Skip to: 13781
/* 6097 */    MCD::OPC_Decode, 141, 9, 161, 1, // Opcode: MIN_S_W
/* 6102 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6115
/* 6106 */    MCD::OPC_CheckPredicate, 10, 247, 29, // Skip to: 13781
/* 6110 */    MCD::OPC_Decode, 139, 9, 162, 1, // Opcode: MIN_S_D
/* 6115 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6128
/* 6119 */    MCD::OPC_CheckPredicate, 10, 234, 29, // Skip to: 13781
/* 6123 */    MCD::OPC_Decode, 142, 9, 159, 1, // Opcode: MIN_U_B
/* 6128 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6141
/* 6132 */    MCD::OPC_CheckPredicate, 10, 221, 29, // Skip to: 13781
/* 6136 */    MCD::OPC_Decode, 144, 9, 160, 1, // Opcode: MIN_U_H
/* 6141 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6154
/* 6145 */    MCD::OPC_CheckPredicate, 10, 208, 29, // Skip to: 13781
/* 6149 */    MCD::OPC_Decode, 145, 9, 161, 1, // Opcode: MIN_U_W
/* 6154 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6167
/* 6158 */    MCD::OPC_CheckPredicate, 10, 195, 29, // Skip to: 13781
/* 6162 */    MCD::OPC_Decode, 143, 9, 162, 1, // Opcode: MIN_U_D
/* 6167 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6180
/* 6171 */    MCD::OPC_CheckPredicate, 10, 182, 29, // Skip to: 13781
/* 6175 */    MCD::OPC_Decode, 219, 8, 159, 1, // Opcode: MAX_A_B
/* 6180 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6193
/* 6184 */    MCD::OPC_CheckPredicate, 10, 169, 29, // Skip to: 13781
/* 6188 */    MCD::OPC_Decode, 221, 8, 160, 1, // Opcode: MAX_A_H
/* 6193 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6206
/* 6197 */    MCD::OPC_CheckPredicate, 10, 156, 29, // Skip to: 13781
/* 6201 */    MCD::OPC_Decode, 222, 8, 161, 1, // Opcode: MAX_A_W
/* 6206 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6219
/* 6210 */    MCD::OPC_CheckPredicate, 10, 143, 29, // Skip to: 13781
/* 6214 */    MCD::OPC_Decode, 220, 8, 162, 1, // Opcode: MAX_A_D
/* 6219 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6232
/* 6223 */    MCD::OPC_CheckPredicate, 10, 130, 29, // Skip to: 13781
/* 6227 */    MCD::OPC_Decode, 132, 9, 159, 1, // Opcode: MIN_A_B
/* 6232 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6245
/* 6236 */    MCD::OPC_CheckPredicate, 10, 117, 29, // Skip to: 13781
/* 6240 */    MCD::OPC_Decode, 134, 9, 160, 1, // Opcode: MIN_A_H
/* 6245 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6258
/* 6249 */    MCD::OPC_CheckPredicate, 10, 104, 29, // Skip to: 13781
/* 6253 */    MCD::OPC_Decode, 135, 9, 161, 1, // Opcode: MIN_A_W
/* 6258 */    MCD::OPC_FilterValue, 31, 95, 29, // Skip to: 13781
/* 6262 */    MCD::OPC_CheckPredicate, 10, 91, 29, // Skip to: 13781
/* 6266 */    MCD::OPC_Decode, 133, 9, 162, 1, // Opcode: MIN_A_D
/* 6271 */    MCD::OPC_FilterValue, 15, 7, 1, // Skip to: 6538
/* 6275 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6278 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6291
/* 6282 */    MCD::OPC_CheckPredicate, 10, 71, 29, // Skip to: 13781
/* 6286 */    MCD::OPC_Decode, 254, 2, 159, 1, // Opcode: CEQ_B
/* 6291 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6304
/* 6295 */    MCD::OPC_CheckPredicate, 10, 58, 29, // Skip to: 13781
/* 6299 */    MCD::OPC_Decode, 128, 3, 160, 1, // Opcode: CEQ_H
/* 6304 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6317
/* 6308 */    MCD::OPC_CheckPredicate, 10, 45, 29, // Skip to: 13781
/* 6312 */    MCD::OPC_Decode, 129, 3, 161, 1, // Opcode: CEQ_W
/* 6317 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6330
/* 6321 */    MCD::OPC_CheckPredicate, 10, 32, 29, // Skip to: 13781
/* 6325 */    MCD::OPC_Decode, 255, 2, 162, 1, // Opcode: CEQ_D
/* 6330 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6343
/* 6334 */    MCD::OPC_CheckPredicate, 10, 19, 29, // Skip to: 13781
/* 6338 */    MCD::OPC_Decode, 165, 3, 159, 1, // Opcode: CLT_S_B
/* 6343 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6356
/* 6347 */    MCD::OPC_CheckPredicate, 10, 6, 29, // Skip to: 13781
/* 6351 */    MCD::OPC_Decode, 167, 3, 160, 1, // Opcode: CLT_S_H
/* 6356 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6369
/* 6360 */    MCD::OPC_CheckPredicate, 10, 249, 28, // Skip to: 13781
/* 6364 */    MCD::OPC_Decode, 168, 3, 161, 1, // Opcode: CLT_S_W
/* 6369 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6382
/* 6373 */    MCD::OPC_CheckPredicate, 10, 236, 28, // Skip to: 13781
/* 6377 */    MCD::OPC_Decode, 166, 3, 162, 1, // Opcode: CLT_S_D
/* 6382 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6395
/* 6386 */    MCD::OPC_CheckPredicate, 10, 223, 28, // Skip to: 13781
/* 6390 */    MCD::OPC_Decode, 169, 3, 159, 1, // Opcode: CLT_U_B
/* 6395 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6408
/* 6399 */    MCD::OPC_CheckPredicate, 10, 210, 28, // Skip to: 13781
/* 6403 */    MCD::OPC_Decode, 171, 3, 160, 1, // Opcode: CLT_U_H
/* 6408 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6421
/* 6412 */    MCD::OPC_CheckPredicate, 10, 197, 28, // Skip to: 13781
/* 6416 */    MCD::OPC_Decode, 172, 3, 161, 1, // Opcode: CLT_U_W
/* 6421 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6434
/* 6425 */    MCD::OPC_CheckPredicate, 10, 184, 28, // Skip to: 13781
/* 6429 */    MCD::OPC_Decode, 170, 3, 162, 1, // Opcode: CLT_U_D
/* 6434 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6447
/* 6438 */    MCD::OPC_CheckPredicate, 10, 171, 28, // Skip to: 13781
/* 6442 */    MCD::OPC_Decode, 145, 3, 159, 1, // Opcode: CLE_S_B
/* 6447 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6460
/* 6451 */    MCD::OPC_CheckPredicate, 10, 158, 28, // Skip to: 13781
/* 6455 */    MCD::OPC_Decode, 147, 3, 160, 1, // Opcode: CLE_S_H
/* 6460 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6473
/* 6464 */    MCD::OPC_CheckPredicate, 10, 145, 28, // Skip to: 13781
/* 6468 */    MCD::OPC_Decode, 148, 3, 161, 1, // Opcode: CLE_S_W
/* 6473 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6486
/* 6477 */    MCD::OPC_CheckPredicate, 10, 132, 28, // Skip to: 13781
/* 6481 */    MCD::OPC_Decode, 146, 3, 162, 1, // Opcode: CLE_S_D
/* 6486 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6499
/* 6490 */    MCD::OPC_CheckPredicate, 10, 119, 28, // Skip to: 13781
/* 6494 */    MCD::OPC_Decode, 149, 3, 159, 1, // Opcode: CLE_U_B
/* 6499 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6512
/* 6503 */    MCD::OPC_CheckPredicate, 10, 106, 28, // Skip to: 13781
/* 6507 */    MCD::OPC_Decode, 151, 3, 160, 1, // Opcode: CLE_U_H
/* 6512 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6525
/* 6516 */    MCD::OPC_CheckPredicate, 10, 93, 28, // Skip to: 13781
/* 6520 */    MCD::OPC_Decode, 152, 3, 161, 1, // Opcode: CLE_U_W
/* 6525 */    MCD::OPC_FilterValue, 23, 84, 28, // Skip to: 13781
/* 6529 */    MCD::OPC_CheckPredicate, 10, 80, 28, // Skip to: 13781
/* 6533 */    MCD::OPC_Decode, 150, 3, 162, 1, // Opcode: CLE_U_D
/* 6538 */    MCD::OPC_FilterValue, 16, 147, 1, // Skip to: 6945
/* 6542 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6545 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6557
/* 6549 */    MCD::OPC_CheckPredicate, 10, 60, 28, // Skip to: 13781
/* 6553 */    MCD::OPC_Decode, 72, 159, 1, // Opcode: ADD_A_B
/* 6557 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6569
/* 6561 */    MCD::OPC_CheckPredicate, 10, 48, 28, // Skip to: 13781
/* 6565 */    MCD::OPC_Decode, 74, 160, 1, // Opcode: ADD_A_H
/* 6569 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6581
/* 6573 */    MCD::OPC_CheckPredicate, 10, 36, 28, // Skip to: 13781
/* 6577 */    MCD::OPC_Decode, 75, 161, 1, // Opcode: ADD_A_W
/* 6581 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 6593
/* 6585 */    MCD::OPC_CheckPredicate, 10, 24, 28, // Skip to: 13781
/* 6589 */    MCD::OPC_Decode, 73, 162, 1, // Opcode: ADD_A_D
/* 6593 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 6605
/* 6597 */    MCD::OPC_CheckPredicate, 10, 12, 28, // Skip to: 13781
/* 6601 */    MCD::OPC_Decode, 43, 159, 1, // Opcode: ADDS_A_B
/* 6605 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 6617
/* 6609 */    MCD::OPC_CheckPredicate, 10, 0, 28, // Skip to: 13781
/* 6613 */    MCD::OPC_Decode, 45, 160, 1, // Opcode: ADDS_A_H
/* 6617 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 6629
/* 6621 */    MCD::OPC_CheckPredicate, 10, 244, 27, // Skip to: 13781
/* 6625 */    MCD::OPC_Decode, 46, 161, 1, // Opcode: ADDS_A_W
/* 6629 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 6641
/* 6633 */    MCD::OPC_CheckPredicate, 10, 232, 27, // Skip to: 13781
/* 6637 */    MCD::OPC_Decode, 44, 162, 1, // Opcode: ADDS_A_D
/* 6641 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 6653
/* 6645 */    MCD::OPC_CheckPredicate, 10, 220, 27, // Skip to: 13781
/* 6649 */    MCD::OPC_Decode, 47, 159, 1, // Opcode: ADDS_S_B
/* 6653 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 6665
/* 6657 */    MCD::OPC_CheckPredicate, 10, 208, 27, // Skip to: 13781
/* 6661 */    MCD::OPC_Decode, 49, 160, 1, // Opcode: ADDS_S_H
/* 6665 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 6677
/* 6669 */    MCD::OPC_CheckPredicate, 10, 196, 27, // Skip to: 13781
/* 6673 */    MCD::OPC_Decode, 50, 161, 1, // Opcode: ADDS_S_W
/* 6677 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 6689
/* 6681 */    MCD::OPC_CheckPredicate, 10, 184, 27, // Skip to: 13781
/* 6685 */    MCD::OPC_Decode, 48, 162, 1, // Opcode: ADDS_S_D
/* 6689 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 6701
/* 6693 */    MCD::OPC_CheckPredicate, 10, 172, 27, // Skip to: 13781
/* 6697 */    MCD::OPC_Decode, 51, 159, 1, // Opcode: ADDS_U_B
/* 6701 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 6713
/* 6705 */    MCD::OPC_CheckPredicate, 10, 160, 27, // Skip to: 13781
/* 6709 */    MCD::OPC_Decode, 53, 160, 1, // Opcode: ADDS_U_H
/* 6713 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 6725
/* 6717 */    MCD::OPC_CheckPredicate, 10, 148, 27, // Skip to: 13781
/* 6721 */    MCD::OPC_Decode, 54, 161, 1, // Opcode: ADDS_U_W
/* 6725 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 6737
/* 6729 */    MCD::OPC_CheckPredicate, 10, 136, 27, // Skip to: 13781
/* 6733 */    MCD::OPC_Decode, 52, 162, 1, // Opcode: ADDS_U_D
/* 6737 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6750
/* 6741 */    MCD::OPC_CheckPredicate, 10, 124, 27, // Skip to: 13781
/* 6745 */    MCD::OPC_Decode, 158, 1, 159, 1, // Opcode: AVE_S_B
/* 6750 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6763
/* 6754 */    MCD::OPC_CheckPredicate, 10, 111, 27, // Skip to: 13781
/* 6758 */    MCD::OPC_Decode, 160, 1, 160, 1, // Opcode: AVE_S_H
/* 6763 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6776
/* 6767 */    MCD::OPC_CheckPredicate, 10, 98, 27, // Skip to: 13781
/* 6771 */    MCD::OPC_Decode, 161, 1, 161, 1, // Opcode: AVE_S_W
/* 6776 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6789
/* 6780 */    MCD::OPC_CheckPredicate, 10, 85, 27, // Skip to: 13781
/* 6784 */    MCD::OPC_Decode, 159, 1, 162, 1, // Opcode: AVE_S_D
/* 6789 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6802
/* 6793 */    MCD::OPC_CheckPredicate, 10, 72, 27, // Skip to: 13781
/* 6797 */    MCD::OPC_Decode, 162, 1, 159, 1, // Opcode: AVE_U_B
/* 6802 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6815
/* 6806 */    MCD::OPC_CheckPredicate, 10, 59, 27, // Skip to: 13781
/* 6810 */    MCD::OPC_Decode, 164, 1, 160, 1, // Opcode: AVE_U_H
/* 6815 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6828
/* 6819 */    MCD::OPC_CheckPredicate, 10, 46, 27, // Skip to: 13781
/* 6823 */    MCD::OPC_Decode, 165, 1, 161, 1, // Opcode: AVE_U_W
/* 6828 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6841
/* 6832 */    MCD::OPC_CheckPredicate, 10, 33, 27, // Skip to: 13781
/* 6836 */    MCD::OPC_Decode, 163, 1, 162, 1, // Opcode: AVE_U_D
/* 6841 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6854
/* 6845 */    MCD::OPC_CheckPredicate, 10, 20, 27, // Skip to: 13781
/* 6849 */    MCD::OPC_Decode, 150, 1, 159, 1, // Opcode: AVER_S_B
/* 6854 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6867
/* 6858 */    MCD::OPC_CheckPredicate, 10, 7, 27, // Skip to: 13781
/* 6862 */    MCD::OPC_Decode, 152, 1, 160, 1, // Opcode: AVER_S_H
/* 6867 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6880
/* 6871 */    MCD::OPC_CheckPredicate, 10, 250, 26, // Skip to: 13781
/* 6875 */    MCD::OPC_Decode, 153, 1, 161, 1, // Opcode: AVER_S_W
/* 6880 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6893
/* 6884 */    MCD::OPC_CheckPredicate, 10, 237, 26, // Skip to: 13781
/* 6888 */    MCD::OPC_Decode, 151, 1, 162, 1, // Opcode: AVER_S_D
/* 6893 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6906
/* 6897 */    MCD::OPC_CheckPredicate, 10, 224, 26, // Skip to: 13781
/* 6901 */    MCD::OPC_Decode, 154, 1, 159, 1, // Opcode: AVER_U_B
/* 6906 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6919
/* 6910 */    MCD::OPC_CheckPredicate, 10, 211, 26, // Skip to: 13781
/* 6914 */    MCD::OPC_Decode, 156, 1, 160, 1, // Opcode: AVER_U_H
/* 6919 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6932
/* 6923 */    MCD::OPC_CheckPredicate, 10, 198, 26, // Skip to: 13781
/* 6927 */    MCD::OPC_Decode, 157, 1, 161, 1, // Opcode: AVER_U_W
/* 6932 */    MCD::OPC_FilterValue, 31, 189, 26, // Skip to: 13781
/* 6936 */    MCD::OPC_CheckPredicate, 10, 185, 26, // Skip to: 13781
/* 6940 */    MCD::OPC_Decode, 155, 1, 162, 1, // Opcode: AVER_U_D
/* 6945 */    MCD::OPC_FilterValue, 17, 51, 1, // Skip to: 7256
/* 6949 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6952 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6965
/* 6956 */    MCD::OPC_CheckPredicate, 10, 165, 26, // Skip to: 13781
/* 6960 */    MCD::OPC_Decode, 147, 13, 159, 1, // Opcode: SUBS_S_B
/* 6965 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6978
/* 6969 */    MCD::OPC_CheckPredicate, 10, 152, 26, // Skip to: 13781
/* 6973 */    MCD::OPC_Decode, 149, 13, 160, 1, // Opcode: SUBS_S_H
/* 6978 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6991
/* 6982 */    MCD::OPC_CheckPredicate, 10, 139, 26, // Skip to: 13781
/* 6986 */    MCD::OPC_Decode, 150, 13, 161, 1, // Opcode: SUBS_S_W
/* 6991 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7004
/* 6995 */    MCD::OPC_CheckPredicate, 10, 126, 26, // Skip to: 13781
/* 6999 */    MCD::OPC_Decode, 148, 13, 162, 1, // Opcode: SUBS_S_D
/* 7004 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7017
/* 7008 */    MCD::OPC_CheckPredicate, 10, 113, 26, // Skip to: 13781
/* 7012 */    MCD::OPC_Decode, 151, 13, 159, 1, // Opcode: SUBS_U_B
/* 7017 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7030
/* 7021 */    MCD::OPC_CheckPredicate, 10, 100, 26, // Skip to: 13781
/* 7025 */    MCD::OPC_Decode, 153, 13, 160, 1, // Opcode: SUBS_U_H
/* 7030 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7043
/* 7034 */    MCD::OPC_CheckPredicate, 10, 87, 26, // Skip to: 13781
/* 7038 */    MCD::OPC_Decode, 154, 13, 161, 1, // Opcode: SUBS_U_W
/* 7043 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7056
/* 7047 */    MCD::OPC_CheckPredicate, 10, 74, 26, // Skip to: 13781
/* 7051 */    MCD::OPC_Decode, 152, 13, 162, 1, // Opcode: SUBS_U_D
/* 7056 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7069
/* 7060 */    MCD::OPC_CheckPredicate, 10, 61, 26, // Skip to: 13781
/* 7064 */    MCD::OPC_Decode, 139, 13, 159, 1, // Opcode: SUBSUS_U_B
/* 7069 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7082
/* 7073 */    MCD::OPC_CheckPredicate, 10, 48, 26, // Skip to: 13781
/* 7077 */    MCD::OPC_Decode, 141, 13, 160, 1, // Opcode: SUBSUS_U_H
/* 7082 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7095
/* 7086 */    MCD::OPC_CheckPredicate, 10, 35, 26, // Skip to: 13781
/* 7090 */    MCD::OPC_Decode, 142, 13, 161, 1, // Opcode: SUBSUS_U_W
/* 7095 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7108
/* 7099 */    MCD::OPC_CheckPredicate, 10, 22, 26, // Skip to: 13781
/* 7103 */    MCD::OPC_Decode, 140, 13, 162, 1, // Opcode: SUBSUS_U_D
/* 7108 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7121
/* 7112 */    MCD::OPC_CheckPredicate, 10, 9, 26, // Skip to: 13781
/* 7116 */    MCD::OPC_Decode, 143, 13, 159, 1, // Opcode: SUBSUU_S_B
/* 7121 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7134
/* 7125 */    MCD::OPC_CheckPredicate, 10, 252, 25, // Skip to: 13781
/* 7129 */    MCD::OPC_Decode, 145, 13, 160, 1, // Opcode: SUBSUU_S_H
/* 7134 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7147
/* 7138 */    MCD::OPC_CheckPredicate, 10, 239, 25, // Skip to: 13781
/* 7142 */    MCD::OPC_Decode, 146, 13, 161, 1, // Opcode: SUBSUU_S_W
/* 7147 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7160
/* 7151 */    MCD::OPC_CheckPredicate, 10, 226, 25, // Skip to: 13781
/* 7155 */    MCD::OPC_Decode, 144, 13, 162, 1, // Opcode: SUBSUU_S_D
/* 7160 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 7172
/* 7164 */    MCD::OPC_CheckPredicate, 10, 213, 25, // Skip to: 13781
/* 7168 */    MCD::OPC_Decode, 106, 159, 1, // Opcode: ASUB_S_B
/* 7172 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 7184
/* 7176 */    MCD::OPC_CheckPredicate, 10, 201, 25, // Skip to: 13781
/* 7180 */    MCD::OPC_Decode, 108, 160, 1, // Opcode: ASUB_S_H
/* 7184 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 7196
/* 7188 */    MCD::OPC_CheckPredicate, 10, 189, 25, // Skip to: 13781
/* 7192 */    MCD::OPC_Decode, 109, 161, 1, // Opcode: ASUB_S_W
/* 7196 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 7208
/* 7200 */    MCD::OPC_CheckPredicate, 10, 177, 25, // Skip to: 13781
/* 7204 */    MCD::OPC_Decode, 107, 162, 1, // Opcode: ASUB_S_D
/* 7208 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 7220
/* 7212 */    MCD::OPC_CheckPredicate, 10, 165, 25, // Skip to: 13781
/* 7216 */    MCD::OPC_Decode, 110, 159, 1, // Opcode: ASUB_U_B
/* 7220 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 7232
/* 7224 */    MCD::OPC_CheckPredicate, 10, 153, 25, // Skip to: 13781
/* 7228 */    MCD::OPC_Decode, 112, 160, 1, // Opcode: ASUB_U_H
/* 7232 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 7244
/* 7236 */    MCD::OPC_CheckPredicate, 10, 141, 25, // Skip to: 13781
/* 7240 */    MCD::OPC_Decode, 113, 161, 1, // Opcode: ASUB_U_W
/* 7244 */    MCD::OPC_FilterValue, 23, 133, 25, // Skip to: 13781
/* 7248 */    MCD::OPC_CheckPredicate, 10, 129, 25, // Skip to: 13781
/* 7252 */    MCD::OPC_Decode, 111, 162, 1, // Opcode: ASUB_U_D
/* 7256 */    MCD::OPC_FilterValue, 18, 111, 1, // Skip to: 7627
/* 7260 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7263 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7276
/* 7267 */    MCD::OPC_CheckPredicate, 10, 110, 25, // Skip to: 13781
/* 7271 */    MCD::OPC_Decode, 144, 10, 159, 1, // Opcode: MULV_B
/* 7276 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7289
/* 7280 */    MCD::OPC_CheckPredicate, 10, 97, 25, // Skip to: 13781
/* 7284 */    MCD::OPC_Decode, 146, 10, 160, 1, // Opcode: MULV_H
/* 7289 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7302
/* 7293 */    MCD::OPC_CheckPredicate, 10, 84, 25, // Skip to: 13781
/* 7297 */    MCD::OPC_Decode, 147, 10, 161, 1, // Opcode: MULV_W
/* 7302 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7315
/* 7306 */    MCD::OPC_CheckPredicate, 10, 71, 25, // Skip to: 13781
/* 7310 */    MCD::OPC_Decode, 145, 10, 162, 1, // Opcode: MULV_D
/* 7315 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7328
/* 7319 */    MCD::OPC_CheckPredicate, 10, 58, 25, // Skip to: 13781
/* 7323 */    MCD::OPC_Decode, 192, 8, 163, 1, // Opcode: MADDV_B
/* 7328 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7341
/* 7332 */    MCD::OPC_CheckPredicate, 10, 45, 25, // Skip to: 13781
/* 7336 */    MCD::OPC_Decode, 194, 8, 164, 1, // Opcode: MADDV_H
/* 7341 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7354
/* 7345 */    MCD::OPC_CheckPredicate, 10, 32, 25, // Skip to: 13781
/* 7349 */    MCD::OPC_Decode, 195, 8, 165, 1, // Opcode: MADDV_W
/* 7354 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7367
/* 7358 */    MCD::OPC_CheckPredicate, 10, 19, 25, // Skip to: 13781
/* 7362 */    MCD::OPC_Decode, 193, 8, 166, 1, // Opcode: MADDV_D
/* 7367 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7380
/* 7371 */    MCD::OPC_CheckPredicate, 10, 6, 25, // Skip to: 13781
/* 7375 */    MCD::OPC_Decode, 212, 9, 163, 1, // Opcode: MSUBV_B
/* 7380 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7393
/* 7384 */    MCD::OPC_CheckPredicate, 10, 249, 24, // Skip to: 13781
/* 7388 */    MCD::OPC_Decode, 214, 9, 164, 1, // Opcode: MSUBV_H
/* 7393 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7406
/* 7397 */    MCD::OPC_CheckPredicate, 10, 236, 24, // Skip to: 13781
/* 7401 */    MCD::OPC_Decode, 215, 9, 165, 1, // Opcode: MSUBV_W
/* 7406 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7419
/* 7410 */    MCD::OPC_CheckPredicate, 10, 223, 24, // Skip to: 13781
/* 7414 */    MCD::OPC_Decode, 213, 9, 166, 1, // Opcode: MSUBV_D
/* 7419 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7432
/* 7423 */    MCD::OPC_CheckPredicate, 10, 210, 24, // Skip to: 13781
/* 7427 */    MCD::OPC_Decode, 218, 4, 159, 1, // Opcode: DIV_S_B
/* 7432 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7445
/* 7436 */    MCD::OPC_CheckPredicate, 10, 197, 24, // Skip to: 13781
/* 7440 */    MCD::OPC_Decode, 220, 4, 160, 1, // Opcode: DIV_S_H
/* 7445 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7458
/* 7449 */    MCD::OPC_CheckPredicate, 10, 184, 24, // Skip to: 13781
/* 7453 */    MCD::OPC_Decode, 221, 4, 161, 1, // Opcode: DIV_S_W
/* 7458 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7471
/* 7462 */    MCD::OPC_CheckPredicate, 10, 171, 24, // Skip to: 13781
/* 7466 */    MCD::OPC_Decode, 219, 4, 162, 1, // Opcode: DIV_S_D
/* 7471 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7484
/* 7475 */    MCD::OPC_CheckPredicate, 10, 158, 24, // Skip to: 13781
/* 7479 */    MCD::OPC_Decode, 222, 4, 159, 1, // Opcode: DIV_U_B
/* 7484 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7497
/* 7488 */    MCD::OPC_CheckPredicate, 10, 145, 24, // Skip to: 13781
/* 7492 */    MCD::OPC_Decode, 224, 4, 160, 1, // Opcode: DIV_U_H
/* 7497 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7510
/* 7501 */    MCD::OPC_CheckPredicate, 10, 132, 24, // Skip to: 13781
/* 7505 */    MCD::OPC_Decode, 225, 4, 161, 1, // Opcode: DIV_U_W
/* 7510 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7523
/* 7514 */    MCD::OPC_CheckPredicate, 10, 119, 24, // Skip to: 13781
/* 7518 */    MCD::OPC_Decode, 223, 4, 162, 1, // Opcode: DIV_U_D
/* 7523 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7536
/* 7527 */    MCD::OPC_CheckPredicate, 10, 106, 24, // Skip to: 13781
/* 7531 */    MCD::OPC_Decode, 153, 9, 159, 1, // Opcode: MOD_S_B
/* 7536 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7549
/* 7540 */    MCD::OPC_CheckPredicate, 10, 93, 24, // Skip to: 13781
/* 7544 */    MCD::OPC_Decode, 155, 9, 160, 1, // Opcode: MOD_S_H
/* 7549 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7562
/* 7553 */    MCD::OPC_CheckPredicate, 10, 80, 24, // Skip to: 13781
/* 7557 */    MCD::OPC_Decode, 156, 9, 161, 1, // Opcode: MOD_S_W
/* 7562 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7575
/* 7566 */    MCD::OPC_CheckPredicate, 10, 67, 24, // Skip to: 13781
/* 7570 */    MCD::OPC_Decode, 154, 9, 162, 1, // Opcode: MOD_S_D
/* 7575 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7588
/* 7579 */    MCD::OPC_CheckPredicate, 10, 54, 24, // Skip to: 13781
/* 7583 */    MCD::OPC_Decode, 157, 9, 159, 1, // Opcode: MOD_U_B
/* 7588 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7601
/* 7592 */    MCD::OPC_CheckPredicate, 10, 41, 24, // Skip to: 13781
/* 7596 */    MCD::OPC_Decode, 159, 9, 160, 1, // Opcode: MOD_U_H
/* 7601 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7614
/* 7605 */    MCD::OPC_CheckPredicate, 10, 28, 24, // Skip to: 13781
/* 7609 */    MCD::OPC_Decode, 160, 9, 161, 1, // Opcode: MOD_U_W
/* 7614 */    MCD::OPC_FilterValue, 31, 19, 24, // Skip to: 13781
/* 7618 */    MCD::OPC_CheckPredicate, 10, 15, 24, // Skip to: 13781
/* 7622 */    MCD::OPC_Decode, 158, 9, 162, 1, // Opcode: MOD_U_D
/* 7627 */    MCD::OPC_FilterValue, 19, 237, 0, // Skip to: 7868
/* 7631 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7634 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7647
/* 7638 */    MCD::OPC_CheckPredicate, 10, 251, 23, // Skip to: 13781
/* 7642 */    MCD::OPC_Decode, 249, 4, 167, 1, // Opcode: DOTP_S_H
/* 7647 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7660
/* 7651 */    MCD::OPC_CheckPredicate, 10, 238, 23, // Skip to: 13781
/* 7655 */    MCD::OPC_Decode, 250, 4, 168, 1, // Opcode: DOTP_S_W
/* 7660 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7673
/* 7664 */    MCD::OPC_CheckPredicate, 10, 225, 23, // Skip to: 13781
/* 7668 */    MCD::OPC_Decode, 248, 4, 169, 1, // Opcode: DOTP_S_D
/* 7673 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7686
/* 7677 */    MCD::OPC_CheckPredicate, 10, 212, 23, // Skip to: 13781
/* 7681 */    MCD::OPC_Decode, 252, 4, 167, 1, // Opcode: DOTP_U_H
/* 7686 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7699
/* 7690 */    MCD::OPC_CheckPredicate, 10, 199, 23, // Skip to: 13781
/* 7694 */    MCD::OPC_Decode, 253, 4, 168, 1, // Opcode: DOTP_U_W
/* 7699 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7712
/* 7703 */    MCD::OPC_CheckPredicate, 10, 186, 23, // Skip to: 13781
/* 7707 */    MCD::OPC_Decode, 251, 4, 169, 1, // Opcode: DOTP_U_D
/* 7712 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7725
/* 7716 */    MCD::OPC_CheckPredicate, 10, 173, 23, // Skip to: 13781
/* 7720 */    MCD::OPC_Decode, 255, 4, 170, 1, // Opcode: DPADD_S_H
/* 7725 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7738
/* 7729 */    MCD::OPC_CheckPredicate, 10, 160, 23, // Skip to: 13781
/* 7733 */    MCD::OPC_Decode, 128, 5, 171, 1, // Opcode: DPADD_S_W
/* 7738 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7751
/* 7742 */    MCD::OPC_CheckPredicate, 10, 147, 23, // Skip to: 13781
/* 7746 */    MCD::OPC_Decode, 254, 4, 172, 1, // Opcode: DPADD_S_D
/* 7751 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7764
/* 7755 */    MCD::OPC_CheckPredicate, 10, 134, 23, // Skip to: 13781
/* 7759 */    MCD::OPC_Decode, 130, 5, 170, 1, // Opcode: DPADD_U_H
/* 7764 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7777
/* 7768 */    MCD::OPC_CheckPredicate, 10, 121, 23, // Skip to: 13781
/* 7772 */    MCD::OPC_Decode, 131, 5, 171, 1, // Opcode: DPADD_U_W
/* 7777 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7790
/* 7781 */    MCD::OPC_CheckPredicate, 10, 108, 23, // Skip to: 13781
/* 7785 */    MCD::OPC_Decode, 129, 5, 172, 1, // Opcode: DPADD_U_D
/* 7790 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7803
/* 7794 */    MCD::OPC_CheckPredicate, 10, 95, 23, // Skip to: 13781
/* 7798 */    MCD::OPC_Decode, 146, 5, 170, 1, // Opcode: DPSUB_S_H
/* 7803 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7816
/* 7807 */    MCD::OPC_CheckPredicate, 10, 82, 23, // Skip to: 13781
/* 7811 */    MCD::OPC_Decode, 147, 5, 171, 1, // Opcode: DPSUB_S_W
/* 7816 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7829
/* 7820 */    MCD::OPC_CheckPredicate, 10, 69, 23, // Skip to: 13781
/* 7824 */    MCD::OPC_Decode, 145, 5, 172, 1, // Opcode: DPSUB_S_D
/* 7829 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7842
/* 7833 */    MCD::OPC_CheckPredicate, 10, 56, 23, // Skip to: 13781
/* 7837 */    MCD::OPC_Decode, 149, 5, 170, 1, // Opcode: DPSUB_U_H
/* 7842 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7855
/* 7846 */    MCD::OPC_CheckPredicate, 10, 43, 23, // Skip to: 13781
/* 7850 */    MCD::OPC_Decode, 150, 5, 171, 1, // Opcode: DPSUB_U_W
/* 7855 */    MCD::OPC_FilterValue, 23, 34, 23, // Skip to: 13781
/* 7859 */    MCD::OPC_CheckPredicate, 10, 30, 23, // Skip to: 13781
/* 7863 */    MCD::OPC_Decode, 148, 5, 172, 1, // Opcode: DPSUB_U_D
/* 7868 */    MCD::OPC_FilterValue, 20, 163, 1, // Skip to: 8291
/* 7872 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7875 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7888
/* 7879 */    MCD::OPC_CheckPredicate, 10, 10, 23, // Skip to: 13781
/* 7883 */    MCD::OPC_Decode, 161, 12, 173, 1, // Opcode: SLD_B
/* 7888 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7901
/* 7892 */    MCD::OPC_CheckPredicate, 10, 253, 22, // Skip to: 13781
/* 7896 */    MCD::OPC_Decode, 163, 12, 174, 1, // Opcode: SLD_H
/* 7901 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7914
/* 7905 */    MCD::OPC_CheckPredicate, 10, 240, 22, // Skip to: 13781
/* 7909 */    MCD::OPC_Decode, 164, 12, 175, 1, // Opcode: SLD_W
/* 7914 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7927
/* 7918 */    MCD::OPC_CheckPredicate, 10, 227, 22, // Skip to: 13781
/* 7922 */    MCD::OPC_Decode, 162, 12, 176, 1, // Opcode: SLD_D
/* 7927 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7940
/* 7931 */    MCD::OPC_CheckPredicate, 10, 214, 22, // Skip to: 13781
/* 7935 */    MCD::OPC_Decode, 204, 12, 177, 1, // Opcode: SPLAT_B
/* 7940 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7953
/* 7944 */    MCD::OPC_CheckPredicate, 10, 201, 22, // Skip to: 13781
/* 7948 */    MCD::OPC_Decode, 206, 12, 178, 1, // Opcode: SPLAT_H
/* 7953 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7966
/* 7957 */    MCD::OPC_CheckPredicate, 10, 188, 22, // Skip to: 13781
/* 7961 */    MCD::OPC_Decode, 207, 12, 179, 1, // Opcode: SPLAT_W
/* 7966 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7979
/* 7970 */    MCD::OPC_CheckPredicate, 10, 175, 22, // Skip to: 13781
/* 7974 */    MCD::OPC_Decode, 205, 12, 180, 1, // Opcode: SPLAT_D
/* 7979 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7992
/* 7983 */    MCD::OPC_CheckPredicate, 10, 162, 22, // Skip to: 13781
/* 7987 */    MCD::OPC_Decode, 212, 10, 159, 1, // Opcode: PCKEV_B
/* 7992 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8005
/* 7996 */    MCD::OPC_CheckPredicate, 10, 149, 22, // Skip to: 13781
/* 8000 */    MCD::OPC_Decode, 214, 10, 160, 1, // Opcode: PCKEV_H
/* 8005 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8018
/* 8009 */    MCD::OPC_CheckPredicate, 10, 136, 22, // Skip to: 13781
/* 8013 */    MCD::OPC_Decode, 215, 10, 161, 1, // Opcode: PCKEV_W
/* 8018 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8031
/* 8022 */    MCD::OPC_CheckPredicate, 10, 123, 22, // Skip to: 13781
/* 8026 */    MCD::OPC_Decode, 213, 10, 162, 1, // Opcode: PCKEV_D
/* 8031 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8044
/* 8035 */    MCD::OPC_CheckPredicate, 10, 110, 22, // Skip to: 13781
/* 8039 */    MCD::OPC_Decode, 216, 10, 159, 1, // Opcode: PCKOD_B
/* 8044 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8057
/* 8048 */    MCD::OPC_CheckPredicate, 10, 97, 22, // Skip to: 13781
/* 8052 */    MCD::OPC_Decode, 218, 10, 160, 1, // Opcode: PCKOD_H
/* 8057 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8070
/* 8061 */    MCD::OPC_CheckPredicate, 10, 84, 22, // Skip to: 13781
/* 8065 */    MCD::OPC_Decode, 219, 10, 161, 1, // Opcode: PCKOD_W
/* 8070 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8083
/* 8074 */    MCD::OPC_CheckPredicate, 10, 71, 22, // Skip to: 13781
/* 8078 */    MCD::OPC_Decode, 217, 10, 162, 1, // Opcode: PCKOD_D
/* 8083 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8096
/* 8087 */    MCD::OPC_CheckPredicate, 10, 58, 22, // Skip to: 13781
/* 8091 */    MCD::OPC_Decode, 130, 7, 159, 1, // Opcode: ILVL_B
/* 8096 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8109
/* 8100 */    MCD::OPC_CheckPredicate, 10, 45, 22, // Skip to: 13781
/* 8104 */    MCD::OPC_Decode, 132, 7, 160, 1, // Opcode: ILVL_H
/* 8109 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8122
/* 8113 */    MCD::OPC_CheckPredicate, 10, 32, 22, // Skip to: 13781
/* 8117 */    MCD::OPC_Decode, 133, 7, 161, 1, // Opcode: ILVL_W
/* 8122 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8135
/* 8126 */    MCD::OPC_CheckPredicate, 10, 19, 22, // Skip to: 13781
/* 8130 */    MCD::OPC_Decode, 131, 7, 162, 1, // Opcode: ILVL_D
/* 8135 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8148
/* 8139 */    MCD::OPC_CheckPredicate, 10, 6, 22, // Skip to: 13781
/* 8143 */    MCD::OPC_Decode, 138, 7, 159, 1, // Opcode: ILVR_B
/* 8148 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8161
/* 8152 */    MCD::OPC_CheckPredicate, 10, 249, 21, // Skip to: 13781
/* 8156 */    MCD::OPC_Decode, 140, 7, 160, 1, // Opcode: ILVR_H
/* 8161 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8174
/* 8165 */    MCD::OPC_CheckPredicate, 10, 236, 21, // Skip to: 13781
/* 8169 */    MCD::OPC_Decode, 141, 7, 161, 1, // Opcode: ILVR_W
/* 8174 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8187
/* 8178 */    MCD::OPC_CheckPredicate, 10, 223, 21, // Skip to: 13781
/* 8182 */    MCD::OPC_Decode, 139, 7, 162, 1, // Opcode: ILVR_D
/* 8187 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 8200
/* 8191 */    MCD::OPC_CheckPredicate, 10, 210, 21, // Skip to: 13781
/* 8195 */    MCD::OPC_Decode, 254, 6, 159, 1, // Opcode: ILVEV_B
/* 8200 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8213
/* 8204 */    MCD::OPC_CheckPredicate, 10, 197, 21, // Skip to: 13781
/* 8208 */    MCD::OPC_Decode, 128, 7, 160, 1, // Opcode: ILVEV_H
/* 8213 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8226
/* 8217 */    MCD::OPC_CheckPredicate, 10, 184, 21, // Skip to: 13781
/* 8221 */    MCD::OPC_Decode, 129, 7, 161, 1, // Opcode: ILVEV_W
/* 8226 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8239
/* 8230 */    MCD::OPC_CheckPredicate, 10, 171, 21, // Skip to: 13781
/* 8234 */    MCD::OPC_Decode, 255, 6, 162, 1, // Opcode: ILVEV_D
/* 8239 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 8252
/* 8243 */    MCD::OPC_CheckPredicate, 10, 158, 21, // Skip to: 13781
/* 8247 */    MCD::OPC_Decode, 134, 7, 159, 1, // Opcode: ILVOD_B
/* 8252 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8265
/* 8256 */    MCD::OPC_CheckPredicate, 10, 145, 21, // Skip to: 13781
/* 8260 */    MCD::OPC_Decode, 136, 7, 160, 1, // Opcode: ILVOD_H
/* 8265 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8278
/* 8269 */    MCD::OPC_CheckPredicate, 10, 132, 21, // Skip to: 13781
/* 8273 */    MCD::OPC_Decode, 137, 7, 161, 1, // Opcode: ILVOD_W
/* 8278 */    MCD::OPC_FilterValue, 31, 123, 21, // Skip to: 13781
/* 8282 */    MCD::OPC_CheckPredicate, 10, 119, 21, // Skip to: 13781
/* 8286 */    MCD::OPC_Decode, 135, 7, 162, 1, // Opcode: ILVOD_D
/* 8291 */    MCD::OPC_FilterValue, 21, 59, 1, // Skip to: 8610
/* 8295 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8298 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8311
/* 8302 */    MCD::OPC_CheckPredicate, 10, 99, 21, // Skip to: 13781
/* 8306 */    MCD::OPC_Decode, 174, 14, 163, 1, // Opcode: VSHF_B
/* 8311 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8324
/* 8315 */    MCD::OPC_CheckPredicate, 10, 86, 21, // Skip to: 13781
/* 8319 */    MCD::OPC_Decode, 176, 14, 164, 1, // Opcode: VSHF_H
/* 8324 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8337
/* 8328 */    MCD::OPC_CheckPredicate, 10, 73, 21, // Skip to: 13781
/* 8332 */    MCD::OPC_Decode, 177, 14, 165, 1, // Opcode: VSHF_W
/* 8337 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8350
/* 8341 */    MCD::OPC_CheckPredicate, 10, 60, 21, // Skip to: 13781
/* 8345 */    MCD::OPC_Decode, 175, 14, 166, 1, // Opcode: VSHF_D
/* 8350 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8363
/* 8354 */    MCD::OPC_CheckPredicate, 10, 47, 21, // Skip to: 13781
/* 8358 */    MCD::OPC_Decode, 217, 12, 159, 1, // Opcode: SRAR_B
/* 8363 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8376
/* 8367 */    MCD::OPC_CheckPredicate, 10, 34, 21, // Skip to: 13781
/* 8371 */    MCD::OPC_Decode, 219, 12, 160, 1, // Opcode: SRAR_H
/* 8376 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8389
/* 8380 */    MCD::OPC_CheckPredicate, 10, 21, 21, // Skip to: 13781
/* 8384 */    MCD::OPC_Decode, 220, 12, 161, 1, // Opcode: SRAR_W
/* 8389 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8402
/* 8393 */    MCD::OPC_CheckPredicate, 10, 8, 21, // Skip to: 13781
/* 8397 */    MCD::OPC_Decode, 218, 12, 162, 1, // Opcode: SRAR_D
/* 8402 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8415
/* 8406 */    MCD::OPC_CheckPredicate, 10, 251, 20, // Skip to: 13781
/* 8410 */    MCD::OPC_Decode, 238, 12, 159, 1, // Opcode: SRLR_B
/* 8415 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8428
/* 8419 */    MCD::OPC_CheckPredicate, 10, 238, 20, // Skip to: 13781
/* 8423 */    MCD::OPC_Decode, 240, 12, 160, 1, // Opcode: SRLR_H
/* 8428 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8441
/* 8432 */    MCD::OPC_CheckPredicate, 10, 225, 20, // Skip to: 13781
/* 8436 */    MCD::OPC_Decode, 241, 12, 161, 1, // Opcode: SRLR_W
/* 8441 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8454
/* 8445 */    MCD::OPC_CheckPredicate, 10, 212, 20, // Skip to: 13781
/* 8449 */    MCD::OPC_Decode, 239, 12, 162, 1, // Opcode: SRLR_D
/* 8454 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8467
/* 8458 */    MCD::OPC_CheckPredicate, 10, 199, 20, // Skip to: 13781
/* 8462 */    MCD::OPC_Decode, 243, 6, 167, 1, // Opcode: HADD_S_H
/* 8467 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8480
/* 8471 */    MCD::OPC_CheckPredicate, 10, 186, 20, // Skip to: 13781
/* 8475 */    MCD::OPC_Decode, 244, 6, 168, 1, // Opcode: HADD_S_W
/* 8480 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8493
/* 8484 */    MCD::OPC_CheckPredicate, 10, 173, 20, // Skip to: 13781
/* 8488 */    MCD::OPC_Decode, 242, 6, 169, 1, // Opcode: HADD_S_D
/* 8493 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8506
/* 8497 */    MCD::OPC_CheckPredicate, 10, 160, 20, // Skip to: 13781
/* 8501 */    MCD::OPC_Decode, 246, 6, 167, 1, // Opcode: HADD_U_H
/* 8506 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8519
/* 8510 */    MCD::OPC_CheckPredicate, 10, 147, 20, // Skip to: 13781
/* 8514 */    MCD::OPC_Decode, 247, 6, 168, 1, // Opcode: HADD_U_W
/* 8519 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8532
/* 8523 */    MCD::OPC_CheckPredicate, 10, 134, 20, // Skip to: 13781
/* 8527 */    MCD::OPC_Decode, 245, 6, 169, 1, // Opcode: HADD_U_D
/* 8532 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8545
/* 8536 */    MCD::OPC_CheckPredicate, 10, 121, 20, // Skip to: 13781
/* 8540 */    MCD::OPC_Decode, 249, 6, 167, 1, // Opcode: HSUB_S_H
/* 8545 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8558
/* 8549 */    MCD::OPC_CheckPredicate, 10, 108, 20, // Skip to: 13781
/* 8553 */    MCD::OPC_Decode, 250, 6, 168, 1, // Opcode: HSUB_S_W
/* 8558 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8571
/* 8562 */    MCD::OPC_CheckPredicate, 10, 95, 20, // Skip to: 13781
/* 8566 */    MCD::OPC_Decode, 248, 6, 169, 1, // Opcode: HSUB_S_D
/* 8571 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8584
/* 8575 */    MCD::OPC_CheckPredicate, 10, 82, 20, // Skip to: 13781
/* 8579 */    MCD::OPC_Decode, 252, 6, 167, 1, // Opcode: HSUB_U_H
/* 8584 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8597
/* 8588 */    MCD::OPC_CheckPredicate, 10, 69, 20, // Skip to: 13781
/* 8592 */    MCD::OPC_Decode, 253, 6, 168, 1, // Opcode: HSUB_U_W
/* 8597 */    MCD::OPC_FilterValue, 31, 60, 20, // Skip to: 13781
/* 8601 */    MCD::OPC_CheckPredicate, 10, 56, 20, // Skip to: 13781
/* 8605 */    MCD::OPC_Decode, 251, 6, 169, 1, // Opcode: HSUB_U_D
/* 8610 */    MCD::OPC_FilterValue, 25, 230, 1, // Skip to: 9100
/* 8614 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 8617 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8630
/* 8621 */    MCD::OPC_CheckPredicate, 10, 36, 20, // Skip to: 13781
/* 8625 */    MCD::OPC_Decode, 157, 12, 181, 1, // Opcode: SLDI_B
/* 8630 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8649
/* 8634 */    MCD::OPC_CheckPredicate, 10, 23, 20, // Skip to: 13781
/* 8638 */    MCD::OPC_CheckField, 19, 1, 0, 17, 20, // Skip to: 13781
/* 8644 */    MCD::OPC_Decode, 159, 12, 182, 1, // Opcode: SLDI_H
/* 8649 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 8707
/* 8653 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8656 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8669
/* 8660 */    MCD::OPC_CheckPredicate, 10, 253, 19, // Skip to: 13781
/* 8664 */    MCD::OPC_Decode, 160, 12, 183, 1, // Opcode: SLDI_W
/* 8669 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8688
/* 8673 */    MCD::OPC_CheckPredicate, 10, 240, 19, // Skip to: 13781
/* 8677 */    MCD::OPC_CheckField, 17, 1, 0, 234, 19, // Skip to: 13781
/* 8683 */    MCD::OPC_Decode, 158, 12, 184, 1, // Opcode: SLDI_D
/* 8688 */    MCD::OPC_FilterValue, 3, 225, 19, // Skip to: 13781
/* 8692 */    MCD::OPC_CheckPredicate, 10, 221, 19, // Skip to: 13781
/* 8696 */    MCD::OPC_CheckField, 16, 2, 2, 215, 19, // Skip to: 13781
/* 8702 */    MCD::OPC_Decode, 234, 3, 185, 1, // Opcode: CTCMSA
/* 8707 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8720
/* 8711 */    MCD::OPC_CheckPredicate, 10, 202, 19, // Skip to: 13781
/* 8715 */    MCD::OPC_Decode, 200, 12, 186, 1, // Opcode: SPLATI_B
/* 8720 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 8739
/* 8724 */    MCD::OPC_CheckPredicate, 10, 189, 19, // Skip to: 13781
/* 8728 */    MCD::OPC_CheckField, 19, 1, 0, 183, 19, // Skip to: 13781
/* 8734 */    MCD::OPC_Decode, 202, 12, 187, 1, // Opcode: SPLATI_H
/* 8739 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 8797
/* 8743 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8746 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8759
/* 8750 */    MCD::OPC_CheckPredicate, 10, 163, 19, // Skip to: 13781
/* 8754 */    MCD::OPC_Decode, 203, 12, 188, 1, // Opcode: SPLATI_W
/* 8759 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8778
/* 8763 */    MCD::OPC_CheckPredicate, 10, 150, 19, // Skip to: 13781
/* 8767 */    MCD::OPC_CheckField, 17, 1, 0, 144, 19, // Skip to: 13781
/* 8773 */    MCD::OPC_Decode, 201, 12, 189, 1, // Opcode: SPLATI_D
/* 8778 */    MCD::OPC_FilterValue, 3, 135, 19, // Skip to: 13781
/* 8782 */    MCD::OPC_CheckPredicate, 10, 131, 19, // Skip to: 13781
/* 8786 */    MCD::OPC_CheckField, 16, 2, 2, 125, 19, // Skip to: 13781
/* 8792 */    MCD::OPC_Decode, 132, 3, 190, 1, // Opcode: CFCMSA
/* 8797 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8810
/* 8801 */    MCD::OPC_CheckPredicate, 10, 112, 19, // Skip to: 13781
/* 8805 */    MCD::OPC_Decode, 224, 3, 191, 1, // Opcode: COPY_S_B
/* 8810 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 8829
/* 8814 */    MCD::OPC_CheckPredicate, 10, 99, 19, // Skip to: 13781
/* 8818 */    MCD::OPC_CheckField, 19, 1, 0, 93, 19, // Skip to: 13781
/* 8824 */    MCD::OPC_Decode, 226, 3, 192, 1, // Opcode: COPY_S_H
/* 8829 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 8887
/* 8833 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8836 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8849
/* 8840 */    MCD::OPC_CheckPredicate, 10, 73, 19, // Skip to: 13781
/* 8844 */    MCD::OPC_Decode, 227, 3, 193, 1, // Opcode: COPY_S_W
/* 8849 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8868
/* 8853 */    MCD::OPC_CheckPredicate, 17, 60, 19, // Skip to: 13781
/* 8857 */    MCD::OPC_CheckField, 17, 1, 0, 54, 19, // Skip to: 13781
/* 8863 */    MCD::OPC_Decode, 225, 3, 194, 1, // Opcode: COPY_S_D
/* 8868 */    MCD::OPC_FilterValue, 3, 45, 19, // Skip to: 13781
/* 8872 */    MCD::OPC_CheckPredicate, 10, 41, 19, // Skip to: 13781
/* 8876 */    MCD::OPC_CheckField, 16, 2, 2, 35, 19, // Skip to: 13781
/* 8882 */    MCD::OPC_Decode, 163, 9, 195, 1, // Opcode: MOVE_V
/* 8887 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8900
/* 8891 */    MCD::OPC_CheckPredicate, 10, 22, 19, // Skip to: 13781
/* 8895 */    MCD::OPC_Decode, 228, 3, 191, 1, // Opcode: COPY_U_B
/* 8900 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 8919
/* 8904 */    MCD::OPC_CheckPredicate, 10, 9, 19, // Skip to: 13781
/* 8908 */    MCD::OPC_CheckField, 19, 1, 0, 3, 19, // Skip to: 13781
/* 8914 */    MCD::OPC_Decode, 230, 3, 192, 1, // Opcode: COPY_U_H
/* 8919 */    MCD::OPC_FilterValue, 15, 35, 0, // Skip to: 8958
/* 8923 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8926 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8939
/* 8930 */    MCD::OPC_CheckPredicate, 10, 239, 18, // Skip to: 13781
/* 8934 */    MCD::OPC_Decode, 231, 3, 193, 1, // Opcode: COPY_U_W
/* 8939 */    MCD::OPC_FilterValue, 2, 230, 18, // Skip to: 13781
/* 8943 */    MCD::OPC_CheckPredicate, 17, 226, 18, // Skip to: 13781
/* 8947 */    MCD::OPC_CheckField, 17, 1, 0, 220, 18, // Skip to: 13781
/* 8953 */    MCD::OPC_Decode, 229, 3, 194, 1, // Opcode: COPY_U_D
/* 8958 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8971
/* 8962 */    MCD::OPC_CheckPredicate, 10, 207, 18, // Skip to: 13781
/* 8966 */    MCD::OPC_Decode, 143, 7, 196, 1, // Opcode: INSERT_B
/* 8971 */    MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 8990
/* 8975 */    MCD::OPC_CheckPredicate, 10, 194, 18, // Skip to: 13781
/* 8979 */    MCD::OPC_CheckField, 19, 1, 0, 188, 18, // Skip to: 13781
/* 8985 */    MCD::OPC_Decode, 155, 7, 197, 1, // Opcode: INSERT_H
/* 8990 */    MCD::OPC_FilterValue, 19, 35, 0, // Skip to: 9029
/* 8994 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8997 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9010
/* 9001 */    MCD::OPC_CheckPredicate, 10, 168, 18, // Skip to: 13781
/* 9005 */    MCD::OPC_Decode, 158, 7, 198, 1, // Opcode: INSERT_W
/* 9010 */    MCD::OPC_FilterValue, 2, 159, 18, // Skip to: 13781
/* 9014 */    MCD::OPC_CheckPredicate, 17, 155, 18, // Skip to: 13781
/* 9018 */    MCD::OPC_CheckField, 17, 1, 0, 149, 18, // Skip to: 13781
/* 9024 */    MCD::OPC_Decode, 146, 7, 199, 1, // Opcode: INSERT_D
/* 9029 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9042
/* 9033 */    MCD::OPC_CheckPredicate, 10, 136, 18, // Skip to: 13781
/* 9037 */    MCD::OPC_Decode, 162, 7, 200, 1, // Opcode: INSVE_B
/* 9042 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 9061
/* 9046 */    MCD::OPC_CheckPredicate, 10, 123, 18, // Skip to: 13781
/* 9050 */    MCD::OPC_CheckField, 19, 1, 0, 117, 18, // Skip to: 13781
/* 9056 */    MCD::OPC_Decode, 164, 7, 200, 1, // Opcode: INSVE_H
/* 9061 */    MCD::OPC_FilterValue, 23, 108, 18, // Skip to: 13781
/* 9065 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9068 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9081
/* 9072 */    MCD::OPC_CheckPredicate, 10, 97, 18, // Skip to: 13781
/* 9076 */    MCD::OPC_Decode, 165, 7, 200, 1, // Opcode: INSVE_W
/* 9081 */    MCD::OPC_FilterValue, 2, 88, 18, // Skip to: 13781
/* 9085 */    MCD::OPC_CheckPredicate, 10, 84, 18, // Skip to: 13781
/* 9089 */    MCD::OPC_CheckField, 17, 1, 0, 78, 18, // Skip to: 13781
/* 9095 */    MCD::OPC_Decode, 163, 7, 200, 1, // Opcode: INSVE_D
/* 9100 */    MCD::OPC_FilterValue, 26, 163, 1, // Skip to: 9523
/* 9104 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9107 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9120
/* 9111 */    MCD::OPC_CheckPredicate, 10, 58, 18, // Skip to: 13781
/* 9115 */    MCD::OPC_Decode, 220, 5, 161, 1, // Opcode: FCAF_W
/* 9120 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9133
/* 9124 */    MCD::OPC_CheckPredicate, 10, 45, 18, // Skip to: 13781
/* 9128 */    MCD::OPC_Decode, 219, 5, 162, 1, // Opcode: FCAF_D
/* 9133 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9146
/* 9137 */    MCD::OPC_CheckPredicate, 10, 32, 18, // Skip to: 13781
/* 9141 */    MCD::OPC_Decode, 247, 5, 161, 1, // Opcode: FCUN_W
/* 9146 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9159
/* 9150 */    MCD::OPC_CheckPredicate, 10, 19, 18, // Skip to: 13781
/* 9154 */    MCD::OPC_Decode, 246, 5, 162, 1, // Opcode: FCUN_D
/* 9159 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9172
/* 9163 */    MCD::OPC_CheckPredicate, 10, 6, 18, // Skip to: 13781
/* 9167 */    MCD::OPC_Decode, 222, 5, 161, 1, // Opcode: FCEQ_W
/* 9172 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9185
/* 9176 */    MCD::OPC_CheckPredicate, 10, 249, 17, // Skip to: 13781
/* 9180 */    MCD::OPC_Decode, 221, 5, 162, 1, // Opcode: FCEQ_D
/* 9185 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9198
/* 9189 */    MCD::OPC_CheckPredicate, 10, 236, 17, // Skip to: 13781
/* 9193 */    MCD::OPC_Decode, 239, 5, 161, 1, // Opcode: FCUEQ_W
/* 9198 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9211
/* 9202 */    MCD::OPC_CheckPredicate, 10, 223, 17, // Skip to: 13781
/* 9206 */    MCD::OPC_Decode, 238, 5, 162, 1, // Opcode: FCUEQ_D
/* 9211 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9224
/* 9215 */    MCD::OPC_CheckPredicate, 10, 210, 17, // Skip to: 13781
/* 9219 */    MCD::OPC_Decode, 228, 5, 161, 1, // Opcode: FCLT_W
/* 9224 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9237
/* 9228 */    MCD::OPC_CheckPredicate, 10, 197, 17, // Skip to: 13781
/* 9232 */    MCD::OPC_Decode, 227, 5, 162, 1, // Opcode: FCLT_D
/* 9237 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9250
/* 9241 */    MCD::OPC_CheckPredicate, 10, 184, 17, // Skip to: 13781
/* 9245 */    MCD::OPC_Decode, 243, 5, 161, 1, // Opcode: FCULT_W
/* 9250 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9263
/* 9254 */    MCD::OPC_CheckPredicate, 10, 171, 17, // Skip to: 13781
/* 9258 */    MCD::OPC_Decode, 242, 5, 162, 1, // Opcode: FCULT_D
/* 9263 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9276
/* 9267 */    MCD::OPC_CheckPredicate, 10, 158, 17, // Skip to: 13781
/* 9271 */    MCD::OPC_Decode, 226, 5, 161, 1, // Opcode: FCLE_W
/* 9276 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 9289
/* 9280 */    MCD::OPC_CheckPredicate, 10, 145, 17, // Skip to: 13781
/* 9284 */    MCD::OPC_Decode, 225, 5, 162, 1, // Opcode: FCLE_D
/* 9289 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 9302
/* 9293 */    MCD::OPC_CheckPredicate, 10, 132, 17, // Skip to: 13781
/* 9297 */    MCD::OPC_Decode, 241, 5, 161, 1, // Opcode: FCULE_W
/* 9302 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 9315
/* 9306 */    MCD::OPC_CheckPredicate, 10, 119, 17, // Skip to: 13781
/* 9310 */    MCD::OPC_Decode, 240, 5, 162, 1, // Opcode: FCULE_D
/* 9315 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9328
/* 9319 */    MCD::OPC_CheckPredicate, 10, 106, 17, // Skip to: 13781
/* 9323 */    MCD::OPC_Decode, 196, 6, 161, 1, // Opcode: FSAF_W
/* 9328 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9341
/* 9332 */    MCD::OPC_CheckPredicate, 10, 93, 17, // Skip to: 13781
/* 9336 */    MCD::OPC_Decode, 195, 6, 162, 1, // Opcode: FSAF_D
/* 9341 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9354
/* 9345 */    MCD::OPC_CheckPredicate, 10, 80, 17, // Skip to: 13781
/* 9349 */    MCD::OPC_Decode, 230, 6, 161, 1, // Opcode: FSUN_W
/* 9354 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9367
/* 9358 */    MCD::OPC_CheckPredicate, 10, 67, 17, // Skip to: 13781
/* 9362 */    MCD::OPC_Decode, 229, 6, 162, 1, // Opcode: FSUN_D
/* 9367 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9380
/* 9371 */    MCD::OPC_CheckPredicate, 10, 54, 17, // Skip to: 13781
/* 9375 */    MCD::OPC_Decode, 198, 6, 161, 1, // Opcode: FSEQ_W
/* 9380 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9393
/* 9384 */    MCD::OPC_CheckPredicate, 10, 41, 17, // Skip to: 13781
/* 9388 */    MCD::OPC_Decode, 197, 6, 162, 1, // Opcode: FSEQ_D
/* 9393 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9406
/* 9397 */    MCD::OPC_CheckPredicate, 10, 28, 17, // Skip to: 13781
/* 9401 */    MCD::OPC_Decode, 222, 6, 161, 1, // Opcode: FSUEQ_W
/* 9406 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9419
/* 9410 */    MCD::OPC_CheckPredicate, 10, 15, 17, // Skip to: 13781
/* 9414 */    MCD::OPC_Decode, 221, 6, 162, 1, // Opcode: FSUEQ_D
/* 9419 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9432
/* 9423 */    MCD::OPC_CheckPredicate, 10, 2, 17, // Skip to: 13781
/* 9427 */    MCD::OPC_Decode, 202, 6, 161, 1, // Opcode: FSLT_W
/* 9432 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9445
/* 9436 */    MCD::OPC_CheckPredicate, 10, 245, 16, // Skip to: 13781
/* 9440 */    MCD::OPC_Decode, 201, 6, 162, 1, // Opcode: FSLT_D
/* 9445 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9458
/* 9449 */    MCD::OPC_CheckPredicate, 10, 232, 16, // Skip to: 13781
/* 9453 */    MCD::OPC_Decode, 226, 6, 161, 1, // Opcode: FSULT_W
/* 9458 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9471
/* 9462 */    MCD::OPC_CheckPredicate, 10, 219, 16, // Skip to: 13781
/* 9466 */    MCD::OPC_Decode, 225, 6, 162, 1, // Opcode: FSULT_D
/* 9471 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9484
/* 9475 */    MCD::OPC_CheckPredicate, 10, 206, 16, // Skip to: 13781
/* 9479 */    MCD::OPC_Decode, 200, 6, 161, 1, // Opcode: FSLE_W
/* 9484 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9497
/* 9488 */    MCD::OPC_CheckPredicate, 10, 193, 16, // Skip to: 13781
/* 9492 */    MCD::OPC_Decode, 199, 6, 162, 1, // Opcode: FSLE_D
/* 9497 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9510
/* 9501 */    MCD::OPC_CheckPredicate, 10, 180, 16, // Skip to: 13781
/* 9505 */    MCD::OPC_Decode, 224, 6, 161, 1, // Opcode: FSULE_W
/* 9510 */    MCD::OPC_FilterValue, 31, 171, 16, // Skip to: 13781
/* 9514 */    MCD::OPC_CheckPredicate, 10, 167, 16, // Skip to: 13781
/* 9518 */    MCD::OPC_Decode, 223, 6, 162, 1, // Opcode: FSULE_D
/* 9523 */    MCD::OPC_FilterValue, 27, 85, 1, // Skip to: 9868
/* 9527 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9530 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9543
/* 9534 */    MCD::OPC_CheckPredicate, 10, 147, 16, // Skip to: 13781
/* 9538 */    MCD::OPC_Decode, 218, 5, 161, 1, // Opcode: FADD_W
/* 9543 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9556
/* 9547 */    MCD::OPC_CheckPredicate, 10, 134, 16, // Skip to: 13781
/* 9551 */    MCD::OPC_Decode, 212, 5, 162, 1, // Opcode: FADD_D
/* 9556 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9569
/* 9560 */    MCD::OPC_CheckPredicate, 10, 121, 16, // Skip to: 13781
/* 9564 */    MCD::OPC_Decode, 220, 6, 161, 1, // Opcode: FSUB_W
/* 9569 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9582
/* 9573 */    MCD::OPC_CheckPredicate, 10, 108, 16, // Skip to: 13781
/* 9577 */    MCD::OPC_Decode, 214, 6, 162, 1, // Opcode: FSUB_D
/* 9582 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9595
/* 9586 */    MCD::OPC_CheckPredicate, 10, 95, 16, // Skip to: 13781
/* 9590 */    MCD::OPC_Decode, 183, 6, 161, 1, // Opcode: FMUL_W
/* 9595 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9608
/* 9599 */    MCD::OPC_CheckPredicate, 10, 82, 16, // Skip to: 13781
/* 9603 */    MCD::OPC_Decode, 177, 6, 162, 1, // Opcode: FMUL_D
/* 9608 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9621
/* 9612 */    MCD::OPC_CheckPredicate, 10, 69, 16, // Skip to: 13781
/* 9616 */    MCD::OPC_Decode, 254, 5, 161, 1, // Opcode: FDIV_W
/* 9621 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9634
/* 9625 */    MCD::OPC_CheckPredicate, 10, 56, 16, // Skip to: 13781
/* 9629 */    MCD::OPC_Decode, 248, 5, 162, 1, // Opcode: FDIV_D
/* 9634 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9647
/* 9638 */    MCD::OPC_CheckPredicate, 10, 43, 16, // Skip to: 13781
/* 9642 */    MCD::OPC_Decode, 161, 6, 165, 1, // Opcode: FMADD_W
/* 9647 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9660
/* 9651 */    MCD::OPC_CheckPredicate, 10, 30, 16, // Skip to: 13781
/* 9655 */    MCD::OPC_Decode, 160, 6, 166, 1, // Opcode: FMADD_D
/* 9660 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9673
/* 9664 */    MCD::OPC_CheckPredicate, 10, 17, 16, // Skip to: 13781
/* 9668 */    MCD::OPC_Decode, 176, 6, 165, 1, // Opcode: FMSUB_W
/* 9673 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9686
/* 9677 */    MCD::OPC_CheckPredicate, 10, 4, 16, // Skip to: 13781
/* 9681 */    MCD::OPC_Decode, 175, 6, 166, 1, // Opcode: FMSUB_D
/* 9686 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 9699
/* 9690 */    MCD::OPC_CheckPredicate, 10, 247, 15, // Skip to: 13781
/* 9694 */    MCD::OPC_Decode, 131, 6, 161, 1, // Opcode: FEXP2_W
/* 9699 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 9712
/* 9703 */    MCD::OPC_CheckPredicate, 10, 234, 15, // Skip to: 13781
/* 9707 */    MCD::OPC_Decode, 129, 6, 162, 1, // Opcode: FEXP2_D
/* 9712 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9725
/* 9716 */    MCD::OPC_CheckPredicate, 10, 221, 15, // Skip to: 13781
/* 9720 */    MCD::OPC_Decode, 255, 5, 201, 1, // Opcode: FEXDO_H
/* 9725 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9738
/* 9729 */    MCD::OPC_CheckPredicate, 10, 208, 15, // Skip to: 13781
/* 9733 */    MCD::OPC_Decode, 128, 6, 202, 1, // Opcode: FEXDO_W
/* 9738 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9751
/* 9742 */    MCD::OPC_CheckPredicate, 10, 195, 15, // Skip to: 13781
/* 9746 */    MCD::OPC_Decode, 235, 6, 201, 1, // Opcode: FTQ_H
/* 9751 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9764
/* 9755 */    MCD::OPC_CheckPredicate, 10, 182, 15, // Skip to: 13781
/* 9759 */    MCD::OPC_Decode, 236, 6, 202, 1, // Opcode: FTQ_W
/* 9764 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9777
/* 9768 */    MCD::OPC_CheckPredicate, 10, 169, 15, // Skip to: 13781
/* 9772 */    MCD::OPC_Decode, 169, 6, 161, 1, // Opcode: FMIN_W
/* 9777 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9790
/* 9781 */    MCD::OPC_CheckPredicate, 10, 156, 15, // Skip to: 13781
/* 9785 */    MCD::OPC_Decode, 168, 6, 162, 1, // Opcode: FMIN_D
/* 9790 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9803
/* 9794 */    MCD::OPC_CheckPredicate, 10, 143, 15, // Skip to: 13781
/* 9798 */    MCD::OPC_Decode, 167, 6, 161, 1, // Opcode: FMIN_A_W
/* 9803 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9816
/* 9807 */    MCD::OPC_CheckPredicate, 10, 130, 15, // Skip to: 13781
/* 9811 */    MCD::OPC_Decode, 166, 6, 162, 1, // Opcode: FMIN_A_D
/* 9816 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9829
/* 9820 */    MCD::OPC_CheckPredicate, 10, 117, 15, // Skip to: 13781
/* 9824 */    MCD::OPC_Decode, 165, 6, 161, 1, // Opcode: FMAX_W
/* 9829 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9842
/* 9833 */    MCD::OPC_CheckPredicate, 10, 104, 15, // Skip to: 13781
/* 9837 */    MCD::OPC_Decode, 164, 6, 162, 1, // Opcode: FMAX_D
/* 9842 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9855
/* 9846 */    MCD::OPC_CheckPredicate, 10, 91, 15, // Skip to: 13781
/* 9850 */    MCD::OPC_Decode, 163, 6, 161, 1, // Opcode: FMAX_A_W
/* 9855 */    MCD::OPC_FilterValue, 31, 82, 15, // Skip to: 13781
/* 9859 */    MCD::OPC_CheckPredicate, 10, 78, 15, // Skip to: 13781
/* 9863 */    MCD::OPC_Decode, 162, 6, 162, 1, // Opcode: FMAX_A_D
/* 9868 */    MCD::OPC_FilterValue, 28, 59, 1, // Skip to: 10187
/* 9872 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9875 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9888
/* 9879 */    MCD::OPC_CheckPredicate, 10, 58, 15, // Skip to: 13781
/* 9883 */    MCD::OPC_Decode, 237, 5, 161, 1, // Opcode: FCOR_W
/* 9888 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9901
/* 9892 */    MCD::OPC_CheckPredicate, 10, 45, 15, // Skip to: 13781
/* 9896 */    MCD::OPC_Decode, 236, 5, 162, 1, // Opcode: FCOR_D
/* 9901 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9914
/* 9905 */    MCD::OPC_CheckPredicate, 10, 32, 15, // Skip to: 13781
/* 9909 */    MCD::OPC_Decode, 245, 5, 161, 1, // Opcode: FCUNE_W
/* 9914 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9927
/* 9918 */    MCD::OPC_CheckPredicate, 10, 19, 15, // Skip to: 13781
/* 9922 */    MCD::OPC_Decode, 244, 5, 162, 1, // Opcode: FCUNE_D
/* 9927 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9940
/* 9931 */    MCD::OPC_CheckPredicate, 10, 6, 15, // Skip to: 13781
/* 9935 */    MCD::OPC_Decode, 235, 5, 161, 1, // Opcode: FCNE_W
/* 9940 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9953
/* 9944 */    MCD::OPC_CheckPredicate, 10, 249, 14, // Skip to: 13781
/* 9948 */    MCD::OPC_Decode, 234, 5, 162, 1, // Opcode: FCNE_D
/* 9953 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9966
/* 9957 */    MCD::OPC_CheckPredicate, 10, 236, 14, // Skip to: 13781
/* 9961 */    MCD::OPC_Decode, 151, 10, 160, 1, // Opcode: MUL_Q_H
/* 9966 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9979
/* 9970 */    MCD::OPC_CheckPredicate, 10, 223, 14, // Skip to: 13781
/* 9974 */    MCD::OPC_Decode, 152, 10, 161, 1, // Opcode: MUL_Q_W
/* 9979 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9992
/* 9983 */    MCD::OPC_CheckPredicate, 10, 210, 14, // Skip to: 13781
/* 9987 */    MCD::OPC_Decode, 201, 8, 164, 1, // Opcode: MADD_Q_H
/* 9992 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10005
/* 9996 */    MCD::OPC_CheckPredicate, 10, 197, 14, // Skip to: 13781
/* 10000 */   MCD::OPC_Decode, 202, 8, 165, 1, // Opcode: MADD_Q_W
/* 10005 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10018
/* 10009 */   MCD::OPC_CheckPredicate, 10, 184, 14, // Skip to: 13781
/* 10013 */   MCD::OPC_Decode, 221, 9, 164, 1, // Opcode: MSUB_Q_H
/* 10018 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10031
/* 10022 */   MCD::OPC_CheckPredicate, 10, 171, 14, // Skip to: 13781
/* 10026 */   MCD::OPC_Decode, 222, 9, 165, 1, // Opcode: MSUB_Q_W
/* 10031 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10044
/* 10035 */   MCD::OPC_CheckPredicate, 10, 158, 14, // Skip to: 13781
/* 10039 */   MCD::OPC_Decode, 206, 6, 161, 1, // Opcode: FSOR_W
/* 10044 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10057
/* 10048 */   MCD::OPC_CheckPredicate, 10, 145, 14, // Skip to: 13781
/* 10052 */   MCD::OPC_Decode, 205, 6, 162, 1, // Opcode: FSOR_D
/* 10057 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10070
/* 10061 */   MCD::OPC_CheckPredicate, 10, 132, 14, // Skip to: 13781
/* 10065 */   MCD::OPC_Decode, 228, 6, 161, 1, // Opcode: FSUNE_W
/* 10070 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10083
/* 10074 */   MCD::OPC_CheckPredicate, 10, 119, 14, // Skip to: 13781
/* 10078 */   MCD::OPC_Decode, 227, 6, 162, 1, // Opcode: FSUNE_D
/* 10083 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10096
/* 10087 */   MCD::OPC_CheckPredicate, 10, 106, 14, // Skip to: 13781
/* 10091 */   MCD::OPC_Decode, 204, 6, 161, 1, // Opcode: FSNE_W
/* 10096 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10109
/* 10100 */   MCD::OPC_CheckPredicate, 10, 93, 14, // Skip to: 13781
/* 10104 */   MCD::OPC_Decode, 203, 6, 162, 1, // Opcode: FSNE_D
/* 10109 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10122
/* 10113 */   MCD::OPC_CheckPredicate, 10, 80, 14, // Skip to: 13781
/* 10117 */   MCD::OPC_Decode, 132, 10, 160, 1, // Opcode: MULR_Q_H
/* 10122 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10135
/* 10126 */   MCD::OPC_CheckPredicate, 10, 67, 14, // Skip to: 13781
/* 10130 */   MCD::OPC_Decode, 133, 10, 161, 1, // Opcode: MULR_Q_W
/* 10135 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10148
/* 10139 */   MCD::OPC_CheckPredicate, 10, 54, 14, // Skip to: 13781
/* 10143 */   MCD::OPC_Decode, 187, 8, 164, 1, // Opcode: MADDR_Q_H
/* 10148 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10161
/* 10152 */   MCD::OPC_CheckPredicate, 10, 41, 14, // Skip to: 13781
/* 10156 */   MCD::OPC_Decode, 188, 8, 165, 1, // Opcode: MADDR_Q_W
/* 10161 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10174
/* 10165 */   MCD::OPC_CheckPredicate, 10, 28, 14, // Skip to: 13781
/* 10169 */   MCD::OPC_Decode, 207, 9, 164, 1, // Opcode: MSUBR_Q_H
/* 10174 */   MCD::OPC_FilterValue, 29, 19, 14, // Skip to: 13781
/* 10178 */   MCD::OPC_CheckPredicate, 10, 15, 14, // Skip to: 13781
/* 10182 */   MCD::OPC_Decode, 208, 9, 165, 1, // Opcode: MSUBR_Q_W
/* 10187 */   MCD::OPC_FilterValue, 30, 219, 2, // Skip to: 10922
/* 10191 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10194 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 10206
/* 10198 */   MCD::OPC_CheckPredicate, 10, 251, 13, // Skip to: 13781
/* 10202 */   MCD::OPC_Decode, 98, 159, 1, // Opcode: AND_V
/* 10206 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10219
/* 10210 */   MCD::OPC_CheckPredicate, 10, 239, 13, // Skip to: 13781
/* 10214 */   MCD::OPC_Decode, 201, 10, 159, 1, // Opcode: OR_V
/* 10219 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10232
/* 10223 */   MCD::OPC_CheckPredicate, 10, 226, 13, // Skip to: 13781
/* 10227 */   MCD::OPC_Decode, 187, 10, 159, 1, // Opcode: NOR_V
/* 10232 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10245
/* 10236 */   MCD::OPC_CheckPredicate, 10, 213, 13, // Skip to: 13781
/* 10240 */   MCD::OPC_Decode, 190, 14, 159, 1, // Opcode: XOR_V
/* 10245 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10258
/* 10249 */   MCD::OPC_CheckPredicate, 10, 200, 13, // Skip to: 13781
/* 10253 */   MCD::OPC_Decode, 157, 2, 163, 1, // Opcode: BMNZ_V
/* 10258 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10271
/* 10262 */   MCD::OPC_CheckPredicate, 10, 187, 13, // Skip to: 13781
/* 10266 */   MCD::OPC_Decode, 159, 2, 163, 1, // Opcode: BMZ_V
/* 10271 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10284
/* 10275 */   MCD::OPC_CheckPredicate, 10, 174, 13, // Skip to: 13781
/* 10279 */   MCD::OPC_Decode, 196, 2, 163, 1, // Opcode: BSEL_V
/* 10284 */   MCD::OPC_FilterValue, 24, 211, 0, // Skip to: 10499
/* 10288 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10291 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10304
/* 10295 */   MCD::OPC_CheckPredicate, 10, 154, 13, // Skip to: 13781
/* 10299 */   MCD::OPC_Decode, 145, 6, 203, 1, // Opcode: FILL_B
/* 10304 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10317
/* 10308 */   MCD::OPC_CheckPredicate, 10, 141, 13, // Skip to: 13781
/* 10312 */   MCD::OPC_Decode, 149, 6, 204, 1, // Opcode: FILL_H
/* 10317 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10330
/* 10321 */   MCD::OPC_CheckPredicate, 10, 128, 13, // Skip to: 13781
/* 10325 */   MCD::OPC_Decode, 150, 6, 205, 1, // Opcode: FILL_W
/* 10330 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10343
/* 10334 */   MCD::OPC_CheckPredicate, 17, 115, 13, // Skip to: 13781
/* 10338 */   MCD::OPC_Decode, 146, 6, 206, 1, // Opcode: FILL_D
/* 10343 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10356
/* 10347 */   MCD::OPC_CheckPredicate, 10, 102, 13, // Skip to: 13781
/* 10351 */   MCD::OPC_Decode, 220, 10, 195, 1, // Opcode: PCNT_B
/* 10356 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10369
/* 10360 */   MCD::OPC_CheckPredicate, 10, 89, 13, // Skip to: 13781
/* 10364 */   MCD::OPC_Decode, 222, 10, 207, 1, // Opcode: PCNT_H
/* 10369 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10382
/* 10373 */   MCD::OPC_CheckPredicate, 10, 76, 13, // Skip to: 13781
/* 10377 */   MCD::OPC_Decode, 223, 10, 208, 1, // Opcode: PCNT_W
/* 10382 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10395
/* 10386 */   MCD::OPC_CheckPredicate, 10, 63, 13, // Skip to: 13781
/* 10390 */   MCD::OPC_Decode, 221, 10, 209, 1, // Opcode: PCNT_D
/* 10395 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10408
/* 10399 */   MCD::OPC_CheckPredicate, 10, 50, 13, // Skip to: 13781
/* 10403 */   MCD::OPC_Decode, 163, 10, 195, 1, // Opcode: NLOC_B
/* 10408 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10421
/* 10412 */   MCD::OPC_CheckPredicate, 10, 37, 13, // Skip to: 13781
/* 10416 */   MCD::OPC_Decode, 165, 10, 207, 1, // Opcode: NLOC_H
/* 10421 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10434
/* 10425 */   MCD::OPC_CheckPredicate, 10, 24, 13, // Skip to: 13781
/* 10429 */   MCD::OPC_Decode, 166, 10, 208, 1, // Opcode: NLOC_W
/* 10434 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10447
/* 10438 */   MCD::OPC_CheckPredicate, 10, 11, 13, // Skip to: 13781
/* 10442 */   MCD::OPC_Decode, 164, 10, 209, 1, // Opcode: NLOC_D
/* 10447 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10460
/* 10451 */   MCD::OPC_CheckPredicate, 10, 254, 12, // Skip to: 13781
/* 10455 */   MCD::OPC_Decode, 167, 10, 195, 1, // Opcode: NLZC_B
/* 10460 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10473
/* 10464 */   MCD::OPC_CheckPredicate, 10, 241, 12, // Skip to: 13781
/* 10468 */   MCD::OPC_Decode, 169, 10, 207, 1, // Opcode: NLZC_H
/* 10473 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10486
/* 10477 */   MCD::OPC_CheckPredicate, 10, 228, 12, // Skip to: 13781
/* 10481 */   MCD::OPC_Decode, 170, 10, 208, 1, // Opcode: NLZC_W
/* 10486 */   MCD::OPC_FilterValue, 15, 219, 12, // Skip to: 13781
/* 10490 */   MCD::OPC_CheckPredicate, 10, 215, 12, // Skip to: 13781
/* 10494 */   MCD::OPC_Decode, 168, 10, 209, 1, // Opcode: NLZC_D
/* 10499 */   MCD::OPC_FilterValue, 25, 206, 12, // Skip to: 13781
/* 10503 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10506 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10519
/* 10510 */   MCD::OPC_CheckPredicate, 10, 195, 12, // Skip to: 13781
/* 10514 */   MCD::OPC_Decode, 224, 5, 208, 1, // Opcode: FCLASS_W
/* 10519 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10532
/* 10523 */   MCD::OPC_CheckPredicate, 10, 182, 12, // Skip to: 13781
/* 10527 */   MCD::OPC_Decode, 223, 5, 209, 1, // Opcode: FCLASS_D
/* 10532 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10545
/* 10536 */   MCD::OPC_CheckPredicate, 10, 169, 12, // Skip to: 13781
/* 10540 */   MCD::OPC_Decode, 238, 6, 208, 1, // Opcode: FTRUNC_S_W
/* 10545 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10558
/* 10549 */   MCD::OPC_CheckPredicate, 10, 156, 12, // Skip to: 13781
/* 10553 */   MCD::OPC_Decode, 237, 6, 209, 1, // Opcode: FTRUNC_S_D
/* 10558 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10571
/* 10562 */   MCD::OPC_CheckPredicate, 10, 143, 12, // Skip to: 13781
/* 10566 */   MCD::OPC_Decode, 240, 6, 208, 1, // Opcode: FTRUNC_U_W
/* 10571 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10584
/* 10575 */   MCD::OPC_CheckPredicate, 10, 130, 12, // Skip to: 13781
/* 10579 */   MCD::OPC_Decode, 239, 6, 209, 1, // Opcode: FTRUNC_U_D
/* 10584 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10597
/* 10588 */   MCD::OPC_CheckPredicate, 10, 117, 12, // Skip to: 13781
/* 10592 */   MCD::OPC_Decode, 213, 6, 208, 1, // Opcode: FSQRT_W
/* 10597 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10610
/* 10601 */   MCD::OPC_CheckPredicate, 10, 104, 12, // Skip to: 13781
/* 10605 */   MCD::OPC_Decode, 207, 6, 209, 1, // Opcode: FSQRT_D
/* 10610 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10623
/* 10614 */   MCD::OPC_CheckPredicate, 10, 91, 12, // Skip to: 13781
/* 10618 */   MCD::OPC_Decode, 194, 6, 208, 1, // Opcode: FRSQRT_W
/* 10623 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10636
/* 10627 */   MCD::OPC_CheckPredicate, 10, 78, 12, // Skip to: 13781
/* 10631 */   MCD::OPC_Decode, 193, 6, 209, 1, // Opcode: FRSQRT_D
/* 10636 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10649
/* 10640 */   MCD::OPC_CheckPredicate, 10, 65, 12, // Skip to: 13781
/* 10644 */   MCD::OPC_Decode, 190, 6, 208, 1, // Opcode: FRCP_W
/* 10649 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10662
/* 10653 */   MCD::OPC_CheckPredicate, 10, 52, 12, // Skip to: 13781
/* 10657 */   MCD::OPC_Decode, 189, 6, 209, 1, // Opcode: FRCP_D
/* 10662 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10675
/* 10666 */   MCD::OPC_CheckPredicate, 10, 39, 12, // Skip to: 13781
/* 10670 */   MCD::OPC_Decode, 192, 6, 208, 1, // Opcode: FRINT_W
/* 10675 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10688
/* 10679 */   MCD::OPC_CheckPredicate, 10, 26, 12, // Skip to: 13781
/* 10683 */   MCD::OPC_Decode, 191, 6, 209, 1, // Opcode: FRINT_D
/* 10688 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10701
/* 10692 */   MCD::OPC_CheckPredicate, 10, 13, 12, // Skip to: 13781
/* 10696 */   MCD::OPC_Decode, 152, 6, 208, 1, // Opcode: FLOG2_W
/* 10701 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10714
/* 10705 */   MCD::OPC_CheckPredicate, 10, 0, 12, // Skip to: 13781
/* 10709 */   MCD::OPC_Decode, 151, 6, 209, 1, // Opcode: FLOG2_D
/* 10714 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10727
/* 10718 */   MCD::OPC_CheckPredicate, 10, 243, 11, // Skip to: 13781
/* 10722 */   MCD::OPC_Decode, 134, 6, 210, 1, // Opcode: FEXUPL_W
/* 10727 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10740
/* 10731 */   MCD::OPC_CheckPredicate, 10, 230, 11, // Skip to: 13781
/* 10735 */   MCD::OPC_Decode, 133, 6, 211, 1, // Opcode: FEXUPL_D
/* 10740 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10753
/* 10744 */   MCD::OPC_CheckPredicate, 10, 217, 11, // Skip to: 13781
/* 10748 */   MCD::OPC_Decode, 136, 6, 210, 1, // Opcode: FEXUPR_W
/* 10753 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10766
/* 10757 */   MCD::OPC_CheckPredicate, 10, 204, 11, // Skip to: 13781
/* 10761 */   MCD::OPC_Decode, 135, 6, 211, 1, // Opcode: FEXUPR_D
/* 10766 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10779
/* 10770 */   MCD::OPC_CheckPredicate, 10, 191, 11, // Skip to: 13781
/* 10774 */   MCD::OPC_Decode, 142, 6, 210, 1, // Opcode: FFQL_W
/* 10779 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10792
/* 10783 */   MCD::OPC_CheckPredicate, 10, 178, 11, // Skip to: 13781
/* 10787 */   MCD::OPC_Decode, 141, 6, 211, 1, // Opcode: FFQL_D
/* 10792 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10805
/* 10796 */   MCD::OPC_CheckPredicate, 10, 165, 11, // Skip to: 13781
/* 10800 */   MCD::OPC_Decode, 144, 6, 210, 1, // Opcode: FFQR_W
/* 10805 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10818
/* 10809 */   MCD::OPC_CheckPredicate, 10, 152, 11, // Skip to: 13781
/* 10813 */   MCD::OPC_Decode, 143, 6, 211, 1, // Opcode: FFQR_D
/* 10818 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10831
/* 10822 */   MCD::OPC_CheckPredicate, 10, 139, 11, // Skip to: 13781
/* 10826 */   MCD::OPC_Decode, 232, 6, 208, 1, // Opcode: FTINT_S_W
/* 10831 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10844
/* 10835 */   MCD::OPC_CheckPredicate, 10, 126, 11, // Skip to: 13781
/* 10839 */   MCD::OPC_Decode, 231, 6, 209, 1, // Opcode: FTINT_S_D
/* 10844 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10857
/* 10848 */   MCD::OPC_CheckPredicate, 10, 113, 11, // Skip to: 13781
/* 10852 */   MCD::OPC_Decode, 234, 6, 208, 1, // Opcode: FTINT_U_W
/* 10857 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10870
/* 10861 */   MCD::OPC_CheckPredicate, 10, 100, 11, // Skip to: 13781
/* 10865 */   MCD::OPC_Decode, 233, 6, 209, 1, // Opcode: FTINT_U_D
/* 10870 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10883
/* 10874 */   MCD::OPC_CheckPredicate, 10, 87, 11, // Skip to: 13781
/* 10878 */   MCD::OPC_Decode, 138, 6, 208, 1, // Opcode: FFINT_S_W
/* 10883 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10896
/* 10887 */   MCD::OPC_CheckPredicate, 10, 74, 11, // Skip to: 13781
/* 10891 */   MCD::OPC_Decode, 137, 6, 209, 1, // Opcode: FFINT_S_D
/* 10896 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10909
/* 10900 */   MCD::OPC_CheckPredicate, 10, 61, 11, // Skip to: 13781
/* 10904 */   MCD::OPC_Decode, 140, 6, 208, 1, // Opcode: FFINT_U_W
/* 10909 */   MCD::OPC_FilterValue, 31, 52, 11, // Skip to: 13781
/* 10913 */   MCD::OPC_CheckPredicate, 10, 48, 11, // Skip to: 13781
/* 10917 */   MCD::OPC_Decode, 139, 6, 209, 1, // Opcode: FFINT_U_D
/* 10922 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 10935
/* 10926 */   MCD::OPC_CheckPredicate, 10, 35, 11, // Skip to: 13781
/* 10930 */   MCD::OPC_Decode, 227, 7, 212, 1, // Opcode: LD_B
/* 10935 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 10948
/* 10939 */   MCD::OPC_CheckPredicate, 10, 22, 11, // Skip to: 13781
/* 10943 */   MCD::OPC_Decode, 229, 7, 212, 1, // Opcode: LD_H
/* 10948 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 10961
/* 10952 */   MCD::OPC_CheckPredicate, 10, 9, 11, // Skip to: 13781
/* 10956 */   MCD::OPC_Decode, 230, 7, 212, 1, // Opcode: LD_W
/* 10961 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 10974
/* 10965 */   MCD::OPC_CheckPredicate, 10, 252, 10, // Skip to: 13781
/* 10969 */   MCD::OPC_Decode, 228, 7, 212, 1, // Opcode: LD_D
/* 10974 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 10987
/* 10978 */   MCD::OPC_CheckPredicate, 10, 239, 10, // Skip to: 13781
/* 10982 */   MCD::OPC_Decode, 255, 12, 212, 1, // Opcode: ST_B
/* 10987 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 11000
/* 10991 */   MCD::OPC_CheckPredicate, 10, 226, 10, // Skip to: 13781
/* 10995 */   MCD::OPC_Decode, 129, 13, 212, 1, // Opcode: ST_H
/* 11000 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 11013
/* 11004 */   MCD::OPC_CheckPredicate, 10, 213, 10, // Skip to: 13781
/* 11008 */   MCD::OPC_Decode, 130, 13, 212, 1, // Opcode: ST_W
/* 11013 */   MCD::OPC_FilterValue, 39, 204, 10, // Skip to: 13781
/* 11017 */   MCD::OPC_CheckPredicate, 10, 200, 10, // Skip to: 13781
/* 11021 */   MCD::OPC_Decode, 128, 13, 212, 1, // Opcode: ST_D
/* 11026 */   MCD::OPC_FilterValue, 31, 135, 9, // Skip to: 13469
/* 11030 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 11033 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11046
/* 11037 */   MCD::OPC_CheckPredicate, 8, 180, 10, // Skip to: 13781
/* 11041 */   MCD::OPC_Decode, 187, 5, 213, 1, // Opcode: EXT
/* 11046 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11059
/* 11050 */   MCD::OPC_CheckPredicate, 8, 167, 10, // Skip to: 13781
/* 11054 */   MCD::OPC_Decode, 142, 7, 214, 1, // Opcode: INS
/* 11059 */   MCD::OPC_FilterValue, 10, 42, 0, // Skip to: 11105
/* 11063 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11066 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11079
/* 11070 */   MCD::OPC_CheckPredicate, 15, 147, 10, // Skip to: 13781
/* 11074 */   MCD::OPC_Decode, 160, 8, 215, 1, // Opcode: LWX
/* 11079 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11092
/* 11083 */   MCD::OPC_CheckPredicate, 15, 134, 10, // Skip to: 13781
/* 11087 */   MCD::OPC_Decode, 237, 7, 215, 1, // Opcode: LHX
/* 11092 */   MCD::OPC_FilterValue, 6, 125, 10, // Skip to: 13781
/* 11096 */   MCD::OPC_CheckPredicate, 15, 121, 10, // Skip to: 13781
/* 11100 */   MCD::OPC_Decode, 206, 7, 215, 1, // Opcode: LBUX
/* 11105 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11124
/* 11109 */   MCD::OPC_CheckPredicate, 15, 108, 10, // Skip to: 13781
/* 11113 */   MCD::OPC_CheckField, 6, 10, 0, 102, 10, // Skip to: 13781
/* 11119 */   MCD::OPC_Decode, 161, 7, 216, 1, // Opcode: INSV
/* 11124 */   MCD::OPC_FilterValue, 16, 51, 1, // Skip to: 11435
/* 11128 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11131 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 11143
/* 11135 */   MCD::OPC_CheckPredicate, 15, 82, 10, // Skip to: 13781
/* 11139 */   MCD::OPC_Decode, 60, 217, 1, // Opcode: ADDU_QB
/* 11143 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11156
/* 11147 */   MCD::OPC_CheckPredicate, 15, 70, 10, // Skip to: 13781
/* 11151 */   MCD::OPC_Decode, 160, 13, 217, 1, // Opcode: SUBU_QB
/* 11156 */   MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 11168
/* 11160 */   MCD::OPC_CheckPredicate, 15, 57, 10, // Skip to: 13781
/* 11164 */   MCD::OPC_Decode, 62, 217, 1, // Opcode: ADDU_S_QB
/* 11168 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11181
/* 11172 */   MCD::OPC_CheckPredicate, 15, 45, 10, // Skip to: 13781
/* 11176 */   MCD::OPC_Decode, 162, 13, 217, 1, // Opcode: SUBU_S_QB
/* 11181 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11194
/* 11185 */   MCD::OPC_CheckPredicate, 15, 32, 10, // Skip to: 13781
/* 11189 */   MCD::OPC_Decode, 254, 9, 217, 1, // Opcode: MULEU_S_PH_QBL
/* 11194 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11207
/* 11198 */   MCD::OPC_CheckPredicate, 15, 19, 10, // Skip to: 13781
/* 11202 */   MCD::OPC_Decode, 255, 9, 217, 1, // Opcode: MULEU_S_PH_QBR
/* 11207 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 11219
/* 11211 */   MCD::OPC_CheckPredicate, 39, 6, 10, // Skip to: 13781
/* 11215 */   MCD::OPC_Decode, 59, 217, 1, // Opcode: ADDU_PH
/* 11219 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11232
/* 11223 */   MCD::OPC_CheckPredicate, 39, 250, 9, // Skip to: 13781
/* 11227 */   MCD::OPC_Decode, 159, 13, 217, 1, // Opcode: SUBU_PH
/* 11232 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 11244
/* 11236 */   MCD::OPC_CheckPredicate, 15, 237, 9, // Skip to: 13781
/* 11240 */   MCD::OPC_Decode, 39, 217, 1, // Opcode: ADDQ_PH
/* 11244 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11257
/* 11248 */   MCD::OPC_CheckPredicate, 15, 225, 9, // Skip to: 13781
/* 11252 */   MCD::OPC_Decode, 136, 13, 217, 1, // Opcode: SUBQ_PH
/* 11257 */   MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 11269
/* 11261 */   MCD::OPC_CheckPredicate, 39, 212, 9, // Skip to: 13781
/* 11265 */   MCD::OPC_Decode, 61, 217, 1, // Opcode: ADDU_S_PH
/* 11269 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11282
/* 11273 */   MCD::OPC_CheckPredicate, 39, 200, 9, // Skip to: 13781
/* 11277 */   MCD::OPC_Decode, 161, 13, 217, 1, // Opcode: SUBU_S_PH
/* 11282 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 11294
/* 11286 */   MCD::OPC_CheckPredicate, 15, 187, 9, // Skip to: 13781
/* 11290 */   MCD::OPC_Decode, 40, 217, 1, // Opcode: ADDQ_S_PH
/* 11294 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11307
/* 11298 */   MCD::OPC_CheckPredicate, 15, 175, 9, // Skip to: 13781
/* 11302 */   MCD::OPC_Decode, 137, 13, 217, 1, // Opcode: SUBQ_S_PH
/* 11307 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 11318
/* 11311 */   MCD::OPC_CheckPredicate, 15, 162, 9, // Skip to: 13781
/* 11315 */   MCD::OPC_Decode, 42, 43, // Opcode: ADDSC
/* 11318 */   MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 11329
/* 11322 */   MCD::OPC_CheckPredicate, 15, 151, 9, // Skip to: 13781
/* 11326 */   MCD::OPC_Decode, 71, 43, // Opcode: ADDWC
/* 11329 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 11341
/* 11333 */   MCD::OPC_CheckPredicate, 15, 140, 9, // Skip to: 13781
/* 11337 */   MCD::OPC_Decode, 149, 9, 43, // Opcode: MODSUB
/* 11341 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 11360
/* 11345 */   MCD::OPC_CheckPredicate, 15, 128, 9, // Skip to: 13781
/* 11349 */   MCD::OPC_CheckField, 16, 5, 0, 122, 9, // Skip to: 13781
/* 11355 */   MCD::OPC_Decode, 172, 11, 218, 1, // Opcode: RADDU_W_QB
/* 11360 */   MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 11371
/* 11364 */   MCD::OPC_CheckPredicate, 15, 109, 9, // Skip to: 13781
/* 11368 */   MCD::OPC_Decode, 41, 43, // Opcode: ADDQ_S_W
/* 11371 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 11383
/* 11375 */   MCD::OPC_CheckPredicate, 15, 98, 9, // Skip to: 13781
/* 11379 */   MCD::OPC_Decode, 138, 13, 43, // Opcode: SUBQ_S_W
/* 11383 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11396
/* 11387 */   MCD::OPC_CheckPredicate, 15, 86, 9, // Skip to: 13781
/* 11391 */   MCD::OPC_Decode, 252, 9, 219, 1, // Opcode: MULEQ_S_W_PHL
/* 11396 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 11409
/* 11400 */   MCD::OPC_CheckPredicate, 15, 73, 9, // Skip to: 13781
/* 11404 */   MCD::OPC_Decode, 253, 9, 219, 1, // Opcode: MULEQ_S_W_PHR
/* 11409 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11422
/* 11413 */   MCD::OPC_CheckPredicate, 39, 60, 9, // Skip to: 13781
/* 11417 */   MCD::OPC_Decode, 130, 10, 217, 1, // Opcode: MULQ_S_PH
/* 11422 */   MCD::OPC_FilterValue, 31, 51, 9, // Skip to: 13781
/* 11426 */   MCD::OPC_CheckPredicate, 15, 47, 9, // Skip to: 13781
/* 11430 */   MCD::OPC_Decode, 128, 10, 217, 1, // Opcode: MULQ_RS_PH
/* 11435 */   MCD::OPC_FilterValue, 17, 69, 1, // Skip to: 11764
/* 11439 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11442 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 11461
/* 11446 */   MCD::OPC_CheckPredicate, 15, 27, 9, // Skip to: 13781
/* 11450 */   MCD::OPC_CheckField, 11, 5, 0, 21, 9, // Skip to: 13781
/* 11456 */   MCD::OPC_Decode, 183, 3, 220, 1, // Opcode: CMPU_EQ_QB
/* 11461 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 11480
/* 11465 */   MCD::OPC_CheckPredicate, 15, 8, 9, // Skip to: 13781
/* 11469 */   MCD::OPC_CheckField, 11, 5, 0, 2, 9, // Skip to: 13781
/* 11475 */   MCD::OPC_Decode, 185, 3, 220, 1, // Opcode: CMPU_LT_QB
/* 11480 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 11499
/* 11484 */   MCD::OPC_CheckPredicate, 15, 245, 8, // Skip to: 13781
/* 11488 */   MCD::OPC_CheckField, 11, 5, 0, 239, 8, // Skip to: 13781
/* 11494 */   MCD::OPC_Decode, 184, 3, 220, 1, // Opcode: CMPU_LE_QB
/* 11499 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11512
/* 11503 */   MCD::OPC_CheckPredicate, 15, 226, 8, // Skip to: 13781
/* 11507 */   MCD::OPC_Decode, 225, 10, 217, 1, // Opcode: PICK_QB
/* 11512 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11525
/* 11516 */   MCD::OPC_CheckPredicate, 15, 213, 8, // Skip to: 13781
/* 11520 */   MCD::OPC_Decode, 180, 3, 219, 1, // Opcode: CMPGU_EQ_QB
/* 11525 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11538
/* 11529 */   MCD::OPC_CheckPredicate, 15, 200, 8, // Skip to: 13781
/* 11533 */   MCD::OPC_Decode, 182, 3, 219, 1, // Opcode: CMPGU_LT_QB
/* 11538 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11551
/* 11542 */   MCD::OPC_CheckPredicate, 15, 187, 8, // Skip to: 13781
/* 11546 */   MCD::OPC_Decode, 181, 3, 219, 1, // Opcode: CMPGU_LE_QB
/* 11551 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 11570
/* 11555 */   MCD::OPC_CheckPredicate, 15, 174, 8, // Skip to: 13781
/* 11559 */   MCD::OPC_CheckField, 11, 5, 0, 168, 8, // Skip to: 13781
/* 11565 */   MCD::OPC_Decode, 187, 3, 220, 1, // Opcode: CMP_EQ_PH
/* 11570 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 11589
/* 11574 */   MCD::OPC_CheckPredicate, 15, 155, 8, // Skip to: 13781
/* 11578 */   MCD::OPC_CheckField, 11, 5, 0, 149, 8, // Skip to: 13781
/* 11584 */   MCD::OPC_Decode, 195, 3, 220, 1, // Opcode: CMP_LT_PH
/* 11589 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 11608
/* 11593 */   MCD::OPC_CheckPredicate, 15, 136, 8, // Skip to: 13781
/* 11597 */   MCD::OPC_CheckField, 11, 5, 0, 130, 8, // Skip to: 13781
/* 11603 */   MCD::OPC_Decode, 192, 3, 220, 1, // Opcode: CMP_LE_PH
/* 11608 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11621
/* 11612 */   MCD::OPC_CheckPredicate, 15, 117, 8, // Skip to: 13781
/* 11616 */   MCD::OPC_Decode, 224, 10, 217, 1, // Opcode: PICK_PH
/* 11621 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11634
/* 11625 */   MCD::OPC_CheckPredicate, 15, 104, 8, // Skip to: 13781
/* 11629 */   MCD::OPC_Decode, 239, 10, 217, 1, // Opcode: PRECRQ_QB_PH
/* 11634 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11647
/* 11638 */   MCD::OPC_CheckPredicate, 39, 91, 8, // Skip to: 13781
/* 11642 */   MCD::OPC_Decode, 241, 10, 217, 1, // Opcode: PRECR_QB_PH
/* 11647 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11660
/* 11651 */   MCD::OPC_CheckPredicate, 15, 78, 8, // Skip to: 13781
/* 11655 */   MCD::OPC_Decode, 209, 10, 217, 1, // Opcode: PACKRL_PH
/* 11660 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11673
/* 11664 */   MCD::OPC_CheckPredicate, 15, 65, 8, // Skip to: 13781
/* 11668 */   MCD::OPC_Decode, 237, 10, 217, 1, // Opcode: PRECRQU_S_QB_PH
/* 11673 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11686
/* 11677 */   MCD::OPC_CheckPredicate, 15, 52, 8, // Skip to: 13781
/* 11681 */   MCD::OPC_Decode, 238, 10, 221, 1, // Opcode: PRECRQ_PH_W
/* 11686 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11699
/* 11690 */   MCD::OPC_CheckPredicate, 15, 39, 8, // Skip to: 13781
/* 11694 */   MCD::OPC_Decode, 240, 10, 221, 1, // Opcode: PRECRQ_RS_PH_W
/* 11699 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11712
/* 11703 */   MCD::OPC_CheckPredicate, 39, 26, 8, // Skip to: 13781
/* 11707 */   MCD::OPC_Decode, 177, 3, 219, 1, // Opcode: CMPGDU_EQ_QB
/* 11712 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11725
/* 11716 */   MCD::OPC_CheckPredicate, 39, 13, 8, // Skip to: 13781
/* 11720 */   MCD::OPC_Decode, 179, 3, 219, 1, // Opcode: CMPGDU_LT_QB
/* 11725 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11738
/* 11729 */   MCD::OPC_CheckPredicate, 39, 0, 8, // Skip to: 13781
/* 11733 */   MCD::OPC_Decode, 178, 3, 219, 1, // Opcode: CMPGDU_LE_QB
/* 11738 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11751
/* 11742 */   MCD::OPC_CheckPredicate, 39, 243, 7, // Skip to: 13781
/* 11746 */   MCD::OPC_Decode, 242, 10, 222, 1, // Opcode: PRECR_SRA_PH_W
/* 11751 */   MCD::OPC_FilterValue, 31, 234, 7, // Skip to: 13781
/* 11755 */   MCD::OPC_CheckPredicate, 39, 230, 7, // Skip to: 13781
/* 11759 */   MCD::OPC_Decode, 243, 10, 222, 1, // Opcode: PRECR_SRA_R_PH_W
/* 11764 */   MCD::OPC_FilterValue, 18, 74, 1, // Skip to: 12098
/* 11768 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11771 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 11789
/* 11775 */   MCD::OPC_CheckPredicate, 39, 210, 7, // Skip to: 13781
/* 11779 */   MCD::OPC_CheckField, 21, 5, 0, 204, 7, // Skip to: 13781
/* 11785 */   MCD::OPC_Decode, 24, 223, 1, // Opcode: ABSQ_S_QB
/* 11789 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11802
/* 11793 */   MCD::OPC_CheckPredicate, 15, 192, 7, // Skip to: 13781
/* 11797 */   MCD::OPC_Decode, 180, 11, 224, 1, // Opcode: REPL_QB
/* 11802 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 11821
/* 11806 */   MCD::OPC_CheckPredicate, 15, 179, 7, // Skip to: 13781
/* 11810 */   MCD::OPC_CheckField, 21, 5, 0, 173, 7, // Skip to: 13781
/* 11816 */   MCD::OPC_Decode, 178, 11, 225, 1, // Opcode: REPLV_QB
/* 11821 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 11840
/* 11825 */   MCD::OPC_CheckPredicate, 15, 160, 7, // Skip to: 13781
/* 11829 */   MCD::OPC_CheckField, 21, 5, 0, 154, 7, // Skip to: 13781
/* 11835 */   MCD::OPC_Decode, 227, 10, 223, 1, // Opcode: PRECEQU_PH_QBL
/* 11840 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 11859
/* 11844 */   MCD::OPC_CheckPredicate, 15, 141, 7, // Skip to: 13781
/* 11848 */   MCD::OPC_CheckField, 21, 5, 0, 135, 7, // Skip to: 13781
/* 11854 */   MCD::OPC_Decode, 229, 10, 223, 1, // Opcode: PRECEQU_PH_QBR
/* 11859 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 11878
/* 11863 */   MCD::OPC_CheckPredicate, 15, 122, 7, // Skip to: 13781
/* 11867 */   MCD::OPC_CheckField, 21, 5, 0, 116, 7, // Skip to: 13781
/* 11873 */   MCD::OPC_Decode, 228, 10, 223, 1, // Opcode: PRECEQU_PH_QBLA
/* 11878 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 11897
/* 11882 */   MCD::OPC_CheckPredicate, 15, 103, 7, // Skip to: 13781
/* 11886 */   MCD::OPC_CheckField, 21, 5, 0, 97, 7, // Skip to: 13781
/* 11892 */   MCD::OPC_Decode, 230, 10, 223, 1, // Opcode: PRECEQU_PH_QBRA
/* 11897 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 11915
/* 11901 */   MCD::OPC_CheckPredicate, 15, 84, 7, // Skip to: 13781
/* 11905 */   MCD::OPC_CheckField, 21, 5, 0, 78, 7, // Skip to: 13781
/* 11911 */   MCD::OPC_Decode, 23, 223, 1, // Opcode: ABSQ_S_PH
/* 11915 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11928
/* 11919 */   MCD::OPC_CheckPredicate, 15, 66, 7, // Skip to: 13781
/* 11923 */   MCD::OPC_Decode, 179, 11, 224, 1, // Opcode: REPL_PH
/* 11928 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 11947
/* 11932 */   MCD::OPC_CheckPredicate, 15, 53, 7, // Skip to: 13781
/* 11936 */   MCD::OPC_CheckField, 21, 5, 0, 47, 7, // Skip to: 13781
/* 11942 */   MCD::OPC_Decode, 177, 11, 225, 1, // Opcode: REPLV_PH
/* 11947 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11966
/* 11951 */   MCD::OPC_CheckPredicate, 15, 34, 7, // Skip to: 13781
/* 11955 */   MCD::OPC_CheckField, 21, 5, 0, 28, 7, // Skip to: 13781
/* 11961 */   MCD::OPC_Decode, 231, 10, 226, 1, // Opcode: PRECEQ_W_PHL
/* 11966 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 11985
/* 11970 */   MCD::OPC_CheckPredicate, 15, 15, 7, // Skip to: 13781
/* 11974 */   MCD::OPC_CheckField, 21, 5, 0, 9, 7, // Skip to: 13781
/* 11980 */   MCD::OPC_Decode, 232, 10, 226, 1, // Opcode: PRECEQ_W_PHR
/* 11985 */   MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 12003
/* 11989 */   MCD::OPC_CheckPredicate, 15, 252, 6, // Skip to: 13781
/* 11993 */   MCD::OPC_CheckField, 21, 5, 0, 246, 6, // Skip to: 13781
/* 11999 */   MCD::OPC_Decode, 25, 227, 1, // Opcode: ABSQ_S_W
/* 12003 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 12022
/* 12007 */   MCD::OPC_CheckPredicate, 15, 234, 6, // Skip to: 13781
/* 12011 */   MCD::OPC_CheckField, 21, 5, 0, 228, 6, // Skip to: 13781
/* 12017 */   MCD::OPC_Decode, 129, 2, 227, 1, // Opcode: BITREV
/* 12022 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 12041
/* 12026 */   MCD::OPC_CheckPredicate, 15, 215, 6, // Skip to: 13781
/* 12030 */   MCD::OPC_CheckField, 21, 5, 0, 209, 6, // Skip to: 13781
/* 12036 */   MCD::OPC_Decode, 233, 10, 223, 1, // Opcode: PRECEU_PH_QBL
/* 12041 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 12060
/* 12045 */   MCD::OPC_CheckPredicate, 15, 196, 6, // Skip to: 13781
/* 12049 */   MCD::OPC_CheckField, 21, 5, 0, 190, 6, // Skip to: 13781
/* 12055 */   MCD::OPC_Decode, 235, 10, 223, 1, // Opcode: PRECEU_PH_QBR
/* 12060 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 12079
/* 12064 */   MCD::OPC_CheckPredicate, 15, 177, 6, // Skip to: 13781
/* 12068 */   MCD::OPC_CheckField, 21, 5, 0, 171, 6, // Skip to: 13781
/* 12074 */   MCD::OPC_Decode, 234, 10, 223, 1, // Opcode: PRECEU_PH_QBLA
/* 12079 */   MCD::OPC_FilterValue, 31, 162, 6, // Skip to: 13781
/* 12083 */   MCD::OPC_CheckPredicate, 15, 158, 6, // Skip to: 13781
/* 12087 */   MCD::OPC_CheckField, 21, 5, 0, 152, 6, // Skip to: 13781
/* 12093 */   MCD::OPC_Decode, 236, 10, 223, 1, // Opcode: PRECEU_PH_QBRA
/* 12098 */   MCD::OPC_FilterValue, 19, 31, 1, // Skip to: 12389
/* 12102 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12105 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 12118
/* 12109 */   MCD::OPC_CheckPredicate, 15, 132, 6, // Skip to: 13781
/* 12113 */   MCD::OPC_Decode, 139, 12, 228, 1, // Opcode: SHLL_QB
/* 12118 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12131
/* 12122 */   MCD::OPC_CheckPredicate, 15, 119, 6, // Skip to: 13781
/* 12126 */   MCD::OPC_Decode, 155, 12, 228, 1, // Opcode: SHRL_QB
/* 12131 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12144
/* 12135 */   MCD::OPC_CheckPredicate, 15, 106, 6, // Skip to: 13781
/* 12139 */   MCD::OPC_Decode, 135, 12, 229, 1, // Opcode: SHLLV_QB
/* 12144 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12157
/* 12148 */   MCD::OPC_CheckPredicate, 15, 93, 6, // Skip to: 13781
/* 12152 */   MCD::OPC_Decode, 153, 12, 229, 1, // Opcode: SHRLV_QB
/* 12157 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12170
/* 12161 */   MCD::OPC_CheckPredicate, 39, 80, 6, // Skip to: 13781
/* 12165 */   MCD::OPC_Decode, 148, 12, 228, 1, // Opcode: SHRA_QB
/* 12170 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12183
/* 12174 */   MCD::OPC_CheckPredicate, 39, 67, 6, // Skip to: 13781
/* 12178 */   MCD::OPC_Decode, 150, 12, 228, 1, // Opcode: SHRA_R_QB
/* 12183 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12196
/* 12187 */   MCD::OPC_CheckPredicate, 39, 54, 6, // Skip to: 13781
/* 12191 */   MCD::OPC_Decode, 143, 12, 229, 1, // Opcode: SHRAV_QB
/* 12196 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 12209
/* 12200 */   MCD::OPC_CheckPredicate, 39, 41, 6, // Skip to: 13781
/* 12204 */   MCD::OPC_Decode, 145, 12, 229, 1, // Opcode: SHRAV_R_QB
/* 12209 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 12222
/* 12213 */   MCD::OPC_CheckPredicate, 15, 28, 6, // Skip to: 13781
/* 12217 */   MCD::OPC_Decode, 138, 12, 228, 1, // Opcode: SHLL_PH
/* 12222 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12235
/* 12226 */   MCD::OPC_CheckPredicate, 15, 15, 6, // Skip to: 13781
/* 12230 */   MCD::OPC_Decode, 147, 12, 228, 1, // Opcode: SHRA_PH
/* 12235 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 12248
/* 12239 */   MCD::OPC_CheckPredicate, 15, 2, 6, // Skip to: 13781
/* 12243 */   MCD::OPC_Decode, 134, 12, 229, 1, // Opcode: SHLLV_PH
/* 12248 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12261
/* 12252 */   MCD::OPC_CheckPredicate, 15, 245, 5, // Skip to: 13781
/* 12256 */   MCD::OPC_Decode, 142, 12, 229, 1, // Opcode: SHRAV_PH
/* 12261 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12274
/* 12265 */   MCD::OPC_CheckPredicate, 15, 232, 5, // Skip to: 13781
/* 12269 */   MCD::OPC_Decode, 140, 12, 228, 1, // Opcode: SHLL_S_PH
/* 12274 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12287
/* 12278 */   MCD::OPC_CheckPredicate, 15, 219, 5, // Skip to: 13781
/* 12282 */   MCD::OPC_Decode, 149, 12, 228, 1, // Opcode: SHRA_R_PH
/* 12287 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12300
/* 12291 */   MCD::OPC_CheckPredicate, 15, 206, 5, // Skip to: 13781
/* 12295 */   MCD::OPC_Decode, 136, 12, 229, 1, // Opcode: SHLLV_S_PH
/* 12300 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12313
/* 12304 */   MCD::OPC_CheckPredicate, 15, 193, 5, // Skip to: 13781
/* 12308 */   MCD::OPC_Decode, 144, 12, 229, 1, // Opcode: SHRAV_R_PH
/* 12313 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 12326
/* 12317 */   MCD::OPC_CheckPredicate, 15, 180, 5, // Skip to: 13781
/* 12321 */   MCD::OPC_Decode, 141, 12, 230, 1, // Opcode: SHLL_S_W
/* 12326 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 12339
/* 12330 */   MCD::OPC_CheckPredicate, 15, 167, 5, // Skip to: 13781
/* 12334 */   MCD::OPC_Decode, 151, 12, 230, 1, // Opcode: SHRA_R_W
/* 12339 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12351
/* 12343 */   MCD::OPC_CheckPredicate, 15, 154, 5, // Skip to: 13781
/* 12347 */   MCD::OPC_Decode, 137, 12, 44, // Opcode: SHLLV_S_W
/* 12351 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 12363
/* 12355 */   MCD::OPC_CheckPredicate, 15, 142, 5, // Skip to: 13781
/* 12359 */   MCD::OPC_Decode, 146, 12, 44, // Opcode: SHRAV_R_W
/* 12363 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 12376
/* 12367 */   MCD::OPC_CheckPredicate, 39, 130, 5, // Skip to: 13781
/* 12371 */   MCD::OPC_Decode, 154, 12, 228, 1, // Opcode: SHRL_PH
/* 12376 */   MCD::OPC_FilterValue, 27, 121, 5, // Skip to: 13781
/* 12380 */   MCD::OPC_CheckPredicate, 39, 117, 5, // Skip to: 13781
/* 12384 */   MCD::OPC_Decode, 152, 12, 229, 1, // Opcode: SHRLV_PH
/* 12389 */   MCD::OPC_FilterValue, 24, 199, 0, // Skip to: 12592
/* 12393 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12396 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 12408
/* 12400 */   MCD::OPC_CheckPredicate, 39, 97, 5, // Skip to: 13781
/* 12404 */   MCD::OPC_Decode, 56, 217, 1, // Opcode: ADDUH_QB
/* 12408 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12421
/* 12412 */   MCD::OPC_CheckPredicate, 39, 85, 5, // Skip to: 13781
/* 12416 */   MCD::OPC_Decode, 156, 13, 217, 1, // Opcode: SUBUH_QB
/* 12421 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 12433
/* 12425 */   MCD::OPC_CheckPredicate, 39, 72, 5, // Skip to: 13781
/* 12429 */   MCD::OPC_Decode, 57, 217, 1, // Opcode: ADDUH_R_QB
/* 12433 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12446
/* 12437 */   MCD::OPC_CheckPredicate, 39, 60, 5, // Skip to: 13781
/* 12441 */   MCD::OPC_Decode, 157, 13, 217, 1, // Opcode: SUBUH_R_QB
/* 12446 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 12458
/* 12450 */   MCD::OPC_CheckPredicate, 39, 47, 5, // Skip to: 13781
/* 12454 */   MCD::OPC_Decode, 35, 217, 1, // Opcode: ADDQH_PH
/* 12458 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12471
/* 12462 */   MCD::OPC_CheckPredicate, 39, 35, 5, // Skip to: 13781
/* 12466 */   MCD::OPC_Decode, 132, 13, 217, 1, // Opcode: SUBQH_PH
/* 12471 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12483
/* 12475 */   MCD::OPC_CheckPredicate, 39, 22, 5, // Skip to: 13781
/* 12479 */   MCD::OPC_Decode, 36, 217, 1, // Opcode: ADDQH_R_PH
/* 12483 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12496
/* 12487 */   MCD::OPC_CheckPredicate, 39, 10, 5, // Skip to: 13781
/* 12491 */   MCD::OPC_Decode, 133, 13, 217, 1, // Opcode: SUBQH_R_PH
/* 12496 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12509
/* 12500 */   MCD::OPC_CheckPredicate, 39, 253, 4, // Skip to: 13781
/* 12504 */   MCD::OPC_Decode, 150, 10, 217, 1, // Opcode: MUL_PH
/* 12509 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12522
/* 12513 */   MCD::OPC_CheckPredicate, 39, 240, 4, // Skip to: 13781
/* 12517 */   MCD::OPC_Decode, 154, 10, 217, 1, // Opcode: MUL_S_PH
/* 12522 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 12533
/* 12526 */   MCD::OPC_CheckPredicate, 39, 227, 4, // Skip to: 13781
/* 12530 */   MCD::OPC_Decode, 38, 43, // Opcode: ADDQH_W
/* 12533 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 12545
/* 12537 */   MCD::OPC_CheckPredicate, 39, 216, 4, // Skip to: 13781
/* 12541 */   MCD::OPC_Decode, 135, 13, 43, // Opcode: SUBQH_W
/* 12545 */   MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 12556
/* 12549 */   MCD::OPC_CheckPredicate, 39, 204, 4, // Skip to: 13781
/* 12553 */   MCD::OPC_Decode, 37, 43, // Opcode: ADDQH_R_W
/* 12556 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 12568
/* 12560 */   MCD::OPC_CheckPredicate, 39, 193, 4, // Skip to: 13781
/* 12564 */   MCD::OPC_Decode, 134, 13, 43, // Opcode: SUBQH_R_W
/* 12568 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12580
/* 12572 */   MCD::OPC_CheckPredicate, 39, 181, 4, // Skip to: 13781
/* 12576 */   MCD::OPC_Decode, 131, 10, 43, // Opcode: MULQ_S_W
/* 12580 */   MCD::OPC_FilterValue, 23, 173, 4, // Skip to: 13781
/* 12584 */   MCD::OPC_CheckPredicate, 39, 169, 4, // Skip to: 13781
/* 12588 */   MCD::OPC_Decode, 129, 10, 43, // Opcode: MULQ_RS_W
/* 12592 */   MCD::OPC_FilterValue, 32, 60, 0, // Skip to: 12656
/* 12596 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12599 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 12618
/* 12603 */   MCD::OPC_CheckPredicate, 8, 150, 4, // Skip to: 13781
/* 12607 */   MCD::OPC_CheckField, 21, 5, 0, 144, 4, // Skip to: 13781
/* 12613 */   MCD::OPC_Decode, 181, 14, 227, 1, // Opcode: WSBH
/* 12618 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 12637
/* 12622 */   MCD::OPC_CheckPredicate, 8, 131, 4, // Skip to: 13781
/* 12626 */   MCD::OPC_CheckField, 21, 5, 0, 125, 4, // Skip to: 13781
/* 12632 */   MCD::OPC_Decode, 232, 11, 227, 1, // Opcode: SEB
/* 12637 */   MCD::OPC_FilterValue, 24, 116, 4, // Skip to: 13781
/* 12641 */   MCD::OPC_CheckPredicate, 8, 112, 4, // Skip to: 13781
/* 12645 */   MCD::OPC_CheckField, 21, 5, 0, 106, 4, // Skip to: 13781
/* 12651 */   MCD::OPC_Decode, 236, 11, 227, 1, // Opcode: SEH
/* 12656 */   MCD::OPC_FilterValue, 48, 165, 1, // Skip to: 13081
/* 12660 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12663 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 12682
/* 12667 */   MCD::OPC_CheckPredicate, 39, 86, 4, // Skip to: 13781
/* 12671 */   MCD::OPC_CheckField, 13, 3, 0, 80, 4, // Skip to: 13781
/* 12677 */   MCD::OPC_Decode, 139, 5, 138, 1, // Opcode: DPA_W_PH
/* 12682 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 12701
/* 12686 */   MCD::OPC_CheckPredicate, 39, 67, 4, // Skip to: 13781
/* 12690 */   MCD::OPC_CheckField, 13, 3, 0, 61, 4, // Skip to: 13781
/* 12696 */   MCD::OPC_Decode, 154, 5, 138, 1, // Opcode: DPS_W_PH
/* 12701 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 12720
/* 12705 */   MCD::OPC_CheckPredicate, 39, 48, 4, // Skip to: 13781
/* 12709 */   MCD::OPC_CheckField, 13, 3, 0, 42, 4, // Skip to: 13781
/* 12715 */   MCD::OPC_Decode, 135, 10, 138, 1, // Opcode: MULSA_W_PH
/* 12720 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 12739
/* 12724 */   MCD::OPC_CheckPredicate, 15, 29, 4, // Skip to: 13781
/* 12728 */   MCD::OPC_CheckField, 13, 3, 0, 23, 4, // Skip to: 13781
/* 12734 */   MCD::OPC_Decode, 136, 5, 138, 1, // Opcode: DPAU_H_QBL
/* 12739 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 12758
/* 12743 */   MCD::OPC_CheckPredicate, 15, 10, 4, // Skip to: 13781
/* 12747 */   MCD::OPC_CheckField, 13, 3, 0, 4, 4, // Skip to: 13781
/* 12753 */   MCD::OPC_Decode, 135, 5, 138, 1, // Opcode: DPAQ_S_W_PH
/* 12758 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 12777
/* 12762 */   MCD::OPC_CheckPredicate, 15, 247, 3, // Skip to: 13781
/* 12766 */   MCD::OPC_CheckField, 13, 3, 0, 241, 3, // Skip to: 13781
/* 12772 */   MCD::OPC_Decode, 144, 5, 138, 1, // Opcode: DPSQ_S_W_PH
/* 12777 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 12796
/* 12781 */   MCD::OPC_CheckPredicate, 15, 228, 3, // Skip to: 13781
/* 12785 */   MCD::OPC_CheckField, 13, 3, 0, 222, 3, // Skip to: 13781
/* 12791 */   MCD::OPC_Decode, 134, 10, 138, 1, // Opcode: MULSAQ_S_W_PH
/* 12796 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 12815
/* 12800 */   MCD::OPC_CheckPredicate, 15, 209, 3, // Skip to: 13781
/* 12804 */   MCD::OPC_CheckField, 13, 3, 0, 203, 3, // Skip to: 13781
/* 12810 */   MCD::OPC_Decode, 137, 5, 138, 1, // Opcode: DPAU_H_QBR
/* 12815 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 12834
/* 12819 */   MCD::OPC_CheckPredicate, 39, 190, 3, // Skip to: 13781
/* 12823 */   MCD::OPC_CheckField, 13, 3, 0, 184, 3, // Skip to: 13781
/* 12829 */   MCD::OPC_Decode, 138, 5, 138, 1, // Opcode: DPAX_W_PH
/* 12834 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 12853
/* 12838 */   MCD::OPC_CheckPredicate, 39, 171, 3, // Skip to: 13781
/* 12842 */   MCD::OPC_CheckField, 13, 3, 0, 165, 3, // Skip to: 13781
/* 12848 */   MCD::OPC_Decode, 153, 5, 138, 1, // Opcode: DPSX_W_PH
/* 12853 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 12872
/* 12857 */   MCD::OPC_CheckPredicate, 15, 152, 3, // Skip to: 13781
/* 12861 */   MCD::OPC_CheckField, 13, 3, 0, 146, 3, // Skip to: 13781
/* 12867 */   MCD::OPC_Decode, 151, 5, 138, 1, // Opcode: DPSU_H_QBL
/* 12872 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 12891
/* 12876 */   MCD::OPC_CheckPredicate, 15, 133, 3, // Skip to: 13781
/* 12880 */   MCD::OPC_CheckField, 13, 3, 0, 127, 3, // Skip to: 13781
/* 12886 */   MCD::OPC_Decode, 134, 5, 138, 1, // Opcode: DPAQ_SA_L_W
/* 12891 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 12910
/* 12895 */   MCD::OPC_CheckPredicate, 15, 114, 3, // Skip to: 13781
/* 12899 */   MCD::OPC_CheckField, 13, 3, 0, 108, 3, // Skip to: 13781
/* 12905 */   MCD::OPC_Decode, 143, 5, 138, 1, // Opcode: DPSQ_SA_L_W
/* 12910 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 12929
/* 12914 */   MCD::OPC_CheckPredicate, 15, 95, 3, // Skip to: 13781
/* 12918 */   MCD::OPC_CheckField, 13, 3, 0, 89, 3, // Skip to: 13781
/* 12924 */   MCD::OPC_Decode, 152, 5, 138, 1, // Opcode: DPSU_H_QBR
/* 12929 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 12948
/* 12933 */   MCD::OPC_CheckPredicate, 15, 76, 3, // Skip to: 13781
/* 12937 */   MCD::OPC_CheckField, 13, 3, 0, 70, 3, // Skip to: 13781
/* 12943 */   MCD::OPC_Decode, 205, 8, 138, 1, // Opcode: MAQ_SA_W_PHL
/* 12948 */   MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 12967
/* 12952 */   MCD::OPC_CheckPredicate, 15, 57, 3, // Skip to: 13781
/* 12956 */   MCD::OPC_CheckField, 13, 3, 0, 51, 3, // Skip to: 13781
/* 12962 */   MCD::OPC_Decode, 206, 8, 138, 1, // Opcode: MAQ_SA_W_PHR
/* 12967 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 12986
/* 12971 */   MCD::OPC_CheckPredicate, 15, 38, 3, // Skip to: 13781
/* 12975 */   MCD::OPC_CheckField, 13, 3, 0, 32, 3, // Skip to: 13781
/* 12981 */   MCD::OPC_Decode, 207, 8, 138, 1, // Opcode: MAQ_S_W_PHL
/* 12986 */   MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 13005
/* 12990 */   MCD::OPC_CheckPredicate, 15, 19, 3, // Skip to: 13781
/* 12994 */   MCD::OPC_CheckField, 13, 3, 0, 13, 3, // Skip to: 13781
/* 13000 */   MCD::OPC_Decode, 208, 8, 138, 1, // Opcode: MAQ_S_W_PHR
/* 13005 */   MCD::OPC_FilterValue, 24, 15, 0, // Skip to: 13024
/* 13009 */   MCD::OPC_CheckPredicate, 39, 0, 3, // Skip to: 13781
/* 13013 */   MCD::OPC_CheckField, 13, 3, 0, 250, 2, // Skip to: 13781
/* 13019 */   MCD::OPC_Decode, 133, 5, 138, 1, // Opcode: DPAQX_S_W_PH
/* 13024 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 13043
/* 13028 */   MCD::OPC_CheckPredicate, 39, 237, 2, // Skip to: 13781
/* 13032 */   MCD::OPC_CheckField, 13, 3, 0, 231, 2, // Skip to: 13781
/* 13038 */   MCD::OPC_Decode, 142, 5, 138, 1, // Opcode: DPSQX_S_W_PH
/* 13043 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13062
/* 13047 */   MCD::OPC_CheckPredicate, 39, 218, 2, // Skip to: 13781
/* 13051 */   MCD::OPC_CheckField, 13, 3, 0, 212, 2, // Skip to: 13781
/* 13057 */   MCD::OPC_Decode, 132, 5, 138, 1, // Opcode: DPAQX_SA_W_PH
/* 13062 */   MCD::OPC_FilterValue, 27, 203, 2, // Skip to: 13781
/* 13066 */   MCD::OPC_CheckPredicate, 39, 199, 2, // Skip to: 13781
/* 13070 */   MCD::OPC_CheckField, 13, 3, 0, 193, 2, // Skip to: 13781
/* 13076 */   MCD::OPC_Decode, 141, 5, 138, 1, // Opcode: DPSQX_SA_W_PH
/* 13081 */   MCD::OPC_FilterValue, 49, 41, 0, // Skip to: 13126
/* 13085 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13088 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 13100
/* 13092 */   MCD::OPC_CheckPredicate, 39, 173, 2, // Skip to: 13781
/* 13096 */   MCD::OPC_Decode, 105, 231, 1, // Opcode: APPEND
/* 13100 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 13113
/* 13104 */   MCD::OPC_CheckPredicate, 39, 161, 2, // Skip to: 13781
/* 13108 */   MCD::OPC_Decode, 248, 10, 231, 1, // Opcode: PREPEND
/* 13113 */   MCD::OPC_FilterValue, 16, 152, 2, // Skip to: 13781
/* 13117 */   MCD::OPC_CheckPredicate, 39, 148, 2, // Skip to: 13781
/* 13121 */   MCD::OPC_Decode, 181, 1, 231, 1, // Opcode: BALIGN
/* 13126 */   MCD::OPC_FilterValue, 56, 58, 1, // Skip to: 13444
/* 13130 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13133 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 13152
/* 13137 */   MCD::OPC_CheckPredicate, 15, 128, 2, // Skip to: 13781
/* 13141 */   MCD::OPC_CheckField, 13, 3, 0, 122, 2, // Skip to: 13781
/* 13147 */   MCD::OPC_Decode, 199, 5, 232, 1, // Opcode: EXTR_W
/* 13152 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 13171
/* 13156 */   MCD::OPC_CheckPredicate, 15, 109, 2, // Skip to: 13781
/* 13160 */   MCD::OPC_CheckField, 13, 3, 0, 103, 2, // Skip to: 13781
/* 13166 */   MCD::OPC_Decode, 195, 5, 233, 1, // Opcode: EXTRV_W
/* 13171 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13190
/* 13175 */   MCD::OPC_CheckPredicate, 15, 90, 2, // Skip to: 13781
/* 13179 */   MCD::OPC_CheckField, 13, 3, 0, 84, 2, // Skip to: 13781
/* 13185 */   MCD::OPC_Decode, 188, 5, 232, 1, // Opcode: EXTP
/* 13190 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 13209
/* 13194 */   MCD::OPC_CheckPredicate, 15, 71, 2, // Skip to: 13781
/* 13198 */   MCD::OPC_CheckField, 13, 3, 0, 65, 2, // Skip to: 13781
/* 13204 */   MCD::OPC_Decode, 191, 5, 233, 1, // Opcode: EXTPV
/* 13209 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 13228
/* 13213 */   MCD::OPC_CheckPredicate, 15, 52, 2, // Skip to: 13781
/* 13217 */   MCD::OPC_CheckField, 13, 3, 0, 46, 2, // Skip to: 13781
/* 13223 */   MCD::OPC_Decode, 197, 5, 232, 1, // Opcode: EXTR_R_W
/* 13228 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 13247
/* 13232 */   MCD::OPC_CheckPredicate, 15, 33, 2, // Skip to: 13781
/* 13236 */   MCD::OPC_CheckField, 13, 3, 0, 27, 2, // Skip to: 13781
/* 13242 */   MCD::OPC_Decode, 193, 5, 233, 1, // Opcode: EXTRV_R_W
/* 13247 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 13266
/* 13251 */   MCD::OPC_CheckPredicate, 15, 14, 2, // Skip to: 13781
/* 13255 */   MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 13781
/* 13261 */   MCD::OPC_Decode, 196, 5, 232, 1, // Opcode: EXTR_RS_W
/* 13266 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 13285
/* 13270 */   MCD::OPC_CheckPredicate, 15, 251, 1, // Skip to: 13781
/* 13274 */   MCD::OPC_CheckField, 13, 3, 0, 245, 1, // Skip to: 13781
/* 13280 */   MCD::OPC_Decode, 192, 5, 233, 1, // Opcode: EXTRV_RS_W
/* 13285 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 13304
/* 13289 */   MCD::OPC_CheckPredicate, 15, 232, 1, // Skip to: 13781
/* 13293 */   MCD::OPC_CheckField, 13, 3, 0, 226, 1, // Skip to: 13781
/* 13299 */   MCD::OPC_Decode, 189, 5, 232, 1, // Opcode: EXTPDP
/* 13304 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 13323
/* 13308 */   MCD::OPC_CheckPredicate, 15, 213, 1, // Skip to: 13781
/* 13312 */   MCD::OPC_CheckField, 13, 3, 0, 207, 1, // Skip to: 13781
/* 13318 */   MCD::OPC_Decode, 190, 5, 233, 1, // Opcode: EXTPDPV
/* 13323 */   MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 13342
/* 13327 */   MCD::OPC_CheckPredicate, 15, 194, 1, // Skip to: 13781
/* 13331 */   MCD::OPC_CheckField, 13, 3, 0, 188, 1, // Skip to: 13781
/* 13337 */   MCD::OPC_Decode, 198, 5, 232, 1, // Opcode: EXTR_S_H
/* 13342 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 13361
/* 13346 */   MCD::OPC_CheckPredicate, 15, 175, 1, // Skip to: 13781
/* 13350 */   MCD::OPC_CheckField, 13, 3, 0, 169, 1, // Skip to: 13781
/* 13356 */   MCD::OPC_Decode, 194, 5, 233, 1, // Opcode: EXTRV_S_H
/* 13361 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 13374
/* 13365 */   MCD::OPC_CheckPredicate, 15, 156, 1, // Skip to: 13781
/* 13369 */   MCD::OPC_Decode, 173, 11, 234, 1, // Opcode: RDDSP
/* 13374 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 13387
/* 13378 */   MCD::OPC_CheckPredicate, 15, 143, 1, // Skip to: 13781
/* 13382 */   MCD::OPC_Decode, 180, 14, 235, 1, // Opcode: WRDSP
/* 13387 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13406
/* 13391 */   MCD::OPC_CheckPredicate, 15, 130, 1, // Skip to: 13781
/* 13395 */   MCD::OPC_CheckField, 13, 7, 0, 124, 1, // Skip to: 13781
/* 13401 */   MCD::OPC_Decode, 132, 12, 236, 1, // Opcode: SHILO
/* 13406 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 13425
/* 13410 */   MCD::OPC_CheckPredicate, 15, 111, 1, // Skip to: 13781
/* 13414 */   MCD::OPC_CheckField, 13, 8, 0, 105, 1, // Skip to: 13781
/* 13420 */   MCD::OPC_Decode, 133, 12, 237, 1, // Opcode: SHILOV
/* 13425 */   MCD::OPC_FilterValue, 31, 96, 1, // Skip to: 13781
/* 13429 */   MCD::OPC_CheckPredicate, 15, 92, 1, // Skip to: 13781
/* 13433 */   MCD::OPC_CheckField, 13, 8, 0, 86, 1, // Skip to: 13781
/* 13439 */   MCD::OPC_Decode, 236, 9, 237, 1, // Opcode: MTHLIP
/* 13444 */   MCD::OPC_FilterValue, 59, 77, 1, // Skip to: 13781
/* 13448 */   MCD::OPC_CheckPredicate, 7, 73, 1, // Skip to: 13781
/* 13452 */   MCD::OPC_CheckField, 21, 5, 0, 67, 1, // Skip to: 13781
/* 13458 */   MCD::OPC_CheckField, 6, 5, 0, 61, 1, // Skip to: 13781
/* 13464 */   MCD::OPC_Decode, 174, 11, 238, 1, // Opcode: RDHWR
/* 13469 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 13482
/* 13473 */   MCD::OPC_CheckPredicate, 7, 48, 1, // Skip to: 13781
/* 13477 */   MCD::OPC_Decode, 203, 7, 239, 1, // Opcode: LB
/* 13482 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 13495
/* 13486 */   MCD::OPC_CheckPredicate, 7, 35, 1, // Skip to: 13781
/* 13490 */   MCD::OPC_Decode, 234, 7, 239, 1, // Opcode: LH
/* 13495 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 13508
/* 13499 */   MCD::OPC_CheckPredicate, 14, 22, 1, // Skip to: 13781
/* 13503 */   MCD::OPC_Decode, 145, 8, 239, 1, // Opcode: LWL
/* 13508 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 13521
/* 13512 */   MCD::OPC_CheckPredicate, 1, 9, 1, // Skip to: 13781
/* 13516 */   MCD::OPC_Decode, 136, 8, 239, 1, // Opcode: LW
/* 13521 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 13534
/* 13525 */   MCD::OPC_CheckPredicate, 7, 252, 0, // Skip to: 13781
/* 13529 */   MCD::OPC_Decode, 208, 7, 239, 1, // Opcode: LBu
/* 13534 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 13547
/* 13538 */   MCD::OPC_CheckPredicate, 7, 239, 0, // Skip to: 13781
/* 13542 */   MCD::OPC_Decode, 239, 7, 239, 1, // Opcode: LHu
/* 13547 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 13560
/* 13551 */   MCD::OPC_CheckPredicate, 14, 226, 0, // Skip to: 13781
/* 13555 */   MCD::OPC_Decode, 154, 8, 239, 1, // Opcode: LWR
/* 13560 */   MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 13573
/* 13564 */   MCD::OPC_CheckPredicate, 7, 213, 0, // Skip to: 13781
/* 13568 */   MCD::OPC_Decode, 206, 11, 239, 1, // Opcode: SB
/* 13573 */   MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 13586
/* 13577 */   MCD::OPC_CheckPredicate, 7, 200, 0, // Skip to: 13781
/* 13581 */   MCD::OPC_Decode, 254, 11, 239, 1, // Opcode: SH
/* 13586 */   MCD::OPC_FilterValue, 42, 9, 0, // Skip to: 13599
/* 13590 */   MCD::OPC_CheckPredicate, 14, 187, 0, // Skip to: 13781
/* 13594 */   MCD::OPC_Decode, 187, 13, 239, 1, // Opcode: SWL
/* 13599 */   MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 13612
/* 13603 */   MCD::OPC_CheckPredicate, 1, 174, 0, // Skip to: 13781
/* 13607 */   MCD::OPC_Decode, 178, 13, 239, 1, // Opcode: SW
/* 13612 */   MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 13625
/* 13616 */   MCD::OPC_CheckPredicate, 14, 161, 0, // Skip to: 13781
/* 13620 */   MCD::OPC_Decode, 194, 13, 239, 1, // Opcode: SWR
/* 13625 */   MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 13638
/* 13629 */   MCD::OPC_CheckPredicate, 40, 148, 0, // Skip to: 13781
/* 13633 */   MCD::OPC_Decode, 239, 2, 240, 1, // Opcode: CACHE
/* 13638 */   MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 13651
/* 13642 */   MCD::OPC_CheckPredicate, 41, 135, 0, // Skip to: 13781
/* 13646 */   MCD::OPC_Decode, 243, 7, 239, 1, // Opcode: LL
/* 13651 */   MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 13664
/* 13655 */   MCD::OPC_CheckPredicate, 24, 122, 0, // Skip to: 13781
/* 13659 */   MCD::OPC_Decode, 139, 8, 241, 1, // Opcode: LWC1
/* 13664 */   MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 13677
/* 13668 */   MCD::OPC_CheckPredicate, 42, 109, 0, // Skip to: 13781
/* 13672 */   MCD::OPC_Decode, 141, 8, 242, 1, // Opcode: LWC2
/* 13677 */   MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 13690
/* 13681 */   MCD::OPC_CheckPredicate, 40, 96, 0, // Skip to: 13781
/* 13685 */   MCD::OPC_Decode, 244, 10, 240, 1, // Opcode: PREF
/* 13690 */   MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 13703
/* 13694 */   MCD::OPC_CheckPredicate, 32, 83, 0, // Skip to: 13781
/* 13698 */   MCD::OPC_Decode, 212, 7, 241, 1, // Opcode: LDC1
/* 13703 */   MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 13716
/* 13707 */   MCD::OPC_CheckPredicate, 43, 70, 0, // Skip to: 13781
/* 13711 */   MCD::OPC_Decode, 215, 7, 242, 1, // Opcode: LDC2
/* 13716 */   MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 13729
/* 13720 */   MCD::OPC_CheckPredicate, 41, 57, 0, // Skip to: 13781
/* 13724 */   MCD::OPC_Decode, 210, 11, 239, 1, // Opcode: SC
/* 13729 */   MCD::OPC_FilterValue, 57, 9, 0, // Skip to: 13742
/* 13733 */   MCD::OPC_CheckPredicate, 24, 44, 0, // Skip to: 13781
/* 13737 */   MCD::OPC_Decode, 181, 13, 241, 1, // Opcode: SWC1
/* 13742 */   MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 13755
/* 13746 */   MCD::OPC_CheckPredicate, 42, 31, 0, // Skip to: 13781
/* 13750 */   MCD::OPC_Decode, 183, 13, 242, 1, // Opcode: SWC2
/* 13755 */   MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 13768
/* 13759 */   MCD::OPC_CheckPredicate, 32, 18, 0, // Skip to: 13781
/* 13763 */   MCD::OPC_Decode, 220, 11, 241, 1, // Opcode: SDC1
/* 13768 */   MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 13781
/* 13772 */   MCD::OPC_CheckPredicate, 43, 5, 0, // Skip to: 13781
/* 13776 */   MCD::OPC_Decode, 223, 11, 242, 1, // Opcode: SDC2
/* 13781 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 195, 1, // Skip to: 458
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 44, 19, 7, // Skip to: 1829
/* 18 */      MCD::OPC_CheckField, 8, 3, 0, 13, 7, // Skip to: 1829
/* 24 */      MCD::OPC_Decode, 129, 8, 243, 1, // Opcode: LSA_R6
/* 29 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 47
/* 33 */      MCD::OPC_CheckPredicate, 44, 0, 7, // Skip to: 1829
/* 37 */      MCD::OPC_CheckField, 6, 15, 16, 250, 6, // Skip to: 1829
/* 43 */      MCD::OPC_Decode, 192, 7, 82, // Opcode: JR_HB_R6
/* 47 */      MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 59
/* 51 */      MCD::OPC_CheckPredicate, 44, 238, 6, // Skip to: 1829
/* 55 */      MCD::OPC_Decode, 219, 11, 84, // Opcode: SDBBP_R6
/* 59 */      MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 83
/* 63 */      MCD::OPC_CheckPredicate, 44, 226, 6, // Skip to: 1829
/* 67 */      MCD::OPC_CheckField, 16, 5, 0, 220, 6, // Skip to: 1829
/* 73 */      MCD::OPC_CheckField, 6, 5, 1, 214, 6, // Skip to: 1829
/* 79 */      MCD::OPC_Decode, 176, 3, 14, // Opcode: CLZ_R6
/* 83 */      MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 107
/* 87 */      MCD::OPC_CheckPredicate, 44, 202, 6, // Skip to: 1829
/* 91 */      MCD::OPC_CheckField, 16, 5, 0, 196, 6, // Skip to: 1829
/* 97 */      MCD::OPC_CheckField, 6, 5, 1, 190, 6, // Skip to: 1829
/* 103 */     MCD::OPC_Decode, 156, 3, 14, // Opcode: CLO_R6
/* 107 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 131
/* 111 */     MCD::OPC_CheckPredicate, 45, 178, 6, // Skip to: 1829
/* 115 */     MCD::OPC_CheckField, 16, 5, 0, 172, 6, // Skip to: 1829
/* 121 */     MCD::OPC_CheckField, 6, 5, 1, 166, 6, // Skip to: 1829
/* 127 */     MCD::OPC_Decode, 197, 4, 15, // Opcode: DCLZ_R6
/* 131 */     MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 155
/* 135 */     MCD::OPC_CheckPredicate, 45, 154, 6, // Skip to: 1829
/* 139 */     MCD::OPC_CheckField, 16, 5, 0, 148, 6, // Skip to: 1829
/* 145 */     MCD::OPC_CheckField, 6, 5, 1, 142, 6, // Skip to: 1829
/* 151 */     MCD::OPC_Decode, 195, 4, 15, // Opcode: DCLO_R6
/* 155 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 174
/* 159 */     MCD::OPC_CheckPredicate, 45, 130, 6, // Skip to: 1829
/* 163 */     MCD::OPC_CheckField, 8, 3, 0, 124, 6, // Skip to: 1829
/* 169 */     MCD::OPC_Decode, 228, 4, 244, 1, // Opcode: DLSA_R6
/* 174 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 205
/* 178 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 181 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 193
/* 185 */     MCD::OPC_CheckPredicate, 44, 104, 6, // Skip to: 1829
/* 189 */     MCD::OPC_Decode, 153, 10, 43, // Opcode: MUL_R6
/* 193 */     MCD::OPC_FilterValue, 3, 96, 6, // Skip to: 1829
/* 197 */     MCD::OPC_CheckPredicate, 44, 92, 6, // Skip to: 1829
/* 201 */     MCD::OPC_Decode, 247, 9, 43, // Opcode: MUH
/* 205 */     MCD::OPC_FilterValue, 25, 27, 0, // Skip to: 236
/* 209 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 212 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 224
/* 216 */     MCD::OPC_CheckPredicate, 44, 73, 6, // Skip to: 1829
/* 220 */     MCD::OPC_Decode, 142, 10, 43, // Opcode: MULU
/* 224 */     MCD::OPC_FilterValue, 3, 65, 6, // Skip to: 1829
/* 228 */     MCD::OPC_CheckPredicate, 44, 61, 6, // Skip to: 1829
/* 232 */     MCD::OPC_Decode, 248, 9, 43, // Opcode: MUHU
/* 236 */     MCD::OPC_FilterValue, 26, 27, 0, // Skip to: 267
/* 240 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 243 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 255
/* 247 */     MCD::OPC_CheckPredicate, 44, 42, 6, // Skip to: 1829
/* 251 */     MCD::OPC_Decode, 214, 4, 43, // Opcode: DIV
/* 255 */     MCD::OPC_FilterValue, 3, 34, 6, // Skip to: 1829
/* 259 */     MCD::OPC_CheckPredicate, 44, 30, 6, // Skip to: 1829
/* 263 */     MCD::OPC_Decode, 148, 9, 43, // Opcode: MOD
/* 267 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 298
/* 271 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 274 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 286
/* 278 */     MCD::OPC_CheckPredicate, 44, 11, 6, // Skip to: 1829
/* 282 */     MCD::OPC_Decode, 215, 4, 43, // Opcode: DIVU
/* 286 */     MCD::OPC_FilterValue, 3, 3, 6, // Skip to: 1829
/* 290 */     MCD::OPC_CheckPredicate, 44, 255, 5, // Skip to: 1829
/* 294 */     MCD::OPC_Decode, 150, 9, 43, // Opcode: MODU
/* 298 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 329
/* 302 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 305 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 317
/* 309 */     MCD::OPC_CheckPredicate, 45, 236, 5, // Skip to: 1829
/* 313 */     MCD::OPC_Decode, 247, 4, 12, // Opcode: DMUL_R6
/* 317 */     MCD::OPC_FilterValue, 3, 228, 5, // Skip to: 1829
/* 321 */     MCD::OPC_CheckPredicate, 45, 224, 5, // Skip to: 1829
/* 325 */     MCD::OPC_Decode, 241, 4, 12, // Opcode: DMUH
/* 329 */     MCD::OPC_FilterValue, 29, 27, 0, // Skip to: 360
/* 333 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 336 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 348
/* 340 */     MCD::OPC_CheckPredicate, 45, 205, 5, // Skip to: 1829
/* 344 */     MCD::OPC_Decode, 246, 4, 12, // Opcode: DMULU
/* 348 */     MCD::OPC_FilterValue, 3, 197, 5, // Skip to: 1829
/* 352 */     MCD::OPC_CheckPredicate, 45, 193, 5, // Skip to: 1829
/* 356 */     MCD::OPC_Decode, 242, 4, 12, // Opcode: DMUHU
/* 360 */     MCD::OPC_FilterValue, 30, 27, 0, // Skip to: 391
/* 364 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 367 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 379
/* 371 */     MCD::OPC_CheckPredicate, 45, 174, 5, // Skip to: 1829
/* 375 */     MCD::OPC_Decode, 198, 4, 12, // Opcode: DDIV
/* 379 */     MCD::OPC_FilterValue, 3, 166, 5, // Skip to: 1829
/* 383 */     MCD::OPC_CheckPredicate, 45, 162, 5, // Skip to: 1829
/* 387 */     MCD::OPC_Decode, 233, 4, 12, // Opcode: DMOD
/* 391 */     MCD::OPC_FilterValue, 31, 27, 0, // Skip to: 422
/* 395 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 398 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 410
/* 402 */     MCD::OPC_CheckPredicate, 45, 143, 5, // Skip to: 1829
/* 406 */     MCD::OPC_Decode, 199, 4, 12, // Opcode: DDIVU
/* 410 */     MCD::OPC_FilterValue, 3, 135, 5, // Skip to: 1829
/* 414 */     MCD::OPC_CheckPredicate, 45, 131, 5, // Skip to: 1829
/* 418 */     MCD::OPC_Decode, 234, 4, 12, // Opcode: DMODU
/* 422 */     MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 440
/* 426 */     MCD::OPC_CheckPredicate, 46, 119, 5, // Skip to: 1829
/* 430 */     MCD::OPC_CheckField, 6, 5, 0, 113, 5, // Skip to: 1829
/* 436 */     MCD::OPC_Decode, 240, 11, 43, // Opcode: SELEQZ
/* 440 */     MCD::OPC_FilterValue, 55, 105, 5, // Skip to: 1829
/* 444 */     MCD::OPC_CheckPredicate, 46, 101, 5, // Skip to: 1829
/* 448 */     MCD::OPC_CheckField, 6, 5, 0, 95, 5, // Skip to: 1829
/* 454 */     MCD::OPC_Decode, 245, 11, 43, // Opcode: SELNEZ
/* 458 */     MCD::OPC_FilterValue, 1, 47, 0, // Skip to: 509
/* 462 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 465 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 478
/* 469 */     MCD::OPC_CheckPredicate, 47, 76, 5, // Skip to: 1829
/* 473 */     MCD::OPC_Decode, 185, 4, 245, 1, // Opcode: DAHI
/* 478 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 496
/* 482 */     MCD::OPC_CheckPredicate, 44, 63, 5, // Skip to: 1829
/* 486 */     MCD::OPC_CheckField, 21, 5, 0, 57, 5, // Skip to: 1829
/* 492 */     MCD::OPC_Decode, 178, 1, 95, // Opcode: BAL
/* 496 */     MCD::OPC_FilterValue, 30, 49, 5, // Skip to: 1829
/* 500 */     MCD::OPC_CheckPredicate, 47, 45, 5, // Skip to: 1829
/* 504 */     MCD::OPC_Decode, 189, 4, 245, 1, // Opcode: DATI
/* 509 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 522
/* 513 */     MCD::OPC_CheckPredicate, 44, 32, 5, // Skip to: 1829
/* 517 */     MCD::OPC_Decode, 224, 1, 246, 1, // Opcode: BGEZALC
/* 522 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 535
/* 526 */     MCD::OPC_CheckPredicate, 44, 19, 5, // Skip to: 1829
/* 530 */     MCD::OPC_Decode, 148, 2, 247, 1, // Opcode: BLTZALC
/* 535 */     MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 548
/* 539 */     MCD::OPC_CheckPredicate, 44, 6, 5, // Skip to: 1829
/* 543 */     MCD::OPC_Decode, 209, 1, 248, 1, // Opcode: BEQC
/* 548 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 560
/* 552 */     MCD::OPC_CheckPredicate, 44, 249, 4, // Skip to: 1829
/* 556 */     MCD::OPC_Decode, 146, 1, 55, // Opcode: AUI
/* 560 */     MCD::OPC_FilterValue, 17, 5, 3, // Skip to: 1337
/* 564 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 567 */     MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 580
/* 571 */     MCD::OPC_CheckPredicate, 48, 230, 4, // Skip to: 1829
/* 575 */     MCD::OPC_Decode, 188, 1, 249, 1, // Opcode: BC1EQZ
/* 580 */     MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 593
/* 584 */     MCD::OPC_CheckPredicate, 48, 217, 4, // Skip to: 1829
/* 588 */     MCD::OPC_Decode, 192, 1, 249, 1, // Opcode: BC1NEZ
/* 593 */     MCD::OPC_FilterValue, 16, 150, 0, // Skip to: 747
/* 597 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 600 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 613
/* 604 */     MCD::OPC_CheckPredicate, 48, 197, 4, // Skip to: 1829
/* 608 */     MCD::OPC_Decode, 251, 11, 250, 1, // Opcode: SEL_S
/* 613 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 625
/* 617 */     MCD::OPC_CheckPredicate, 48, 184, 4, // Skip to: 1829
/* 621 */     MCD::OPC_Decode, 244, 11, 113, // Opcode: SELEQZ_S
/* 625 */     MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 637
/* 629 */     MCD::OPC_CheckPredicate, 48, 172, 4, // Skip to: 1829
/* 633 */     MCD::OPC_Decode, 249, 11, 113, // Opcode: SELNEZ_S
/* 637 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 650
/* 641 */     MCD::OPC_CheckPredicate, 48, 160, 4, // Skip to: 1829
/* 645 */     MCD::OPC_Decode, 186, 8, 251, 1, // Opcode: MADDF_S
/* 650 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 663
/* 654 */     MCD::OPC_CheckPredicate, 48, 147, 4, // Skip to: 1829
/* 658 */     MCD::OPC_Decode, 206, 9, 251, 1, // Opcode: MSUBF_S
/* 663 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 681
/* 667 */     MCD::OPC_CheckPredicate, 48, 134, 4, // Skip to: 1829
/* 671 */     MCD::OPC_CheckField, 16, 5, 0, 128, 4, // Skip to: 1829
/* 677 */     MCD::OPC_Decode, 182, 11, 114, // Opcode: RINT_S
/* 681 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 699
/* 685 */     MCD::OPC_CheckPredicate, 48, 116, 4, // Skip to: 1829
/* 689 */     MCD::OPC_CheckField, 16, 5, 0, 110, 4, // Skip to: 1829
/* 695 */     MCD::OPC_Decode, 136, 3, 114, // Opcode: CLASS_S
/* 699 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 711
/* 703 */     MCD::OPC_CheckPredicate, 48, 98, 4, // Skip to: 1829
/* 707 */     MCD::OPC_Decode, 137, 9, 113, // Opcode: MIN_S
/* 711 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 723
/* 715 */     MCD::OPC_CheckPredicate, 48, 86, 4, // Skip to: 1829
/* 719 */     MCD::OPC_Decode, 224, 8, 113, // Opcode: MAX_S
/* 723 */     MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 735
/* 727 */     MCD::OPC_CheckPredicate, 48, 74, 4, // Skip to: 1829
/* 731 */     MCD::OPC_Decode, 251, 8, 113, // Opcode: MINA_S
/* 735 */     MCD::OPC_FilterValue, 31, 66, 4, // Skip to: 1829
/* 739 */     MCD::OPC_CheckPredicate, 48, 62, 4, // Skip to: 1829
/* 743 */     MCD::OPC_Decode, 210, 8, 113, // Opcode: MAXA_S
/* 747 */     MCD::OPC_FilterValue, 17, 156, 0, // Skip to: 907
/* 751 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 754 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 767
/* 758 */     MCD::OPC_CheckPredicate, 48, 43, 4, // Skip to: 1829
/* 762 */     MCD::OPC_Decode, 250, 11, 252, 1, // Opcode: SEL_D
/* 767 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 780
/* 771 */     MCD::OPC_CheckPredicate, 48, 30, 4, // Skip to: 1829
/* 775 */     MCD::OPC_Decode, 242, 11, 253, 1, // Opcode: SELEQZ_D
/* 780 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 793
/* 784 */     MCD::OPC_CheckPredicate, 48, 17, 4, // Skip to: 1829
/* 788 */     MCD::OPC_Decode, 247, 11, 253, 1, // Opcode: SELNEZ_D
/* 793 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 806
/* 797 */     MCD::OPC_CheckPredicate, 48, 4, 4, // Skip to: 1829
/* 801 */     MCD::OPC_Decode, 185, 8, 254, 1, // Opcode: MADDF_D
/* 806 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 819
/* 810 */     MCD::OPC_CheckPredicate, 48, 247, 3, // Skip to: 1829
/* 814 */     MCD::OPC_Decode, 205, 9, 254, 1, // Opcode: MSUBF_D
/* 819 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 837
/* 823 */     MCD::OPC_CheckPredicate, 48, 234, 3, // Skip to: 1829
/* 827 */     MCD::OPC_CheckField, 16, 5, 0, 228, 3, // Skip to: 1829
/* 833 */     MCD::OPC_Decode, 181, 11, 125, // Opcode: RINT_D
/* 837 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 855
/* 841 */     MCD::OPC_CheckPredicate, 48, 216, 3, // Skip to: 1829
/* 845 */     MCD::OPC_CheckField, 16, 5, 0, 210, 3, // Skip to: 1829
/* 851 */     MCD::OPC_Decode, 135, 3, 125, // Opcode: CLASS_D
/* 855 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 868
/* 859 */     MCD::OPC_CheckPredicate, 48, 198, 3, // Skip to: 1829
/* 863 */     MCD::OPC_Decode, 136, 9, 253, 1, // Opcode: MIN_D
/* 868 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 881
/* 872 */     MCD::OPC_CheckPredicate, 48, 185, 3, // Skip to: 1829
/* 876 */     MCD::OPC_Decode, 223, 8, 253, 1, // Opcode: MAX_D
/* 881 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 894
/* 885 */     MCD::OPC_CheckPredicate, 48, 172, 3, // Skip to: 1829
/* 889 */     MCD::OPC_Decode, 250, 8, 253, 1, // Opcode: MINA_D
/* 894 */     MCD::OPC_FilterValue, 31, 163, 3, // Skip to: 1829
/* 898 */     MCD::OPC_CheckPredicate, 48, 159, 3, // Skip to: 1829
/* 902 */     MCD::OPC_Decode, 209, 8, 253, 1, // Opcode: MAXA_D
/* 907 */     MCD::OPC_FilterValue, 20, 211, 0, // Skip to: 1122
/* 911 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 914 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 927
/* 918 */     MCD::OPC_CheckPredicate, 48, 139, 3, // Skip to: 1829
/* 922 */     MCD::OPC_Decode, 190, 3, 255, 1, // Opcode: CMP_F_S
/* 927 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 940
/* 931 */     MCD::OPC_CheckPredicate, 48, 126, 3, // Skip to: 1829
/* 935 */     MCD::OPC_Decode, 220, 3, 255, 1, // Opcode: CMP_UN_S
/* 940 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 953
/* 944 */     MCD::OPC_CheckPredicate, 48, 113, 3, // Skip to: 1829
/* 948 */     MCD::OPC_Decode, 188, 3, 255, 1, // Opcode: CMP_EQ_S
/* 953 */     MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 966
/* 957 */     MCD::OPC_CheckPredicate, 48, 100, 3, // Skip to: 1829
/* 961 */     MCD::OPC_Decode, 214, 3, 255, 1, // Opcode: CMP_UEQ_S
/* 966 */     MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 979
/* 970 */     MCD::OPC_CheckPredicate, 48, 87, 3, // Skip to: 1829
/* 974 */     MCD::OPC_Decode, 196, 3, 255, 1, // Opcode: CMP_LT_S
/* 979 */     MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 992
/* 983 */     MCD::OPC_CheckPredicate, 48, 74, 3, // Skip to: 1829
/* 987 */     MCD::OPC_Decode, 218, 3, 255, 1, // Opcode: CMP_ULT_S
/* 992 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1005
/* 996 */     MCD::OPC_CheckPredicate, 48, 61, 3, // Skip to: 1829
/* 1000 */    MCD::OPC_Decode, 193, 3, 255, 1, // Opcode: CMP_LE_S
/* 1005 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1018
/* 1009 */    MCD::OPC_CheckPredicate, 48, 48, 3, // Skip to: 1829
/* 1013 */    MCD::OPC_Decode, 216, 3, 255, 1, // Opcode: CMP_ULE_S
/* 1018 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1031
/* 1022 */    MCD::OPC_CheckPredicate, 48, 35, 3, // Skip to: 1829
/* 1026 */    MCD::OPC_Decode, 198, 3, 255, 1, // Opcode: CMP_SAF_S
/* 1031 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1044
/* 1035 */    MCD::OPC_CheckPredicate, 48, 22, 3, // Skip to: 1829
/* 1039 */    MCD::OPC_Decode, 212, 3, 255, 1, // Opcode: CMP_SUN_S
/* 1044 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1057
/* 1048 */    MCD::OPC_CheckPredicate, 48, 9, 3, // Skip to: 1829
/* 1052 */    MCD::OPC_Decode, 200, 3, 255, 1, // Opcode: CMP_SEQ_S
/* 1057 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1070
/* 1061 */    MCD::OPC_CheckPredicate, 48, 252, 2, // Skip to: 1829
/* 1065 */    MCD::OPC_Decode, 206, 3, 255, 1, // Opcode: CMP_SUEQ_S
/* 1070 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1083
/* 1074 */    MCD::OPC_CheckPredicate, 48, 239, 2, // Skip to: 1829
/* 1078 */    MCD::OPC_Decode, 204, 3, 255, 1, // Opcode: CMP_SLT_S
/* 1083 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1096
/* 1087 */    MCD::OPC_CheckPredicate, 48, 226, 2, // Skip to: 1829
/* 1091 */    MCD::OPC_Decode, 210, 3, 255, 1, // Opcode: CMP_SULT_S
/* 1096 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1109
/* 1100 */    MCD::OPC_CheckPredicate, 48, 213, 2, // Skip to: 1829
/* 1104 */    MCD::OPC_Decode, 202, 3, 255, 1, // Opcode: CMP_SLE_S
/* 1109 */    MCD::OPC_FilterValue, 15, 204, 2, // Skip to: 1829
/* 1113 */    MCD::OPC_CheckPredicate, 48, 200, 2, // Skip to: 1829
/* 1117 */    MCD::OPC_Decode, 208, 3, 255, 1, // Opcode: CMP_SULE_S
/* 1122 */    MCD::OPC_FilterValue, 21, 191, 2, // Skip to: 1829
/* 1126 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1129 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1142
/* 1133 */    MCD::OPC_CheckPredicate, 48, 180, 2, // Skip to: 1829
/* 1137 */    MCD::OPC_Decode, 189, 3, 128, 2, // Opcode: CMP_F_D
/* 1142 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1155
/* 1146 */    MCD::OPC_CheckPredicate, 48, 167, 2, // Skip to: 1829
/* 1150 */    MCD::OPC_Decode, 219, 3, 128, 2, // Opcode: CMP_UN_D
/* 1155 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1168
/* 1159 */    MCD::OPC_CheckPredicate, 48, 154, 2, // Skip to: 1829
/* 1163 */    MCD::OPC_Decode, 186, 3, 128, 2, // Opcode: CMP_EQ_D
/* 1168 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1181
/* 1172 */    MCD::OPC_CheckPredicate, 48, 141, 2, // Skip to: 1829
/* 1176 */    MCD::OPC_Decode, 213, 3, 128, 2, // Opcode: CMP_UEQ_D
/* 1181 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1194
/* 1185 */    MCD::OPC_CheckPredicate, 48, 128, 2, // Skip to: 1829
/* 1189 */    MCD::OPC_Decode, 194, 3, 128, 2, // Opcode: CMP_LT_D
/* 1194 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1207
/* 1198 */    MCD::OPC_CheckPredicate, 48, 115, 2, // Skip to: 1829
/* 1202 */    MCD::OPC_Decode, 217, 3, 128, 2, // Opcode: CMP_ULT_D
/* 1207 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1220
/* 1211 */    MCD::OPC_CheckPredicate, 48, 102, 2, // Skip to: 1829
/* 1215 */    MCD::OPC_Decode, 191, 3, 128, 2, // Opcode: CMP_LE_D
/* 1220 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1233
/* 1224 */    MCD::OPC_CheckPredicate, 48, 89, 2, // Skip to: 1829
/* 1228 */    MCD::OPC_Decode, 215, 3, 128, 2, // Opcode: CMP_ULE_D
/* 1233 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1246
/* 1237 */    MCD::OPC_CheckPredicate, 48, 76, 2, // Skip to: 1829
/* 1241 */    MCD::OPC_Decode, 197, 3, 128, 2, // Opcode: CMP_SAF_D
/* 1246 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1259
/* 1250 */    MCD::OPC_CheckPredicate, 48, 63, 2, // Skip to: 1829
/* 1254 */    MCD::OPC_Decode, 211, 3, 128, 2, // Opcode: CMP_SUN_D
/* 1259 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1272
/* 1263 */    MCD::OPC_CheckPredicate, 48, 50, 2, // Skip to: 1829
/* 1267 */    MCD::OPC_Decode, 199, 3, 128, 2, // Opcode: CMP_SEQ_D
/* 1272 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1285
/* 1276 */    MCD::OPC_CheckPredicate, 48, 37, 2, // Skip to: 1829
/* 1280 */    MCD::OPC_Decode, 205, 3, 128, 2, // Opcode: CMP_SUEQ_D
/* 1285 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1298
/* 1289 */    MCD::OPC_CheckPredicate, 48, 24, 2, // Skip to: 1829
/* 1293 */    MCD::OPC_Decode, 203, 3, 128, 2, // Opcode: CMP_SLT_D
/* 1298 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1311
/* 1302 */    MCD::OPC_CheckPredicate, 48, 11, 2, // Skip to: 1829
/* 1306 */    MCD::OPC_Decode, 209, 3, 128, 2, // Opcode: CMP_SULT_D
/* 1311 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1324
/* 1315 */    MCD::OPC_CheckPredicate, 48, 254, 1, // Skip to: 1829
/* 1319 */    MCD::OPC_Decode, 201, 3, 128, 2, // Opcode: CMP_SLE_D
/* 1324 */    MCD::OPC_FilterValue, 15, 245, 1, // Skip to: 1829
/* 1328 */    MCD::OPC_CheckPredicate, 48, 241, 1, // Skip to: 1829
/* 1332 */    MCD::OPC_Decode, 207, 3, 128, 2, // Opcode: CMP_SULE_D
/* 1337 */    MCD::OPC_FilterValue, 18, 81, 0, // Skip to: 1422
/* 1341 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1344 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1357
/* 1348 */    MCD::OPC_CheckPredicate, 44, 221, 1, // Skip to: 1829
/* 1352 */    MCD::OPC_Decode, 196, 1, 129, 2, // Opcode: BC2EQZ
/* 1357 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1370
/* 1361 */    MCD::OPC_CheckPredicate, 44, 208, 1, // Skip to: 1829
/* 1365 */    MCD::OPC_Decode, 142, 8, 130, 2, // Opcode: LWC2_R6
/* 1370 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1383
/* 1374 */    MCD::OPC_CheckPredicate, 44, 195, 1, // Skip to: 1829
/* 1378 */    MCD::OPC_Decode, 184, 13, 130, 2, // Opcode: SWC2_R6
/* 1383 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1396
/* 1387 */    MCD::OPC_CheckPredicate, 44, 182, 1, // Skip to: 1829
/* 1391 */    MCD::OPC_Decode, 197, 1, 129, 2, // Opcode: BC2NEZ
/* 1396 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1409
/* 1400 */    MCD::OPC_CheckPredicate, 44, 169, 1, // Skip to: 1829
/* 1404 */    MCD::OPC_Decode, 216, 7, 130, 2, // Opcode: LDC2_R6
/* 1409 */    MCD::OPC_FilterValue, 15, 160, 1, // Skip to: 1829
/* 1413 */    MCD::OPC_CheckPredicate, 44, 156, 1, // Skip to: 1829
/* 1417 */    MCD::OPC_Decode, 224, 11, 130, 2, // Opcode: SDC2_R6
/* 1422 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 1435
/* 1426 */    MCD::OPC_CheckPredicate, 44, 143, 1, // Skip to: 1829
/* 1430 */    MCD::OPC_Decode, 229, 1, 131, 2, // Opcode: BGEZC
/* 1435 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 1448
/* 1439 */    MCD::OPC_CheckPredicate, 44, 130, 1, // Skip to: 1829
/* 1443 */    MCD::OPC_Decode, 153, 2, 132, 2, // Opcode: BLTZC
/* 1448 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1461
/* 1452 */    MCD::OPC_CheckPredicate, 44, 117, 1, // Skip to: 1829
/* 1456 */    MCD::OPC_Decode, 162, 2, 133, 2, // Opcode: BNEC
/* 1461 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 1473
/* 1465 */    MCD::OPC_CheckPredicate, 47, 104, 1, // Skip to: 1829
/* 1469 */    MCD::OPC_Decode, 191, 4, 78, // Opcode: DAUI
/* 1473 */    MCD::OPC_FilterValue, 31, 182, 0, // Skip to: 1659
/* 1477 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1480 */    MCD::OPC_FilterValue, 32, 40, 0, // Skip to: 1524
/* 1484 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 1487 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1512
/* 1491 */    MCD::OPC_CheckPredicate, 44, 78, 1, // Skip to: 1829
/* 1495 */    MCD::OPC_CheckField, 21, 5, 0, 72, 1, // Skip to: 1829
/* 1501 */    MCD::OPC_CheckField, 6, 2, 0, 66, 1, // Skip to: 1829
/* 1507 */    MCD::OPC_Decode, 130, 2, 227, 1, // Opcode: BITSWAP
/* 1512 */    MCD::OPC_FilterValue, 2, 57, 1, // Skip to: 1829
/* 1516 */    MCD::OPC_CheckPredicate, 44, 53, 1, // Skip to: 1829
/* 1520 */    MCD::OPC_Decode, 86, 243, 1, // Opcode: ALIGN
/* 1524 */    MCD::OPC_FilterValue, 36, 41, 0, // Skip to: 1569
/* 1528 */    MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 1531 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1556
/* 1535 */    MCD::OPC_CheckPredicate, 45, 34, 1, // Skip to: 1829
/* 1539 */    MCD::OPC_CheckField, 21, 5, 0, 28, 1, // Skip to: 1829
/* 1545 */    MCD::OPC_CheckField, 6, 3, 0, 22, 1, // Skip to: 1829
/* 1551 */    MCD::OPC_Decode, 193, 4, 134, 2, // Opcode: DBITSWAP
/* 1556 */    MCD::OPC_FilterValue, 1, 13, 1, // Skip to: 1829
/* 1560 */    MCD::OPC_CheckPredicate, 47, 9, 1, // Skip to: 1829
/* 1564 */    MCD::OPC_Decode, 187, 4, 135, 2, // Opcode: DALIGN
/* 1569 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1588
/* 1573 */    MCD::OPC_CheckPredicate, 44, 252, 0, // Skip to: 1829
/* 1577 */    MCD::OPC_CheckField, 6, 1, 0, 246, 0, // Skip to: 1829
/* 1583 */    MCD::OPC_Decode, 242, 2, 136, 2, // Opcode: CACHE_R6
/* 1588 */    MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 1601
/* 1592 */    MCD::OPC_CheckPredicate, 44, 233, 0, // Skip to: 1829
/* 1596 */    MCD::OPC_Decode, 214, 11, 137, 2, // Opcode: SC_R6
/* 1601 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1614
/* 1605 */    MCD::OPC_CheckPredicate, 44, 220, 0, // Skip to: 1829
/* 1609 */    MCD::OPC_Decode, 212, 11, 137, 2, // Opcode: SCD_R6
/* 1614 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 1633
/* 1618 */    MCD::OPC_CheckPredicate, 44, 207, 0, // Skip to: 1829
/* 1622 */    MCD::OPC_CheckField, 6, 1, 0, 201, 0, // Skip to: 1829
/* 1628 */    MCD::OPC_Decode, 247, 10, 136, 2, // Opcode: PREF_R6
/* 1633 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 1646
/* 1637 */    MCD::OPC_CheckPredicate, 44, 188, 0, // Skip to: 1829
/* 1641 */    MCD::OPC_Decode, 247, 7, 137, 2, // Opcode: LL_R6
/* 1646 */    MCD::OPC_FilterValue, 55, 179, 0, // Skip to: 1829
/* 1650 */    MCD::OPC_CheckPredicate, 44, 175, 0, // Skip to: 1829
/* 1654 */    MCD::OPC_Decode, 245, 7, 137, 2, // Opcode: LLD_R6
/* 1659 */    MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 1671
/* 1663 */    MCD::OPC_CheckPredicate, 44, 162, 0, // Skip to: 1829
/* 1667 */    MCD::OPC_Decode, 187, 1, 76, // Opcode: BC
/* 1671 */    MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 1698
/* 1675 */    MCD::OPC_CheckPredicate, 44, 10, 0, // Skip to: 1689
/* 1679 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1689
/* 1685 */    MCD::OPC_Decode, 184, 7, 60, // Opcode: JIC
/* 1689 */    MCD::OPC_CheckPredicate, 44, 136, 0, // Skip to: 1829
/* 1693 */    MCD::OPC_Decode, 214, 1, 138, 2, // Opcode: BEQZC
/* 1698 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 1710
/* 1702 */    MCD::OPC_CheckPredicate, 44, 123, 0, // Skip to: 1829
/* 1706 */    MCD::OPC_Decode, 179, 1, 76, // Opcode: BALC
/* 1710 */    MCD::OPC_FilterValue, 59, 88, 0, // Skip to: 1802
/* 1714 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 1717 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1728
/* 1721 */    MCD::OPC_CheckPredicate, 44, 104, 0, // Skip to: 1829
/* 1725 */    MCD::OPC_Decode, 27, 74, // Opcode: ADDIUPC
/* 1728 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1740
/* 1732 */    MCD::OPC_CheckPredicate, 44, 93, 0, // Skip to: 1829
/* 1736 */    MCD::OPC_Decode, 151, 8, 74, // Opcode: LWPC
/* 1740 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1752
/* 1744 */    MCD::OPC_CheckPredicate, 44, 81, 0, // Skip to: 1829
/* 1748 */    MCD::OPC_Decode, 158, 8, 74, // Opcode: LWUPC
/* 1752 */    MCD::OPC_FilterValue, 3, 73, 0, // Skip to: 1829
/* 1756 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1759 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1772
/* 1763 */    MCD::OPC_CheckPredicate, 45, 62, 0, // Skip to: 1829
/* 1767 */    MCD::OPC_Decode, 223, 7, 139, 2, // Opcode: LDPC
/* 1772 */    MCD::OPC_FilterValue, 1, 53, 0, // Skip to: 1829
/* 1776 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1779 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1791
/* 1783 */    MCD::OPC_CheckPredicate, 44, 42, 0, // Skip to: 1829
/* 1787 */    MCD::OPC_Decode, 147, 1, 75, // Opcode: AUIPC
/* 1791 */    MCD::OPC_FilterValue, 3, 34, 0, // Skip to: 1829
/* 1795 */    MCD::OPC_CheckPredicate, 44, 30, 0, // Skip to: 1829
/* 1799 */    MCD::OPC_Decode, 88, 75, // Opcode: ALUIPC
/* 1802 */    MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 1829
/* 1806 */    MCD::OPC_CheckPredicate, 44, 10, 0, // Skip to: 1820
/* 1810 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1820
/* 1816 */    MCD::OPC_Decode, 182, 7, 60, // Opcode: JIALC
/* 1820 */    MCD::OPC_CheckPredicate, 44, 5, 0, // Skip to: 1829
/* 1824 */    MCD::OPC_Decode, 175, 2, 138, 2, // Opcode: BNEZC
/* 1829 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 6, 24, 0, // Skip to: 31
/* 7 */       MCD::OPC_CheckPredicate, 44, 11, 0, // Skip to: 22
/* 11 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 22
/* 17 */      MCD::OPC_Decode, 136, 2, 246, 1, // Opcode: BLEZALC
/* 22 */      MCD::OPC_CheckPredicate, 44, 145, 0, // Skip to: 171
/* 26 */      MCD::OPC_Decode, 220, 1, 246, 1, // Opcode: BGEUC
/* 31 */      MCD::OPC_FilterValue, 7, 24, 0, // Skip to: 59
/* 35 */      MCD::OPC_CheckPredicate, 44, 11, 0, // Skip to: 50
/* 39 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 50
/* 45 */      MCD::OPC_Decode, 236, 1, 247, 1, // Opcode: BGTZALC
/* 50 */      MCD::OPC_CheckPredicate, 44, 117, 0, // Skip to: 171
/* 54 */      MCD::OPC_Decode, 144, 2, 247, 1, // Opcode: BLTUC
/* 59 */      MCD::OPC_FilterValue, 8, 24, 0, // Skip to: 87
/* 63 */      MCD::OPC_CheckPredicate, 44, 11, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 78
/* 73 */      MCD::OPC_Decode, 212, 1, 133, 2, // Opcode: BEQZALC
/* 78 */      MCD::OPC_CheckPredicate, 44, 89, 0, // Skip to: 171
/* 82 */      MCD::OPC_Decode, 184, 2, 248, 1, // Opcode: BOVC
/* 87 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 115
/* 91 */      MCD::OPC_CheckPredicate, 44, 11, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 106
/* 101 */     MCD::OPC_Decode, 138, 2, 131, 2, // Opcode: BLEZC
/* 106 */     MCD::OPC_CheckPredicate, 44, 61, 0, // Skip to: 171
/* 110 */     MCD::OPC_Decode, 218, 1, 131, 2, // Opcode: BGEC
/* 115 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 143
/* 119 */     MCD::OPC_CheckPredicate, 44, 11, 0, // Skip to: 134
/* 123 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 134
/* 129 */     MCD::OPC_Decode, 238, 1, 132, 2, // Opcode: BGTZC
/* 134 */     MCD::OPC_CheckPredicate, 44, 33, 0, // Skip to: 171
/* 138 */     MCD::OPC_Decode, 142, 2, 132, 2, // Opcode: BLTC
/* 143 */     MCD::OPC_FilterValue, 24, 24, 0, // Skip to: 171
/* 147 */     MCD::OPC_CheckPredicate, 44, 11, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 162
/* 157 */     MCD::OPC_Decode, 173, 2, 133, 2, // Opcode: BNEZALC
/* 162 */     MCD::OPC_CheckPredicate, 44, 5, 0, // Skip to: 171
/* 166 */     MCD::OPC_Decode, 178, 2, 133, 2, // Opcode: BNVC
/* 171 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_GP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3 */       MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 21
/* 7 */       MCD::OPC_CheckPredicate, 49, 28, 0, // Skip to: 39
/* 11 */      MCD::OPC_CheckField, 26, 6, 0, 22, 0, // Skip to: 39
/* 17 */      MCD::OPC_Decode, 241, 11, 12, // Opcode: SELEQZ64
/* 21 */      MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 39
/* 25 */      MCD::OPC_CheckPredicate, 49, 10, 0, // Skip to: 39
/* 29 */      MCD::OPC_CheckField, 26, 6, 0, 4, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 246, 11, 12, // Opcode: SELNEZ64
/* 39 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 108, 1, // Skip to: 371
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 50, 112, 7, // Skip to: 1922
/* 18 */      MCD::OPC_CheckField, 6, 5, 0, 106, 7, // Skip to: 1922
/* 24 */      MCD::OPC_Decode, 164, 5, 140, 2, // Opcode: DSLLV
/* 29 */      MCD::OPC_FilterValue, 22, 29, 0, // Skip to: 62
/* 33 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 36 */      MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 49
/* 40 */      MCD::OPC_CheckPredicate, 50, 86, 7, // Skip to: 1922
/* 44 */      MCD::OPC_Decode, 170, 5, 140, 2, // Opcode: DSRLV
/* 49 */      MCD::OPC_FilterValue, 1, 77, 7, // Skip to: 1922
/* 53 */      MCD::OPC_CheckPredicate, 51, 73, 7, // Skip to: 1922
/* 57 */      MCD::OPC_Decode, 157, 5, 140, 2, // Opcode: DROTRV
/* 62 */      MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 81
/* 66 */      MCD::OPC_CheckPredicate, 50, 60, 7, // Skip to: 1922
/* 70 */      MCD::OPC_CheckField, 6, 5, 0, 54, 7, // Skip to: 1922
/* 76 */      MCD::OPC_Decode, 167, 5, 140, 2, // Opcode: DSRAV
/* 81 */      MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 100
/* 85 */      MCD::OPC_CheckPredicate, 52, 41, 7, // Skip to: 1922
/* 89 */      MCD::OPC_CheckField, 6, 10, 0, 35, 7, // Skip to: 1922
/* 95 */      MCD::OPC_Decode, 244, 4, 141, 2, // Opcode: DMULT
/* 100 */     MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 119
/* 104 */     MCD::OPC_CheckPredicate, 52, 22, 7, // Skip to: 1922
/* 108 */     MCD::OPC_CheckField, 6, 10, 0, 16, 7, // Skip to: 1922
/* 114 */     MCD::OPC_Decode, 245, 4, 141, 2, // Opcode: DMULTu
/* 119 */     MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 138
/* 123 */     MCD::OPC_CheckPredicate, 52, 3, 7, // Skip to: 1922
/* 127 */     MCD::OPC_CheckField, 6, 10, 0, 253, 6, // Skip to: 1922
/* 133 */     MCD::OPC_Decode, 159, 5, 141, 2, // Opcode: DSDIV
/* 138 */     MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 157
/* 142 */     MCD::OPC_CheckPredicate, 52, 240, 6, // Skip to: 1922
/* 146 */     MCD::OPC_CheckField, 6, 10, 0, 234, 6, // Skip to: 1922
/* 152 */     MCD::OPC_Decode, 173, 5, 141, 2, // Opcode: DUDIV
/* 157 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 175
/* 161 */     MCD::OPC_CheckPredicate, 50, 221, 6, // Skip to: 1922
/* 165 */     MCD::OPC_CheckField, 6, 5, 0, 215, 6, // Skip to: 1922
/* 171 */     MCD::OPC_Decode, 181, 4, 12, // Opcode: DADD
/* 175 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 193
/* 179 */     MCD::OPC_CheckPredicate, 50, 203, 6, // Skip to: 1922
/* 183 */     MCD::OPC_CheckField, 6, 5, 0, 197, 6, // Skip to: 1922
/* 189 */     MCD::OPC_Decode, 184, 4, 12, // Opcode: DADDu
/* 193 */     MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 211
/* 197 */     MCD::OPC_CheckPredicate, 50, 185, 6, // Skip to: 1922
/* 201 */     MCD::OPC_CheckField, 6, 5, 0, 179, 6, // Skip to: 1922
/* 207 */     MCD::OPC_Decode, 171, 5, 12, // Opcode: DSUB
/* 211 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 229
/* 215 */     MCD::OPC_CheckPredicate, 50, 167, 6, // Skip to: 1922
/* 219 */     MCD::OPC_CheckField, 6, 5, 0, 161, 6, // Skip to: 1922
/* 225 */     MCD::OPC_Decode, 172, 5, 12, // Opcode: DSUBu
/* 229 */     MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 248
/* 233 */     MCD::OPC_CheckPredicate, 50, 149, 6, // Skip to: 1922
/* 237 */     MCD::OPC_CheckField, 21, 5, 0, 143, 6, // Skip to: 1922
/* 243 */     MCD::OPC_Decode, 161, 5, 142, 2, // Opcode: DSLL
/* 248 */     MCD::OPC_FilterValue, 58, 29, 0, // Skip to: 281
/* 252 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 255 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 268
/* 259 */     MCD::OPC_CheckPredicate, 50, 123, 6, // Skip to: 1922
/* 263 */     MCD::OPC_Decode, 168, 5, 142, 2, // Opcode: DSRL
/* 268 */     MCD::OPC_FilterValue, 1, 114, 6, // Skip to: 1922
/* 272 */     MCD::OPC_CheckPredicate, 51, 110, 6, // Skip to: 1922
/* 276 */     MCD::OPC_Decode, 155, 5, 142, 2, // Opcode: DROTR
/* 281 */     MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 300
/* 285 */     MCD::OPC_CheckPredicate, 50, 97, 6, // Skip to: 1922
/* 289 */     MCD::OPC_CheckField, 21, 5, 0, 91, 6, // Skip to: 1922
/* 295 */     MCD::OPC_Decode, 165, 5, 142, 2, // Opcode: DSRA
/* 300 */     MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 319
/* 304 */     MCD::OPC_CheckPredicate, 50, 78, 6, // Skip to: 1922
/* 308 */     MCD::OPC_CheckField, 21, 5, 0, 72, 6, // Skip to: 1922
/* 314 */     MCD::OPC_Decode, 162, 5, 142, 2, // Opcode: DSLL32
/* 319 */     MCD::OPC_FilterValue, 62, 29, 0, // Skip to: 352
/* 323 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 326 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 339
/* 330 */     MCD::OPC_CheckPredicate, 50, 52, 6, // Skip to: 1922
/* 334 */     MCD::OPC_Decode, 169, 5, 142, 2, // Opcode: DSRL32
/* 339 */     MCD::OPC_FilterValue, 1, 43, 6, // Skip to: 1922
/* 343 */     MCD::OPC_CheckPredicate, 51, 39, 6, // Skip to: 1922
/* 347 */     MCD::OPC_Decode, 156, 5, 142, 2, // Opcode: DROTR32
/* 352 */     MCD::OPC_FilterValue, 63, 30, 6, // Skip to: 1922
/* 356 */     MCD::OPC_CheckPredicate, 50, 26, 6, // Skip to: 1922
/* 360 */     MCD::OPC_CheckField, 21, 5, 0, 20, 6, // Skip to: 1922
/* 366 */     MCD::OPC_Decode, 166, 5, 142, 2, // Opcode: DSRA32
/* 371 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 416
/* 375 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 378 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 397
/* 382 */     MCD::OPC_CheckPredicate, 53, 0, 6, // Skip to: 1922
/* 386 */     MCD::OPC_CheckField, 3, 8, 0, 250, 5, // Skip to: 1922
/* 392 */     MCD::OPC_Decode, 229, 4, 143, 2, // Opcode: DMFC0
/* 397 */     MCD::OPC_FilterValue, 5, 241, 5, // Skip to: 1922
/* 401 */     MCD::OPC_CheckPredicate, 53, 237, 5, // Skip to: 1922
/* 405 */     MCD::OPC_CheckField, 3, 8, 0, 231, 5, // Skip to: 1922
/* 411 */     MCD::OPC_Decode, 237, 4, 144, 2, // Opcode: DMTC0
/* 416 */     MCD::OPC_FilterValue, 17, 222, 3, // Skip to: 1410
/* 420 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 423 */     MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 481
/* 427 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 430 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 449
/* 434 */     MCD::OPC_CheckPredicate, 54, 204, 5, // Skip to: 1922
/* 438 */     MCD::OPC_CheckField, 6, 5, 0, 198, 5, // Skip to: 1922
/* 444 */     MCD::OPC_Decode, 238, 8, 145, 2, // Opcode: MFHC1_D64
/* 449 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 468
/* 453 */     MCD::OPC_CheckPredicate, 54, 185, 5, // Skip to: 1922
/* 457 */     MCD::OPC_CheckField, 6, 5, 0, 179, 5, // Skip to: 1922
/* 463 */     MCD::OPC_Decode, 230, 9, 146, 2, // Opcode: MTHC1_D64
/* 468 */     MCD::OPC_FilterValue, 17, 170, 5, // Skip to: 1922
/* 472 */     MCD::OPC_CheckPredicate, 55, 166, 5, // Skip to: 1922
/* 476 */     MCD::OPC_Decode, 214, 5, 253, 1, // Opcode: FADD_D64
/* 481 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 500
/* 485 */     MCD::OPC_CheckPredicate, 55, 153, 5, // Skip to: 1922
/* 489 */     MCD::OPC_CheckField, 21, 5, 17, 147, 5, // Skip to: 1922
/* 495 */     MCD::OPC_Decode, 216, 6, 253, 1, // Opcode: FSUB_D64
/* 500 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 519
/* 504 */     MCD::OPC_CheckPredicate, 55, 134, 5, // Skip to: 1922
/* 508 */     MCD::OPC_CheckField, 21, 5, 17, 128, 5, // Skip to: 1922
/* 514 */     MCD::OPC_Decode, 179, 6, 253, 1, // Opcode: FMUL_D64
/* 519 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 538
/* 523 */     MCD::OPC_CheckPredicate, 55, 115, 5, // Skip to: 1922
/* 527 */     MCD::OPC_CheckField, 21, 5, 17, 109, 5, // Skip to: 1922
/* 533 */     MCD::OPC_Decode, 250, 5, 253, 1, // Opcode: FDIV_D64
/* 538 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 557
/* 542 */     MCD::OPC_CheckPredicate, 56, 96, 5, // Skip to: 1922
/* 546 */     MCD::OPC_CheckField, 16, 10, 160, 4, 89, 5, // Skip to: 1922
/* 553 */     MCD::OPC_Decode, 209, 6, 125, // Opcode: FSQRT_D64
/* 557 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 576
/* 561 */     MCD::OPC_CheckPredicate, 55, 77, 5, // Skip to: 1922
/* 565 */     MCD::OPC_CheckField, 16, 10, 160, 4, 70, 5, // Skip to: 1922
/* 572 */     MCD::OPC_Decode, 207, 5, 125, // Opcode: FABS_D64
/* 576 */     MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 595
/* 580 */     MCD::OPC_CheckPredicate, 55, 58, 5, // Skip to: 1922
/* 584 */     MCD::OPC_CheckField, 16, 10, 160, 4, 51, 5, // Skip to: 1922
/* 591 */     MCD::OPC_Decode, 172, 6, 125, // Opcode: FMOV_D64
/* 595 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 614
/* 599 */     MCD::OPC_CheckPredicate, 55, 39, 5, // Skip to: 1922
/* 603 */     MCD::OPC_CheckField, 16, 10, 160, 4, 32, 5, // Skip to: 1922
/* 610 */     MCD::OPC_Decode, 185, 6, 125, // Opcode: FNEG_D64
/* 614 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 647
/* 618 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 621 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 634
/* 626 */     MCD::OPC_CheckPredicate, 55, 12, 5, // Skip to: 1922
/* 630 */     MCD::OPC_Decode, 188, 11, 118, // Opcode: ROUND_L_S
/* 634 */     MCD::OPC_FilterValue, 160, 4, 3, 5, // Skip to: 1922
/* 639 */     MCD::OPC_CheckPredicate, 55, 255, 4, // Skip to: 1922
/* 643 */     MCD::OPC_Decode, 187, 11, 125, // Opcode: ROUND_L_D64
/* 647 */     MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 680
/* 651 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 654 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 667
/* 659 */     MCD::OPC_CheckPredicate, 55, 235, 4, // Skip to: 1922
/* 663 */     MCD::OPC_Decode, 160, 14, 118, // Opcode: TRUNC_L_S
/* 667 */     MCD::OPC_FilterValue, 160, 4, 226, 4, // Skip to: 1922
/* 672 */     MCD::OPC_CheckPredicate, 55, 222, 4, // Skip to: 1922
/* 676 */     MCD::OPC_Decode, 159, 14, 125, // Opcode: TRUNC_L_D64
/* 680 */     MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 713
/* 684 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 687 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 700
/* 692 */     MCD::OPC_CheckPredicate, 55, 202, 4, // Skip to: 1922
/* 696 */     MCD::OPC_Decode, 244, 2, 118, // Opcode: CEIL_L_S
/* 700 */     MCD::OPC_FilterValue, 160, 4, 193, 4, // Skip to: 1922
/* 705 */     MCD::OPC_CheckPredicate, 55, 189, 4, // Skip to: 1922
/* 709 */     MCD::OPC_Decode, 243, 2, 125, // Opcode: CEIL_L_D64
/* 713 */     MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 746
/* 717 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 720 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 733
/* 725 */     MCD::OPC_CheckPredicate, 55, 169, 4, // Skip to: 1922
/* 729 */     MCD::OPC_Decode, 154, 6, 118, // Opcode: FLOOR_L_S
/* 733 */     MCD::OPC_FilterValue, 160, 4, 160, 4, // Skip to: 1922
/* 738 */     MCD::OPC_CheckPredicate, 55, 156, 4, // Skip to: 1922
/* 742 */     MCD::OPC_Decode, 153, 6, 125, // Opcode: FLOOR_L_D64
/* 746 */     MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 766
/* 750 */     MCD::OPC_CheckPredicate, 56, 144, 4, // Skip to: 1922
/* 754 */     MCD::OPC_CheckField, 16, 10, 160, 4, 137, 4, // Skip to: 1922
/* 761 */     MCD::OPC_Decode, 190, 11, 147, 2, // Opcode: ROUND_W_D64
/* 766 */     MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 786
/* 770 */     MCD::OPC_CheckPredicate, 56, 124, 4, // Skip to: 1922
/* 774 */     MCD::OPC_CheckField, 16, 10, 160, 4, 117, 4, // Skip to: 1922
/* 781 */     MCD::OPC_Decode, 162, 14, 147, 2, // Opcode: TRUNC_W_D64
/* 786 */     MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 806
/* 790 */     MCD::OPC_CheckPredicate, 56, 104, 4, // Skip to: 1922
/* 794 */     MCD::OPC_CheckField, 16, 10, 160, 4, 97, 4, // Skip to: 1922
/* 801 */     MCD::OPC_Decode, 246, 2, 147, 2, // Opcode: CEIL_W_D64
/* 806 */     MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 826
/* 810 */     MCD::OPC_CheckPredicate, 56, 84, 4, // Skip to: 1922
/* 814 */     MCD::OPC_CheckField, 16, 10, 160, 4, 77, 4, // Skip to: 1922
/* 821 */     MCD::OPC_Decode, 156, 6, 147, 2, // Opcode: FLOOR_W_D64
/* 826 */     MCD::OPC_FilterValue, 17, 41, 0, // Skip to: 871
/* 830 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 833 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 852
/* 837 */     MCD::OPC_CheckPredicate, 57, 57, 4, // Skip to: 1922
/* 841 */     MCD::OPC_CheckField, 21, 5, 17, 51, 4, // Skip to: 1922
/* 847 */     MCD::OPC_Decode, 166, 9, 148, 2, // Opcode: MOVF_D64
/* 852 */     MCD::OPC_FilterValue, 1, 42, 4, // Skip to: 1922
/* 856 */     MCD::OPC_CheckPredicate, 57, 38, 4, // Skip to: 1922
/* 860 */     MCD::OPC_CheckField, 21, 5, 17, 32, 4, // Skip to: 1922
/* 866 */     MCD::OPC_Decode, 186, 9, 148, 2, // Opcode: MOVT_D64
/* 871 */     MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 890
/* 875 */     MCD::OPC_CheckPredicate, 57, 19, 4, // Skip to: 1922
/* 879 */     MCD::OPC_CheckField, 21, 5, 17, 13, 4, // Skip to: 1922
/* 885 */     MCD::OPC_Decode, 198, 9, 149, 2, // Opcode: MOVZ_I_D64
/* 890 */     MCD::OPC_FilterValue, 19, 15, 0, // Skip to: 909
/* 894 */     MCD::OPC_CheckPredicate, 57, 0, 4, // Skip to: 1922
/* 898 */     MCD::OPC_CheckField, 21, 5, 17, 250, 3, // Skip to: 1922
/* 904 */     MCD::OPC_Decode, 178, 9, 149, 2, // Opcode: MOVN_I_D64
/* 909 */     MCD::OPC_FilterValue, 32, 31, 0, // Skip to: 944
/* 913 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 916 */     MCD::OPC_FilterValue, 160, 4, 9, 0, // Skip to: 930
/* 921 */     MCD::OPC_CheckPredicate, 55, 229, 3, // Skip to: 1922
/* 925 */     MCD::OPC_Decode, 248, 3, 147, 2, // Opcode: CVT_S_D64
/* 930 */     MCD::OPC_FilterValue, 160, 5, 219, 3, // Skip to: 1922
/* 935 */     MCD::OPC_CheckPredicate, 55, 215, 3, // Skip to: 1922
/* 939 */     MCD::OPC_Decode, 249, 3, 147, 2, // Opcode: CVT_S_L
/* 944 */     MCD::OPC_FilterValue, 33, 42, 0, // Skip to: 990
/* 948 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 951 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 964
/* 956 */     MCD::OPC_CheckPredicate, 55, 194, 3, // Skip to: 1922
/* 960 */     MCD::OPC_Decode, 239, 3, 118, // Opcode: CVT_D64_S
/* 964 */     MCD::OPC_FilterValue, 128, 5, 8, 0, // Skip to: 977
/* 969 */     MCD::OPC_CheckPredicate, 55, 181, 3, // Skip to: 1922
/* 973 */     MCD::OPC_Decode, 240, 3, 118, // Opcode: CVT_D64_W
/* 977 */     MCD::OPC_FilterValue, 160, 5, 172, 3, // Skip to: 1922
/* 982 */     MCD::OPC_CheckPredicate, 55, 168, 3, // Skip to: 1922
/* 986 */     MCD::OPC_Decode, 238, 3, 125, // Opcode: CVT_D64_L
/* 990 */     MCD::OPC_FilterValue, 36, 16, 0, // Skip to: 1010
/* 994 */     MCD::OPC_CheckPredicate, 55, 156, 3, // Skip to: 1922
/* 998 */     MCD::OPC_CheckField, 16, 10, 160, 4, 149, 3, // Skip to: 1922
/* 1005 */    MCD::OPC_Decode, 253, 3, 147, 2, // Opcode: CVT_W_D64
/* 1010 */    MCD::OPC_FilterValue, 48, 21, 0, // Skip to: 1035
/* 1014 */    MCD::OPC_CheckPredicate, 58, 136, 3, // Skip to: 1922
/* 1018 */    MCD::OPC_CheckField, 21, 5, 17, 130, 3, // Skip to: 1922
/* 1024 */    MCD::OPC_CheckField, 6, 5, 0, 124, 3, // Skip to: 1922
/* 1030 */    MCD::OPC_Decode, 133, 4, 150, 2, // Opcode: C_F_D64
/* 1035 */    MCD::OPC_FilterValue, 49, 21, 0, // Skip to: 1060
/* 1039 */    MCD::OPC_CheckPredicate, 58, 111, 3, // Skip to: 1922
/* 1043 */    MCD::OPC_CheckField, 21, 5, 17, 105, 3, // Skip to: 1922
/* 1049 */    MCD::OPC_CheckField, 6, 5, 0, 99, 3, // Skip to: 1922
/* 1055 */    MCD::OPC_Decode, 175, 4, 150, 2, // Opcode: C_UN_D64
/* 1060 */    MCD::OPC_FilterValue, 50, 21, 0, // Skip to: 1085
/* 1064 */    MCD::OPC_CheckPredicate, 58, 86, 3, // Skip to: 1922
/* 1068 */    MCD::OPC_CheckField, 21, 5, 17, 80, 3, // Skip to: 1922
/* 1074 */    MCD::OPC_CheckField, 6, 5, 0, 74, 3, // Skip to: 1922
/* 1080 */    MCD::OPC_Decode, 130, 4, 150, 2, // Opcode: C_EQ_D64
/* 1085 */    MCD::OPC_FilterValue, 51, 21, 0, // Skip to: 1110
/* 1089 */    MCD::OPC_CheckPredicate, 58, 61, 3, // Skip to: 1922
/* 1093 */    MCD::OPC_CheckField, 21, 5, 17, 55, 3, // Skip to: 1922
/* 1099 */    MCD::OPC_CheckField, 6, 5, 0, 49, 3, // Skip to: 1922
/* 1105 */    MCD::OPC_Decode, 166, 4, 150, 2, // Opcode: C_UEQ_D64
/* 1110 */    MCD::OPC_FilterValue, 52, 21, 0, // Skip to: 1135
/* 1114 */    MCD::OPC_CheckPredicate, 58, 36, 3, // Skip to: 1922
/* 1118 */    MCD::OPC_CheckField, 21, 5, 17, 30, 3, // Skip to: 1922
/* 1124 */    MCD::OPC_CheckField, 6, 5, 0, 24, 3, // Skip to: 1922
/* 1130 */    MCD::OPC_Decode, 157, 4, 150, 2, // Opcode: C_OLT_D64
/* 1135 */    MCD::OPC_FilterValue, 53, 21, 0, // Skip to: 1160
/* 1139 */    MCD::OPC_CheckPredicate, 58, 11, 3, // Skip to: 1922
/* 1143 */    MCD::OPC_CheckField, 21, 5, 17, 5, 3, // Skip to: 1922
/* 1149 */    MCD::OPC_CheckField, 6, 5, 0, 255, 2, // Skip to: 1922
/* 1155 */    MCD::OPC_Decode, 172, 4, 150, 2, // Opcode: C_ULT_D64
/* 1160 */    MCD::OPC_FilterValue, 54, 21, 0, // Skip to: 1185
/* 1164 */    MCD::OPC_CheckPredicate, 58, 242, 2, // Skip to: 1922
/* 1168 */    MCD::OPC_CheckField, 21, 5, 17, 236, 2, // Skip to: 1922
/* 1174 */    MCD::OPC_CheckField, 6, 5, 0, 230, 2, // Skip to: 1922
/* 1180 */    MCD::OPC_Decode, 154, 4, 150, 2, // Opcode: C_OLE_D64
/* 1185 */    MCD::OPC_FilterValue, 55, 21, 0, // Skip to: 1210
/* 1189 */    MCD::OPC_CheckPredicate, 58, 217, 2, // Skip to: 1922
/* 1193 */    MCD::OPC_CheckField, 21, 5, 17, 211, 2, // Skip to: 1922
/* 1199 */    MCD::OPC_CheckField, 6, 5, 0, 205, 2, // Skip to: 1922
/* 1205 */    MCD::OPC_Decode, 169, 4, 150, 2, // Opcode: C_ULE_D64
/* 1210 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1235
/* 1214 */    MCD::OPC_CheckPredicate, 58, 192, 2, // Skip to: 1922
/* 1218 */    MCD::OPC_CheckField, 21, 5, 17, 186, 2, // Skip to: 1922
/* 1224 */    MCD::OPC_CheckField, 6, 5, 0, 180, 2, // Skip to: 1922
/* 1230 */    MCD::OPC_Decode, 163, 4, 150, 2, // Opcode: C_SF_D64
/* 1235 */    MCD::OPC_FilterValue, 57, 21, 0, // Skip to: 1260
/* 1239 */    MCD::OPC_CheckPredicate, 58, 167, 2, // Skip to: 1922
/* 1243 */    MCD::OPC_CheckField, 21, 5, 17, 161, 2, // Skip to: 1922
/* 1249 */    MCD::OPC_CheckField, 6, 5, 0, 155, 2, // Skip to: 1922
/* 1255 */    MCD::OPC_Decode, 145, 4, 150, 2, // Opcode: C_NGLE_D64
/* 1260 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1285
/* 1264 */    MCD::OPC_CheckPredicate, 58, 142, 2, // Skip to: 1922
/* 1268 */    MCD::OPC_CheckField, 21, 5, 17, 136, 2, // Skip to: 1922
/* 1274 */    MCD::OPC_CheckField, 6, 5, 0, 130, 2, // Skip to: 1922
/* 1280 */    MCD::OPC_Decode, 160, 4, 150, 2, // Opcode: C_SEQ_D64
/* 1285 */    MCD::OPC_FilterValue, 59, 21, 0, // Skip to: 1310
/* 1289 */    MCD::OPC_CheckPredicate, 58, 117, 2, // Skip to: 1922
/* 1293 */    MCD::OPC_CheckField, 21, 5, 17, 111, 2, // Skip to: 1922
/* 1299 */    MCD::OPC_CheckField, 6, 5, 0, 105, 2, // Skip to: 1922
/* 1305 */    MCD::OPC_Decode, 148, 4, 150, 2, // Opcode: C_NGL_D64
/* 1310 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1335
/* 1314 */    MCD::OPC_CheckPredicate, 58, 92, 2, // Skip to: 1922
/* 1318 */    MCD::OPC_CheckField, 21, 5, 17, 86, 2, // Skip to: 1922
/* 1324 */    MCD::OPC_CheckField, 6, 5, 0, 80, 2, // Skip to: 1922
/* 1330 */    MCD::OPC_Decode, 139, 4, 150, 2, // Opcode: C_LT_D64
/* 1335 */    MCD::OPC_FilterValue, 61, 21, 0, // Skip to: 1360
/* 1339 */    MCD::OPC_CheckPredicate, 58, 67, 2, // Skip to: 1922
/* 1343 */    MCD::OPC_CheckField, 21, 5, 17, 61, 2, // Skip to: 1922
/* 1349 */    MCD::OPC_CheckField, 6, 5, 0, 55, 2, // Skip to: 1922
/* 1355 */    MCD::OPC_Decode, 142, 4, 150, 2, // Opcode: C_NGE_D64
/* 1360 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1385
/* 1364 */    MCD::OPC_CheckPredicate, 58, 42, 2, // Skip to: 1922
/* 1368 */    MCD::OPC_CheckField, 21, 5, 17, 36, 2, // Skip to: 1922
/* 1374 */    MCD::OPC_CheckField, 6, 5, 0, 30, 2, // Skip to: 1922
/* 1380 */    MCD::OPC_Decode, 136, 4, 150, 2, // Opcode: C_LE_D64
/* 1385 */    MCD::OPC_FilterValue, 63, 21, 2, // Skip to: 1922
/* 1389 */    MCD::OPC_CheckPredicate, 58, 17, 2, // Skip to: 1922
/* 1393 */    MCD::OPC_CheckField, 21, 5, 17, 11, 2, // Skip to: 1922
/* 1399 */    MCD::OPC_CheckField, 6, 5, 0, 5, 2, // Skip to: 1922
/* 1405 */    MCD::OPC_Decode, 151, 4, 150, 2, // Opcode: C_NGT_D64
/* 1410 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 1455
/* 1414 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1417 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1436
/* 1421 */    MCD::OPC_CheckPredicate, 53, 241, 1, // Skip to: 1922
/* 1425 */    MCD::OPC_CheckField, 3, 8, 0, 235, 1, // Skip to: 1922
/* 1431 */    MCD::OPC_Decode, 231, 4, 151, 2, // Opcode: DMFC2
/* 1436 */    MCD::OPC_FilterValue, 5, 226, 1, // Skip to: 1922
/* 1440 */    MCD::OPC_CheckPredicate, 53, 222, 1, // Skip to: 1922
/* 1444 */    MCD::OPC_CheckField, 3, 8, 0, 216, 1, // Skip to: 1922
/* 1450 */    MCD::OPC_Decode, 239, 4, 152, 2, // Opcode: DMTC2
/* 1455 */    MCD::OPC_FilterValue, 19, 131, 0, // Skip to: 1590
/* 1459 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1462 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1481
/* 1466 */    MCD::OPC_CheckPredicate, 59, 196, 1, // Skip to: 1922
/* 1470 */    MCD::OPC_CheckField, 11, 5, 0, 190, 1, // Skip to: 1922
/* 1476 */    MCD::OPC_Decode, 226, 7, 153, 2, // Opcode: LDXC164
/* 1481 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1500
/* 1485 */    MCD::OPC_CheckPredicate, 60, 177, 1, // Skip to: 1922
/* 1489 */    MCD::OPC_CheckField, 11, 5, 0, 171, 1, // Skip to: 1922
/* 1495 */    MCD::OPC_Decode, 131, 8, 153, 2, // Opcode: LUXC164
/* 1500 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1519
/* 1504 */    MCD::OPC_CheckPredicate, 59, 158, 1, // Skip to: 1922
/* 1508 */    MCD::OPC_CheckField, 6, 5, 0, 152, 1, // Skip to: 1922
/* 1514 */    MCD::OPC_Decode, 231, 11, 154, 2, // Opcode: SDXC164
/* 1519 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1538
/* 1523 */    MCD::OPC_CheckPredicate, 60, 139, 1, // Skip to: 1922
/* 1527 */    MCD::OPC_CheckField, 6, 5, 0, 133, 1, // Skip to: 1922
/* 1533 */    MCD::OPC_Decode, 176, 13, 154, 2, // Opcode: SUXC164
/* 1538 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 1551
/* 1542 */    MCD::OPC_CheckPredicate, 59, 120, 1, // Skip to: 1922
/* 1546 */    MCD::OPC_Decode, 198, 8, 155, 2, // Opcode: MADD_D64
/* 1551 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 1564
/* 1555 */    MCD::OPC_CheckPredicate, 59, 107, 1, // Skip to: 1922
/* 1559 */    MCD::OPC_Decode, 218, 9, 155, 2, // Opcode: MSUB_D64
/* 1564 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 1577
/* 1568 */    MCD::OPC_CheckPredicate, 59, 94, 1, // Skip to: 1922
/* 1572 */    MCD::OPC_Decode, 173, 10, 155, 2, // Opcode: NMADD_D64
/* 1577 */    MCD::OPC_FilterValue, 57, 85, 1, // Skip to: 1922
/* 1581 */    MCD::OPC_CheckPredicate, 59, 81, 1, // Skip to: 1922
/* 1585 */    MCD::OPC_Decode, 178, 10, 155, 2, // Opcode: NMSUB_D64
/* 1590 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1603
/* 1594 */    MCD::OPC_CheckPredicate, 52, 68, 1, // Skip to: 1922
/* 1598 */    MCD::OPC_Decode, 182, 4, 156, 2, // Opcode: DADDi
/* 1603 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 1616
/* 1607 */    MCD::OPC_CheckPredicate, 50, 55, 1, // Skip to: 1922
/* 1611 */    MCD::OPC_Decode, 183, 4, 156, 2, // Opcode: DADDiu
/* 1616 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1629
/* 1620 */    MCD::OPC_CheckPredicate, 52, 42, 1, // Skip to: 1922
/* 1624 */    MCD::OPC_Decode, 222, 7, 239, 1, // Opcode: LDL
/* 1629 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 1642
/* 1633 */    MCD::OPC_CheckPredicate, 52, 29, 1, // Skip to: 1922
/* 1637 */    MCD::OPC_Decode, 224, 7, 239, 1, // Opcode: LDR
/* 1642 */    MCD::OPC_FilterValue, 28, 29, 0, // Skip to: 1675
/* 1646 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1649 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 1662
/* 1653 */    MCD::OPC_CheckPredicate, 61, 9, 1, // Skip to: 1922
/* 1657 */    MCD::OPC_Decode, 196, 4, 157, 2, // Opcode: DCLZ
/* 1662 */    MCD::OPC_FilterValue, 37, 0, 1, // Skip to: 1922
/* 1666 */    MCD::OPC_CheckPredicate, 61, 252, 0, // Skip to: 1922
/* 1670 */    MCD::OPC_Decode, 194, 4, 157, 2, // Opcode: DCLO
/* 1675 */    MCD::OPC_FilterValue, 31, 126, 0, // Skip to: 1805
/* 1679 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1682 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1695
/* 1686 */    MCD::OPC_CheckPredicate, 22, 232, 0, // Skip to: 1922
/* 1690 */    MCD::OPC_Decode, 205, 4, 158, 2, // Opcode: DEXTM
/* 1695 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1708
/* 1699 */    MCD::OPC_CheckPredicate, 22, 219, 0, // Skip to: 1922
/* 1703 */    MCD::OPC_Decode, 207, 4, 158, 2, // Opcode: DEXTU
/* 1708 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1721
/* 1712 */    MCD::OPC_CheckPredicate, 22, 206, 0, // Skip to: 1922
/* 1716 */    MCD::OPC_Decode, 204, 4, 158, 2, // Opcode: DEXT
/* 1721 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1734
/* 1725 */    MCD::OPC_CheckPredicate, 8, 193, 0, // Skip to: 1922
/* 1729 */    MCD::OPC_Decode, 212, 4, 159, 2, // Opcode: DINSM
/* 1734 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1747
/* 1738 */    MCD::OPC_CheckPredicate, 8, 180, 0, // Skip to: 1922
/* 1742 */    MCD::OPC_Decode, 213, 4, 159, 2, // Opcode: DINSU
/* 1747 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1760
/* 1751 */    MCD::OPC_CheckPredicate, 8, 167, 0, // Skip to: 1922
/* 1755 */    MCD::OPC_Decode, 211, 4, 159, 2, // Opcode: DINS
/* 1760 */    MCD::OPC_FilterValue, 36, 158, 0, // Skip to: 1922
/* 1764 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1767 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 1786
/* 1771 */    MCD::OPC_CheckPredicate, 51, 147, 0, // Skip to: 1922
/* 1775 */    MCD::OPC_CheckField, 21, 5, 0, 141, 0, // Skip to: 1922
/* 1781 */    MCD::OPC_Decode, 158, 5, 134, 2, // Opcode: DSBH
/* 1786 */    MCD::OPC_FilterValue, 5, 132, 0, // Skip to: 1922
/* 1790 */    MCD::OPC_CheckPredicate, 51, 128, 0, // Skip to: 1922
/* 1794 */    MCD::OPC_CheckField, 21, 5, 0, 122, 0, // Skip to: 1922
/* 1800 */    MCD::OPC_Decode, 160, 5, 134, 2, // Opcode: DSHD
/* 1805 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1818
/* 1809 */    MCD::OPC_CheckPredicate, 50, 109, 0, // Skip to: 1922
/* 1813 */    MCD::OPC_Decode, 165, 8, 239, 1, // Opcode: LWu
/* 1818 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 1831
/* 1822 */    MCD::OPC_CheckPredicate, 52, 96, 0, // Skip to: 1922
/* 1826 */    MCD::OPC_Decode, 228, 11, 239, 1, // Opcode: SDL
/* 1831 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 1844
/* 1835 */    MCD::OPC_CheckPredicate, 52, 83, 0, // Skip to: 1922
/* 1839 */    MCD::OPC_Decode, 229, 11, 239, 1, // Opcode: SDR
/* 1844 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 1857
/* 1848 */    MCD::OPC_CheckPredicate, 52, 70, 0, // Skip to: 1922
/* 1852 */    MCD::OPC_Decode, 244, 7, 239, 1, // Opcode: LLD
/* 1857 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 1870
/* 1861 */    MCD::OPC_CheckPredicate, 56, 57, 0, // Skip to: 1922
/* 1865 */    MCD::OPC_Decode, 213, 7, 241, 1, // Opcode: LDC164
/* 1870 */    MCD::OPC_FilterValue, 55, 9, 0, // Skip to: 1883
/* 1874 */    MCD::OPC_CheckPredicate, 50, 44, 0, // Skip to: 1922
/* 1878 */    MCD::OPC_Decode, 211, 7, 239, 1, // Opcode: LD
/* 1883 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 1896
/* 1887 */    MCD::OPC_CheckPredicate, 52, 31, 0, // Skip to: 1922
/* 1891 */    MCD::OPC_Decode, 211, 11, 239, 1, // Opcode: SCD
/* 1896 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 1909
/* 1900 */    MCD::OPC_CheckPredicate, 56, 18, 0, // Skip to: 1922
/* 1904 */    MCD::OPC_Decode, 221, 11, 241, 1, // Opcode: SDC164
/* 1909 */    MCD::OPC_FilterValue, 63, 9, 0, // Skip to: 1922
/* 1913 */    MCD::OPC_CheckPredicate, 50, 5, 0, // Skip to: 1922
/* 1917 */    MCD::OPC_Decode, 215, 11, 239, 1, // Opcode: SD
/* 1922 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Mips::FeatureMips16]);
  case 1:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMicroMips]);
  case 2:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMicroMips]);
  case 3:
    return (Bits[Mips::FeatureCnMips]);
  case 4:
    return (Bits[Mips::FeatureMicroMips]);
  case 5:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 6:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips64r6]);
  case 7:
    return (!Bits[Mips::FeatureMips16]);
  case 8:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2]);
  case 9:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 10:
    return (Bits[Mips::FeatureMSA]);
  case 11:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 12:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32]);
  case 13:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 14:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 15:
    return (Bits[Mips::FeatureDSP]);
  case 16:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 17:
    return (Bits[Mips::FeatureMSA] && Bits[Mips::FeatureMips64]);
  case 18:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2]);
  case 19:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 20:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMicroMips]);
  case 21:
    return (!Bits[Mips::FeatureMicroMips]);
  case 22:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 23:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r5] && !Bits[Mips::FeatureMicroMips]);
  case 24:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat]);
  case 25:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureSoftFloat]);
  case 26:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat]);
  case 27:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 28:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 29:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 30:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 31:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32r2] && !Bits[Mips::FeatureSoftFloat]);
  case 32:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 33:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 34:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 35:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 36:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 37:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 38:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 39:
    return (Bits[Mips::FeatureDSPR2]);
  case 40:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 41:
    return (Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 42:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 43:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 44:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6]);
  case 45:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6]);
  case 46:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6]);
  case 47:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 48:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 49:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6]);
  case 50:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3]);
  case 51:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r2]);
  case 52:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 53:
    return (Bits[Mips::FeatureMips64]);
  case 54:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat]);
  case 55:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 56:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 57:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 58:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 59:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 60:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 61:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64] && !Bits[Mips::FeatureMips64r6]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 3;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 21, 6) << 5;
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    if (DecodeFMem3(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeMemMMImm4(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeANDI16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeMemMMReglistImm4Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeUImm5lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    if (DecodeMemMMSPImm5Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 4);
    if (DecodeSimm4(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 1, 9);
    if (DecodeSimm9SP(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeMemMMGPImm7Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeAddiur2Simm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 6);
    if (DecodeUImm6Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeMovePRegPair(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeBranchTarget7MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeBranchTarget10MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeLiSimm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    if (DecodeMemMMImm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    if (DecodeMemMMImm12(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    if (DecodeCacheOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    if (DecodeJumpTargetMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 23);
    if (DecodeSimm23Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 72:
    if (DecodeMemMMImm9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeLSAImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeLSAImm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 96:
    if (DecodeSyncI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 97:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 139:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 185:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 186:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 189:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 192:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 193:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 194:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 200:
    if (DecodeINSVE_DF(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 201:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 202:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 203:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 204:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 206:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 210:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 211:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 212:
    if (DecodeMSA128Mem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 216:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 217:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 218:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 219:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 220:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 223:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 224:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 225:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 226:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 227:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 228:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 229:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 230:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 232:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 233:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 234:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 235:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 236:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 237:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 238:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 239:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 240:
    if (DecodeCacheOp(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 241:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 242:
    if (DecodeFMem2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 244:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 245:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 246:
    if (DecodeBlezGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 247:
    if (DecodeBgtzGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 248:
    if (DecodeAddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 249:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 250:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 251:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 252:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 253:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 254:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 255:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 256:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 257:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 258:
    if (DecodeFMemCop2R6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 259:
    if (DecodeBlezlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 260:
    if (DecodeBgtzlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 261:
    if (DecodeDaddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 262:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 263:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 264:
    if (DecodeCacheOpR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 265:
    if (DecodeSpecial3LlSc(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 266:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 267:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 18);
    if (DecodeSimm18Lsl3(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 268:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 269:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 270:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 271:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 272:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 273:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 274:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 275:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 276:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 277:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 278:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 279:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 280:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 281:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 282:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 283:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 284:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 285:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 286:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 287:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
