//Reference: https://github.com/eliben/llvm-clang-samples/blob/master/Makefile
//           http://eli.thegreenplace.net/2014/07/29/ast-matchers-and-clang-refactoring-tools
// This dude is awesome!

#include <string>

#include <clang/AST/AST.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Basic/SourceManager.h>
#include <clang/Frontend/TextDiagnosticPrinter.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Refactoring.h>
#include <clang/Tooling/Tooling.h>
#include <llvm/Support/raw_ostream.h>

#include "IfStmtHandler.h"

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::driver;
using namespace clang::tooling;

static llvm::cl::OptionCategory ToolingSampleCategory("Matcher Sample");




int main(int argc, const char **argv)
{
    CommonOptionsParser op(argc, argv, ToolingSampleCategory);
    RefactoringTool Tool(op.getCompilations(), op.getSourcePathList() );

    // Set up AST matcher callbacks.
    IfStmtHandler HandlerForIf(&Tool.getReplacements() );

    MatchFinder Finder;
    Finder.addMatcher(ifStmt().bind("ifStmt"), &HandlerForIf);

    // Run the tool and collect a list of replacements. We could call runAndSave,
    // which would destructively overwrite the files with their new contents.
    // However, for demonstration purposes it's interesting to show the
    // replacements.
    if(int Result = Tool.run(newFrontendActionFactory(&Finder).get()) )
    {
        return Result;
    }

    llvm::outs() << "Replacements collected by the tool:\n";
    for (auto &r : Tool.getReplacements() )
    {
        llvm::outs() << r.toString() << "\n";
    }

    return 0;
}
