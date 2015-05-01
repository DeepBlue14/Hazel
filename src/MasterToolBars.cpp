#include "MasterToolBars.h"


MasterToolBars::MasterToolBars(QWidget* parent) : QWidget(parent)
{
    ;
}

void MasterToolBars::setMasterActionsPtr(MasterActions* masterActionsPtr)
{
    this->masterActions = masterActionsPtr;
}


MasterActions* MasterToolBars::getMasterActionsPtr()
{
    return masterActions;
}


void MasterToolBars::initGroupOneToolBar(QToolBar* toolbar)
{
    toolbar->addAction(getMasterActionsPtr()->getNewFileActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getNewTerminalActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getNewProjectActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getOpenProjectActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getSaveAllActionPtr() );
}


void MasterToolBars::initGroupTwoToolBar(QToolBar* toolbar)
{
    toolbar->addAction(getMasterActionsPtr()->getUndoActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getRedoActionPtr() );
}


void MasterToolBars::initGroupThreeToolBar(QToolBar* toolbar)
{
    toolbar->addAction(getMasterActionsPtr()->getProfileProjActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getBuildActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getCleanAndBuildActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getRunActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getDebugActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getProfileProjActionPtr() );
}


MasterToolBars::~MasterToolBars()
{
    ;
}