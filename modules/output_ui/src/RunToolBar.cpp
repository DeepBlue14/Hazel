#include "RunToolBar.h"

RunToolBar::RunToolBar(AbstractOutputToolBar* parent) : AbstractOutputToolBar(parent)
{
    initActions();

}


void RunToolBar::handleRunActPtrSlot()
{
    cout << "@ RunToolbar::handleRunActPtrSlot()" << endl;
}


void RunToolBar::handleControlCActPtrSlot()
{
    cout << "@ RunToolbar::handleControlCActPtrSlot()" << endl;
}


void RunToolBar::handleControlBackslashActPtrSlot()
{
    cout << "@ RunToolbar::handleControlBackslashActPtrSlot()" << endl;
}


void RunToolBar::handleTermActPtrSlot()
{
    cout << "@ RunToolbar::handleTermActPtrSlot()" << endl;
}


void RunToolBar::initActions()
{
    runActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.png"), tr("&Re-run"), this);
    runActPtr->setShortcut(QKeySequence::New);
    runActPtr->setStatusTip("Re-run all");
    connect(runActPtr, SIGNAL(triggered() ), this, SLOT(handleRunActPtrSlot() ) );
    this->getActions()->push_back(runActPtr);
    
    controlCActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "control_c.png"), tr("[&CTRL]-C"), this);
    controlCActPtr->setShortcut(QKeySequence::New);
    controlCActPtr->setStatusTip("[CTRL]-C");
    connect(controlCActPtr, SIGNAL(triggered() ), this, SLOT(handleControlCActPtrSlot() ) );
    this->getActions()->push_back(controlCActPtr);
    
    controlBackslashActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "control_backslash.png"), tr("[&CTRL]-\\"), this);
    controlBackslashActPtr->setShortcut(QKeySequence::New);
    controlBackslashActPtr->setStatusTip("[CTRL]-\\");
    connect(runActPtr, SIGNAL(triggered() ), this, SLOT(handleControlBackslashActPtrSlot() ) );
    this->getActions()->push_back(controlBackslashActPtr);
    
    termActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "terminal01.png"), tr("&Terminal"), this);
    termActPtr->setShortcut(QKeySequence::New);
    termActPtr->setStatusTip("Terminal");
    connect(termActPtr, SIGNAL(triggered() ), this, SLOT(handleTermActPtrSlot() ) );
    this->getActions()->push_back(termActPtr);
}


void RunToolBar::initBtnConnecter()
{
    ;
}


QString* RunToolBar::toString()
{
    ;
}


RunToolBar::~RunToolBar()
{
    ;
}