#include "FTFileMenu.h"


FTFileMenu::FTFileMenu(QWidget* parent) : QWidget(parent)
{
    initMenu();
}


void FTFileMenu::initMenu()
{
    menu = new QMenu();
    
    //this->addAction("Open");
    openAct = new QAction(tr("&Open"), this);
    openAct->setShortcut(QKeySequence::Open);
    openAct->setStatusTip("Open file");
    //openAct->setToolTip("Open file");
    connect(openAct, SIGNAL(triggered()), this, SLOT(handleOpenMenuSlot()));
    menu->addAction(openAct);
    
    menu->addAction("Hide");

    menu->addAction("Delete");
    
    menu->addAction("Rename...");
    
    menu->addAction("Refactor");
    
    QMenu* gitMenu = menu->addMenu("Git");
    gitMenu->addAction("Add");
    gitMenu->addAction("Commit");
    gitMenu->addAction("Reset");
    
    menu->addAction("Properties");
    
    
    
    //connect(gitMenu, SIGNAL(triggered(QAction* )), this, SLOT(handleOpenMenuSlot()));
    //connect(gitMenu, SIGNAL(triggered(), this, SLOT(handleOpenMenuSlot()));
}


void FTFileMenu::handleOpenMenuSlot()
{
    cout << "FTFileMenu::handleOpenMenuSlot() triggered" << endl;
}


QMenu* FTFileMenu::getMenu()
{
    return menu;
}


FTFileMenu::~FTFileMenu()
{
    ;
}