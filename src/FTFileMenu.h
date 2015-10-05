/* 
 * File:   FileTreeMenu.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for files listed in the
 *                   tree view.
 *
 * Created on June 24, 2015, 1:17 PM
 */

#ifndef FT_File_MENU_H
#define	FT_File_MENU_H

#include <QMenu>

#include <iostream>

#include "FilePropGui.h"
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

class FTFileMenu : public QWidget
{
    Q_OBJECT
    
    private:
        QMenu* menu;
        QAction* openAct;
        QAction* hideAct;
        QAction* deleteAct;
        QAction* renameAct;
        QAction* refactorAct;
        QAction* addAct;
        QAction* commitAct;
        QAction* removeAct;
        QAction* propertiesAct;
        
        FilePropGui* filePropGuiPtr;
        
    private slots:
        void handleOpenMenuSlot();
        void handleHideMenuSlot();
        void handleDeleteMenuSlot();
        void handleRenameMenuSlot();
        void handleRefactorMenuSlot();
        void handleAddMenuSlot();
        void handleCommitMenuSlot();
        void handleRemoveMenuSlot();
        void handlePropertiesMenuSlot();
        
    public:
        /**
         * Constructor.
         */
        FTFileMenu(QWidget* parent = 0);
        
        /**
         * Inits the menu for a file.
         */
        void initMenu();
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getMenu();
        
        /**
         * Destructor.
         */
        ~FTFileMenu();
};

#endif	/* FT_File_MENU_H */