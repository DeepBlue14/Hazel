#include "FTFileMenu.h"


FTFileMenu::FTFileMenu()
{
    initMenu();
}


void FTFileMenu::initMenu()
{
    this->addAction("Open");
    
    this->addAction("Hide");

    this->addAction("Delete");
    
    this->addAction("Rename...");
    
    this->addAction("Refactor");
    
    QMenu* gitMenu = this->addMenu("Git");
    gitMenu->addAction("Add");
    gitMenu->addAction("Commit");
    gitMenu->addAction("Reset");
    
    this->addAction("Properties");
    
    
    
    connect(gitMenu, SIGNAL(triggered(QAction* )), this, SLOT(handleOpenMenuSlot()));
}


void FTFileMenu::handleOpenMenuSlot()
{
    cout << "FTFileMenu::handleOpenMenuSlot() triggered" << endl;
}


FTFileMenu::~FTFileMenu()
{
    ;
}