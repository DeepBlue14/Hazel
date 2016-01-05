##############################################################################
##
## File: Makefile
## Module: tyrannosaurus_lex
## Author: James Kuczynski
## Email: jkuczyns@cs.uml.edu
## File Description: This is the makefile for tyrannosaurus_lex.  It builds
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

SOURCES = src/main.cpp src/IfStmtHandler.cpp

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

# $(BUILDDIR)/IfStmtHandler.o 
# $(SOURCEDIR)/IfStmtHandler.cpp
# $(BUILDDIR)/IfStmtHandler.o
obj:
	$(CXX) -c -o $(BUILDDIR)/main.o $(SOURCEDIR)/main.cpp $(CXXFLAGS)
	$(CXX) -c -o $(BUILDDIR)/IfStmtHandler.o  $(SOURCEDIR)/IfStmtHandler.cpp $(CXXFLAGS)

exe:
	$(CXX) -o $(EXEDIR)/main $(BUILDDIR)/main.o $(BUILDDIR)/IfStmtHandler.o $(CLANGLIBS)

clean:
	rm $(BUILDDIR)/main.o $(BUILDDIR)/IfStmtHandler.o $(EXEDIR)/main *~
