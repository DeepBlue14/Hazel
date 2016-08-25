##############################################################################
##
## File: CMakeLists.txt
## Module: tyrannosaurus_lex
## Author: James Kuczynski
## Email: jkuczyns@cs.uml.edu
## File Description: This is the CMake file for tyrannosaurus_lex.  It builds
##		     (or rather, will build) both the refactoring and
##		     code-completion programs.
##
##
##############################################################################

cmake_minimum_required(VERSION 2.8.4)
project(tyrannosaurus_lex)

set(LLVM_PATH /usr/lib/llvm-3.6)
link_directories(${LLVM_PATH}/lib)
include_directories(${LLVM_PATH}/include)

add_definitions(
-D__STDC_LIMIT_MACROS
-D__STDC_CONSTANT_MACROS
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti -std=c++11")

set(HDRS ./src/MethodPrinter.hpp
)

set(SRCS ./src/MethodPrinter.cpp
         ./src/main.cpp
)
         

add_executable(tyrannosaurus_lex ${HDRS} ${SRCS})

target_link_libraries(tyrannosaurus_lex
  clangTooling
  clangToolingCore
  clangFrontendTool
  clangFrontend
  clangDriver
  clangSerialization
  clangCodeGen
  clangParse
  clangSema
  clangStaticAnalyzerFrontend
  clangStaticAnalyzerCheckers
  clangStaticAnalyzerCore
  clangAnalysis
  clangARCMigrate
  clangRewrite
  clangRewriteFrontend
  clangEdit
  clangASTMatchers
  clangAST
  clangLex
  clangBasic
)

target_link_libraries(tyrannosaurus_lex
  LLVMX86AsmParser # MC, MCParser, Support, X86Desc, X86Info
  LLVMX86Desc # MC, Support, X86AsmPrinter, X86Info
  LLVMX86AsmPrinter # MC, Support, X86Utils
  LLVMX86Info # MC, Support, Target
  LLVMX86Utils # Core, Support
  LLVMipo
  LLVMScalarOpts
  LLVMInstCombine
  LLVMTransformUtils
  LLVMipa
  LLVMAnalysis
  LLVMTarget
  LLVMOption # Support
  LLVMMCParser # MC, Support
  LLVMMC # Object, Support
  LLVMObject # BitReader, Core, Support
  LLVMBitReader # Core, Support
  LLVMCore # Support
  LLVMSupport
)

include(FindCurses)

target_link_libraries(tyrannosaurus_lex
                      pthread
                      z
                      dl
                      ${CURSES_LIBRARIES}
)
