#include "FTDirMenu.h"


FTDirMenu::FTDirMenu()
{
    initMenu();
}


void FTDirMenu::initMenu()
{
    dirNameStrPtr = new QString();
    dirLocStrPtr = new QString();
    lastModdedStrPtr = new QString();
        
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

    deleteAct = new QAction(tr("Delete -r"), this);
    connect(deleteAct, SIGNAL(triggered()), this, SLOT(handleDeleteMenuSlot() ) );
    menu->addAction(deleteAct);

    renameAct = new QAction(tr("Rename..."), this);
    connect(renameAct, SIGNAL(triggered()), this, SLOT(handleRenameMenuSlot() ) );
    menu->addAction(renameAct);

    propertiesAct = new QAction(tr("Properties"), this);
    connect(propertiesAct, SIGNAL(triggered()), this, SLOT(handlePropertiesMenuSlot() ) );
    menu->addAction(propertiesAct);

    dirPropGuiPtr = new DirPropGui();
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
    //cout << "FTFileMenu::handlePropertiesMenuSlot() triggered" << endl;
    dirPropGuiPtr->setDirNameStrPtr(dirNameStrPtr);
    dirPropGuiPtr->setDirLocStrPtr(dirLocStrPtr);
    dirPropGuiPtr->setLastModdedStrPtr(lastModdedStrPtr);
    
    dirPropGuiPtr->fillUiComponents();
    
    dirPropGuiPtr->show();
}


QMenu* FTDirMenu::getMenu()
{
    return menu;
}


void FTDirMenu::setDirNameStrPtr(QString* dirNameStrPtr)
{
    this->dirNameStrPtr = dirNameStrPtr;
}


QString* FTDirMenu::getDirNameStrPtr()
{
    return dirNameStrPtr;
}


void FTDirMenu::setDirLocStrPtr(QString* dirLocStrPtr)
{
    this->dirLocStrPtr = dirLocStrPtr;
}


QString* FTDirMenu::getDirLocStrPtr()
{
    return dirLocStrPtr;
}


void FTDirMenu::setLastModdedStrPtr(QString* lastModdedStrPtr)
{
    this->lastModdedStrPtr = lastModdedStrPtr;
}


QString* FTDirMenu::getLastModdedStrPtr()
{
    return lastModdedStrPtr;
}


FTDirMenu::~FTDirMenu()
{
    ;
}