/* 
 * File:   MasterMenus.h
 * Author: james
 *
 * Reference: http://zetcode.com/gui/qt4/menusandtoolbars/
 * 
 * Created on April 29, 2015, 2:40 AM
 */

#ifndef MASTER_MENUS_H
#define	MASTER_MENUS_H

#include <QWidget>
#include <QMenu>
#include <QString>

#include <iostream>

#include "MasterActions.h"

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

class MasterMenus : public QWidget
{
    Q_OBJECT
    
    private:
        MasterActions* masterActionsPtr;
        
    private slots:
        ;
    
    public:
        /**
         * 
         * 
         * @param parent
         */
        MasterMenus(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @param masterActionsPtr
         */
        void setMasterActionsPtr(MasterActions* masterActionsPtr);
        
        /**
         * 
         * 
         * @return 
         */
        MasterActions* getMasterActionsPtr();
        
        /**
         * 
         * 
         * @param menu
         */
        void initFileMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initEditMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initViewMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initNavigateMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initSourceMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initRefactorMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initRunMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initDebugMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initProfileMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initTeamMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initToolsMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initWindowMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @param menu
         */
        void initHelpMenuPtr(QMenu* menu);
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~MasterMenus();
            
};

#endif	/* MASTER_MENUS_H */

