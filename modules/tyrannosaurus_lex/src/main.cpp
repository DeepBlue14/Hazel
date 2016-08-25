//Reff: http://clang.llvm.org/docs/LibASTMatchersReference.html

#include <clang/Frontend/FrontendActions.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <llvm/Support/CommandLine.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/AST/DeclCXX.h>

#include <cstdio>
#include <string>

#include "MethodPrinter.hpp"

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;
using namespace llvm;

int main(int argc, const char **argv)
{
    // one for variables?
    // one for methods?
    // one for functions?

    //DeclarationMatcher varMatcher = fieldDecl(isPublic()).bind("field_decl");
    //DeclarationMatcher varMatcher = fieldDecl(anything()).bind("field_decl");
    //DeclarationMatcher varMatcher = methodDecl(isPublic()).bind("methods");
    DeclarationMatcher varMatcher = methodDecl(anything()).bind("methods");


    static cl::extrahelp CommonHelp(CommonOptionsParser::HelpMessage);
    static cl::extrahelp MoreHelp("\nMore help text...");

    cl::OptionCategory cat("myname", "mydescription");
    CommonOptionsParser optionsParser(argc, argv, cat, 0);

    ClangTool tool(optionsParser.getCompilations(), optionsParser.getSourcePathList());

    MethodPrinter printer;
    MatchFinder finder;

    finder.addMatcher(varMatcher, &printer);

    return tool.run(&(*newFrontendActionFactory(&finder)));
}

