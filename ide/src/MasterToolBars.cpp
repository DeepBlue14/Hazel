#include "MasterToolBars.h"


MasterToolBars::MasterToolBars(QWidget* parent) : QWidget(parent)
{
    ;
}


void MasterToolBars::setMasterToolBtnsPtr(MasterToolBtns* masterToolBtnsPtr)
{
    this->masterToolBtnsPtr = masterToolBtnsPtr;
}

MasterToolBtns* MasterToolBars::getMasterToolBtnsPtr()
{
    return masterToolBtnsPtr;
}


void MasterToolBars::initNorthGroupOneToolBar(QToolBar* toolbar)
{
    toolbar->addWidget(getMasterToolBtnsPtr()->getNewFileToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getNewTerminalToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getNewProjectToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getOpenProjectToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getSaveAllToolBtnPtr() );
}


void MasterToolBars::initNorthGroupTwoToolBar(QToolBar* toolbar)
{
    toolbar->addWidget(getMasterToolBtnsPtr()->getUndoToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getRedoToolBtnPtr() );
}


void MasterToolBars::initNorthGroupThreeToolBar(QToolBar* toolbar)
{
    //toolbar->addAction(getMasterActionsPtr()->getGitActionPtr() ); // should be projectconfig
    toolbar->addWidget(getMasterToolBtnsPtr()->getBuildToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getCleanAndBuildToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getConfigForRunToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getRunToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getDebugToolBtnPtr() );
    toolbar->addWidget(getMasterToolBtnsPtr()->getGitToolBtnPtr() );
}


void MasterToolBars::initSouthGroupOneToolBar(QToolBar* toolbarPtr)
{
    toolbarPtr->addWidget(getMasterToolBtnsPtr()->getOutputSouthToolBtnPtr() );
    toolbarPtr->addWidget(getMasterToolBtnsPtr()->getTerminalSouthToolBtnPtr() );
    //toolbarPtr->setOrientation(Qt::Vertical);
}


void MasterToolBars::initEastGroupOneToolBar(QToolBar* toolbarPtr)
{
    toolbarPtr->addWidget(getMasterToolBtnsPtr()->getRunEastToolBtnPtr() );
    toolbarPtr->addWidget(getMasterToolBtnsPtr()->getNavEastToolBtnPtr() );
}


void MasterToolBars::initWestGroupOneToolBar(QToolBar* toolbarPtr)
{
    toolbarPtr->addWidget(getMasterToolBtnsPtr()->getProjectWestToolBtnPtr() );
}


QString* MasterToolBars::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


MasterToolBars::~MasterToolBars()
{
    ;
}