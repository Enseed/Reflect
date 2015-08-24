/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
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

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 13, 2, // Skip to: 532
/* 7 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 25, 5, 0, 38, 25, // Skip to: 6458
/* 20 */      MCD::OPC_Decode, 247, 3, 0, // Opcode: UNIMP
/* 24 */      MCD::OPC_FilterValue, 1, 103, 0, // Skip to: 131
/* 28 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 31 */      MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 60
/* 35 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 38 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 49
/* 42 */      MCD::OPC_CheckPredicate, 0, 12, 25, // Skip to: 6458
/* 46 */      MCD::OPC_Decode, 95, 1, // Opcode: BPICCNT
/* 49 */      MCD::OPC_FilterValue, 1, 5, 25, // Skip to: 6458
/* 53 */      MCD::OPC_CheckPredicate, 0, 1, 25, // Skip to: 6458
/* 57 */      MCD::OPC_Decode, 94, 1, // Opcode: BPICCANT
/* 60 */      MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 89
/* 64 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 67 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 78
/* 71 */      MCD::OPC_CheckPredicate, 0, 239, 24, // Skip to: 6458
/* 75 */      MCD::OPC_Decode, 92, 1, // Opcode: BPICC
/* 78 */      MCD::OPC_FilterValue, 1, 232, 24, // Skip to: 6458
/* 82 */      MCD::OPC_CheckPredicate, 0, 228, 24, // Skip to: 6458
/* 86 */      MCD::OPC_Decode, 93, 1, // Opcode: BPICCA
/* 89 */      MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 110
/* 93 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 96 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 103
/* 100 */     MCD::OPC_Decode, 111, 1, // Opcode: BPXCCNT
/* 103 */     MCD::OPC_FilterValue, 1, 207, 24, // Skip to: 6458
/* 107 */     MCD::OPC_Decode, 110, 1, // Opcode: BPXCCANT
/* 110 */     MCD::OPC_FilterValue, 5, 200, 24, // Skip to: 6458
/* 114 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 117 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 124
/* 121 */     MCD::OPC_Decode, 108, 1, // Opcode: BPXCC
/* 124 */     MCD::OPC_FilterValue, 1, 186, 24, // Skip to: 6458
/* 128 */     MCD::OPC_Decode, 109, 1, // Opcode: BPXCCA
/* 131 */     MCD::OPC_FilterValue, 2, 26, 0, // Skip to: 161
/* 135 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 138 */     MCD::OPC_FilterValue, 0, 12, 0, // Skip to: 154
/* 142 */     MCD::OPC_CheckField, 25, 4, 8, 3, 0, // Skip to: 151
/* 148 */     MCD::OPC_Decode, 74, 0, // Opcode: BA
/* 151 */     MCD::OPC_Decode, 75, 2, // Opcode: BCOND
/* 154 */     MCD::OPC_FilterValue, 1, 156, 24, // Skip to: 6458
/* 158 */     MCD::OPC_Decode, 76, 2, // Opcode: BCONDA
/* 161 */     MCD::OPC_FilterValue, 3, 255, 0, // Skip to: 420
/* 165 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 168 */     MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 189
/* 172 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 175 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 182
/* 179 */     MCD::OPC_Decode, 114, 3, // Opcode: BPZnapn
/* 182 */     MCD::OPC_FilterValue, 1, 128, 24, // Skip to: 6458
/* 186 */     MCD::OPC_Decode, 115, 3, // Opcode: BPZnapt
/* 189 */     MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 210
/* 193 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 196 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 203
/* 200 */     MCD::OPC_Decode, 98, 3, // Opcode: BPLEZnapn
/* 203 */     MCD::OPC_FilterValue, 1, 107, 24, // Skip to: 6458
/* 207 */     MCD::OPC_Decode, 99, 3, // Opcode: BPLEZnapt
/* 210 */     MCD::OPC_FilterValue, 3, 17, 0, // Skip to: 231
/* 214 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 217 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 224
/* 221 */     MCD::OPC_Decode, 102, 3, // Opcode: BPLZnapn
/* 224 */     MCD::OPC_FilterValue, 1, 86, 24, // Skip to: 6458
/* 228 */     MCD::OPC_Decode, 103, 3, // Opcode: BPLZnapt
/* 231 */     MCD::OPC_FilterValue, 5, 17, 0, // Skip to: 252
/* 235 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 238 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 245
/* 242 */     MCD::OPC_Decode, 106, 3, // Opcode: BPNZnapn
/* 245 */     MCD::OPC_FilterValue, 1, 65, 24, // Skip to: 6458
/* 249 */     MCD::OPC_Decode, 107, 3, // Opcode: BPNZnapt
/* 252 */     MCD::OPC_FilterValue, 6, 17, 0, // Skip to: 273
/* 256 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 259 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 266
/* 263 */     MCD::OPC_Decode, 90, 3, // Opcode: BPGZnapn
/* 266 */     MCD::OPC_FilterValue, 1, 44, 24, // Skip to: 6458
/* 270 */     MCD::OPC_Decode, 91, 3, // Opcode: BPGZnapt
/* 273 */     MCD::OPC_FilterValue, 7, 17, 0, // Skip to: 294
/* 277 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 280 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 287
/* 284 */     MCD::OPC_Decode, 86, 3, // Opcode: BPGEZnapn
/* 287 */     MCD::OPC_FilterValue, 1, 23, 24, // Skip to: 6458
/* 291 */     MCD::OPC_Decode, 87, 3, // Opcode: BPGEZnapt
/* 294 */     MCD::OPC_FilterValue, 17, 17, 0, // Skip to: 315
/* 298 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 301 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 308
/* 305 */     MCD::OPC_Decode, 112, 3, // Opcode: BPZapn
/* 308 */     MCD::OPC_FilterValue, 1, 2, 24, // Skip to: 6458
/* 312 */     MCD::OPC_Decode, 113, 3, // Opcode: BPZapt
/* 315 */     MCD::OPC_FilterValue, 18, 17, 0, // Skip to: 336
/* 319 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 322 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 329
/* 326 */     MCD::OPC_Decode, 96, 3, // Opcode: BPLEZapn
/* 329 */     MCD::OPC_FilterValue, 1, 237, 23, // Skip to: 6458
/* 333 */     MCD::OPC_Decode, 97, 3, // Opcode: BPLEZapt
/* 336 */     MCD::OPC_FilterValue, 19, 17, 0, // Skip to: 357
/* 340 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 343 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 350
/* 347 */     MCD::OPC_Decode, 100, 3, // Opcode: BPLZapn
/* 350 */     MCD::OPC_FilterValue, 1, 216, 23, // Skip to: 6458
/* 354 */     MCD::OPC_Decode, 101, 3, // Opcode: BPLZapt
/* 357 */     MCD::OPC_FilterValue, 21, 17, 0, // Skip to: 378
/* 361 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 364 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 371
/* 368 */     MCD::OPC_Decode, 104, 3, // Opcode: BPNZapn
/* 371 */     MCD::OPC_FilterValue, 1, 195, 23, // Skip to: 6458
/* 375 */     MCD::OPC_Decode, 105, 3, // Opcode: BPNZapt
/* 378 */     MCD::OPC_FilterValue, 22, 17, 0, // Skip to: 399
/* 382 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 385 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 392
/* 389 */     MCD::OPC_Decode, 88, 3, // Opcode: BPGZapn
/* 392 */     MCD::OPC_FilterValue, 1, 174, 23, // Skip to: 6458
/* 396 */     MCD::OPC_Decode, 89, 3, // Opcode: BPGZapt
/* 399 */     MCD::OPC_FilterValue, 23, 167, 23, // Skip to: 6458
/* 403 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 406 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 413
/* 410 */     MCD::OPC_Decode, 84, 3, // Opcode: BPGEZapn
/* 413 */     MCD::OPC_FilterValue, 1, 153, 23, // Skip to: 6458
/* 417 */     MCD::OPC_Decode, 85, 3, // Opcode: BPGEZapt
/* 420 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 444
/* 424 */     MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 440
/* 430 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, // Skip to: 440
/* 436 */     MCD::OPC_Decode, 246, 2, 4, // Opcode: NOP
/* 440 */     MCD::OPC_Decode, 161, 3, 5, // Opcode: SETHIi
/* 444 */     MCD::OPC_FilterValue, 5, 61, 0, // Skip to: 509
/* 448 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 451 */     MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 480
/* 455 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 458 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 469
/* 462 */     MCD::OPC_CheckPredicate, 0, 104, 23, // Skip to: 6458
/* 466 */     MCD::OPC_Decode, 83, 6, // Opcode: BPFCCNT
/* 469 */     MCD::OPC_FilterValue, 1, 97, 23, // Skip to: 6458
/* 473 */     MCD::OPC_CheckPredicate, 0, 93, 23, // Skip to: 6458
/* 477 */     MCD::OPC_Decode, 82, 6, // Opcode: BPFCCANT
/* 480 */     MCD::OPC_FilterValue, 1, 86, 23, // Skip to: 6458
/* 484 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 487 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 498
/* 491 */     MCD::OPC_CheckPredicate, 0, 75, 23, // Skip to: 6458
/* 495 */     MCD::OPC_Decode, 80, 6, // Opcode: BPFCC
/* 498 */     MCD::OPC_FilterValue, 1, 68, 23, // Skip to: 6458
/* 502 */     MCD::OPC_CheckPredicate, 0, 64, 23, // Skip to: 6458
/* 506 */     MCD::OPC_Decode, 81, 6, // Opcode: BPFCCA
/* 509 */     MCD::OPC_FilterValue, 6, 57, 23, // Skip to: 6458
/* 513 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 516 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 152, 1, 2, // Opcode: FBCOND
/* 524 */     MCD::OPC_FilterValue, 1, 42, 23, // Skip to: 6458
/* 528 */     MCD::OPC_Decode, 153, 1, 2, // Opcode: FBCONDA
/* 532 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 539
/* 536 */     MCD::OPC_Decode, 117, 7, // Opcode: CALL
/* 539 */     MCD::OPC_FilterValue, 2, 38, 19, // Skip to: 5445
/* 543 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 546 */     MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 573
/* 550 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 553 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 566
/* 557 */     MCD::OPC_CheckField, 5, 8, 0, 7, 23, // Skip to: 6458
/* 563 */     MCD::OPC_Decode, 34, 8, // Opcode: ADDrr
/* 566 */     MCD::OPC_FilterValue, 1, 0, 23, // Skip to: 6458
/* 570 */     MCD::OPC_Decode, 33, 9, // Opcode: ADDri
/* 573 */     MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 600
/* 577 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 580 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 593
/* 584 */     MCD::OPC_CheckField, 5, 8, 0, 236, 22, // Skip to: 6458
/* 590 */     MCD::OPC_Decode, 49, 8, // Opcode: ANDrr
/* 593 */     MCD::OPC_FilterValue, 1, 229, 22, // Skip to: 6458
/* 597 */     MCD::OPC_Decode, 48, 9, // Opcode: ANDri
/* 600 */     MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 629
/* 604 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 607 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 621
/* 611 */     MCD::OPC_CheckField, 5, 8, 0, 209, 22, // Skip to: 6458
/* 617 */     MCD::OPC_Decode, 129, 3, 8, // Opcode: ORrr
/* 621 */     MCD::OPC_FilterValue, 1, 201, 22, // Skip to: 6458
/* 625 */     MCD::OPC_Decode, 128, 3, 9, // Opcode: ORri
/* 629 */     MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 658
/* 633 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 636 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 650
/* 640 */     MCD::OPC_CheckField, 5, 8, 0, 180, 22, // Skip to: 6458
/* 646 */     MCD::OPC_Decode, 151, 4, 8, // Opcode: XORrr
/* 650 */     MCD::OPC_FilterValue, 1, 172, 22, // Skip to: 6458
/* 654 */     MCD::OPC_Decode, 150, 4, 9, // Opcode: XORri
/* 658 */     MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 687
/* 662 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 665 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 679
/* 669 */     MCD::OPC_CheckField, 5, 8, 0, 151, 22, // Skip to: 6458
/* 675 */     MCD::OPC_Decode, 213, 3, 8, // Opcode: SUBrr
/* 679 */     MCD::OPC_FilterValue, 1, 143, 22, // Skip to: 6458
/* 683 */     MCD::OPC_Decode, 212, 3, 9, // Opcode: SUBri
/* 687 */     MCD::OPC_FilterValue, 5, 23, 0, // Skip to: 714
/* 691 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 694 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 707
/* 698 */     MCD::OPC_CheckField, 5, 8, 0, 122, 22, // Skip to: 6458
/* 704 */     MCD::OPC_Decode, 44, 8, // Opcode: ANDNrr
/* 707 */     MCD::OPC_FilterValue, 1, 115, 22, // Skip to: 6458
/* 711 */     MCD::OPC_Decode, 43, 9, // Opcode: ANDNri
/* 714 */     MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 743
/* 718 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 721 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 735
/* 725 */     MCD::OPC_CheckField, 5, 8, 0, 95, 22, // Skip to: 6458
/* 731 */     MCD::OPC_Decode, 252, 2, 8, // Opcode: ORNrr
/* 735 */     MCD::OPC_FilterValue, 1, 87, 22, // Skip to: 6458
/* 739 */     MCD::OPC_Decode, 251, 2, 9, // Opcode: ORNri
/* 743 */     MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 772
/* 747 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 750 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 764
/* 754 */     MCD::OPC_CheckField, 5, 8, 0, 66, 22, // Skip to: 6458
/* 760 */     MCD::OPC_Decode, 145, 4, 8, // Opcode: XNORrr
/* 764 */     MCD::OPC_FilterValue, 1, 58, 22, // Skip to: 6458
/* 768 */     MCD::OPC_Decode, 144, 4, 9, // Opcode: XNORri
/* 772 */     MCD::OPC_FilterValue, 8, 23, 0, // Skip to: 799
/* 776 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 779 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 792
/* 783 */     MCD::OPC_CheckField, 5, 8, 0, 37, 22, // Skip to: 6458
/* 789 */     MCD::OPC_Decode, 26, 8, // Opcode: ADDCrr
/* 792 */     MCD::OPC_FilterValue, 1, 30, 22, // Skip to: 6458
/* 796 */     MCD::OPC_Decode, 25, 9, // Opcode: ADDCri
/* 799 */     MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 828
/* 803 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 806 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 820
/* 810 */     MCD::OPC_CheckField, 5, 8, 0, 10, 22, // Skip to: 6458
/* 816 */     MCD::OPC_Decode, 245, 2, 10, // Opcode: MULXrr
/* 820 */     MCD::OPC_FilterValue, 1, 2, 22, // Skip to: 6458
/* 824 */     MCD::OPC_Decode, 244, 2, 11, // Opcode: MULXri
/* 828 */     MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 857
/* 832 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 835 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 849
/* 839 */     MCD::OPC_CheckField, 5, 8, 0, 237, 21, // Skip to: 6458
/* 845 */     MCD::OPC_Decode, 246, 3, 8, // Opcode: UMULrr
/* 849 */     MCD::OPC_FilterValue, 1, 229, 21, // Skip to: 6458
/* 853 */     MCD::OPC_Decode, 245, 3, 9, // Opcode: UMULri
/* 857 */     MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 886
/* 861 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 864 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 878
/* 868 */     MCD::OPC_CheckField, 5, 8, 0, 208, 21, // Skip to: 6458
/* 874 */     MCD::OPC_Decode, 171, 3, 8, // Opcode: SMULrr
/* 878 */     MCD::OPC_FilterValue, 1, 200, 21, // Skip to: 6458
/* 882 */     MCD::OPC_Decode, 170, 3, 9, // Opcode: SMULri
/* 886 */     MCD::OPC_FilterValue, 12, 25, 0, // Skip to: 915
/* 890 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 893 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 907
/* 897 */     MCD::OPC_CheckField, 5, 8, 0, 179, 21, // Skip to: 6458
/* 903 */     MCD::OPC_Decode, 207, 3, 8, // Opcode: SUBCrr
/* 907 */     MCD::OPC_FilterValue, 1, 171, 21, // Skip to: 6458
/* 911 */     MCD::OPC_Decode, 206, 3, 9, // Opcode: SUBCri
/* 915 */     MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 944
/* 919 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 922 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 936
/* 926 */     MCD::OPC_CheckField, 5, 8, 0, 150, 21, // Skip to: 6458
/* 932 */     MCD::OPC_Decode, 239, 3, 10, // Opcode: UDIVXrr
/* 936 */     MCD::OPC_FilterValue, 1, 142, 21, // Skip to: 6458
/* 940 */     MCD::OPC_Decode, 238, 3, 11, // Opcode: UDIVXri
/* 944 */     MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 973
/* 948 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 951 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 965
/* 955 */     MCD::OPC_CheckField, 5, 8, 0, 121, 21, // Skip to: 6458
/* 961 */     MCD::OPC_Decode, 241, 3, 8, // Opcode: UDIVrr
/* 965 */     MCD::OPC_FilterValue, 1, 113, 21, // Skip to: 6458
/* 969 */     MCD::OPC_Decode, 240, 3, 9, // Opcode: UDIVri
/* 973 */     MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 1002
/* 977 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 980 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 994
/* 984 */     MCD::OPC_CheckField, 5, 8, 0, 92, 21, // Skip to: 6458
/* 990 */     MCD::OPC_Decode, 150, 3, 8, // Opcode: SDIVrr
/* 994 */     MCD::OPC_FilterValue, 1, 84, 21, // Skip to: 6458
/* 998 */     MCD::OPC_Decode, 149, 3, 9, // Opcode: SDIVri
/* 1002 */    MCD::OPC_FilterValue, 16, 23, 0, // Skip to: 1029
/* 1006 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1009 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1022
/* 1013 */    MCD::OPC_CheckField, 5, 8, 0, 63, 21, // Skip to: 6458
/* 1019 */    MCD::OPC_Decode, 24, 8, // Opcode: ADDCCrr
/* 1022 */    MCD::OPC_FilterValue, 1, 56, 21, // Skip to: 6458
/* 1026 */    MCD::OPC_Decode, 23, 9, // Opcode: ADDCCri
/* 1029 */    MCD::OPC_FilterValue, 17, 23, 0, // Skip to: 1056
/* 1033 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1036 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1049
/* 1040 */    MCD::OPC_CheckField, 5, 8, 0, 36, 21, // Skip to: 6458
/* 1046 */    MCD::OPC_Decode, 40, 8, // Opcode: ANDCCrr
/* 1049 */    MCD::OPC_FilterValue, 1, 29, 21, // Skip to: 6458
/* 1053 */    MCD::OPC_Decode, 39, 9, // Opcode: ANDCCri
/* 1056 */    MCD::OPC_FilterValue, 18, 25, 0, // Skip to: 1085
/* 1060 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1063 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1077
/* 1067 */    MCD::OPC_CheckField, 5, 8, 0, 9, 21, // Skip to: 6458
/* 1073 */    MCD::OPC_Decode, 248, 2, 8, // Opcode: ORCCrr
/* 1077 */    MCD::OPC_FilterValue, 1, 1, 21, // Skip to: 6458
/* 1081 */    MCD::OPC_Decode, 247, 2, 9, // Opcode: ORCCri
/* 1085 */    MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 1114
/* 1089 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1092 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1106
/* 1096 */    MCD::OPC_CheckField, 5, 8, 0, 236, 20, // Skip to: 6458
/* 1102 */    MCD::OPC_Decode, 147, 4, 8, // Opcode: XORCCrr
/* 1106 */    MCD::OPC_FilterValue, 1, 228, 20, // Skip to: 6458
/* 1110 */    MCD::OPC_Decode, 146, 4, 9, // Opcode: XORCCri
/* 1114 */    MCD::OPC_FilterValue, 20, 44, 0, // Skip to: 1162
/* 1118 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1121 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 1145
/* 1125 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1128 */    MCD::OPC_FilterValue, 0, 206, 20, // Skip to: 6458
/* 1132 */    MCD::OPC_CheckField, 25, 5, 0, 3, 0, // Skip to: 1141
/* 1138 */    MCD::OPC_Decode, 126, 12, // Opcode: CMPrr
/* 1141 */    MCD::OPC_Decode, 205, 3, 8, // Opcode: SUBCCrr
/* 1145 */    MCD::OPC_FilterValue, 1, 189, 20, // Skip to: 6458
/* 1149 */    MCD::OPC_CheckField, 25, 5, 0, 3, 0, // Skip to: 1158
/* 1155 */    MCD::OPC_Decode, 125, 13, // Opcode: CMPri
/* 1158 */    MCD::OPC_Decode, 204, 3, 9, // Opcode: SUBCCri
/* 1162 */    MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 1189
/* 1166 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1169 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1182
/* 1173 */    MCD::OPC_CheckField, 5, 8, 0, 159, 20, // Skip to: 6458
/* 1179 */    MCD::OPC_Decode, 42, 8, // Opcode: ANDNCCrr
/* 1182 */    MCD::OPC_FilterValue, 1, 152, 20, // Skip to: 6458
/* 1186 */    MCD::OPC_Decode, 41, 9, // Opcode: ANDNCCri
/* 1189 */    MCD::OPC_FilterValue, 22, 25, 0, // Skip to: 1218
/* 1193 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1196 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1210
/* 1200 */    MCD::OPC_CheckField, 5, 8, 0, 132, 20, // Skip to: 6458
/* 1206 */    MCD::OPC_Decode, 250, 2, 8, // Opcode: ORNCCrr
/* 1210 */    MCD::OPC_FilterValue, 1, 124, 20, // Skip to: 6458
/* 1214 */    MCD::OPC_Decode, 249, 2, 9, // Opcode: ORNCCri
/* 1218 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 1247
/* 1222 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1225 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1239
/* 1229 */    MCD::OPC_CheckField, 5, 8, 0, 103, 20, // Skip to: 6458
/* 1235 */    MCD::OPC_Decode, 142, 4, 8, // Opcode: XNORCCrr
/* 1239 */    MCD::OPC_FilterValue, 1, 95, 20, // Skip to: 6458
/* 1243 */    MCD::OPC_Decode, 141, 4, 9, // Opcode: XNORCCri
/* 1247 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1274
/* 1251 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1254 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1267
/* 1258 */    MCD::OPC_CheckField, 5, 8, 0, 74, 20, // Skip to: 6458
/* 1264 */    MCD::OPC_Decode, 28, 8, // Opcode: ADDErr
/* 1267 */    MCD::OPC_FilterValue, 1, 67, 20, // Skip to: 6458
/* 1271 */    MCD::OPC_Decode, 27, 9, // Opcode: ADDEri
/* 1274 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 1303
/* 1278 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1281 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1295
/* 1285 */    MCD::OPC_CheckField, 5, 8, 0, 47, 20, // Skip to: 6458
/* 1291 */    MCD::OPC_Decode, 243, 3, 8, // Opcode: UMULCCrr
/* 1295 */    MCD::OPC_FilterValue, 1, 39, 20, // Skip to: 6458
/* 1299 */    MCD::OPC_Decode, 242, 3, 9, // Opcode: UMULCCri
/* 1303 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 1332
/* 1307 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1310 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1324
/* 1314 */    MCD::OPC_CheckField, 5, 8, 0, 18, 20, // Skip to: 6458
/* 1320 */    MCD::OPC_Decode, 169, 3, 8, // Opcode: SMULCCrr
/* 1324 */    MCD::OPC_FilterValue, 1, 10, 20, // Skip to: 6458
/* 1328 */    MCD::OPC_Decode, 168, 3, 9, // Opcode: SMULCCri
/* 1332 */    MCD::OPC_FilterValue, 28, 25, 0, // Skip to: 1361
/* 1336 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1339 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1353
/* 1343 */    MCD::OPC_CheckField, 5, 8, 0, 245, 19, // Skip to: 6458
/* 1349 */    MCD::OPC_Decode, 209, 3, 8, // Opcode: SUBErr
/* 1353 */    MCD::OPC_FilterValue, 1, 237, 19, // Skip to: 6458
/* 1357 */    MCD::OPC_Decode, 208, 3, 9, // Opcode: SUBEri
/* 1361 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 1390
/* 1365 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1368 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1382
/* 1372 */    MCD::OPC_CheckField, 5, 8, 0, 216, 19, // Skip to: 6458
/* 1378 */    MCD::OPC_Decode, 237, 3, 8, // Opcode: UDIVCCrr
/* 1382 */    MCD::OPC_FilterValue, 1, 208, 19, // Skip to: 6458
/* 1386 */    MCD::OPC_Decode, 236, 3, 9, // Opcode: UDIVCCri
/* 1390 */    MCD::OPC_FilterValue, 31, 25, 0, // Skip to: 1419
/* 1394 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1397 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1411
/* 1401 */    MCD::OPC_CheckField, 5, 8, 0, 187, 19, // Skip to: 6458
/* 1407 */    MCD::OPC_Decode, 146, 3, 8, // Opcode: SDIVCCrr
/* 1411 */    MCD::OPC_FilterValue, 1, 179, 19, // Skip to: 6458
/* 1415 */    MCD::OPC_Decode, 145, 3, 9, // Opcode: SDIVCCri
/* 1419 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 1448
/* 1423 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1426 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1440
/* 1430 */    MCD::OPC_CheckField, 5, 8, 0, 158, 19, // Skip to: 6458
/* 1436 */    MCD::OPC_Decode, 222, 3, 8, // Opcode: TADDCCrr
/* 1440 */    MCD::OPC_FilterValue, 1, 150, 19, // Skip to: 6458
/* 1444 */    MCD::OPC_Decode, 221, 3, 9, // Opcode: TADDCCri
/* 1448 */    MCD::OPC_FilterValue, 33, 25, 0, // Skip to: 1477
/* 1452 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1455 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1469
/* 1459 */    MCD::OPC_CheckField, 5, 8, 0, 129, 19, // Skip to: 6458
/* 1465 */    MCD::OPC_Decode, 233, 3, 8, // Opcode: TSUBCCrr
/* 1469 */    MCD::OPC_FilterValue, 1, 121, 19, // Skip to: 6458
/* 1473 */    MCD::OPC_Decode, 232, 3, 9, // Opcode: TSUBCCri
/* 1477 */    MCD::OPC_FilterValue, 34, 25, 0, // Skip to: 1506
/* 1481 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1484 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1498
/* 1488 */    MCD::OPC_CheckField, 5, 8, 0, 100, 19, // Skip to: 6458
/* 1494 */    MCD::OPC_Decode, 220, 3, 8, // Opcode: TADDCCTVrr
/* 1498 */    MCD::OPC_FilterValue, 1, 92, 19, // Skip to: 6458
/* 1502 */    MCD::OPC_Decode, 219, 3, 9, // Opcode: TADDCCTVri
/* 1506 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 1535
/* 1510 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1513 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1527
/* 1517 */    MCD::OPC_CheckField, 5, 8, 0, 71, 19, // Skip to: 6458
/* 1523 */    MCD::OPC_Decode, 231, 3, 8, // Opcode: TSUBCCTVrr
/* 1527 */    MCD::OPC_FilterValue, 1, 63, 19, // Skip to: 6458
/* 1531 */    MCD::OPC_Decode, 230, 3, 9, // Opcode: TSUBCCTVri
/* 1535 */    MCD::OPC_FilterValue, 37, 50, 0, // Skip to: 1589
/* 1539 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1542 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1571
/* 1546 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1549 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1563
/* 1553 */    MCD::OPC_CheckField, 5, 7, 0, 35, 19, // Skip to: 6458
/* 1559 */    MCD::OPC_Decode, 167, 3, 8, // Opcode: SLLrr
/* 1563 */    MCD::OPC_FilterValue, 1, 27, 19, // Skip to: 6458
/* 1567 */    MCD::OPC_Decode, 165, 3, 14, // Opcode: SLLXrr
/* 1571 */    MCD::OPC_FilterValue, 1, 19, 19, // Skip to: 6458
/* 1575 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1585
/* 1581 */    MCD::OPC_Decode, 164, 3, 15, // Opcode: SLLXri
/* 1585 */    MCD::OPC_Decode, 166, 3, 9, // Opcode: SLLri
/* 1589 */    MCD::OPC_FilterValue, 38, 50, 0, // Skip to: 1643
/* 1593 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1596 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1625
/* 1600 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1603 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1617
/* 1607 */    MCD::OPC_CheckField, 5, 7, 0, 237, 18, // Skip to: 6458
/* 1613 */    MCD::OPC_Decode, 179, 3, 8, // Opcode: SRLrr
/* 1617 */    MCD::OPC_FilterValue, 1, 229, 18, // Skip to: 6458
/* 1621 */    MCD::OPC_Decode, 177, 3, 14, // Opcode: SRLXrr
/* 1625 */    MCD::OPC_FilterValue, 1, 221, 18, // Skip to: 6458
/* 1629 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1639
/* 1635 */    MCD::OPC_Decode, 176, 3, 15, // Opcode: SRLXri
/* 1639 */    MCD::OPC_Decode, 178, 3, 9, // Opcode: SRLri
/* 1643 */    MCD::OPC_FilterValue, 39, 50, 0, // Skip to: 1697
/* 1647 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1650 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1679
/* 1654 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1657 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1671
/* 1661 */    MCD::OPC_CheckField, 5, 7, 0, 183, 18, // Skip to: 6458
/* 1667 */    MCD::OPC_Decode, 175, 3, 8, // Opcode: SRArr
/* 1671 */    MCD::OPC_FilterValue, 1, 175, 18, // Skip to: 6458
/* 1675 */    MCD::OPC_Decode, 173, 3, 14, // Opcode: SRAXrr
/* 1679 */    MCD::OPC_FilterValue, 1, 167, 18, // Skip to: 6458
/* 1683 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1693
/* 1689 */    MCD::OPC_Decode, 172, 3, 15, // Opcode: SRAXri
/* 1693 */    MCD::OPC_Decode, 174, 3, 9, // Opcode: SRAri
/* 1697 */    MCD::OPC_FilterValue, 40, 58, 0, // Skip to: 1759
/* 1701 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1704 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 1735
/* 1708 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1711 */    MCD::OPC_FilterValue, 0, 135, 18, // Skip to: 6458
/* 1715 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 1731
/* 1721 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, // Skip to: 1731
/* 1727 */    MCD::OPC_Decode, 181, 3, 4, // Opcode: STBAR
/* 1731 */    MCD::OPC_Decode, 133, 3, 16, // Opcode: RDASR
/* 1735 */    MCD::OPC_FilterValue, 1, 111, 18, // Skip to: 6458
/* 1739 */    MCD::OPC_CheckPredicate, 0, 107, 18, // Skip to: 6458
/* 1743 */    MCD::OPC_CheckField, 25, 5, 0, 101, 18, // Skip to: 6458
/* 1749 */    MCD::OPC_CheckField, 14, 5, 15, 95, 18, // Skip to: 6458
/* 1755 */    MCD::OPC_Decode, 220, 2, 17, // Opcode: MEMBARi
/* 1759 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 1773
/* 1763 */    MCD::OPC_CheckField, 0, 19, 0, 81, 18, // Skip to: 6458
/* 1769 */    MCD::OPC_Decode, 134, 3, 18, // Opcode: RDPSR
/* 1773 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 1787
/* 1777 */    MCD::OPC_CheckField, 0, 19, 0, 67, 18, // Skip to: 6458
/* 1783 */    MCD::OPC_Decode, 136, 3, 18, // Opcode: RDWIM
/* 1787 */    MCD::OPC_FilterValue, 43, 25, 0, // Skip to: 1816
/* 1791 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 1794 */    MCD::OPC_FilterValue, 0, 52, 18, // Skip to: 6458
/* 1798 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1812
/* 1802 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1812
/* 1808 */    MCD::OPC_Decode, 185, 1, 4, // Opcode: FLUSHW
/* 1812 */    MCD::OPC_Decode, 135, 3, 18, // Opcode: RDTBR
/* 1816 */    MCD::OPC_FilterValue, 44, 123, 0, // Skip to: 1943
/* 1820 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1823 */    MCD::OPC_FilterValue, 0, 56, 0, // Skip to: 1883
/* 1827 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1830 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1856
/* 1834 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1848
/* 1838 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1848
/* 1844 */    MCD::OPC_Decode, 223, 2, 19, // Opcode: MOVFCCrr
/* 1848 */    MCD::OPC_CheckPredicate, 0, 254, 17, // Skip to: 6458
/* 1852 */    MCD::OPC_Decode, 130, 4, 20, // Opcode: V9MOVFCCrr
/* 1856 */    MCD::OPC_FilterValue, 1, 246, 17, // Skip to: 6458
/* 1860 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1863 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1875
/* 1867 */    MCD::OPC_CheckPredicate, 0, 235, 17, // Skip to: 6458
/* 1871 */    MCD::OPC_Decode, 225, 2, 19, // Opcode: MOVICCrr
/* 1875 */    MCD::OPC_FilterValue, 2, 227, 17, // Skip to: 6458
/* 1879 */    MCD::OPC_Decode, 242, 2, 19, // Opcode: MOVXCCrr
/* 1883 */    MCD::OPC_FilterValue, 1, 219, 17, // Skip to: 6458
/* 1887 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1890 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1916
/* 1894 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1908
/* 1898 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1908
/* 1904 */    MCD::OPC_Decode, 222, 2, 21, // Opcode: MOVFCCri
/* 1908 */    MCD::OPC_CheckPredicate, 0, 194, 17, // Skip to: 6458
/* 1912 */    MCD::OPC_Decode, 129, 4, 22, // Opcode: V9MOVFCCri
/* 1916 */    MCD::OPC_FilterValue, 1, 186, 17, // Skip to: 6458
/* 1920 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1923 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1935
/* 1927 */    MCD::OPC_CheckPredicate, 0, 175, 17, // Skip to: 6458
/* 1931 */    MCD::OPC_Decode, 224, 2, 21, // Opcode: MOVICCri
/* 1935 */    MCD::OPC_FilterValue, 2, 167, 17, // Skip to: 6458
/* 1939 */    MCD::OPC_Decode, 241, 2, 21, // Opcode: MOVXCCri
/* 1943 */    MCD::OPC_FilterValue, 45, 25, 0, // Skip to: 1972
/* 1947 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1950 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1964
/* 1954 */    MCD::OPC_CheckField, 5, 8, 0, 146, 17, // Skip to: 6458
/* 1960 */    MCD::OPC_Decode, 148, 3, 10, // Opcode: SDIVXrr
/* 1964 */    MCD::OPC_FilterValue, 1, 138, 17, // Skip to: 6458
/* 1968 */    MCD::OPC_Decode, 147, 3, 11, // Opcode: SDIVXri
/* 1972 */    MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 1990
/* 1976 */    MCD::OPC_CheckPredicate, 0, 126, 17, // Skip to: 6458
/* 1980 */    MCD::OPC_CheckField, 5, 14, 0, 120, 17, // Skip to: 6458
/* 1986 */    MCD::OPC_Decode, 132, 3, 23, // Opcode: POPCrr
/* 1990 */    MCD::OPC_FilterValue, 47, 135, 0, // Skip to: 2129
/* 1994 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 1997 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2011
/* 2001 */    MCD::OPC_CheckField, 5, 5, 0, 99, 17, // Skip to: 6458
/* 2007 */    MCD::OPC_Decode, 237, 2, 14, // Opcode: MOVRRZrr
/* 2011 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2025
/* 2015 */    MCD::OPC_CheckField, 5, 5, 0, 85, 17, // Skip to: 6458
/* 2021 */    MCD::OPC_Decode, 231, 2, 14, // Opcode: MOVRLEZrr
/* 2025 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2039
/* 2029 */    MCD::OPC_CheckField, 5, 5, 0, 71, 17, // Skip to: 6458
/* 2035 */    MCD::OPC_Decode, 233, 2, 14, // Opcode: MOVRLZrr
/* 2039 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2053
/* 2043 */    MCD::OPC_CheckField, 5, 5, 0, 57, 17, // Skip to: 6458
/* 2049 */    MCD::OPC_Decode, 235, 2, 14, // Opcode: MOVRNZrr
/* 2053 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2067
/* 2057 */    MCD::OPC_CheckField, 5, 5, 0, 43, 17, // Skip to: 6458
/* 2063 */    MCD::OPC_Decode, 229, 2, 14, // Opcode: MOVRGZrr
/* 2067 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2081
/* 2071 */    MCD::OPC_CheckField, 5, 5, 0, 29, 17, // Skip to: 6458
/* 2077 */    MCD::OPC_Decode, 227, 2, 14, // Opcode: MOVRGEZrr
/* 2081 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2089
/* 2085 */    MCD::OPC_Decode, 236, 2, 24, // Opcode: MOVRRZri
/* 2089 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2097
/* 2093 */    MCD::OPC_Decode, 230, 2, 24, // Opcode: MOVRLEZri
/* 2097 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2105
/* 2101 */    MCD::OPC_Decode, 232, 2, 24, // Opcode: MOVRLZri
/* 2105 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2113
/* 2109 */    MCD::OPC_Decode, 234, 2, 24, // Opcode: MOVRNZri
/* 2113 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2121
/* 2117 */    MCD::OPC_Decode, 228, 2, 24, // Opcode: MOVRGZri
/* 2121 */    MCD::OPC_FilterValue, 15, 237, 16, // Skip to: 6458
/* 2125 */    MCD::OPC_Decode, 226, 2, 24, // Opcode: MOVRGEZri
/* 2129 */    MCD::OPC_FilterValue, 48, 25, 0, // Skip to: 2158
/* 2133 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2136 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2150
/* 2140 */    MCD::OPC_CheckField, 5, 8, 0, 216, 16, // Skip to: 6458
/* 2146 */    MCD::OPC_Decode, 132, 4, 25, // Opcode: WRASRrr
/* 2150 */    MCD::OPC_FilterValue, 1, 208, 16, // Skip to: 6458
/* 2154 */    MCD::OPC_Decode, 131, 4, 26, // Opcode: WRASRri
/* 2158 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 2199
/* 2162 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2165 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2185
/* 2169 */    MCD::OPC_CheckField, 25, 5, 0, 187, 16, // Skip to: 6458
/* 2175 */    MCD::OPC_CheckField, 5, 8, 0, 181, 16, // Skip to: 6458
/* 2181 */    MCD::OPC_Decode, 134, 4, 12, // Opcode: WRPSRrr
/* 2185 */    MCD::OPC_FilterValue, 1, 173, 16, // Skip to: 6458
/* 2189 */    MCD::OPC_CheckField, 25, 5, 0, 167, 16, // Skip to: 6458
/* 2195 */    MCD::OPC_Decode, 133, 4, 13, // Opcode: WRPSRri
/* 2199 */    MCD::OPC_FilterValue, 50, 37, 0, // Skip to: 2240
/* 2203 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2206 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2226
/* 2210 */    MCD::OPC_CheckField, 25, 5, 0, 146, 16, // Skip to: 6458
/* 2216 */    MCD::OPC_CheckField, 5, 8, 0, 140, 16, // Skip to: 6458
/* 2222 */    MCD::OPC_Decode, 138, 4, 12, // Opcode: WRWIMrr
/* 2226 */    MCD::OPC_FilterValue, 1, 132, 16, // Skip to: 6458
/* 2230 */    MCD::OPC_CheckField, 25, 5, 0, 126, 16, // Skip to: 6458
/* 2236 */    MCD::OPC_Decode, 137, 4, 13, // Opcode: WRWIMri
/* 2240 */    MCD::OPC_FilterValue, 51, 37, 0, // Skip to: 2281
/* 2244 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2247 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2267
/* 2251 */    MCD::OPC_CheckField, 25, 5, 0, 105, 16, // Skip to: 6458
/* 2257 */    MCD::OPC_CheckField, 5, 8, 0, 99, 16, // Skip to: 6458
/* 2263 */    MCD::OPC_Decode, 136, 4, 12, // Opcode: WRTBRrr
/* 2267 */    MCD::OPC_FilterValue, 1, 91, 16, // Skip to: 6458
/* 2271 */    MCD::OPC_CheckField, 25, 5, 0, 85, 16, // Skip to: 6458
/* 2277 */    MCD::OPC_Decode, 135, 4, 13, // Opcode: WRTBRri
/* 2281 */    MCD::OPC_FilterValue, 52, 197, 2, // Skip to: 2994
/* 2285 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2288 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2302
/* 2292 */    MCD::OPC_CheckField, 14, 5, 0, 64, 16, // Skip to: 6458
/* 2298 */    MCD::OPC_Decode, 215, 1, 27, // Opcode: FMOVS
/* 2302 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2320
/* 2306 */    MCD::OPC_CheckPredicate, 0, 52, 16, // Skip to: 6458
/* 2310 */    MCD::OPC_CheckField, 14, 5, 0, 46, 16, // Skip to: 6458
/* 2316 */    MCD::OPC_Decode, 189, 1, 28, // Opcode: FMOVD
/* 2320 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2338
/* 2324 */    MCD::OPC_CheckPredicate, 0, 34, 16, // Skip to: 6458
/* 2328 */    MCD::OPC_CheckField, 14, 5, 0, 28, 16, // Skip to: 6458
/* 2334 */    MCD::OPC_Decode, 193, 1, 29, // Opcode: FMOVQ
/* 2338 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2352
/* 2342 */    MCD::OPC_CheckField, 14, 5, 0, 14, 16, // Skip to: 6458
/* 2348 */    MCD::OPC_Decode, 235, 1, 27, // Opcode: FNEGS
/* 2352 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2370
/* 2356 */    MCD::OPC_CheckPredicate, 0, 2, 16, // Skip to: 6458
/* 2360 */    MCD::OPC_CheckField, 14, 5, 0, 252, 15, // Skip to: 6458
/* 2366 */    MCD::OPC_Decode, 233, 1, 28, // Opcode: FNEGD
/* 2370 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2388
/* 2374 */    MCD::OPC_CheckPredicate, 0, 240, 15, // Skip to: 6458
/* 2378 */    MCD::OPC_CheckField, 14, 5, 0, 234, 15, // Skip to: 6458
/* 2384 */    MCD::OPC_Decode, 234, 1, 29, // Opcode: FNEGQ
/* 2388 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2402
/* 2392 */    MCD::OPC_CheckField, 14, 5, 0, 220, 15, // Skip to: 6458
/* 2398 */    MCD::OPC_Decode, 141, 1, 27, // Opcode: FABSS
/* 2402 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2420
/* 2406 */    MCD::OPC_CheckPredicate, 0, 208, 15, // Skip to: 6458
/* 2410 */    MCD::OPC_CheckField, 14, 5, 0, 202, 15, // Skip to: 6458
/* 2416 */    MCD::OPC_Decode, 139, 1, 28, // Opcode: FABSD
/* 2420 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 2438
/* 2424 */    MCD::OPC_CheckPredicate, 0, 190, 15, // Skip to: 6458
/* 2428 */    MCD::OPC_CheckField, 14, 5, 0, 184, 15, // Skip to: 6458
/* 2434 */    MCD::OPC_Decode, 140, 1, 29, // Opcode: FABSQ
/* 2438 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 2452
/* 2442 */    MCD::OPC_CheckField, 14, 5, 0, 170, 15, // Skip to: 6458
/* 2448 */    MCD::OPC_Decode, 151, 2, 27, // Opcode: FSQRTS
/* 2452 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 2466
/* 2456 */    MCD::OPC_CheckField, 14, 5, 0, 156, 15, // Skip to: 6458
/* 2462 */    MCD::OPC_Decode, 149, 2, 28, // Opcode: FSQRTD
/* 2466 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 2480
/* 2470 */    MCD::OPC_CheckField, 14, 5, 0, 142, 15, // Skip to: 6458
/* 2476 */    MCD::OPC_Decode, 150, 2, 29, // Opcode: FSQRTQ
/* 2480 */    MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 2488
/* 2484 */    MCD::OPC_Decode, 144, 1, 30, // Opcode: FADDS
/* 2488 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2496
/* 2492 */    MCD::OPC_Decode, 142, 1, 31, // Opcode: FADDD
/* 2496 */    MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 2504
/* 2500 */    MCD::OPC_Decode, 143, 1, 32, // Opcode: FADDQ
/* 2504 */    MCD::OPC_FilterValue, 69, 4, 0, // Skip to: 2512
/* 2508 */    MCD::OPC_Decode, 166, 2, 30, // Opcode: FSUBS
/* 2512 */    MCD::OPC_FilterValue, 70, 4, 0, // Skip to: 2520
/* 2516 */    MCD::OPC_Decode, 164, 2, 31, // Opcode: FSUBD
/* 2520 */    MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 2528
/* 2524 */    MCD::OPC_Decode, 165, 2, 32, // Opcode: FSUBQ
/* 2528 */    MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 2536
/* 2532 */    MCD::OPC_Decode, 228, 1, 30, // Opcode: FMULS
/* 2536 */    MCD::OPC_FilterValue, 74, 4, 0, // Skip to: 2544
/* 2540 */    MCD::OPC_Decode, 224, 1, 31, // Opcode: FMULD
/* 2544 */    MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 2552
/* 2548 */    MCD::OPC_Decode, 227, 1, 32, // Opcode: FMULQ
/* 2552 */    MCD::OPC_FilterValue, 77, 4, 0, // Skip to: 2560
/* 2556 */    MCD::OPC_Decode, 168, 1, 30, // Opcode: FDIVS
/* 2560 */    MCD::OPC_FilterValue, 78, 4, 0, // Skip to: 2568
/* 2564 */    MCD::OPC_Decode, 166, 1, 31, // Opcode: FDIVD
/* 2568 */    MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 2576
/* 2572 */    MCD::OPC_Decode, 167, 1, 32, // Opcode: FDIVQ
/* 2576 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2588
/* 2580 */    MCD::OPC_CheckPredicate, 1, 34, 15, // Skip to: 6458
/* 2584 */    MCD::OPC_Decode, 230, 1, 31, // Opcode: FNADDS
/* 2588 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 2600
/* 2592 */    MCD::OPC_CheckPredicate, 1, 22, 15, // Skip to: 6458
/* 2596 */    MCD::OPC_Decode, 229, 1, 31, // Opcode: FNADDD
/* 2600 */    MCD::OPC_FilterValue, 89, 8, 0, // Skip to: 2612
/* 2604 */    MCD::OPC_CheckPredicate, 1, 10, 15, // Skip to: 6458
/* 2608 */    MCD::OPC_Decode, 239, 1, 31, // Opcode: FNMULS
/* 2612 */    MCD::OPC_FilterValue, 90, 8, 0, // Skip to: 2624
/* 2616 */    MCD::OPC_CheckPredicate, 1, 254, 14, // Skip to: 6458
/* 2620 */    MCD::OPC_Decode, 238, 1, 31, // Opcode: FNMULD
/* 2624 */    MCD::OPC_FilterValue, 97, 8, 0, // Skip to: 2636
/* 2628 */    MCD::OPC_CheckPredicate, 1, 242, 14, // Skip to: 6458
/* 2632 */    MCD::OPC_Decode, 176, 1, 31, // Opcode: FHADDS
/* 2636 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 2648
/* 2640 */    MCD::OPC_CheckPredicate, 1, 230, 14, // Skip to: 6458
/* 2644 */    MCD::OPC_Decode, 175, 1, 31, // Opcode: FHADDD
/* 2648 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 2660
/* 2652 */    MCD::OPC_CheckPredicate, 1, 218, 14, // Skip to: 6458
/* 2656 */    MCD::OPC_Decode, 178, 1, 31, // Opcode: FHSUBS
/* 2660 */    MCD::OPC_FilterValue, 102, 8, 0, // Skip to: 2672
/* 2664 */    MCD::OPC_CheckPredicate, 1, 206, 14, // Skip to: 6458
/* 2668 */    MCD::OPC_Decode, 177, 1, 31, // Opcode: FHSUBD
/* 2672 */    MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 2680
/* 2676 */    MCD::OPC_Decode, 148, 2, 33, // Opcode: FSMULD
/* 2680 */    MCD::OPC_FilterValue, 110, 4, 0, // Skip to: 2688
/* 2684 */    MCD::OPC_Decode, 169, 1, 34, // Opcode: FDMULQ
/* 2688 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 2700
/* 2692 */    MCD::OPC_CheckPredicate, 1, 178, 14, // Skip to: 6458
/* 2696 */    MCD::OPC_Decode, 237, 1, 31, // Opcode: FNHADDS
/* 2700 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 2712
/* 2704 */    MCD::OPC_CheckPredicate, 1, 166, 14, // Skip to: 6458
/* 2708 */    MCD::OPC_Decode, 236, 1, 31, // Opcode: FNHADDD
/* 2712 */    MCD::OPC_FilterValue, 121, 8, 0, // Skip to: 2724
/* 2716 */    MCD::OPC_CheckPredicate, 1, 154, 14, // Skip to: 6458
/* 2720 */    MCD::OPC_Decode, 246, 1, 31, // Opcode: FNSMULD
/* 2724 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2739
/* 2729 */    MCD::OPC_CheckField, 14, 5, 0, 139, 14, // Skip to: 6458
/* 2735 */    MCD::OPC_Decode, 163, 2, 35, // Opcode: FSTOX
/* 2739 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2754
/* 2744 */    MCD::OPC_CheckField, 14, 5, 0, 124, 14, // Skip to: 6458
/* 2750 */    MCD::OPC_Decode, 173, 1, 28, // Opcode: FDTOX
/* 2754 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2769
/* 2759 */    MCD::OPC_CheckField, 14, 5, 0, 109, 14, // Skip to: 6458
/* 2765 */    MCD::OPC_Decode, 143, 2, 36, // Opcode: FQTOX
/* 2769 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2784
/* 2774 */    MCD::OPC_CheckField, 14, 5, 0, 94, 14, // Skip to: 6458
/* 2780 */    MCD::OPC_Decode, 173, 2, 37, // Opcode: FXTOS
/* 2784 */    MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 2799
/* 2789 */    MCD::OPC_CheckField, 14, 5, 0, 79, 14, // Skip to: 6458
/* 2795 */    MCD::OPC_Decode, 171, 2, 28, // Opcode: FXTOD
/* 2799 */    MCD::OPC_FilterValue, 140, 1, 10, 0, // Skip to: 2814
/* 2804 */    MCD::OPC_CheckField, 14, 5, 0, 64, 14, // Skip to: 6458
/* 2810 */    MCD::OPC_Decode, 172, 2, 38, // Opcode: FXTOQ
/* 2814 */    MCD::OPC_FilterValue, 196, 1, 10, 0, // Skip to: 2829
/* 2819 */    MCD::OPC_CheckField, 14, 5, 0, 49, 14, // Skip to: 6458
/* 2825 */    MCD::OPC_Decode, 181, 1, 27, // Opcode: FITOS
/* 2829 */    MCD::OPC_FilterValue, 198, 1, 10, 0, // Skip to: 2844
/* 2834 */    MCD::OPC_CheckField, 14, 5, 0, 34, 14, // Skip to: 6458
/* 2840 */    MCD::OPC_Decode, 172, 1, 37, // Opcode: FDTOS
/* 2844 */    MCD::OPC_FilterValue, 199, 1, 10, 0, // Skip to: 2859
/* 2849 */    MCD::OPC_CheckField, 14, 5, 0, 19, 14, // Skip to: 6458
/* 2855 */    MCD::OPC_Decode, 142, 2, 39, // Opcode: FQTOS
/* 2859 */    MCD::OPC_FilterValue, 200, 1, 10, 0, // Skip to: 2874
/* 2864 */    MCD::OPC_CheckField, 14, 5, 0, 4, 14, // Skip to: 6458
/* 2870 */    MCD::OPC_Decode, 179, 1, 35, // Opcode: FITOD
/* 2874 */    MCD::OPC_FilterValue, 201, 1, 10, 0, // Skip to: 2889
/* 2879 */    MCD::OPC_CheckField, 14, 5, 0, 245, 13, // Skip to: 6458
/* 2885 */    MCD::OPC_Decode, 160, 2, 35, // Opcode: FSTOD
/* 2889 */    MCD::OPC_FilterValue, 203, 1, 10, 0, // Skip to: 2904
/* 2894 */    MCD::OPC_CheckField, 14, 5, 0, 230, 13, // Skip to: 6458
/* 2900 */    MCD::OPC_Decode, 140, 2, 36, // Opcode: FQTOD
/* 2904 */    MCD::OPC_FilterValue, 204, 1, 10, 0, // Skip to: 2919
/* 2909 */    MCD::OPC_CheckField, 14, 5, 0, 215, 13, // Skip to: 6458
/* 2915 */    MCD::OPC_Decode, 180, 1, 40, // Opcode: FITOQ
/* 2919 */    MCD::OPC_FilterValue, 205, 1, 10, 0, // Skip to: 2934
/* 2924 */    MCD::OPC_CheckField, 14, 5, 0, 200, 13, // Skip to: 6458
/* 2930 */    MCD::OPC_Decode, 162, 2, 40, // Opcode: FSTOQ
/* 2934 */    MCD::OPC_FilterValue, 206, 1, 10, 0, // Skip to: 2949
/* 2939 */    MCD::OPC_CheckField, 14, 5, 0, 185, 13, // Skip to: 6458
/* 2945 */    MCD::OPC_Decode, 171, 1, 38, // Opcode: FDTOQ
/* 2949 */    MCD::OPC_FilterValue, 209, 1, 10, 0, // Skip to: 2964
/* 2954 */    MCD::OPC_CheckField, 14, 5, 0, 170, 13, // Skip to: 6458
/* 2960 */    MCD::OPC_Decode, 161, 2, 27, // Opcode: FSTOI
/* 2964 */    MCD::OPC_FilterValue, 210, 1, 10, 0, // Skip to: 2979
/* 2969 */    MCD::OPC_CheckField, 14, 5, 0, 155, 13, // Skip to: 6458
/* 2975 */    MCD::OPC_Decode, 170, 1, 37, // Opcode: FDTOI
/* 2979 */    MCD::OPC_FilterValue, 211, 1, 146, 13, // Skip to: 6458
/* 2984 */    MCD::OPC_CheckField, 14, 5, 0, 140, 13, // Skip to: 6458
/* 2990 */    MCD::OPC_Decode, 141, 2, 39, // Opcode: FQTOI
/* 2994 */    MCD::OPC_FilterValue, 53, 70, 2, // Skip to: 3580
/* 2998 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3001 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 3080
/* 3005 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3008 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3041
/* 3012 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3015 */    MCD::OPC_FilterValue, 0, 111, 13, // Skip to: 6458
/* 3019 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3033
/* 3023 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3033
/* 3029 */    MCD::OPC_Decode, 216, 1, 41, // Opcode: FMOVS_FCC
/* 3033 */    MCD::OPC_CheckPredicate, 0, 93, 13, // Skip to: 6458
/* 3037 */    MCD::OPC_Decode, 128, 4, 42, // Opcode: V9FMOVS_FCC
/* 3041 */    MCD::OPC_FilterValue, 1, 85, 13, // Skip to: 6458
/* 3045 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3048 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3066
/* 3052 */    MCD::OPC_CheckPredicate, 0, 74, 13, // Skip to: 6458
/* 3056 */    MCD::OPC_CheckField, 18, 1, 0, 68, 13, // Skip to: 6458
/* 3062 */    MCD::OPC_Decode, 217, 1, 41, // Opcode: FMOVS_ICC
/* 3066 */    MCD::OPC_FilterValue, 2, 60, 13, // Skip to: 6458
/* 3070 */    MCD::OPC_CheckField, 18, 1, 0, 54, 13, // Skip to: 6458
/* 3076 */    MCD::OPC_Decode, 218, 1, 41, // Opcode: FMOVS_XCC
/* 3080 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 3159
/* 3084 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3087 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3120
/* 3091 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3094 */    MCD::OPC_FilterValue, 0, 32, 13, // Skip to: 6458
/* 3098 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3112
/* 3102 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3112
/* 3108 */    MCD::OPC_Decode, 190, 1, 43, // Opcode: FMOVD_FCC
/* 3112 */    MCD::OPC_CheckPredicate, 0, 14, 13, // Skip to: 6458
/* 3116 */    MCD::OPC_Decode, 254, 3, 44, // Opcode: V9FMOVD_FCC
/* 3120 */    MCD::OPC_FilterValue, 1, 6, 13, // Skip to: 6458
/* 3124 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3127 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3145
/* 3131 */    MCD::OPC_CheckPredicate, 0, 251, 12, // Skip to: 6458
/* 3135 */    MCD::OPC_CheckField, 18, 1, 0, 245, 12, // Skip to: 6458
/* 3141 */    MCD::OPC_Decode, 191, 1, 43, // Opcode: FMOVD_ICC
/* 3145 */    MCD::OPC_FilterValue, 2, 237, 12, // Skip to: 6458
/* 3149 */    MCD::OPC_CheckField, 18, 1, 0, 231, 12, // Skip to: 6458
/* 3155 */    MCD::OPC_Decode, 192, 1, 43, // Opcode: FMOVD_XCC
/* 3159 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 3238
/* 3163 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3166 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3199
/* 3170 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3173 */    MCD::OPC_FilterValue, 0, 209, 12, // Skip to: 6458
/* 3177 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3191
/* 3181 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3191
/* 3187 */    MCD::OPC_Decode, 194, 1, 45, // Opcode: FMOVQ_FCC
/* 3191 */    MCD::OPC_CheckPredicate, 0, 191, 12, // Skip to: 6458
/* 3195 */    MCD::OPC_Decode, 255, 3, 46, // Opcode: V9FMOVQ_FCC
/* 3199 */    MCD::OPC_FilterValue, 1, 183, 12, // Skip to: 6458
/* 3203 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3206 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3224
/* 3210 */    MCD::OPC_CheckPredicate, 0, 172, 12, // Skip to: 6458
/* 3214 */    MCD::OPC_CheckField, 18, 1, 0, 166, 12, // Skip to: 6458
/* 3220 */    MCD::OPC_Decode, 195, 1, 45, // Opcode: FMOVQ_ICC
/* 3224 */    MCD::OPC_FilterValue, 2, 158, 12, // Skip to: 6458
/* 3228 */    MCD::OPC_CheckField, 18, 1, 0, 152, 12, // Skip to: 6458
/* 3234 */    MCD::OPC_Decode, 196, 1, 45, // Opcode: FMOVQ_XCC
/* 3238 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3269
/* 3242 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3245 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3257
/* 3249 */    MCD::OPC_CheckPredicate, 0, 133, 12, // Skip to: 6458
/* 3253 */    MCD::OPC_Decode, 205, 1, 47, // Opcode: FMOVRLEZS
/* 3257 */    MCD::OPC_FilterValue, 3, 125, 12, // Skip to: 6458
/* 3261 */    MCD::OPC_CheckPredicate, 0, 121, 12, // Skip to: 6458
/* 3265 */    MCD::OPC_Decode, 202, 1, 47, // Opcode: FMOVRGZS
/* 3269 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3300
/* 3273 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3276 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3288
/* 3280 */    MCD::OPC_CheckPredicate, 0, 102, 12, // Skip to: 6458
/* 3284 */    MCD::OPC_Decode, 203, 1, 47, // Opcode: FMOVRLEZD
/* 3288 */    MCD::OPC_FilterValue, 3, 94, 12, // Skip to: 6458
/* 3292 */    MCD::OPC_CheckPredicate, 0, 90, 12, // Skip to: 6458
/* 3296 */    MCD::OPC_Decode, 200, 1, 47, // Opcode: FMOVRGZD
/* 3300 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 3331
/* 3304 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3307 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3319
/* 3311 */    MCD::OPC_CheckPredicate, 0, 71, 12, // Skip to: 6458
/* 3315 */    MCD::OPC_Decode, 204, 1, 47, // Opcode: FMOVRLEZQ
/* 3319 */    MCD::OPC_FilterValue, 3, 63, 12, // Skip to: 6458
/* 3323 */    MCD::OPC_CheckPredicate, 0, 59, 12, // Skip to: 6458
/* 3327 */    MCD::OPC_Decode, 201, 1, 47, // Opcode: FMOVRGZQ
/* 3331 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3345
/* 3335 */    MCD::OPC_CheckField, 11, 3, 1, 45, 12, // Skip to: 6458
/* 3341 */    MCD::OPC_Decode, 253, 3, 48, // Opcode: V9FCMPS
/* 3345 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3359
/* 3349 */    MCD::OPC_CheckField, 11, 3, 1, 31, 12, // Skip to: 6458
/* 3355 */    MCD::OPC_Decode, 248, 3, 49, // Opcode: V9FCMPD
/* 3359 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 3373
/* 3363 */    MCD::OPC_CheckField, 11, 3, 1, 17, 12, // Skip to: 6458
/* 3369 */    MCD::OPC_Decode, 252, 3, 50, // Opcode: V9FCMPQ
/* 3373 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 3387
/* 3377 */    MCD::OPC_CheckField, 11, 3, 1, 3, 12, // Skip to: 6458
/* 3383 */    MCD::OPC_Decode, 251, 3, 48, // Opcode: V9FCMPES
/* 3387 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3401
/* 3391 */    MCD::OPC_CheckField, 11, 3, 1, 245, 11, // Skip to: 6458
/* 3397 */    MCD::OPC_Decode, 249, 3, 49, // Opcode: V9FCMPED
/* 3401 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 3415
/* 3405 */    MCD::OPC_CheckField, 11, 3, 1, 231, 11, // Skip to: 6458
/* 3411 */    MCD::OPC_Decode, 250, 3, 50, // Opcode: V9FCMPEQ
/* 3415 */    MCD::OPC_FilterValue, 37, 51, 0, // Skip to: 3470
/* 3419 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3422 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3434
/* 3426 */    MCD::OPC_CheckPredicate, 0, 212, 11, // Skip to: 6458
/* 3430 */    MCD::OPC_Decode, 214, 1, 47, // Opcode: FMOVRZS
/* 3434 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3446
/* 3438 */    MCD::OPC_CheckPredicate, 0, 200, 11, // Skip to: 6458
/* 3442 */    MCD::OPC_Decode, 208, 1, 47, // Opcode: FMOVRLZS
/* 3446 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3458
/* 3450 */    MCD::OPC_CheckPredicate, 0, 188, 11, // Skip to: 6458
/* 3454 */    MCD::OPC_Decode, 211, 1, 47, // Opcode: FMOVRNZS
/* 3458 */    MCD::OPC_FilterValue, 3, 180, 11, // Skip to: 6458
/* 3462 */    MCD::OPC_CheckPredicate, 0, 176, 11, // Skip to: 6458
/* 3466 */    MCD::OPC_Decode, 199, 1, 47, // Opcode: FMOVRGEZS
/* 3470 */    MCD::OPC_FilterValue, 38, 51, 0, // Skip to: 3525
/* 3474 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3477 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3489
/* 3481 */    MCD::OPC_CheckPredicate, 0, 157, 11, // Skip to: 6458
/* 3485 */    MCD::OPC_Decode, 212, 1, 47, // Opcode: FMOVRZD
/* 3489 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3501
/* 3493 */    MCD::OPC_CheckPredicate, 0, 145, 11, // Skip to: 6458
/* 3497 */    MCD::OPC_Decode, 206, 1, 47, // Opcode: FMOVRLZD
/* 3501 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3513
/* 3505 */    MCD::OPC_CheckPredicate, 0, 133, 11, // Skip to: 6458
/* 3509 */    MCD::OPC_Decode, 209, 1, 47, // Opcode: FMOVRNZD
/* 3513 */    MCD::OPC_FilterValue, 3, 125, 11, // Skip to: 6458
/* 3517 */    MCD::OPC_CheckPredicate, 0, 121, 11, // Skip to: 6458
/* 3521 */    MCD::OPC_Decode, 197, 1, 47, // Opcode: FMOVRGEZD
/* 3525 */    MCD::OPC_FilterValue, 39, 113, 11, // Skip to: 6458
/* 3529 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3532 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3544
/* 3536 */    MCD::OPC_CheckPredicate, 0, 102, 11, // Skip to: 6458
/* 3540 */    MCD::OPC_Decode, 213, 1, 47, // Opcode: FMOVRZQ
/* 3544 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3556
/* 3548 */    MCD::OPC_CheckPredicate, 0, 90, 11, // Skip to: 6458
/* 3552 */    MCD::OPC_Decode, 207, 1, 47, // Opcode: FMOVRLZQ
/* 3556 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3568
/* 3560 */    MCD::OPC_CheckPredicate, 0, 78, 11, // Skip to: 6458
/* 3564 */    MCD::OPC_Decode, 210, 1, 47, // Opcode: FMOVRNZQ
/* 3568 */    MCD::OPC_FilterValue, 3, 70, 11, // Skip to: 6458
/* 3572 */    MCD::OPC_CheckPredicate, 0, 66, 11, // Skip to: 6458
/* 3576 */    MCD::OPC_Decode, 198, 1, 47, // Opcode: FMOVRGEZQ
/* 3580 */    MCD::OPC_FilterValue, 54, 19, 6, // Skip to: 5139
/* 3584 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3587 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3599
/* 3591 */    MCD::OPC_CheckPredicate, 2, 47, 11, // Skip to: 6458
/* 3595 */    MCD::OPC_Decode, 135, 1, 10, // Opcode: EDGE8
/* 3599 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3611
/* 3603 */    MCD::OPC_CheckPredicate, 3, 35, 11, // Skip to: 6458
/* 3607 */    MCD::OPC_Decode, 138, 1, 10, // Opcode: EDGE8N
/* 3611 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3623
/* 3615 */    MCD::OPC_CheckPredicate, 2, 23, 11, // Skip to: 6458
/* 3619 */    MCD::OPC_Decode, 136, 1, 10, // Opcode: EDGE8L
/* 3623 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3635
/* 3627 */    MCD::OPC_CheckPredicate, 3, 11, 11, // Skip to: 6458
/* 3631 */    MCD::OPC_Decode, 137, 1, 10, // Opcode: EDGE8LN
/* 3635 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 3646
/* 3639 */    MCD::OPC_CheckPredicate, 2, 255, 10, // Skip to: 6458
/* 3643 */    MCD::OPC_Decode, 127, 10, // Opcode: EDGE16
/* 3646 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3658
/* 3650 */    MCD::OPC_CheckPredicate, 3, 244, 10, // Skip to: 6458
/* 3654 */    MCD::OPC_Decode, 130, 1, 10, // Opcode: EDGE16N
/* 3658 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3670
/* 3662 */    MCD::OPC_CheckPredicate, 2, 232, 10, // Skip to: 6458
/* 3666 */    MCD::OPC_Decode, 128, 1, 10, // Opcode: EDGE16L
/* 3670 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3682
/* 3674 */    MCD::OPC_CheckPredicate, 3, 220, 10, // Skip to: 6458
/* 3678 */    MCD::OPC_Decode, 129, 1, 10, // Opcode: EDGE16LN
/* 3682 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3694
/* 3686 */    MCD::OPC_CheckPredicate, 2, 208, 10, // Skip to: 6458
/* 3690 */    MCD::OPC_Decode, 131, 1, 10, // Opcode: EDGE32
/* 3694 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3706
/* 3698 */    MCD::OPC_CheckPredicate, 3, 196, 10, // Skip to: 6458
/* 3702 */    MCD::OPC_Decode, 134, 1, 10, // Opcode: EDGE32N
/* 3706 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3718
/* 3710 */    MCD::OPC_CheckPredicate, 2, 184, 10, // Skip to: 6458
/* 3714 */    MCD::OPC_Decode, 132, 1, 10, // Opcode: EDGE32L
/* 3718 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3730
/* 3722 */    MCD::OPC_CheckPredicate, 3, 172, 10, // Skip to: 6458
/* 3726 */    MCD::OPC_Decode, 133, 1, 10, // Opcode: EDGE32LN
/* 3730 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3741
/* 3734 */    MCD::OPC_CheckPredicate, 2, 160, 10, // Skip to: 6458
/* 3738 */    MCD::OPC_Decode, 52, 10, // Opcode: ARRAY8
/* 3741 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3752
/* 3745 */    MCD::OPC_CheckPredicate, 1, 149, 10, // Skip to: 6458
/* 3749 */    MCD::OPC_Decode, 29, 10, // Opcode: ADDXC
/* 3752 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3763
/* 3756 */    MCD::OPC_CheckPredicate, 2, 138, 10, // Skip to: 6458
/* 3760 */    MCD::OPC_Decode, 50, 10, // Opcode: ARRAY16
/* 3763 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 3774
/* 3767 */    MCD::OPC_CheckPredicate, 1, 127, 10, // Skip to: 6458
/* 3771 */    MCD::OPC_Decode, 30, 10, // Opcode: ADDXCCC
/* 3774 */    MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 3785
/* 3778 */    MCD::OPC_CheckPredicate, 2, 116, 10, // Skip to: 6458
/* 3782 */    MCD::OPC_Decode, 51, 10, // Opcode: ARRAY32
/* 3785 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3797
/* 3789 */    MCD::OPC_CheckPredicate, 1, 105, 10, // Skip to: 6458
/* 3793 */    MCD::OPC_Decode, 244, 3, 10, // Opcode: UMULXHI
/* 3797 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3815
/* 3801 */    MCD::OPC_CheckPredicate, 1, 93, 10, // Skip to: 6458
/* 3805 */    MCD::OPC_CheckField, 14, 5, 0, 87, 10, // Skip to: 6458
/* 3811 */    MCD::OPC_Decode, 219, 2, 51, // Opcode: LZCNT
/* 3815 */    MCD::OPC_FilterValue, 24, 7, 0, // Skip to: 3826
/* 3819 */    MCD::OPC_CheckPredicate, 2, 75, 10, // Skip to: 6458
/* 3823 */    MCD::OPC_Decode, 37, 10, // Opcode: ALIGNADDR
/* 3826 */    MCD::OPC_FilterValue, 25, 7, 0, // Skip to: 3837
/* 3830 */    MCD::OPC_CheckPredicate, 3, 64, 10, // Skip to: 6458
/* 3834 */    MCD::OPC_Decode, 79, 10, // Opcode: BMASK
/* 3837 */    MCD::OPC_FilterValue, 26, 7, 0, // Skip to: 3848
/* 3841 */    MCD::OPC_CheckPredicate, 2, 53, 10, // Skip to: 6458
/* 3845 */    MCD::OPC_Decode, 38, 10, // Opcode: ALIGNADDRL
/* 3848 */    MCD::OPC_FilterValue, 27, 19, 0, // Skip to: 3871
/* 3852 */    MCD::OPC_CheckPredicate, 1, 42, 10, // Skip to: 6458
/* 3856 */    MCD::OPC_CheckField, 25, 5, 0, 36, 10, // Skip to: 6458
/* 3862 */    MCD::OPC_CheckField, 14, 5, 0, 30, 10, // Skip to: 6458
/* 3868 */    MCD::OPC_Decode, 124, 52, // Opcode: CMASK8
/* 3871 */    MCD::OPC_FilterValue, 28, 7, 0, // Skip to: 3882
/* 3875 */    MCD::OPC_CheckPredicate, 3, 19, 10, // Skip to: 6458
/* 3879 */    MCD::OPC_Decode, 116, 31, // Opcode: BSHUFFLE
/* 3882 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 3905
/* 3886 */    MCD::OPC_CheckPredicate, 1, 8, 10, // Skip to: 6458
/* 3890 */    MCD::OPC_CheckField, 25, 5, 0, 2, 10, // Skip to: 6458
/* 3896 */    MCD::OPC_CheckField, 14, 5, 0, 252, 9, // Skip to: 6458
/* 3902 */    MCD::OPC_Decode, 122, 52, // Opcode: CMASK16
/* 3905 */    MCD::OPC_FilterValue, 31, 19, 0, // Skip to: 3928
/* 3909 */    MCD::OPC_CheckPredicate, 1, 241, 9, // Skip to: 6458
/* 3913 */    MCD::OPC_CheckField, 25, 5, 0, 235, 9, // Skip to: 6458
/* 3919 */    MCD::OPC_CheckField, 14, 5, 0, 229, 9, // Skip to: 6458
/* 3925 */    MCD::OPC_Decode, 123, 52, // Opcode: CMASK32
/* 3928 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 3940
/* 3932 */    MCD::OPC_CheckPredicate, 2, 218, 9, // Skip to: 6458
/* 3936 */    MCD::OPC_Decode, 160, 1, 53, // Opcode: FCMPLE16
/* 3940 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 3952
/* 3944 */    MCD::OPC_CheckPredicate, 1, 206, 9, // Skip to: 6458
/* 3948 */    MCD::OPC_Decode, 146, 2, 31, // Opcode: FSLL16
/* 3952 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 3964
/* 3956 */    MCD::OPC_CheckPredicate, 2, 194, 9, // Skip to: 6458
/* 3960 */    MCD::OPC_Decode, 162, 1, 53, // Opcode: FCMPNE16
/* 3964 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 3976
/* 3968 */    MCD::OPC_CheckPredicate, 1, 182, 9, // Skip to: 6458
/* 3972 */    MCD::OPC_Decode, 158, 2, 31, // Opcode: FSRL16
/* 3976 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 3988
/* 3980 */    MCD::OPC_CheckPredicate, 2, 170, 9, // Skip to: 6458
/* 3984 */    MCD::OPC_Decode, 161, 1, 53, // Opcode: FCMPLE32
/* 3988 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4000
/* 3992 */    MCD::OPC_CheckPredicate, 1, 158, 9, // Skip to: 6458
/* 3996 */    MCD::OPC_Decode, 147, 2, 31, // Opcode: FSLL32
/* 4000 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4012
/* 4004 */    MCD::OPC_CheckPredicate, 2, 146, 9, // Skip to: 6458
/* 4008 */    MCD::OPC_Decode, 163, 1, 53, // Opcode: FCMPNE32
/* 4012 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4024
/* 4016 */    MCD::OPC_CheckPredicate, 1, 134, 9, // Skip to: 6458
/* 4020 */    MCD::OPC_Decode, 159, 2, 31, // Opcode: FSRL32
/* 4024 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4036
/* 4028 */    MCD::OPC_CheckPredicate, 2, 122, 9, // Skip to: 6458
/* 4032 */    MCD::OPC_Decode, 158, 1, 53, // Opcode: FCMPGT16
/* 4036 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4048
/* 4040 */    MCD::OPC_CheckPredicate, 1, 110, 9, // Skip to: 6458
/* 4044 */    MCD::OPC_Decode, 144, 2, 31, // Opcode: FSLAS16
/* 4048 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4060
/* 4052 */    MCD::OPC_CheckPredicate, 2, 98, 9, // Skip to: 6458
/* 4056 */    MCD::OPC_Decode, 156, 1, 53, // Opcode: FCMPEQ16
/* 4060 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4072
/* 4064 */    MCD::OPC_CheckPredicate, 1, 86, 9, // Skip to: 6458
/* 4068 */    MCD::OPC_Decode, 152, 2, 31, // Opcode: FSRA16
/* 4072 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4084
/* 4076 */    MCD::OPC_CheckPredicate, 2, 74, 9, // Skip to: 6458
/* 4080 */    MCD::OPC_Decode, 159, 1, 53, // Opcode: FCMPGT32
/* 4084 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4096
/* 4088 */    MCD::OPC_CheckPredicate, 1, 62, 9, // Skip to: 6458
/* 4092 */    MCD::OPC_Decode, 145, 2, 31, // Opcode: FSLAS32
/* 4096 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4108
/* 4100 */    MCD::OPC_CheckPredicate, 2, 50, 9, // Skip to: 6458
/* 4104 */    MCD::OPC_Decode, 157, 1, 53, // Opcode: FCMPEQ32
/* 4108 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4120
/* 4112 */    MCD::OPC_CheckPredicate, 1, 38, 9, // Skip to: 6458
/* 4116 */    MCD::OPC_Decode, 153, 2, 31, // Opcode: FSRA32
/* 4120 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4132
/* 4124 */    MCD::OPC_CheckPredicate, 2, 26, 9, // Skip to: 6458
/* 4128 */    MCD::OPC_Decode, 221, 1, 31, // Opcode: FMUL8X16
/* 4132 */    MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 4144
/* 4136 */    MCD::OPC_CheckPredicate, 2, 14, 9, // Skip to: 6458
/* 4140 */    MCD::OPC_Decode, 223, 1, 31, // Opcode: FMUL8X16AU
/* 4144 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4156
/* 4148 */    MCD::OPC_CheckPredicate, 2, 2, 9, // Skip to: 6458
/* 4152 */    MCD::OPC_Decode, 222, 1, 31, // Opcode: FMUL8X16AL
/* 4156 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 4168
/* 4160 */    MCD::OPC_CheckPredicate, 2, 246, 8, // Skip to: 6458
/* 4164 */    MCD::OPC_Decode, 219, 1, 31, // Opcode: FMUL8SUX16
/* 4168 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 4180
/* 4172 */    MCD::OPC_CheckPredicate, 2, 234, 8, // Skip to: 6458
/* 4176 */    MCD::OPC_Decode, 220, 1, 31, // Opcode: FMUL8ULX16
/* 4180 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4192
/* 4184 */    MCD::OPC_CheckPredicate, 2, 222, 8, // Skip to: 6458
/* 4188 */    MCD::OPC_Decode, 225, 1, 31, // Opcode: FMULD8SUX16
/* 4192 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4204
/* 4196 */    MCD::OPC_CheckPredicate, 2, 210, 8, // Skip to: 6458
/* 4200 */    MCD::OPC_Decode, 226, 1, 31, // Opcode: FMULD8ULX16
/* 4204 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 4216
/* 4208 */    MCD::OPC_CheckPredicate, 2, 198, 8, // Skip to: 6458
/* 4212 */    MCD::OPC_Decode, 128, 2, 31, // Opcode: FPACK32
/* 4216 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 4234
/* 4220 */    MCD::OPC_CheckPredicate, 2, 186, 8, // Skip to: 6458
/* 4224 */    MCD::OPC_CheckField, 14, 5, 0, 180, 8, // Skip to: 6458
/* 4230 */    MCD::OPC_Decode, 255, 1, 28, // Opcode: FPACK16
/* 4234 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 4252
/* 4238 */    MCD::OPC_CheckPredicate, 2, 168, 8, // Skip to: 6458
/* 4242 */    MCD::OPC_CheckField, 14, 5, 0, 162, 8, // Skip to: 6458
/* 4248 */    MCD::OPC_Decode, 129, 2, 28, // Opcode: FPACKFIX
/* 4252 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4264
/* 4256 */    MCD::OPC_CheckPredicate, 2, 150, 8, // Skip to: 6458
/* 4260 */    MCD::OPC_Decode, 130, 3, 31, // Opcode: PDIST
/* 4264 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4276
/* 4268 */    MCD::OPC_CheckPredicate, 1, 138, 8, // Skip to: 6458
/* 4272 */    MCD::OPC_Decode, 131, 3, 31, // Opcode: PDISTN
/* 4276 */    MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 4288
/* 4280 */    MCD::OPC_CheckPredicate, 1, 126, 8, // Skip to: 6458
/* 4284 */    MCD::OPC_Decode, 188, 1, 31, // Opcode: FMEAN16
/* 4288 */    MCD::OPC_FilterValue, 66, 8, 0, // Skip to: 4300
/* 4292 */    MCD::OPC_CheckPredicate, 1, 114, 8, // Skip to: 6458
/* 4296 */    MCD::OPC_Decode, 134, 2, 31, // Opcode: FPADD64
/* 4300 */    MCD::OPC_FilterValue, 68, 8, 0, // Skip to: 4312
/* 4304 */    MCD::OPC_CheckPredicate, 1, 102, 8, // Skip to: 6458
/* 4308 */    MCD::OPC_Decode, 154, 1, 31, // Opcode: FCHKSM16
/* 4312 */    MCD::OPC_FilterValue, 72, 8, 0, // Skip to: 4324
/* 4316 */    MCD::OPC_CheckPredicate, 2, 90, 8, // Skip to: 6458
/* 4320 */    MCD::OPC_Decode, 145, 1, 31, // Opcode: FALIGNADATA
/* 4324 */    MCD::OPC_FilterValue, 75, 8, 0, // Skip to: 4336
/* 4328 */    MCD::OPC_CheckPredicate, 2, 78, 8, // Skip to: 6458
/* 4332 */    MCD::OPC_Decode, 135, 2, 31, // Opcode: FPMERGE
/* 4336 */    MCD::OPC_FilterValue, 77, 14, 0, // Skip to: 4354
/* 4340 */    MCD::OPC_CheckPredicate, 2, 66, 8, // Skip to: 6458
/* 4344 */    MCD::OPC_CheckField, 14, 5, 0, 60, 8, // Skip to: 6458
/* 4350 */    MCD::OPC_Decode, 174, 1, 28, // Opcode: FEXPAND
/* 4354 */    MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 4366
/* 4358 */    MCD::OPC_CheckPredicate, 2, 48, 8, // Skip to: 6458
/* 4362 */    MCD::OPC_Decode, 130, 2, 31, // Opcode: FPADD16
/* 4366 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 4378
/* 4370 */    MCD::OPC_CheckPredicate, 2, 36, 8, // Skip to: 6458
/* 4374 */    MCD::OPC_Decode, 131, 2, 31, // Opcode: FPADD16S
/* 4378 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 4390
/* 4382 */    MCD::OPC_CheckPredicate, 2, 24, 8, // Skip to: 6458
/* 4386 */    MCD::OPC_Decode, 132, 2, 31, // Opcode: FPADD32
/* 4390 */    MCD::OPC_FilterValue, 83, 8, 0, // Skip to: 4402
/* 4394 */    MCD::OPC_CheckPredicate, 2, 12, 8, // Skip to: 6458
/* 4398 */    MCD::OPC_Decode, 133, 2, 31, // Opcode: FPADD32S
/* 4402 */    MCD::OPC_FilterValue, 84, 8, 0, // Skip to: 4414
/* 4406 */    MCD::OPC_CheckPredicate, 2, 0, 8, // Skip to: 6458
/* 4410 */    MCD::OPC_Decode, 136, 2, 31, // Opcode: FPSUB16
/* 4414 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 4426
/* 4418 */    MCD::OPC_CheckPredicate, 2, 244, 7, // Skip to: 6458
/* 4422 */    MCD::OPC_Decode, 137, 2, 31, // Opcode: FPSUB16S
/* 4426 */    MCD::OPC_FilterValue, 86, 8, 0, // Skip to: 4438
/* 4430 */    MCD::OPC_CheckPredicate, 2, 232, 7, // Skip to: 6458
/* 4434 */    MCD::OPC_Decode, 138, 2, 31, // Opcode: FPSUB32
/* 4438 */    MCD::OPC_FilterValue, 87, 8, 0, // Skip to: 4450
/* 4442 */    MCD::OPC_CheckPredicate, 2, 220, 7, // Skip to: 6458
/* 4446 */    MCD::OPC_Decode, 139, 2, 31, // Opcode: FPSUB32S
/* 4450 */    MCD::OPC_FilterValue, 96, 20, 0, // Skip to: 4474
/* 4454 */    MCD::OPC_CheckPredicate, 2, 208, 7, // Skip to: 6458
/* 4458 */    MCD::OPC_CheckField, 14, 5, 0, 202, 7, // Skip to: 6458
/* 4464 */    MCD::OPC_CheckField, 0, 5, 0, 196, 7, // Skip to: 6458
/* 4470 */    MCD::OPC_Decode, 174, 2, 54, // Opcode: FZERO
/* 4474 */    MCD::OPC_FilterValue, 97, 20, 0, // Skip to: 4498
/* 4478 */    MCD::OPC_CheckPredicate, 2, 184, 7, // Skip to: 6458
/* 4482 */    MCD::OPC_CheckField, 14, 5, 0, 178, 7, // Skip to: 6458
/* 4488 */    MCD::OPC_CheckField, 0, 5, 0, 172, 7, // Skip to: 6458
/* 4494 */    MCD::OPC_Decode, 175, 2, 55, // Opcode: FZEROS
/* 4498 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 4510
/* 4502 */    MCD::OPC_CheckPredicate, 2, 160, 7, // Skip to: 6458
/* 4506 */    MCD::OPC_Decode, 240, 1, 31, // Opcode: FNOR
/* 4510 */    MCD::OPC_FilterValue, 99, 8, 0, // Skip to: 4522
/* 4514 */    MCD::OPC_CheckPredicate, 2, 148, 7, // Skip to: 6458
/* 4518 */    MCD::OPC_Decode, 241, 1, 30, // Opcode: FNORS
/* 4522 */    MCD::OPC_FilterValue, 100, 8, 0, // Skip to: 4534
/* 4526 */    MCD::OPC_CheckPredicate, 2, 136, 7, // Skip to: 6458
/* 4530 */    MCD::OPC_Decode, 149, 1, 31, // Opcode: FANDNOT2
/* 4534 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 4546
/* 4538 */    MCD::OPC_CheckPredicate, 2, 124, 7, // Skip to: 6458
/* 4542 */    MCD::OPC_Decode, 150, 1, 30, // Opcode: FANDNOT2S
/* 4546 */    MCD::OPC_FilterValue, 102, 14, 0, // Skip to: 4564
/* 4550 */    MCD::OPC_CheckPredicate, 2, 112, 7, // Skip to: 6458
/* 4554 */    MCD::OPC_CheckField, 14, 5, 0, 106, 7, // Skip to: 6458
/* 4560 */    MCD::OPC_Decode, 244, 1, 28, // Opcode: FNOT2
/* 4564 */    MCD::OPC_FilterValue, 103, 14, 0, // Skip to: 4582
/* 4568 */    MCD::OPC_CheckPredicate, 2, 94, 7, // Skip to: 6458
/* 4572 */    MCD::OPC_CheckField, 14, 5, 0, 88, 7, // Skip to: 6458
/* 4578 */    MCD::OPC_Decode, 245, 1, 27, // Opcode: FNOT2S
/* 4582 */    MCD::OPC_FilterValue, 104, 8, 0, // Skip to: 4594
/* 4586 */    MCD::OPC_CheckPredicate, 2, 76, 7, // Skip to: 6458
/* 4590 */    MCD::OPC_Decode, 147, 1, 31, // Opcode: FANDNOT1
/* 4594 */    MCD::OPC_FilterValue, 105, 8, 0, // Skip to: 4606
/* 4598 */    MCD::OPC_CheckPredicate, 2, 64, 7, // Skip to: 6458
/* 4602 */    MCD::OPC_Decode, 148, 1, 30, // Opcode: FANDNOT1S
/* 4606 */    MCD::OPC_FilterValue, 106, 14, 0, // Skip to: 4624
/* 4610 */    MCD::OPC_CheckPredicate, 2, 52, 7, // Skip to: 6458
/* 4614 */    MCD::OPC_CheckField, 0, 5, 0, 46, 7, // Skip to: 6458
/* 4620 */    MCD::OPC_Decode, 242, 1, 56, // Opcode: FNOT1
/* 4624 */    MCD::OPC_FilterValue, 107, 14, 0, // Skip to: 4642
/* 4628 */    MCD::OPC_CheckPredicate, 2, 34, 7, // Skip to: 6458
/* 4632 */    MCD::OPC_CheckField, 0, 5, 0, 28, 7, // Skip to: 6458
/* 4638 */    MCD::OPC_Decode, 243, 1, 57, // Opcode: FNOT1S
/* 4642 */    MCD::OPC_FilterValue, 108, 8, 0, // Skip to: 4654
/* 4646 */    MCD::OPC_CheckPredicate, 2, 16, 7, // Skip to: 6458
/* 4650 */    MCD::OPC_Decode, 169, 2, 31, // Opcode: FXOR
/* 4654 */    MCD::OPC_FilterValue, 109, 8, 0, // Skip to: 4666
/* 4658 */    MCD::OPC_CheckPredicate, 2, 4, 7, // Skip to: 6458
/* 4662 */    MCD::OPC_Decode, 170, 2, 30, // Opcode: FXORS
/* 4666 */    MCD::OPC_FilterValue, 110, 8, 0, // Skip to: 4678
/* 4670 */    MCD::OPC_CheckPredicate, 2, 248, 6, // Skip to: 6458
/* 4674 */    MCD::OPC_Decode, 231, 1, 31, // Opcode: FNAND
/* 4678 */    MCD::OPC_FilterValue, 111, 8, 0, // Skip to: 4690
/* 4682 */    MCD::OPC_CheckPredicate, 2, 236, 6, // Skip to: 6458
/* 4686 */    MCD::OPC_Decode, 232, 1, 30, // Opcode: FNANDS
/* 4690 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 4702
/* 4694 */    MCD::OPC_CheckPredicate, 2, 224, 6, // Skip to: 6458
/* 4698 */    MCD::OPC_Decode, 146, 1, 31, // Opcode: FAND
/* 4702 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 4714
/* 4706 */    MCD::OPC_CheckPredicate, 2, 212, 6, // Skip to: 6458
/* 4710 */    MCD::OPC_Decode, 151, 1, 30, // Opcode: FANDS
/* 4714 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 4726
/* 4718 */    MCD::OPC_CheckPredicate, 2, 200, 6, // Skip to: 6458
/* 4722 */    MCD::OPC_Decode, 167, 2, 31, // Opcode: FXNOR
/* 4726 */    MCD::OPC_FilterValue, 115, 8, 0, // Skip to: 4738
/* 4730 */    MCD::OPC_CheckPredicate, 2, 188, 6, // Skip to: 6458
/* 4734 */    MCD::OPC_Decode, 168, 2, 30, // Opcode: FXNORS
/* 4738 */    MCD::OPC_FilterValue, 116, 14, 0, // Skip to: 4756
/* 4742 */    MCD::OPC_CheckPredicate, 2, 176, 6, // Skip to: 6458
/* 4746 */    MCD::OPC_CheckField, 0, 5, 0, 170, 6, // Skip to: 6458
/* 4752 */    MCD::OPC_Decode, 154, 2, 56, // Opcode: FSRC1
/* 4756 */    MCD::OPC_FilterValue, 117, 14, 0, // Skip to: 4774
/* 4760 */    MCD::OPC_CheckPredicate, 2, 158, 6, // Skip to: 6458
/* 4764 */    MCD::OPC_CheckField, 0, 5, 0, 152, 6, // Skip to: 6458
/* 4770 */    MCD::OPC_Decode, 155, 2, 57, // Opcode: FSRC1S
/* 4774 */    MCD::OPC_FilterValue, 118, 8, 0, // Skip to: 4786
/* 4778 */    MCD::OPC_CheckPredicate, 2, 140, 6, // Skip to: 6458
/* 4782 */    MCD::OPC_Decode, 252, 1, 31, // Opcode: FORNOT2
/* 4786 */    MCD::OPC_FilterValue, 119, 8, 0, // Skip to: 4798
/* 4790 */    MCD::OPC_CheckPredicate, 2, 128, 6, // Skip to: 6458
/* 4794 */    MCD::OPC_Decode, 253, 1, 30, // Opcode: FORNOT2S
/* 4798 */    MCD::OPC_FilterValue, 120, 14, 0, // Skip to: 4816
/* 4802 */    MCD::OPC_CheckPredicate, 2, 116, 6, // Skip to: 6458
/* 4806 */    MCD::OPC_CheckField, 14, 5, 0, 110, 6, // Skip to: 6458
/* 4812 */    MCD::OPC_Decode, 156, 2, 28, // Opcode: FSRC2
/* 4816 */    MCD::OPC_FilterValue, 121, 14, 0, // Skip to: 4834
/* 4820 */    MCD::OPC_CheckPredicate, 2, 98, 6, // Skip to: 6458
/* 4824 */    MCD::OPC_CheckField, 14, 5, 0, 92, 6, // Skip to: 6458
/* 4830 */    MCD::OPC_Decode, 157, 2, 27, // Opcode: FSRC2S
/* 4834 */    MCD::OPC_FilterValue, 122, 8, 0, // Skip to: 4846
/* 4838 */    MCD::OPC_CheckPredicate, 2, 80, 6, // Skip to: 6458
/* 4842 */    MCD::OPC_Decode, 250, 1, 31, // Opcode: FORNOT1
/* 4846 */    MCD::OPC_FilterValue, 123, 8, 0, // Skip to: 4858
/* 4850 */    MCD::OPC_CheckPredicate, 2, 68, 6, // Skip to: 6458
/* 4854 */    MCD::OPC_Decode, 251, 1, 30, // Opcode: FORNOT1S
/* 4858 */    MCD::OPC_FilterValue, 124, 8, 0, // Skip to: 4870
/* 4862 */    MCD::OPC_CheckPredicate, 2, 56, 6, // Skip to: 6458
/* 4866 */    MCD::OPC_Decode, 249, 1, 31, // Opcode: FOR
/* 4870 */    MCD::OPC_FilterValue, 125, 8, 0, // Skip to: 4882
/* 4874 */    MCD::OPC_CheckPredicate, 2, 44, 6, // Skip to: 6458
/* 4878 */    MCD::OPC_Decode, 254, 1, 30, // Opcode: FORS
/* 4882 */    MCD::OPC_FilterValue, 126, 20, 0, // Skip to: 4906
/* 4886 */    MCD::OPC_CheckPredicate, 2, 32, 6, // Skip to: 6458
/* 4890 */    MCD::OPC_CheckField, 14, 5, 0, 26, 6, // Skip to: 6458
/* 4896 */    MCD::OPC_CheckField, 0, 5, 0, 20, 6, // Skip to: 6458
/* 4902 */    MCD::OPC_Decode, 247, 1, 54, // Opcode: FONE
/* 4906 */    MCD::OPC_FilterValue, 127, 20, 0, // Skip to: 4930
/* 4910 */    MCD::OPC_CheckPredicate, 2, 8, 6, // Skip to: 6458
/* 4914 */    MCD::OPC_CheckField, 14, 5, 0, 2, 6, // Skip to: 6458
/* 4920 */    MCD::OPC_CheckField, 0, 5, 0, 252, 5, // Skip to: 6458
/* 4926 */    MCD::OPC_Decode, 248, 1, 55, // Opcode: FONES
/* 4930 */    MCD::OPC_FilterValue, 128, 1, 26, 0, // Skip to: 4961
/* 4935 */    MCD::OPC_CheckPredicate, 2, 239, 5, // Skip to: 6458
/* 4939 */    MCD::OPC_CheckField, 25, 5, 0, 233, 5, // Skip to: 6458
/* 4945 */    MCD::OPC_CheckField, 14, 5, 0, 227, 5, // Skip to: 6458
/* 4951 */    MCD::OPC_CheckField, 0, 5, 0, 221, 5, // Skip to: 6458
/* 4957 */    MCD::OPC_Decode, 162, 3, 4, // Opcode: SHUTDOWN
/* 4961 */    MCD::OPC_FilterValue, 129, 1, 26, 0, // Skip to: 4992
/* 4966 */    MCD::OPC_CheckPredicate, 3, 208, 5, // Skip to: 6458
/* 4970 */    MCD::OPC_CheckField, 25, 5, 0, 202, 5, // Skip to: 6458
/* 4976 */    MCD::OPC_CheckField, 14, 5, 0, 196, 5, // Skip to: 6458
/* 4982 */    MCD::OPC_CheckField, 0, 5, 0, 190, 5, // Skip to: 6458
/* 4988 */    MCD::OPC_Decode, 163, 3, 4, // Opcode: SIAM
/* 4992 */    MCD::OPC_FilterValue, 144, 2, 14, 0, // Skip to: 5011
/* 4997 */    MCD::OPC_CheckPredicate, 1, 177, 5, // Skip to: 6458
/* 5001 */    MCD::OPC_CheckField, 14, 5, 0, 171, 5, // Skip to: 6458
/* 5007 */    MCD::OPC_Decode, 221, 2, 58, // Opcode: MOVDTOX
/* 5011 */    MCD::OPC_FilterValue, 145, 2, 14, 0, // Skip to: 5030
/* 5016 */    MCD::OPC_CheckPredicate, 1, 158, 5, // Skip to: 6458
/* 5020 */    MCD::OPC_CheckField, 14, 5, 0, 152, 5, // Skip to: 6458
/* 5026 */    MCD::OPC_Decode, 239, 2, 58, // Opcode: MOVSTOUW
/* 5030 */    MCD::OPC_FilterValue, 147, 2, 14, 0, // Skip to: 5049
/* 5035 */    MCD::OPC_CheckPredicate, 1, 139, 5, // Skip to: 6458
/* 5039 */    MCD::OPC_CheckField, 14, 5, 0, 133, 5, // Skip to: 6458
/* 5045 */    MCD::OPC_Decode, 238, 2, 58, // Opcode: MOVSTOSW
/* 5049 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 5062
/* 5054 */    MCD::OPC_CheckPredicate, 1, 120, 5, // Skip to: 6458
/* 5058 */    MCD::OPC_Decode, 139, 4, 10, // Opcode: XMULX
/* 5062 */    MCD::OPC_FilterValue, 151, 2, 8, 0, // Skip to: 5075
/* 5067 */    MCD::OPC_CheckPredicate, 1, 107, 5, // Skip to: 6458
/* 5071 */    MCD::OPC_Decode, 140, 4, 10, // Opcode: XMULXHI
/* 5075 */    MCD::OPC_FilterValue, 152, 2, 14, 0, // Skip to: 5094
/* 5080 */    MCD::OPC_CheckPredicate, 1, 94, 5, // Skip to: 6458
/* 5084 */    MCD::OPC_CheckField, 14, 5, 0, 88, 5, // Skip to: 6458
/* 5090 */    MCD::OPC_Decode, 243, 2, 59, // Opcode: MOVXTOD
/* 5094 */    MCD::OPC_FilterValue, 153, 2, 14, 0, // Skip to: 5113
/* 5099 */    MCD::OPC_CheckPredicate, 1, 75, 5, // Skip to: 6458
/* 5103 */    MCD::OPC_CheckField, 14, 5, 0, 69, 5, // Skip to: 6458
/* 5109 */    MCD::OPC_Decode, 240, 2, 59, // Opcode: MOVWTOS
/* 5113 */    MCD::OPC_FilterValue, 209, 2, 8, 0, // Skip to: 5126
/* 5118 */    MCD::OPC_CheckPredicate, 1, 56, 5, // Skip to: 6458
/* 5122 */    MCD::OPC_Decode, 183, 1, 49, // Opcode: FLCMPS
/* 5126 */    MCD::OPC_FilterValue, 210, 2, 47, 5, // Skip to: 6458
/* 5131 */    MCD::OPC_CheckPredicate, 1, 43, 5, // Skip to: 6458
/* 5135 */    MCD::OPC_Decode, 182, 1, 49, // Opcode: FLCMPD
/* 5139 */    MCD::OPC_FilterValue, 56, 25, 0, // Skip to: 5168
/* 5143 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5146 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5160
/* 5150 */    MCD::OPC_CheckField, 5, 8, 0, 22, 5, // Skip to: 6458
/* 5156 */    MCD::OPC_Decode, 178, 2, 60, // Opcode: JMPLrr
/* 5160 */    MCD::OPC_FilterValue, 1, 14, 5, // Skip to: 6458
/* 5164 */    MCD::OPC_Decode, 177, 2, 60, // Opcode: JMPLri
/* 5168 */    MCD::OPC_FilterValue, 57, 37, 0, // Skip to: 5209
/* 5172 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5175 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5195
/* 5179 */    MCD::OPC_CheckField, 25, 5, 0, 249, 4, // Skip to: 6458
/* 5185 */    MCD::OPC_CheckField, 5, 8, 0, 243, 4, // Skip to: 6458
/* 5191 */    MCD::OPC_Decode, 142, 3, 61, // Opcode: RETTrr
/* 5195 */    MCD::OPC_FilterValue, 1, 235, 4, // Skip to: 6458
/* 5199 */    MCD::OPC_CheckField, 25, 5, 0, 229, 4, // Skip to: 6458
/* 5205 */    MCD::OPC_Decode, 141, 3, 61, // Opcode: RETTri
/* 5209 */    MCD::OPC_FilterValue, 58, 115, 0, // Skip to: 5328
/* 5213 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5216 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5236
/* 5220 */    MCD::OPC_CheckField, 29, 1, 0, 208, 4, // Skip to: 6458
/* 5226 */    MCD::OPC_CheckField, 5, 3, 0, 202, 4, // Skip to: 6458
/* 5232 */    MCD::OPC_Decode, 224, 3, 62, // Opcode: TICCrr
/* 5236 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 5256
/* 5240 */    MCD::OPC_CheckField, 29, 1, 0, 188, 4, // Skip to: 6458
/* 5246 */    MCD::OPC_CheckField, 5, 3, 0, 182, 4, // Skip to: 6458
/* 5252 */    MCD::OPC_Decode, 235, 3, 62, // Opcode: TXCCrr
/* 5256 */    MCD::OPC_FilterValue, 32, 54, 0, // Skip to: 5314
/* 5260 */    MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 5263 */    MCD::OPC_FilterValue, 0, 167, 4, // Skip to: 6458
/* 5267 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5270 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5290
/* 5274 */    MCD::OPC_CheckField, 25, 4, 0, 30, 0, // Skip to: 5310
/* 5280 */    MCD::OPC_CheckField, 14, 5, 1, 24, 0, // Skip to: 5310
/* 5286 */    MCD::OPC_Decode, 217, 3, 4, // Opcode: TA3
/* 5290 */    MCD::OPC_FilterValue, 5, 16, 0, // Skip to: 5310
/* 5294 */    MCD::OPC_CheckField, 25, 4, 8, 10, 0, // Skip to: 5310
/* 5300 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, // Skip to: 5310
/* 5306 */    MCD::OPC_Decode, 218, 3, 4, // Opcode: TA5
/* 5310 */    MCD::OPC_Decode, 223, 3, 63, // Opcode: TICCri
/* 5314 */    MCD::OPC_FilterValue, 48, 116, 4, // Skip to: 6458
/* 5318 */    MCD::OPC_CheckField, 29, 1, 0, 110, 4, // Skip to: 6458
/* 5324 */    MCD::OPC_Decode, 234, 3, 63, // Opcode: TXCCri
/* 5328 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 5387
/* 5332 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5335 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 5373
/* 5339 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 5342 */    MCD::OPC_FilterValue, 0, 88, 4, // Skip to: 6458
/* 5346 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 5349 */    MCD::OPC_FilterValue, 0, 81, 4, // Skip to: 6458
/* 5353 */    MCD::OPC_CheckField, 14, 5, 0, 10, 0, // Skip to: 5369
/* 5359 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, // Skip to: 5369
/* 5365 */    MCD::OPC_Decode, 184, 1, 4, // Opcode: FLUSH
/* 5369 */    MCD::OPC_Decode, 187, 1, 4, // Opcode: FLUSHrr
/* 5373 */    MCD::OPC_FilterValue, 1, 57, 4, // Skip to: 6458
/* 5377 */    MCD::OPC_CheckField, 25, 5, 0, 51, 4, // Skip to: 6458
/* 5383 */    MCD::OPC_Decode, 186, 1, 4, // Opcode: FLUSHri
/* 5387 */    MCD::OPC_FilterValue, 60, 25, 0, // Skip to: 5416
/* 5391 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5394 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5408
/* 5398 */    MCD::OPC_CheckField, 5, 8, 0, 30, 4, // Skip to: 6458
/* 5404 */    MCD::OPC_Decode, 144, 3, 8, // Opcode: SAVErr
/* 5408 */    MCD::OPC_FilterValue, 1, 22, 4, // Skip to: 6458
/* 5412 */    MCD::OPC_Decode, 143, 3, 9, // Opcode: SAVEri
/* 5416 */    MCD::OPC_FilterValue, 61, 14, 4, // Skip to: 6458
/* 5420 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5423 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5437
/* 5427 */    MCD::OPC_CheckField, 5, 8, 0, 1, 4, // Skip to: 6458
/* 5433 */    MCD::OPC_Decode, 138, 3, 8, // Opcode: RESTORErr
/* 5437 */    MCD::OPC_FilterValue, 1, 249, 3, // Skip to: 6458
/* 5441 */    MCD::OPC_Decode, 137, 3, 9, // Opcode: RESTOREri
/* 5445 */    MCD::OPC_FilterValue, 3, 241, 3, // Skip to: 6458
/* 5449 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 5452 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5481
/* 5456 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5459 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5473
/* 5463 */    MCD::OPC_CheckField, 5, 8, 0, 221, 3, // Skip to: 6458
/* 5469 */    MCD::OPC_Decode, 216, 2, 64, // Opcode: LDrr
/* 5473 */    MCD::OPC_FilterValue, 1, 213, 3, // Skip to: 6458
/* 5477 */    MCD::OPC_Decode, 215, 2, 64, // Opcode: LDri
/* 5481 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5510
/* 5485 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5488 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5502
/* 5492 */    MCD::OPC_CheckField, 5, 8, 0, 192, 3, // Skip to: 6458
/* 5498 */    MCD::OPC_Decode, 207, 2, 64, // Opcode: LDUBrr
/* 5502 */    MCD::OPC_FilterValue, 1, 184, 3, // Skip to: 6458
/* 5506 */    MCD::OPC_Decode, 206, 2, 64, // Opcode: LDUBri
/* 5510 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5539
/* 5514 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5517 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5531
/* 5521 */    MCD::OPC_CheckField, 5, 8, 0, 163, 3, // Skip to: 6458
/* 5527 */    MCD::OPC_Decode, 210, 2, 64, // Opcode: LDUHrr
/* 5531 */    MCD::OPC_FilterValue, 1, 155, 3, // Skip to: 6458
/* 5535 */    MCD::OPC_Decode, 209, 2, 64, // Opcode: LDUHri
/* 5539 */    MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 5568
/* 5543 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5546 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5560
/* 5550 */    MCD::OPC_CheckField, 5, 8, 0, 134, 3, // Skip to: 6458
/* 5556 */    MCD::OPC_Decode, 185, 2, 65, // Opcode: LDDrr
/* 5560 */    MCD::OPC_FilterValue, 1, 126, 3, // Skip to: 6458
/* 5564 */    MCD::OPC_Decode, 184, 2, 65, // Opcode: LDDri
/* 5568 */    MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 5597
/* 5572 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5575 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5589
/* 5579 */    MCD::OPC_CheckField, 5, 8, 0, 105, 3, // Skip to: 6458
/* 5585 */    MCD::OPC_Decode, 203, 3, 66, // Opcode: STrr
/* 5589 */    MCD::OPC_FilterValue, 1, 97, 3, // Skip to: 6458
/* 5593 */    MCD::OPC_Decode, 202, 3, 66, // Opcode: STri
/* 5597 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5626
/* 5601 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5604 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5618
/* 5608 */    MCD::OPC_CheckField, 5, 8, 0, 76, 3, // Skip to: 6458
/* 5614 */    MCD::OPC_Decode, 184, 3, 66, // Opcode: STBrr
/* 5618 */    MCD::OPC_FilterValue, 1, 68, 3, // Skip to: 6458
/* 5622 */    MCD::OPC_Decode, 183, 3, 66, // Opcode: STBri
/* 5626 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5655
/* 5630 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5633 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5647
/* 5637 */    MCD::OPC_CheckField, 5, 8, 0, 47, 3, // Skip to: 6458
/* 5643 */    MCD::OPC_Decode, 196, 3, 66, // Opcode: STHrr
/* 5647 */    MCD::OPC_FilterValue, 1, 39, 3, // Skip to: 6458
/* 5651 */    MCD::OPC_Decode, 195, 3, 66, // Opcode: STHri
/* 5655 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 5684
/* 5659 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5662 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5676
/* 5666 */    MCD::OPC_CheckField, 5, 8, 0, 18, 3, // Skip to: 6458
/* 5672 */    MCD::OPC_Decode, 190, 3, 67, // Opcode: STDrr
/* 5676 */    MCD::OPC_FilterValue, 1, 10, 3, // Skip to: 6458
/* 5680 */    MCD::OPC_Decode, 189, 3, 67, // Opcode: STDri
/* 5684 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5713
/* 5688 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5691 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5705
/* 5695 */    MCD::OPC_CheckField, 5, 8, 0, 245, 2, // Skip to: 6458
/* 5701 */    MCD::OPC_Decode, 204, 2, 64, // Opcode: LDSWrr
/* 5705 */    MCD::OPC_FilterValue, 1, 237, 2, // Skip to: 6458
/* 5709 */    MCD::OPC_Decode, 203, 2, 64, // Opcode: LDSWri
/* 5713 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 5742
/* 5717 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5720 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5734
/* 5724 */    MCD::OPC_CheckField, 5, 8, 0, 216, 2, // Skip to: 6458
/* 5730 */    MCD::OPC_Decode, 196, 2, 64, // Opcode: LDSBrr
/* 5734 */    MCD::OPC_FilterValue, 1, 208, 2, // Skip to: 6458
/* 5738 */    MCD::OPC_Decode, 195, 2, 64, // Opcode: LDSBri
/* 5742 */    MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 5771
/* 5746 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5749 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5763
/* 5753 */    MCD::OPC_CheckField, 5, 8, 0, 187, 2, // Skip to: 6458
/* 5759 */    MCD::OPC_Decode, 199, 2, 64, // Opcode: LDSHrr
/* 5763 */    MCD::OPC_FilterValue, 1, 179, 2, // Skip to: 6458
/* 5767 */    MCD::OPC_Decode, 198, 2, 64, // Opcode: LDSHri
/* 5771 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 5800
/* 5775 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5778 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5792
/* 5782 */    MCD::OPC_CheckField, 5, 8, 0, 158, 2, // Skip to: 6458
/* 5788 */    MCD::OPC_Decode, 214, 2, 64, // Opcode: LDXrr
/* 5792 */    MCD::OPC_FilterValue, 1, 150, 2, // Skip to: 6458
/* 5796 */    MCD::OPC_Decode, 213, 2, 64, // Opcode: LDXri
/* 5800 */    MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 5829
/* 5804 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5807 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5821
/* 5811 */    MCD::OPC_CheckField, 5, 8, 0, 129, 2, // Skip to: 6458
/* 5817 */    MCD::OPC_Decode, 202, 2, 4, // Opcode: LDSTUBrr
/* 5821 */    MCD::OPC_FilterValue, 1, 121, 2, // Skip to: 6458
/* 5825 */    MCD::OPC_Decode, 201, 2, 4, // Opcode: LDSTUBri
/* 5829 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 5858
/* 5833 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5836 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5850
/* 5840 */    MCD::OPC_CheckField, 5, 8, 0, 100, 2, // Skip to: 6458
/* 5846 */    MCD::OPC_Decode, 201, 3, 66, // Opcode: STXrr
/* 5850 */    MCD::OPC_FilterValue, 1, 92, 2, // Skip to: 6458
/* 5854 */    MCD::OPC_Decode, 200, 3, 66, // Opcode: STXri
/* 5858 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 5887
/* 5862 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5865 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5879
/* 5869 */    MCD::OPC_CheckField, 5, 8, 0, 71, 2, // Skip to: 6458
/* 5875 */    MCD::OPC_Decode, 216, 3, 68, // Opcode: SWAPrr
/* 5879 */    MCD::OPC_FilterValue, 1, 63, 2, // Skip to: 6458
/* 5883 */    MCD::OPC_Decode, 215, 3, 68, // Opcode: SWAPri
/* 5887 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 5901
/* 5891 */    MCD::OPC_CheckField, 13, 1, 0, 49, 2, // Skip to: 6458
/* 5897 */    MCD::OPC_Decode, 179, 2, 64, // Opcode: LDArr
/* 5901 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 5915
/* 5905 */    MCD::OPC_CheckField, 13, 1, 0, 35, 2, // Skip to: 6458
/* 5911 */    MCD::OPC_Decode, 205, 2, 64, // Opcode: LDUBArr
/* 5915 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 5929
/* 5919 */    MCD::OPC_CheckField, 13, 1, 0, 21, 2, // Skip to: 6458
/* 5925 */    MCD::OPC_Decode, 208, 2, 64, // Opcode: LDUHArr
/* 5929 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 5943
/* 5933 */    MCD::OPC_CheckField, 13, 1, 0, 7, 2, // Skip to: 6458
/* 5939 */    MCD::OPC_Decode, 180, 2, 65, // Opcode: LDDArr
/* 5943 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 5957
/* 5947 */    MCD::OPC_CheckField, 13, 1, 0, 249, 1, // Skip to: 6458
/* 5953 */    MCD::OPC_Decode, 180, 3, 66, // Opcode: STArr
/* 5957 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 5971
/* 5961 */    MCD::OPC_CheckField, 13, 1, 0, 235, 1, // Skip to: 6458
/* 5967 */    MCD::OPC_Decode, 182, 3, 66, // Opcode: STBArr
/* 5971 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 5985
/* 5975 */    MCD::OPC_CheckField, 13, 1, 0, 221, 1, // Skip to: 6458
/* 5981 */    MCD::OPC_Decode, 194, 3, 66, // Opcode: STHArr
/* 5985 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 5999
/* 5989 */    MCD::OPC_CheckField, 13, 1, 0, 207, 1, // Skip to: 6458
/* 5995 */    MCD::OPC_Decode, 185, 3, 67, // Opcode: STDArr
/* 5999 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6013
/* 6003 */    MCD::OPC_CheckField, 13, 1, 0, 193, 1, // Skip to: 6458
/* 6009 */    MCD::OPC_Decode, 194, 2, 64, // Opcode: LDSBArr
/* 6013 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6027
/* 6017 */    MCD::OPC_CheckField, 13, 1, 0, 179, 1, // Skip to: 6458
/* 6023 */    MCD::OPC_Decode, 197, 2, 64, // Opcode: LDSHArr
/* 6027 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6041
/* 6031 */    MCD::OPC_CheckField, 13, 1, 0, 165, 1, // Skip to: 6458
/* 6037 */    MCD::OPC_Decode, 200, 2, 69, // Opcode: LDSTUBArr
/* 6041 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 6055
/* 6045 */    MCD::OPC_CheckField, 13, 1, 0, 151, 1, // Skip to: 6458
/* 6051 */    MCD::OPC_Decode, 214, 3, 68, // Opcode: SWAPArr
/* 6055 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 6084
/* 6059 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6062 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6076
/* 6066 */    MCD::OPC_CheckField, 5, 8, 0, 130, 1, // Skip to: 6458
/* 6072 */    MCD::OPC_Decode, 190, 2, 70, // Opcode: LDFrr
/* 6076 */    MCD::OPC_FilterValue, 1, 122, 1, // Skip to: 6458
/* 6080 */    MCD::OPC_Decode, 189, 2, 70, // Opcode: LDFri
/* 6084 */    MCD::OPC_FilterValue, 33, 69, 0, // Skip to: 6157
/* 6088 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6091 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6130
/* 6095 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6098 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6112
/* 6102 */    MCD::OPC_CheckField, 5, 8, 0, 94, 1, // Skip to: 6458
/* 6108 */    MCD::OPC_Decode, 188, 2, 70, // Opcode: LDFSRrr
/* 6112 */    MCD::OPC_FilterValue, 1, 86, 1, // Skip to: 6458
/* 6116 */    MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 6458
/* 6120 */    MCD::OPC_CheckField, 5, 8, 0, 76, 1, // Skip to: 6458
/* 6126 */    MCD::OPC_Decode, 212, 2, 70, // Opcode: LDXFSRrr
/* 6130 */    MCD::OPC_FilterValue, 1, 68, 1, // Skip to: 6458
/* 6134 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6137 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6145
/* 6141 */    MCD::OPC_Decode, 187, 2, 70, // Opcode: LDFSRri
/* 6145 */    MCD::OPC_FilterValue, 1, 53, 1, // Skip to: 6458
/* 6149 */    MCD::OPC_CheckPredicate, 0, 49, 1, // Skip to: 6458
/* 6153 */    MCD::OPC_Decode, 211, 2, 70, // Opcode: LDXFSRri
/* 6157 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 6194
/* 6161 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6164 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6182
/* 6168 */    MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 6458
/* 6172 */    MCD::OPC_CheckField, 5, 8, 0, 24, 1, // Skip to: 6458
/* 6178 */    MCD::OPC_Decode, 193, 2, 71, // Opcode: LDQFrr
/* 6182 */    MCD::OPC_FilterValue, 1, 16, 1, // Skip to: 6458
/* 6186 */    MCD::OPC_CheckPredicate, 0, 12, 1, // Skip to: 6458
/* 6190 */    MCD::OPC_Decode, 192, 2, 71, // Opcode: LDQFri
/* 6194 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 6223
/* 6198 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6201 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6215
/* 6205 */    MCD::OPC_CheckField, 5, 8, 0, 247, 0, // Skip to: 6458
/* 6211 */    MCD::OPC_Decode, 183, 2, 72, // Opcode: LDDFrr
/* 6215 */    MCD::OPC_FilterValue, 1, 239, 0, // Skip to: 6458
/* 6219 */    MCD::OPC_Decode, 182, 2, 72, // Opcode: LDDFri
/* 6223 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 6252
/* 6227 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6230 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6244
/* 6234 */    MCD::OPC_CheckField, 5, 8, 0, 218, 0, // Skip to: 6458
/* 6240 */    MCD::OPC_Decode, 193, 3, 73, // Opcode: STFrr
/* 6244 */    MCD::OPC_FilterValue, 1, 210, 0, // Skip to: 6458
/* 6248 */    MCD::OPC_Decode, 192, 3, 73, // Opcode: STFri
/* 6252 */    MCD::OPC_FilterValue, 38, 33, 0, // Skip to: 6289
/* 6256 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6259 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6277
/* 6263 */    MCD::OPC_CheckPredicate, 0, 191, 0, // Skip to: 6458
/* 6267 */    MCD::OPC_CheckField, 5, 8, 0, 185, 0, // Skip to: 6458
/* 6273 */    MCD::OPC_Decode, 199, 3, 74, // Opcode: STQFrr
/* 6277 */    MCD::OPC_FilterValue, 1, 177, 0, // Skip to: 6458
/* 6281 */    MCD::OPC_CheckPredicate, 0, 173, 0, // Skip to: 6458
/* 6285 */    MCD::OPC_Decode, 198, 3, 74, // Opcode: STQFri
/* 6289 */    MCD::OPC_FilterValue, 39, 25, 0, // Skip to: 6318
/* 6293 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6296 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6310
/* 6300 */    MCD::OPC_CheckField, 5, 8, 0, 152, 0, // Skip to: 6458
/* 6306 */    MCD::OPC_Decode, 188, 3, 75, // Opcode: STDFrr
/* 6310 */    MCD::OPC_FilterValue, 1, 144, 0, // Skip to: 6458
/* 6314 */    MCD::OPC_Decode, 187, 3, 75, // Opcode: STDFri
/* 6318 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 6336
/* 6322 */    MCD::OPC_CheckPredicate, 0, 132, 0, // Skip to: 6458
/* 6326 */    MCD::OPC_CheckField, 13, 1, 0, 126, 0, // Skip to: 6458
/* 6332 */    MCD::OPC_Decode, 186, 2, 70, // Opcode: LDFArr
/* 6336 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 6354
/* 6340 */    MCD::OPC_CheckPredicate, 0, 114, 0, // Skip to: 6458
/* 6344 */    MCD::OPC_CheckField, 13, 1, 0, 108, 0, // Skip to: 6458
/* 6350 */    MCD::OPC_Decode, 191, 2, 71, // Opcode: LDQFArr
/* 6354 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 6372
/* 6358 */    MCD::OPC_CheckPredicate, 0, 96, 0, // Skip to: 6458
/* 6362 */    MCD::OPC_CheckField, 13, 1, 0, 90, 0, // Skip to: 6458
/* 6368 */    MCD::OPC_Decode, 181, 2, 72, // Opcode: LDDFArr
/* 6372 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 6390
/* 6376 */    MCD::OPC_CheckPredicate, 0, 78, 0, // Skip to: 6458
/* 6380 */    MCD::OPC_CheckField, 13, 1, 0, 72, 0, // Skip to: 6458
/* 6386 */    MCD::OPC_Decode, 191, 3, 73, // Opcode: STFArr
/* 6390 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 6408
/* 6394 */    MCD::OPC_CheckPredicate, 0, 60, 0, // Skip to: 6458
/* 6398 */    MCD::OPC_CheckField, 13, 1, 0, 54, 0, // Skip to: 6458
/* 6404 */    MCD::OPC_Decode, 197, 3, 74, // Opcode: STQFArr
/* 6408 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 6426
/* 6412 */    MCD::OPC_CheckPredicate, 0, 42, 0, // Skip to: 6458
/* 6416 */    MCD::OPC_CheckField, 13, 1, 0, 36, 0, // Skip to: 6458
/* 6422 */    MCD::OPC_Decode, 186, 3, 75, // Opcode: STDFArr
/* 6426 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 6444
/* 6430 */    MCD::OPC_CheckPredicate, 0, 24, 0, // Skip to: 6458
/* 6434 */    MCD::OPC_CheckField, 5, 9, 128, 1, 17, 0, // Skip to: 6458
/* 6441 */    MCD::OPC_Decode, 121, 76, // Opcode: CASrr
/* 6444 */    MCD::OPC_FilterValue, 62, 10, 0, // Skip to: 6458
/* 6448 */    MCD::OPC_CheckField, 5, 9, 128, 1, 3, 0, // Skip to: 6458
/* 6455 */    MCD::OPC_Decode, 120, 77, // Opcode: CASXrr
/* 6458 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeatureVIS3]);
  case 2:
    return (Bits[Sparc::FeatureVIS]);
  case 3:
    return (Bits[Sparc::FeatureVIS2]);
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
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 14) << 0;
    tmp |= fieldFromInstruction(insn, 20, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 64:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    if (DecodeLoadIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 67:
    if (DecodeStoreIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 70:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 73:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
