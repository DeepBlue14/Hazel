#include "MasterToolBtns.h"


MasterToolBtns::MasterToolBtns(QWidget* parent) : QWidget(parent)
{
    runBtnMenuPtr = new RunBtnMenu();
}


void MasterToolBtns::setMasterActionsPtr(MasterActions* masterActionsPtr)
{
    this->masterActionsPtr = masterActionsPtr;
}
MasterActions* MasterToolBtns::getMasterActionsPtr()
{
    return masterActionsPtr;
}


void MasterToolBtns::initNorthGroupOneToolBtns()
{
    newFileToolBtnPtr = new QToolButton();
    newFileToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getNewFileActionPtr() );
    newFileToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    //toolbar->addWidget(newFileToolBtnPtr);
    
    newTerminalToolBtnPtr = new QToolButton();
    newTerminalToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getNewTerminalActionPtr() );
    newTerminalToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    newProjectToolBtnPtr = new QToolButton();
    newProjectToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getNewProjectActionPtr() );
    newProjectToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    openProjectToolBtnPtr = new QToolButton();
    openProjectToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getOpenProjectActionPtr() );
    openProjectToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    saveAllToolBtnPtr = new QToolButton();
    saveAllToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getSaveAllActionPtr() );
    saveAllToolBtnPtr->setFocusPolicy(Qt::NoFocus);
}


void MasterToolBtns::initNorthGroupTwoToolBtns()
{
    undoToolBtnPtr = new QToolButton();
    undoToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getUndoActionPtr() );
    undoToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    redoToolBtnPtr = new QToolButton();
    redoToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getRedoActionPtr() );
    redoToolBtnPtr->setFocusPolicy(Qt::NoFocus);
}


void MasterToolBtns::initNorthGroupThreeToolBtns()
{
    buildToolBtnPtr = new QToolButton();
    buildToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getBuildActionPtr() );
    buildToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    cleanAndBuildToolBtnPtr = new QToolButton();
    cleanAndBuildToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getCleanAndBuildActionPtr() );
    cleanAndBuildToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    configForRunToolBtnPtr = new QToolButton();
    configForRunToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getConfigForRunActionPtr() );
    configForRunToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    runToolBtnPtr = new QToolButton();
    runToolBtnPtr->setMenu(runBtnMenuPtr->getMenu() );
    runToolBtnPtr->setPopupMode(QToolButton::MenuButtonPopup);
    runToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getRunActionPtr() );
    runToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    debugToolBtnPtr = new QToolButton();
    debugToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getDebugActionPtr() );
    debugToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    gitToolBtnPtr = new QToolButton();
    gitToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getGitActionPtr() );
    gitToolBtnPtr->setFocusPolicy(Qt::NoFocus);
}


void MasterToolBtns::initSouthGroupOneToolBtns()
{
    outputSouthToolBtnPtr = new QToolButton();
    outputSouthToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getOutputSouthActionPtr() );
    outputSouthToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    terminalSouthToolBtnPtr = new QToolButton();
    terminalSouthToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getTerminalSouthActionPtr() );
    terminalSouthToolBtnPtr->setFocusPolicy(Qt::NoFocus);
}


void MasterToolBtns::initEastGroupOneToolBtns()
{
    runEastToolBtnPtr = new QToolButton();
    runEastToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getRunEastActionPtr() );
    runEastToolBtnPtr->setFocusPolicy(Qt::NoFocus);
    
    navEastToolBtnPtr = new QToolButton();
    navEastToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getNavEastActionPtr() );
    navEastToolBtnPtr->setFocusPolicy(Qt::NoFocus);
}


void MasterToolBtns::initWestGroupOneToolBtns()
{
    projectWestToolBtnPtr = new QToolButton();
    projectWestToolBtnPtr->setDefaultAction(getMasterActionsPtr()->getProjectWestActionPtr() );
    projectWestToolBtnPtr->setFocusPolicy(Qt::NoFocus);
}


QVector<QToolButton*>* MasterToolBtns::getNorthGroupOneToolBtnPtrVecPtr()
{
    return northGroupOneToolBtnPtrVecPtr;
}


QVector<QToolButton*>* MasterToolBtns::getNorthGroupTwoToolBtnPtrVecPtr()
{
    return northGroupTwoToolBtnPtrVecPtr;
}


QVector<QToolButton*>* MasterToolBtns::getNorthGroupThreeToolBtnPtrVecPtr()
{
    return northGroupTwoToolBtnPtrVecPtr;
}


QVector<QToolButton*>* MasterToolBtns::getSouthToolBtnPtrVecPtr()
{
    return southToolBtnPtrVecPtr;
}


QVector<QToolButton*>* MasterToolBtns::getEastToolBtnPtrVecPtr()
{
    return eastToolBtnPtrVecPtr;
}


QVector<QToolButton*>* MasterToolBtns::getWestToolBtnPtrVecPtr()
{
    return westToolBtnPtrVecPtr;
}


// North
void MasterToolBtns::setNewFileToolBtnPtr(QToolButton* newFileToolBtnPtr)
{
    this->newFileToolBtnPtr = newFileToolBtnPtr;
}


QToolButton* MasterToolBtns::getNewFileToolBtnPtr()
{
    return newFileToolBtnPtr;
}


void MasterToolBtns::setNewTerminalToolBtnPtr(QToolButton* newTerminalToolBtnPtr)
{
    this->newTerminalToolBtnPtr = newTerminalToolBtnPtr;
}


QToolButton* MasterToolBtns::getNewTerminalToolBtnPtr()
{
    return newTerminalToolBtnPtr;
}


void MasterToolBtns::setNewProjectToolBtnPtr(QToolButton* newProjectToolBtnPtr)
{
    this->newProjectToolBtnPtr = newProjectToolBtnPtr;
}


QToolButton* MasterToolBtns::getNewProjectToolBtnPtr()
{
    return newProjectToolBtnPtr;
}


void MasterToolBtns::setOpenProjectToolBtnPtr(QToolButton* openProjectToolBtnPtr)
{
    this->openProjectToolBtnPtr = openProjectToolBtnPtr;
}


QToolButton* MasterToolBtns::getOpenProjectToolBtnPtr()
{
    return openProjectToolBtnPtr;
}


void MasterToolBtns::setSaveAllToolBtnPtr(QToolButton* saveAllToolBtnPtr)
{
    this->saveAllToolBtnPtr = saveAllToolBtnPtr;
}


QToolButton* MasterToolBtns::getSaveAllToolBtnPtr()
{
    return saveAllToolBtnPtr;
}


void MasterToolBtns::setUndoToolBtnPtr(QToolButton* undoToolBtnPtr)
{
    this->undoToolBtnPtr = undoToolBtnPtr;
}


QToolButton* MasterToolBtns::getUndoToolBtnPtr()
{
    return undoToolBtnPtr;
}


void MasterToolBtns::setRedoToolBtnPtr(QToolButton* redoToolBtnPtr)
{
    this->redoToolBtnPtr = redoToolBtnPtr;
}


QToolButton* MasterToolBtns::getRedoToolBtnPtr()
{
    return redoToolBtnPtr;
}


void MasterToolBtns::setBuildToolBtnPtr(QToolButton* buildToolBtnPtr)
{
    this->buildToolBtnPtr = buildToolBtnPtr;
}


QToolButton* MasterToolBtns::getBuildToolBtnPtr()
{
    return buildToolBtnPtr;
}


void MasterToolBtns::setCleanAndBuildToolBtnPtr(QToolButton* cleanAndBuildToolBtnPtr)
{
    this->cleanAndBuildToolBtnPtr = cleanAndBuildToolBtnPtr;
}


QToolButton* MasterToolBtns::getCleanAndBuildToolBtnPtr()
{
    return cleanAndBuildToolBtnPtr;
}


void MasterToolBtns::setConfigForRunToolBtnPtr(QToolButton* configForRunToolBtnPtr)
{
    this->configForRunToolBtnPtr = configForRunToolBtnPtr;
}


QToolButton* MasterToolBtns::getConfigForRunToolBtnPtr()
{
    return configForRunToolBtnPtr;
}


void MasterToolBtns::setRunToolBtnPtr(QToolButton* runToolBtnPtr)
{
    this->runToolBtnPtr = runToolBtnPtr;
}


QToolButton* MasterToolBtns::getRunToolBtnPtr()
{
    return runToolBtnPtr;
}


void MasterToolBtns::setDebugToolBtnPtr(QToolButton* debugToolBtnPtr)
{
    this->debugToolBtnPtr = debugToolBtnPtr;
}


QToolButton* MasterToolBtns::getDebugToolBtnPtr()
{
    return debugToolBtnPtr;
}


void MasterToolBtns::setGitToolBtnPtr(QToolButton* gitToolBtnPtr)
{
    this->gitToolBtnPtr = gitToolBtnPtr;
}


QToolButton* MasterToolBtns::getGitToolBtnPtr()
{
    return gitToolBtnPtr;
}


// South
void MasterToolBtns::setOutputSouthToolBtnPtr(QToolButton* outputSouthToolBtnPtr)
{
    this->outputSouthToolBtnPtr = outputSouthToolBtnPtr;
}


QToolButton* MasterToolBtns::getOutputSouthToolBtnPtr()
{
    return outputSouthToolBtnPtr;
}


void MasterToolBtns::setTerminalSouthToolBtnPtr(QToolButton* terminalSouthToolBtnPtr)
{
    this->terminalSouthToolBtnPtr = terminalSouthToolBtnPtr;
}


QToolButton* MasterToolBtns::getTerminalSouthToolBtnPtr()
{
    return terminalSouthToolBtnPtr;
}


// East
void MasterToolBtns::setRunEastToolBtnPtr(QToolButton* runEastToolBtnPtr)
{
    this->runEastToolBtnPtr = runEastToolBtnPtr;
}


QToolButton* MasterToolBtns::getRunEastToolBtnPtr()
{
    return runEastToolBtnPtr;
}


void MasterToolBtns::setNavEastToolBtnPtr(QToolButton* navEastToolBtnPtr)
{
    this->navEastToolBtnPtr = navEastToolBtnPtr;
}


QToolButton* MasterToolBtns::getNavEastToolBtnPtr()
{
    return navEastToolBtnPtr;
}


// West
void MasterToolBtns::setProjectWestToolBtnPtr(QToolButton* projectWestToolBtnPtr)
{
    this->projectWestToolBtnPtr = projectWestToolBtnPtr;
}


QToolButton* MasterToolBtns::getProjectWestToolBtnPtr()
{
    return projectWestToolBtnPtr;
}


QString* MasterToolBtns::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


MasterToolBtns::~MasterToolBtns()
{
    ;
}