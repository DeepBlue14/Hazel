#include "FTFileMenu.h"


FTFileMenu::FTFileMenu()
{
    initMenu();
}


void FTFileMenu::initMenu()
{
    QMenu* openMenu = this->addMenu("Open");
    
    QMenu* hideMenu = this->addMenu("Hide");
    
    QMenu* deleteMenu = this->addMenu("Delete");
    
    QMenu* renameMenu = this->addMenu("Rename...");
    
    QMenu* refactorMenu = this->addMenu("Refactor");
    
    QMenu* gitMenu = this->addMenu("Git");
    QMenu* gitAddMenu = gitMenu->addMenu("Add");
    QMenu* gitCommitMenu = gitMenu->addMenu("Commit");
    QMenu* resetCommitMenu = gitMenu->addMenu("Reset");
    
    QMenu* propertiesMenu = this->addMenu("Properties");
    
    
    
    connect(openMenu, SIGNAL(triggered(QAction* )), this, SLOT(handleOpenMenuSlot()));
}


void FTFileMenu::handleOpenMenuSlot()
{
    cout << "FTFileMenu::handleOpenMenuSlot() triggered" << endl;
}


FTFileMenu::~FTFileMenu()
{
    ;
}