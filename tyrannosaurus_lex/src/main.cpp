//Reference: https://github.com/eliben/llvm-clang-samples/blob/master/Makefile
//           http://eli.thegreenplace.net/2014/07/29/ast-matchers-and-clang-refactoring-tools
// This dude is awesome!

#include <string>

#include "clang/AST/AST.h"
#include "clang/ASTMatchers/ASTMatchers.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "clang/Basic/SourceManager.h"
#include "clang/Frontend/TextDiagnosticPrinter.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Refactoring.h"
#include "clang/Tooling/Tooling.h"
#include "llvm/Support/raw_ostream.h"

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::driver;
using namespace clang::tooling;

static llvm::cl::OptionCategory ToolingSampleCategory("Matcher Sample");

class IfStmtHandler : public MatchFinder::MatchCallback {
public:
  IfStmtHandler(Replacements *Replace) : Replace(Replace) {}

  virtual void run(const MatchFinder::MatchResult &Result) {
    // The matched 'if' statement was bound to 'ifStmt'.
    if (const IfStmt *IfS = Result.Nodes.getNodeAs<clang::IfStmt>("ifStmt")) {
      const Stmt *Then = IfS->getThen();
      Replacement Rep(*(Result.SourceManager), Then->getLocStart(), 0,
                      "// the 'if' part\n");
      Replace->insert(Rep);

      if (const Stmt *Else = IfS->getElse()) {
        Replacement Rep(*(Result.SourceManager), Else->getLocStart(), 0,
                        "// the 'else' part\n");
        Replace->insert(Rep);
      }
    }
  }

private:
  Replacements *Replace;
};

int main(int argc, const char **argv) {
  CommonOptionsParser op(argc, argv, ToolingSampleCategory);
  RefactoringTool Tool(op.getCompilations(), op.getSourcePathList());

  // Set up AST matcher callbacks.
  IfStmtHandler HandlerForIf(&Tool.getReplacements());

  MatchFinder Finder;
  Finder.addMatcher(ifStmt().bind("ifStmt"), &HandlerForIf);

  // Run the tool and collect a list of replacements. We could call runAndSave,
  // which would destructively overwrite the files with their new contents.
  // However, for demonstration purposes it's interesting to show the
  // replacements.
  if (int Result = Tool.run(newFrontendActionFactory(&Finder).get())) {
    return Result;
  }

  llvm::outs() << "Replacements collected by the tool:\n";
  for (auto &r : Tool.getReplacements()) {
    llvm::outs() << r.toString() << "\n";
  }

  return 0;
}


/*
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/Tooling/Tooling.h"

using namespace clang;


class FindNamedClassVisitor : public RecursiveASTVisitor<FindNamedClassVisitor>
{
    public:
        explicit FindNamedClassVisitor(ASTContext* Context) : Context(Context)
        {
            ;
        }

        bool VisitCXXRecordDecl(CXXRecordDecl *Declaration)
        {
            if(Declaration->getQualifiedNameAsString() == "n::m::C")
            {
                FullSourceLoc fullLocation = Context->getFullLoc(Declaration->getLocStart() );
                if(fullLocation.isValid() )
                {
                    llvm::outs() << "Found declaration at " << fullLocation.getSpellingLineNumber() << ":" << fullLocation.getSpellingColumnNumber() << "\n";
                }    
            }
            return true;
        }

private:
    ASTContext *Context;
    
}; // End of class FindNamedClassVisitor


class FindNamedClassConsumer : public clang::ASTConsumer
{
    public:
        explicit FindNamedClassConsumer(ASTContext *Context) : Visitor(Context)
        {
            ;
        }

        virtual void HandleTranslationUnit(clang::ASTContext &Context)
        {
            Visitor.TraverseDecl(Context.getTranslationUnitDecl());
        }

    private:
        FindNamedClassVisitor Visitor;

}; // End of class FindNamedClassConsumer


class FindNamedClassAction : public clang::ASTFrontendAction
{
    public:
        virtual std::unique_ptr<clang::ASTConsumer> CreateASTConsumer(clang::CompilerInstance &Compiler, llvm::StringRef InFile)
        {
            return std::unique_ptr<clang::ASTConsumer>(new FindNamedClassConsumer(&Compiler.getASTContext()) );
        }
}; // End of class FindNamedClassAction


//--------------------------------------
int main(int argc, char **argv)
{
    if(argc > 1)
    {
        clang::tooling::runToolOnCode(new FindNamedClassAction, argv[1]);
    }
}
*/
