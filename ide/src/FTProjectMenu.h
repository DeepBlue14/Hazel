/* 
 * File:   FTProjectMenu.h
 * Module: FileTree
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for projects listed in the
 *                   tree view.
 *
 * Created on June 24, 2015, 3:41 PM
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

using namespace std;

class FTProjectMenu : public QMenu
{
    private:
        ;
        
    private slots:
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
        
        
    public:
        /**
         * Constructor.
         */
        FTProjectMenu();
        
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
        ~FTProjectMenu();
};

#endif	/* FT_PROJECT_MENU_H */