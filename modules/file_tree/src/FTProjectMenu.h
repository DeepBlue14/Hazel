/* 
 * File:   FTProjectMenu.h
 * Module: 
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for projects listed in the
 *                   tree view.
 *
 * Created on January 6, 2016, 2:54 PM
 * Last Modified on January 6, 2016, 2:54 PM
 */

#ifndef FT_PROJECT_MENU_H
#define	FT_PROJECT_MENU_H

#include <QMenu>

#include <iostream>

#include "RosEnv.h"
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
    
public:
    /**
     * Constructor.
     */
    explicit FTProjectMenu();

    /**
     * Inits the menu for an entire RIDE project.
     */
    void initMenu();

    /**
     * Accessor.
     * 
     * @return 
     */
    QMenu* getMenu();

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
    QAction* cMakeListsAct; //sub
    QAction* packageAct; //sub
    QAction* newDirAct;
    QAction* buildAct;
    QAction* runAct;
    QAction* closeAct;
    QAction* deleteAct;
    QAction* renameAct;
    QAction* propertiesAct;
    
};

#endif	/* FT_PROJECT_MENU_H */