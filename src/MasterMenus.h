/* 
 * File:   MasterMenus.h
 * Author: james
 *
 * Created on April 29, 2015, 2:40 AM
 */

#ifndef MASTER_MENUS_H
#define	MASTER_MENUS_H

#include <QWidget>
#include <QMenu>


#include <iostream>

#include "MasterActions.h"

using namespace std;

class MasterMenus : public QWidget
{
    Q_OBJECT
    
    private:
        MasterActions* masterActionsPtr;
        
    private slots:
        ;
    
    public:
        MasterMenus(QWidget* parent = 0);
        void setMasterActionsPtr(MasterActions* masterActionsPtr);
        MasterActions* getMasterActionsPtr();
        void initFileMenuPtr(QMenu* menu);
        void initEditMenuPtr(QMenu* menu);
        void initViewMenuPtr(QMenu* menu);
        void initNavigateMenuPtr(QMenu* menu);
        void initSourceMenuPtr(QMenu* menu);
        void initRefactorMenuPtr(QMenu* menu);
        void initRunMenuPtr(QMenu* menu);
        void initDebugMenuPtr(QMenu* menu);
        void initProfileMenuPtr(QMenu* menu);
        void initTeamMenuPtr(QMenu* menu);
        void initToolsMenuPtr(QMenu* menu);
        void initWindowMenuPtr(QMenu* menu);
        void initHelpMenuPtr(QMenu* menu);
        ~MasterMenus();
            
};

#endif	/* MASTER_MENUS_H */

