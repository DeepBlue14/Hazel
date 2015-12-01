
#include "RunToolbar.h"

RunToolbar::RunToolbar(QToolBar* parent) : QToolBar(parent)
{
    isOpenMode = true;
    actionPtrVecPtr = new QVector<QAction*>();
    
    initActions();
    
    
    
}


void RunToolbar::handleHideActPtrSlot()
{
    cout << "@ RunToolbar::handleHideActPtrSlot()" << endl;
    swapActionStatus();
}


void RunToolbar::handleRunActPtrSlot()
{
    cout << "@ RunToolbar::handleRunActPtrSlot()" << endl;
}


void RunToolbar::handleTermActPtrSlot()
{
    cout << "@ RunToolbar::handleTermActPtrSlot()" << endl;
}


void RunToolbar::initActions()
{
    hideActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "arrow_down.png"), tr("&New File"), this);
    hideActPtr->setShortcut(QKeySequence::New);
    hideActPtr->setStatusTip("New File");
    connect(hideActPtr, SIGNAL(triggered() ), this, SLOT(handleHideActPtrSlot() ) );
    actionPtrVecPtr->push_back(hideActPtr);
    
    runActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.png"), tr("&New File"), this);
    runActPtr->setShortcut(QKeySequence::New);
    runActPtr->setStatusTip("New File");
    connect(runActPtr, SIGNAL(triggered() ), this, SLOT(handleRunActPtrSlot() ) );
    actionPtrVecPtr->push_back(runActPtr);
    
    termActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "terminal01.png"), tr("&New File"), this);
    termActPtr->setShortcut(QKeySequence::New);
    termActPtr->setStatusTip("New File");
    connect(termActPtr, SIGNAL(triggered() ), this, SLOT(handleTermActPtrSlot() ) );
    actionPtrVecPtr->push_back(termActPtr);
}


void RunToolbar::swapActionStatus()
{
    isOpenMode = !isOpenMode;
    for(size_t i = 1; i < actionPtrVecPtr->size(); i++)
    {
        actionPtrVecPtr->at(i)->setVisible(isOpenMode);
        actionPtrVecPtr->at(i)->setEnabled(isOpenMode);
    }
}


QVector<QAction*>* RunToolbar::getActions()
{
    return actionPtrVecPtr;
}


QString* RunToolbar::toString()
{
    return new QString("***METHOD STUB***");
}


RunToolbar::~RunToolbar()
{
    ;
}