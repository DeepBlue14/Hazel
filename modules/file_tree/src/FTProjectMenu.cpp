#include "FTProjectMenu.h"


FTProjectMenu::FTProjectMenu()
{
    initMenu();
}


void FTProjectMenu::initMenu()
{
    menu = new QMenu();
    
    QMenu* newFileMenu = menu->addMenu("New File");

    cMakeListsAct = new QAction(QIcon(RosEnv::imagesInstallLoc + "cmake.png"), "CMakeLists", this);
    connect(cMakeListsAct, SIGNAL(triggered()), this, SLOT(handleCMakeListsMenuSlot() ) );
    newFileMenu->addAction(cMakeListsAct);

    packageAct = new QAction(QIcon(RosEnv::imagesInstallLoc + "xmlFile.jpg"), "package", this);
    connect(packageAct, SIGNAL(triggered()), this, SLOT(handlePackageMenuSlot() ) );
    newFileMenu->addAction(packageAct);
    
    newDirAct = new QAction(tr("&New Directory"), this);
    connect(newDirAct, SIGNAL(triggered()), this, SLOT(handleNewDirMenuSlot() ) );
    menu->addAction(newDirAct);
    
    buildAct = new QAction(tr("&Build"), this);
    connect(buildAct, SIGNAL(triggered()), this, SLOT(handleBuildMenuSlot() ) );
    menu->addAction(buildAct);
    
    runAct = new QAction(tr("&Run"), this);
    connect(runAct, SIGNAL(triggered()), this, SLOT(handleRunMenuSlot() ) );
    menu->addAction(runAct);
    
    closeAct = new QAction(tr("&Close"), this);
    connect(closeAct, SIGNAL(triggered()), this, SLOT(handleCloseMenuSlot() ) );
    menu->addAction(closeAct);
    
    deleteAct = new QAction(tr("&Delete"), this);
    connect(deleteAct, SIGNAL(triggered()), this, SLOT(handleDeleteMenuSlot() ) );
    menu->addAction(deleteAct);
    
    renameAct = new QAction(tr("&Rename"), this);
    connect(renameAct, SIGNAL(triggered()), this, SLOT(handleRenameMenuSlot() ) );
    menu->addAction(renameAct);
    
    propertiesAct = new QAction(tr("&Properties"), this);
    connect(propertiesAct, SIGNAL(triggered()), this, SLOT(handlePropertiesMenuSlot() ) );
    menu->addAction(propertiesAct);
    
    
    
}


void FTProjectMenu::handleCMakeListsMenuSlot()
{
    
}


void FTProjectMenu::handlePackageMenuSlot()
{
    
}


void FTProjectMenu::handleNewDirMenuSlot()
{
    
}


void FTProjectMenu::handleBuildMenuSlot()
{
    
}


void FTProjectMenu::handleRunMenuSlot()
{
    
}


void FTProjectMenu::handleCloseMenuSlot()
{
    
}


void FTProjectMenu::handleDeleteMenuSlot()
{
    
}


void FTProjectMenu::handleRenameMenuSlot()
{
    
}


void FTProjectMenu::handlePropertiesMenuSlot()
{
    
}


QMenu* FTProjectMenu::getMenu()
{
    
}


FTProjectMenu::~FTProjectMenu()
{
    ;
}