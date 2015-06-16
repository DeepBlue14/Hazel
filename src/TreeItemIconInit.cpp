#include "TreeItemIconInit.h"


void TreeItemIconInit::setIcon(QTreeWidgetItem* child)
{
    if(child->text(0).contains(QRegExp("^[^.]*$")) )
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/projects.jpg")));
    }
    else if(child->text(0).contains(QRegExp("(\\.h$)|(\\.hpp$)")) )
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/hFile.png")));
    }
    else if(child->text(0).contains(QRegExp("(\\.c$)|(\\.cpp$)|(\\.cxx)")) )
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/cppFile.png")));
    }
    else if(child->text(0).contains(QRegExp("\\.py$")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("\\.cfg$")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("\\.lisp$")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("\\.java$")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("\\.md$")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("^CMakeLists.txt$")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("\\.txt$")) )
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("^package.xml$")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("\\.xml$")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("\\.launch$")))
    {
        ;
    }
    else
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/file.png")));
    }
    
    
}