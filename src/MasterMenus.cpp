#include "MasterMenus.h"


MasterMenus::MasterMenus(QWidget* parent) : QWidget(parent)
{
    masterActionsPtr = new MasterActions();
}


void MasterMenus::setMasterActionsPtr(MasterActions* masterActionsPtr)
{
    this->masterActionsPtr = masterActionsPtr;
}


MasterActions* MasterMenus::getMasterActionsPtr()
{
    return masterActionsPtr;
}


void MasterMenus::initFileMenuPtr(QMenu* menu)
{
    menu->addAction(masterActionsPtr->getNewProjectActionPtr() );
    menu->addAction(masterActionsPtr->getNewFileActionPtr() );
    menu->addAction(masterActionsPtr->getOpenProjectActionPtr() );
}


void MasterMenus::initEditMenuPtr(QMenu* menu)
{
    menu->addAction(masterActionsPtr->getUndoActionPtr() );
    menu->addAction(masterActionsPtr->getRedoActionPtr() );
}


void MasterMenus::initViewMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initNavigateMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initSourceMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initRefactorMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initRunMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initDebugMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initProfileMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initTeamMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initToolsMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initWindowMenuPtr(QMenu* menu)
{
    ;
}


void MasterMenus::initHelpMenuPtr(QMenu* menu)
{
    ;
}


MasterMenus::~MasterMenus()
{
    ;
}