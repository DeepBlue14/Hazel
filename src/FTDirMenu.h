/* 
 * File:   FTDirMenu.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for directories listed in the
 *                   tree view.
 *
 * Created on June 24, 2015, 3:40 PM
 */

#ifndef FT_DIR_MENU_H
#define	FT_DIR_MENU_H

#include <QMenu>

#include <iostream>

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

class FTDirMenu : public QMenu
{
    Q_OBJECT
    
    private:
        QMenu* menu;
        QAction* cMakeListsAct;
        QAction* packageAct;
        QAction* newDirAct;
        QAction* deleteAct;
        QAction* renameAct;
        QAction* propertiesAct;
        
    private slots:
        void handleCMakeListsMenuSlot();
        void handlePackageMenuSlot();
        void handleNewDirMenuSlot();
        void handleDeleteMenuSlot();
        void handleRenameMenuSlot();
        void handlePropertiesMenuSlot();
        
    public:
        /**
         * Constructor.
         */
        FTDirMenu();
        
        /**
         * Initialize the directory menu.
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
        ~FTDirMenu();
};

#endif	/* FT_DIR_MENU_H */