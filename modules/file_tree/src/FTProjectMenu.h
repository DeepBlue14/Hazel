/* 
 * File:   FTProjMenu.h
 * Module: 
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for Projectories listed in the
 *                   tree view.
 *
 * Created on January 6, 2016, 2:53 PM
 * Last Modified on January 6, 2016, 2:53 PM
 */

#ifndef FT_Proj_MENU_H
#define FT_Proj_MENU_H

#include <QMenu>

#include <iostream>

#include "RosEnv.h"
#include "ProjPropGui.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using std::cout;
using std::endl;

class FTProjectMenu : public QMenu
{
    Q_OBJECT

public:
    /**
     * Constructor.
     */
    explicit FTProjectMenu();

    /**
     * Initialize the Projectory menu.
     */
    void initMenu();

    /**
     * Accessor.
     * 
     * @return 
     */
    QMenu* getMenu();


    void setProjNameStrPtr(QString* ProjNameStrPtr);
    QString* getProjNameStrPtr();
    void setProjLocStrPtr(QString* ProjLocStrPtr);
    QString* getProjLocStrPtr();
    void setLastModdedStrPtr(QString* lastModdedStrPtr);
    QString* getLastModdedStrPtr();

    /**
     * Destructor.
     */
    virtual ~FTProjectMenu();
    
    
private slots:
    void handleCMakeListsMenuSlot();
    void handlePackageMenuSlot();

    void handleNewDirMenuSlot();
    void handleBuildMenuSlot();
    void handleRunMenuSlot();
    void handleCloseMenuSlot();
    
    void handleDeleteMenuSlot();
    void handleRenameMenuSlot();
    void handlePropertiesMenuSlot();
    
    
private:
    QMenu* menu;

    QAction* cMakeListsAct;
    QAction* packageAct;

    QAction* newDirAct;
    QAction* buildAct;
    QAction* runAct;
    QAction* closeAct;
    QAction* deleteAct;
    QAction* renameAct;
    QAction* propertiesAct;

    QString* projNameStrPtr;
    QString* projLocStrPtr;
    QString* lastModdedStrPtr;

    ProjPropGui* projPropGuiPtr;
    
    
};

#endif /* FT_PROJ_MENU_H */