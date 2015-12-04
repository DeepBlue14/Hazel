#include "SigTextToolBar.h"


SigTextToolBar::SigTextToolBar(AbstractOutputToolBar* parent) : AbstractOutputToolBar(parent)
{
    initActions();
    
    this->setIconSize(QSize(this->iconSize().width()/2, this->iconSize().height()/2) );
}


void SigTextToolBar::initActions()
{
    runActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "run201.png"), tr("&Re-run all"), this);
    runActPtr->setShortcut(QKeySequence::New);
    runActPtr->setStatusTip("Re-run all");
    connect(runActPtr, SIGNAL(triggered() ), this, SLOT(handleRunActPtrSlot() ) );
    this->getActions()->push_back(runActPtr);
    
    controlCActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "control_c.jpg"), tr("[&CTRL]-C"), this);
    controlCActPtr->setShortcut(QKeySequence::New);
    controlCActPtr->setStatusTip("[CTRL]-C");
    connect(controlCActPtr, SIGNAL(triggered() ), this, SLOT(handleControlCActPtrSlot() ) );
    this->getActions()->push_back(controlCActPtr);
    
    controlBackslashActPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "control_backslash.jpg"), tr("[&CTRL]-\\"), this);
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


void SigTextToolBar::initBtnConnecter()
{
    ;
}


QString* SigTextToolBar::toString()
{
    ;
}


SigTextToolBar::~SigTextToolBar()
{
    ;
}