#include "TreeItemIconInit.h"


void TreeItemIconInit::setProjIcon(QTreeWidgetItem* child)
{
    child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/robot01.png")));
}


void TreeItemIconInit::setIcon(QTreeWidgetItem* child)
{
    if(child->text(0).contains(QRegExp("^[^.]*$")) )
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/projects01.png")));
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
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/pyFile.jpg")));
    }
    else if(child->text(0).contains(QRegExp("\\.cfg$")))
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/pyFile.jpg")));
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
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/cmake.png")));
    }
    else if(child->text(0).contains(QRegExp("\\.txt$")) )
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/file.png")));
    }
    else if(child->text(0).contains(QRegExp("^package.xml$")))
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/config2File.png")));
    }
    else if(child->text(0).contains(QRegExp("\\.xml$")))
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/xmlFile.jpg")));
    }
    else if(child->text(0).contains(QRegExp("\\.launch$")))
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/generate01.png")));
    }
    else if(child->text(0).contains(QRegExp("\\.rb$")))
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/rubyFile.jpg")));
    }
    else
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/file.png")));
    }
    
    
}