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


void MasterToolBars::initNorthGroupOneToolBar(QToolBar* toolbar)
{
    toolbar->addAction(getMasterActionsPtr()->getNewFileActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getNewTerminalActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getNewProjectActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getOpenProjectActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getSaveAllActionPtr() );
}


void MasterToolBars::initNorthGroupTwoToolBar(QToolBar* toolbar)
{
    toolbar->addAction(getMasterActionsPtr()->getUndoActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getRedoActionPtr() );
}


void MasterToolBars::initNorthGroupThreeToolBar(QToolBar* toolbar)
{
    toolbar->addAction(getMasterActionsPtr()->getProfileProjActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getBuildActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getCleanAndBuildActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getConfigForRunActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getRunActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getDebugActionPtr() );
    toolbar->addAction(getMasterActionsPtr()->getProfileProjActionPtr() );
}


void MasterToolBars::initSouthGroupOneToolBar(QToolBar* toolbarPtr)
{
    toolbarPtr->addAction(getMasterActionsPtr()->getOutputSouthActionPtr() );
    toolbarPtr->addAction(getMasterActionsPtr()->getTerminalSouthActionPtr() );
    //toolbarPtr->setOrientation(Qt::Vertical);
}


void MasterToolBars::initEastGroupOneToolBar(QToolBar* toolbarPtr)
{
    toolbarPtr->addAction(getMasterActionsPtr()->getDebugEastActionPtr() );
    toolbarPtr->addAction(getMasterActionsPtr()->getStartEastActionPtr() );
    toolbarPtr->addAction(getMasterActionsPtr()->getStepIntoEastActionPtr() );
    toolbarPtr->addAction(getMasterActionsPtr()->getStepOverActionPtr() );
    toolbarPtr->hide();
    
    cout << "East toolbar is hidden (MasterToolBars::initEastGroupOneToolbar(...)" << endl;
}


void MasterToolBars::initWestGroupOneToolBar(QToolBar* toolbarPtr)
{
    toolbarPtr->addAction(getMasterActionsPtr()->getProjectWestActionPtr() );
    toolbarPtr->addAction(getMasterActionsPtr()->getNavWestActionPtr() );
}


MasterToolBars::~MasterToolBars()
{
    ;
}