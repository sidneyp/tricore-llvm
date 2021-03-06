//===-- TriCoreTargetInfo.cpp - TriCore Target Implementation -------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "TriCore.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm;

Target llvm::TheTriCoreTarget;

extern "C" void LLVMInitializeTriCoreTargetInfo() {
  RegisterTarget<Triple::tricore> X(TheTriCoreTarget, "tricore", "TriCore");
}
