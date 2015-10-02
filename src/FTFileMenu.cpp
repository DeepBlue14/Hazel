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
    //openAct->setShortcut(QKeySequence::Open);
    openAct->setStatusTip("Open file");
    connect(openAct, SIGNAL(triggered()), this, SLOT(handleOpenMenuSlot() ) );
    menu->addAction(openAct);
    
    hideAct = new QAction(tr("&Hide"), this);
    //hideAct->setShortcut(QKeySequence::Close);
    hideAct->setStatusTip("Hide file");
    connect(hideAct, SIGNAL(triggered()), this, SLOT(handleHideMenuSlot() ) );
    menu->addAction(hideAct);

    deleteAct = new QAction(tr("&Delete"), this);
    //deleteAct->setShortcut(QKeySequence::Delete);
    deleteAct->setStatusTip("Delete file");
    connect(deleteAct, SIGNAL(triggered()), this, SLOT(handleDeleteMenuSlot() ) );
    menu->addAction(deleteAct);
    
    renameAct = new QAction(tr("&Rename..."), this);
    //renameAct->setShortcut()
    renameAct->setStatusTip("Rename file");
    connect(renameAct, SIGNAL(triggered()), this, SLOT(handleRenameMenuSlot() ) );
    menu->addAction(renameAct);
    
    refactorAct = new QAction(tr("&Refactor"), this);
    //refactorAct->setShortcut()
    refactorAct->setStatusTip("Refactor");
    connect(refactorAct, SIGNAL(triggered()), this, SLOT(handleRefactorMenuSlot() ) );
    menu->addAction(refactorAct);
    
    QMenu* gitMenu = menu->addMenu("Git");
    
    addAct = new QAction(tr("&Add"), this);
    connect(addAct, SIGNAL(triggered()), this, SLOT(handleAddMenuSlot() ) );
    gitMenu->addAction(addAct);
    
    commitAct = new QAction(tr("Commit"), this);
    connect(commitAct, SIGNAL(triggered()), this, SLOT(handleCommitMenuSlot() ) );
    gitMenu->addAction(commitAct);
    
    removeAct = new QAction(tr("&Remove"), this);
    connect(removeAct, SIGNAL(triggered()), this, SLOT(handleRemoveMenuSlot() ) );
    gitMenu->addAction(removeAct);
    
    propertiesAct = new QAction(tr("&Properties"), this);
    connect(propertiesAct, SIGNAL(triggered()), this, SLOT(handleRemoveMenuSlot() ) );
    menu->addAction(propertiesAct);
    
    
    
}


void FTFileMenu::handleOpenMenuSlot()
{
    cout << "FTFileMenu::handleOpenMenuSlot() triggered" << endl;
}


void FTFileMenu::handleHideMenuSlot()
{
    cout << "FTFileMenu::handleHideMenuSlot() triggered" << endl;
}


void FTFileMenu::handleDeleteMenuSlot()
{
    cout << "FTFileMenu::handleDeleteMenuSlot() triggered" << endl;
}


void FTFileMenu::handleRenameMenuSlot()
{
    cout << "FTFileMenu::handleRenameMenuSlot() triggered" << endl;
}


void FTFileMenu::handleRefactorMenuSlot()
{
    cout << "FTFileMenu::handleRefactorMenuSlot() triggered" << endl;
}


void FTFileMenu::handleAddMenuSlot()
{
    cout << "FTFileMenu::handleAddMenuSlot() triggered" << endl;
}


void FTFileMenu::handleCommitMenuSlot()
{
    cout << "FTFileMenu::handleCommitMenuSlot() triggered" << endl;
}


void FTFileMenu::handleRemoveMenuSlot()
{
    cout << "FTFileMenu::handleRemoveMenuSlot() triggered" << endl;
}


void FTFileMenu::handlePropertiesMenuSlot()
{
    cout << "FTFileMenu::handlePropertiesMenuSlot() triggered" << endl;
}


QMenu* FTFileMenu::getMenu()
{
    return menu;
}


FTFileMenu::~FTFileMenu()
{
    ;
}