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

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::driver;
using namespace clang::tooling;


class IfStmtHandler : public MatchFinder::MatchCallback
{
    private:
        Replacements* Replace;
    
    
    public:
        IfStmtHandler(Replacements* Replace);
        virtual void run(const MatchFinder::MatchResult& Result);


};
