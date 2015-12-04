
#include "RunToolbar.h"

RunToolbar::RunToolbar(QToolBar* parent) : QToolBar(parent)
{
    isOpenMode = true;
    actionPtrVecPtr = new QVector<QAction*>();
    
    initActions();
    
    //this->setIconSize(QSize(this->iconSize().width()/2, this->iconSize().height()/2) );
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


void RunToolbar::handleControlCActPtrSlot()
{
    cout << "@ RunToolbar::handleControlCActPtrSlot()" << endl;
}


void RunToolbar::handleControlBackslashActPtrSlot()
{
    cout << "@ RunToolbar::handleControlBackslashActPtrSlot()" << endl;
}


void RunToolbar::handleTermActPtrSlot()
{
    cout << "@ RunToolbar::handleTermActPtrSlot()" << endl;
}


void RunToolbar::initActions()
{
    hideActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "arrow_down.png"), tr("&Expand/hide"), this);
    hideActPtr->setShortcut(QKeySequence::New);
    hideActPtr->setStatusTip("Expand/hide");
    connect(hideActPtr, SIGNAL(triggered() ), this, SLOT(handleHideActPtrSlot() ) );
    actionPtrVecPtr->push_back(hideActPtr);
    
    runActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.png"), tr("&Re-run all"), this);
    runActPtr->setShortcut(QKeySequence::New);
    runActPtr->setStatusTip("Re-run all");
    connect(runActPtr, SIGNAL(triggered() ), this, SLOT(handleRunActPtrSlot() ) );
    actionPtrVecPtr->push_back(runActPtr);
    
    controlCActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "control_c.jpg"), tr("[&CTRL]-C"), this);
    controlCActPtr->setShortcut(QKeySequence::New);
    controlCActPtr->setStatusTip("[CTRL]-C");
    connect(controlCActPtr, SIGNAL(triggered() ), this, SLOT(handleControlCActPtrSlot() ) );
    actionPtrVecPtr->push_back(controlCActPtr);
    
    controlBackslashActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "control_backslash.jpg"), tr("[&CTRL]-\\"), this);
    controlBackslashActPtr->setShortcut(QKeySequence::New);
    controlBackslashActPtr->setStatusTip("[CTRL]-\\");
    connect(runActPtr, SIGNAL(triggered() ), this, SLOT(handleControlBackslashActPtrSlot() ) );
    actionPtrVecPtr->push_back(controlBackslashActPtr);
    
    termActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "terminal01.png"), tr("&Terminal"), this);
    termActPtr->setShortcut(QKeySequence::New);
    termActPtr->setStatusTip("Terminal");
    connect(termActPtr, SIGNAL(triggered() ), this, SLOT(handleTermActPtrSlot() ) );
    actionPtrVecPtr->push_back(termActPtr);
}


void RunToolbar::swapActionStatus()
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