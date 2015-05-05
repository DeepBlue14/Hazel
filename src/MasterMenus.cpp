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
    menu = menu; // ***method stub***
}


void MasterMenus::initNavigateMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


void MasterMenus::initSourceMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


void MasterMenus::initRefactorMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


void MasterMenus::initRunMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


void MasterMenus::initDebugMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


void MasterMenus::initProfileMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


void MasterMenus::initTeamMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


void MasterMenus::initToolsMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


void MasterMenus::initWindowMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


void MasterMenus::initHelpMenuPtr(QMenu* menu)
{
    menu = menu; // ***method stub***
}


MasterMenus::~MasterMenus()
{
    ;
}