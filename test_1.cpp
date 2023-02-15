#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include <algorithm>
#include <cstdlib>
#include <memory>
#include <string>
#include <vector>

using namespace llvm;

int main(int argc, char **argv) {
  LLVMContext Context;

  // Create some module to put our function into it.
  std::unique_ptr<Module> Owner(new Module("test", Context));
  Module *M = Owner.get();


  return 0;
}
