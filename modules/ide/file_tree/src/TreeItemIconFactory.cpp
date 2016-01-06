#include "TreeItemIconFactory.h"


void TreeItemIconFactory::setProjIcon(QTreeWidgetItem* child)
{
    child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "robot01.png")));
}


void TreeItemIconFactory::setIcon(QTreeWidgetItem* child)
{
    if(child->text(0).contains(QRegExp("^[^.]*$")) )
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "projects01.png")));
    }
    else if(child->text(0).contains(QRegExp("(\\.h$)|(\\.hpp$)")) )
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "hFile.png")));
    }
    else if(child->text(0).contains(QRegExp("(\\.c$)|(\\.cpp$)|(\\.cxx)")) )
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "cppFile.png")));
    }
    else if(child->text(0).contains(QRegExp("\\.py$")))
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "pyFile.jpg")));
    }
    else if(child->text(0).contains(QRegExp("\\.cfg$")))
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "pyFile.jpg")));
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
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "cmake.png")));
    }
    else if(child->text(0).contains(QRegExp("\\.txt$")) )
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "file.png")));
    }
    else if(child->text(0).contains(QRegExp("^package.xml$")))
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "config2File.png")));
    }
    else if(child->text(0).contains(QRegExp("\\.xml$")))
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "xmlFile.jpg")));
    }
    else if(child->text(0).contains(QRegExp("\\.launch$")))
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "generate01.png")));
    }
    else if(child->text(0).contains(QRegExp("\\.rb$")))
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "rubyFile.jpg")));
    }
    else if(child->text(0).contains(QRegExp("\\.bash$")) ||
            child->text(0).contains(QRegExp("\\.?sh$")) ||
            child->text(0).contains(QRegExp("\\.sh$")))
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "shell.jpg")));
    }
    else
    {
        child->setIcon(0, *(new QIcon(RosEnv::imagesInstallLoc + "file.png")));
    }
    
    
}