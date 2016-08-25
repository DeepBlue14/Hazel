/**
 * File:   MethodPrinter.hpp
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * LLVM/Clang version: 3.6
 * File Description:
 *
 * Created: 1/27/2016
 * Last Modified: 1/27/2016
 */


#ifndef METHOD_PRINTER_H
#define METHOD_PRINTER_H

#include <clang/Frontend/FrontendActions.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <llvm/Support/CommandLine.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>

#include <cstdio>
#include <iostream>

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;
using namespace llvm;


class MethodPrinter : public MatchFinder::MatchCallback
{

public :
    virtual void run(const MatchFinder::MatchResult& Result);


};

#endif /* METHOD_PRINTER_H */
