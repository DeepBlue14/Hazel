#include "FTDirMenu.h"


FTDirMenu::FTDirMenu()
{
    initMenu();
}


void FTDirMenu::initMenu()
{
    menu = new QMenu();

    QMenu* newFileMenu = menu->addMenu("New File");

    cMakeListsAct = new QAction(QIcon("/home/james/NetBeansProjects/ride/images/cmake.png"), "CMakeLists", this);
    connect(cMakeListsAct, SIGNAL(triggered()), this, SLOT(handleCMakeListsMenuSlot() ) );
    newFileMenu->addAction(cMakeListsAct);

    packageAct = new QAction(QIcon("/home/james/NetBeansProjects/ride/images/xmlFile.jpg"), "package", this);
    connect(packageAct, SIGNAL(triggered()), this, SLOT(handlePackageMenuSlot() ) );
    newFileMenu->addAction(packageAct);

    newDirAct = new QAction(tr("&New Directory"), this);
    connect(newDirAct, SIGNAL(triggered()), this, SLOT(handleNewDirMenuSlot() ) );
    menu->addAction(newDirAct);

    deleteAct = new QAction(tr("Delete -r"), this);
    connect(deleteAct, SIGNAL(triggered()), this, SLOT(handleDeleteMenuSlot() ) );
    menu->addAction(deleteAct);

    renameAct = new QAction(tr("Rename..."), this);
    connect(renameAct, SIGNAL(triggered()), this, SLOT(handleRenameMenuSlot() ) );
    menu->addAction(renameAct);

    propertiesAct = new QAction(tr("Properties"), this);
    connect(propertiesAct, SIGNAL(triggered()), this, SLOT(handlePropertiesMenuSlot() ) );
    menu->addAction(propertiesAct);


}


void FTDirMenu::handleCMakeListsMenuSlot()
{
    
}


void FTDirMenu::handlePackageMenuSlot()
{
    
}


void FTDirMenu::handleNewDirMenuSlot()
{
    
}


void FTDirMenu::handleDeleteMenuSlot()
{
    
}


void FTDirMenu::handleRenameMenuSlot()
{
    
}


void FTDirMenu::handlePropertiesMenuSlot()
{
    
}


QMenu* FTDirMenu::getMenu()
{
    return menu;
}


FTDirMenu::~FTDirMenu()
{
    ;
}