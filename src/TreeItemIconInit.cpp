#include "TreeItemIconInit.h"


void TreeItemIconInit::setIcon(QTreeWidgetItem* child)
{
    if(child->text(0).contains(QRegExp("\\.h")) )
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/hFile.png")));
    }
    else if(child->text(0).contains(QRegExp("")) )
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("\\.hpp")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("\\.cpp")) )
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/cppFile.png")));
    }
    else if(child->text(0).contains(QRegExp("")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("")))
    {
        ;
    }
    else if(child->text(0).contains(QRegExp("")))
    {
        ;
    }
    else
    {
        child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/file.png")));
    }
    
    
}