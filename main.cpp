#include <memory>

#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/InitLLVM.h"
#include "llvm/Support/raw_ostream.h"


int main(int argc_, const char **argv_) {
  llvm::InitLLVM X(argc_, argv_);
  llvm::outs() << "Hello, I am Table Calculator\n";

  auto TheContext = std::make_unique<llvm::LLVMContext>();
  auto TheModule = std::make_unique<llvm::Module>("my table calculator", *TheContext);

  // Create a new builder for the module.
  auto Builder = std::make_unique<llvm::IRBuilder<>>(*TheContext);

}