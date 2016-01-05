#include "AbstractOutputToolBar.h"


AbstractOutputToolBar::AbstractOutputToolBar(QToolBar* parent) : QToolBar(parent)
{
    isOpenMode = true;
    actionPtrVecPtr = new QVector<QAction*>();
    hideActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "arrow_down.png"), tr("&Expand/hide"), this);
    hideActPtr->setShortcut(QKeySequence::New);
    hideActPtr->setStatusTip("Expand/hide");
    connect(hideActPtr, SIGNAL(triggered() ), this, SLOT(handleHideActPtrSlot() ) );
    actionPtrVecPtr->push_back(hideActPtr);
}


void AbstractOutputToolBar::handleHideActPtrSlot()
{
    cout << "@ RunToolbar::handleHideActPtrSlot()" << endl;
    swapActionStatus();
}


void AbstractOutputToolBar::swapActionStatus()
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


QVector<QAction*>* AbstractOutputToolBar::getActions()
{
    return actionPtrVecPtr;
}


QString* AbstractOutputToolBar::toString()
{
    return new QString("***METHOD STUB***");
}


AbstractOutputToolBar::~AbstractOutputToolBar()
{
    ;
}