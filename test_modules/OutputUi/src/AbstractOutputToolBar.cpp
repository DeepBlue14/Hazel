#include "AbstractOutputToolBar.h"


AbstractOutputToolBar::AbstractOutputToolBar(QToolBar* parent) : QToolBar(parent)
{
    isOpenMode = true;
}


void AbstractOutputToolBar::swapActionStatus(QAction* hideActPtr, QVector<QAction*>* actionPtrVecPtr)
{
    isOpenMode = !isOpenMode;
    
    if(isOpenMode)
    {
        hideActPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "arrow_down.png") );
    }
    else
    {
        hideActPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "arrow_right.png") );
    }
    
    for(size_t i = 1; i < actionPtrVecPtr->size(); i++)
    {
        actionPtrVecPtr->at(i)->setVisible(isOpenMode);
        actionPtrVecPtr->at(i)->setEnabled(isOpenMode);
    }
}


QString* AbstractOutputToolBar::toString()
{
    return new QString("***METHOD STUB***");
}


AbstractOutputToolBar::~AbstractOutputToolBar()
{
    ;
}