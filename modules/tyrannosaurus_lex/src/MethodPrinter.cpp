#include "MethodPrinter.hpp"


void MethodPrinter::run(const MatchFinder::MatchResult& Result)
{
    if(const CXXMethodDecl* md = Result.Nodes.getNodeAs<clang::CXXMethodDecl>("methods") )
    {
        std::cout << "Found public method" << std::endl;
        md->dump();
    }
    else if(const FieldDecl* md = Result.Nodes.getNodeAs<clang::FieldDecl>("field_decl") )
    {

        const clang::RecordDecl* rd = md->getParent();
        const clang::QualType qt = md->getType();
        const clang::Type* t = qt.getTypePtr();
        const std::string name = md->getName().str();


        std::cout << "Found public field" << std::endl;
        std::cout << "Name:   " << md->getName().str()         << "\n"
                  << "Type:   " << md->getType().getAsString() << "\n"
                  << "Object? " << ((md->getType().getTypePtr()->isObjectType() == 1)? "NO" : "YES") << "\n"
                  << "Class?  " << ((md->getType().getTypePtr()->isClassType() == 1)? "NO" : "YES") << "\n"
                  << std::endl;
        md->dump();
        std::cout << "-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -\n" << std::endl;
    }
    else
    {
        std::cout << "UNKNOWN type filtered" << std::endl;
    }
}
