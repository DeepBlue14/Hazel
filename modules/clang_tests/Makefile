##############################################################################
##
## File: Makefile
## Module: tyrannosaurus_lex
## Author: James Kuczynski
## Email: jkuczyns@cs.uml.edu
## File Description: This is the makefile for clang_tests.  It builds
##		     (or rather, will build) both the refactoring and
##		     code-completion programs.
##
##
##############################################################################

CXX := clang++-3.6
LLVMCOMPONENTS := cppbackend
RTTIFLAG := -fno-rtti
LLVMCONFIG := /usr/lib/llvm-3.6/bin/llvm-config

CXXFLAGS := -I$(shell $(LLVMCONFIG) --src-root)/tools/clang/include -I$(shell $(LLVMCONFIG) --obj-root)/tools/clang/include $(shell $(LLVMCONFIG) --cxxflags) $(RTTIFLAG)
LLVMLDFLAGS := $(shell $(LLVMCONFIG) --ldflags --libs $(LLVMCOMPONENTS))

SOURCEDIR = src
BUILDDIR = build
EXEDIR = dist

SOURCES = src/main.cpp src/MethodPrinter.cpp

OBJECTS = $(SOURCES:.cpp=.o)
EXES = $(OBJECTS:.o=)
CLANGLIBS = \
				-lclangTooling\
				-lclangToolingCore\
				-lclangFrontendTool\
				-lclangFrontend\
				-lclangDriver\
				-lclangSerialization\
				-lclangCodeGen\
				-lclangParse\
				-lclangSema\
				-lclangStaticAnalyzerFrontend\
				-lclangStaticAnalyzerCheckers\
				-lclangStaticAnalyzerCore\
				-lclangAnalysis\
				-lclangARCMigrate\
				-lclangRewrite\
				-lclangRewriteFrontend\
				-lclangEdit\
				-lclangASTMatchers\
				-lclangAST\
				-lclangLex\
				-lclangBasic\
				$(shell $(LLVMCONFIG) --libs)\
				$(shell $(LLVMCONFIG) --system-libs)\
                -lcurses

all: obj exe

obj:
	$(CXX) -c -o $(BUILDDIR)/main.o $(SOURCEDIR)/main.cpp $(CXXFLAGS)
	$(CXX) -c -o $(BUILDDIR)/MethodPrinter.o  $(SOURCEDIR)/MethodPrinter.cpp $(CXXFLAGS)

exe:
	$(CXX) -o $(EXEDIR)/main $(BUILDDIR)/main.o $(BUILDDIR)/MethodPrinter.o $(CLANGLIBS)

clean:
	rm $(BUILDDIR)/main.o $(BUILDDIR)/MethodPrinter.o $(EXEDIR)/main *~
