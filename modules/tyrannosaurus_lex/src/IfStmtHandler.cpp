#include "IfStmtHandler.h"


IfStmtHandler::IfStmtHandler(Replacements* Replace) : Replace(Replace)
{
    ;
}


void IfStmtHandler::run(const MatchFinder::MatchResult& Result)
{
    // The matched 'if' statement was bound to 'ifStmt'.
    if(const IfStmt* IfS = Result.Nodes.getNodeAs<clang::IfStmt>("ifStmt") )
    {
        const Stmt* Then = IfS->getThen();
        Replacement Rep(*(Result.SourceManager), Then->getLocStart(), 0, "// the 'if' part\n");
        Replace->insert(Rep);

        if(const Stmt* Else = IfS->getElse() )
        {
            Replacement Rep(*(Result.SourceManager), Else->getLocStart(), 0, "// the 'else' part\n");
            Replace->insert(Rep);
        }
    }
}
