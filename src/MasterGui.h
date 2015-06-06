/* 
 * File:   MasterGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on April 18, 2015, 8:14 PM
 */

#ifndef MASTER_GUI_H
#define	MASTER_GUI_H

#include <QWidget>
#include <QMainWindow>
#include <QToolBar>
#include <QDockWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
//#include <QTabWidget> //temp?
#include <QTextEdit>
#include <QFile>

#include <iostream>

//#include "NewProjectGui.h"
#include "MasterActions.h"
#include "MasterToolBars.h"
//#include "OpeningGui.h"
#include "CentralGui.h"
#include "MasterMenus.h"

using namespace std;

class MasterGui : public QMainWindow
{
    Q_OBJECT
    
    private:
        QMenu* fileMenuPtr;
        QMenu* editMenuPtr;
        QMenu* viewMenuPtr;
        QMenu* navigateMenuPtr;
        QMenu* sourceMenuPtr;
        QMenu* refactorMenuPtr;
        QMenu* runMenuPtr;
        QMenu* debugMenuPtr;
        QMenu* profileMenuPtr;
        QMenu* teamMenuPtr;
        QMenu* toolsMenuPtr;
        QMenu* windowMenuPtr;
        QMenu* helpMenuPtr;
        
        QToolBar* groupOneToolBarPtr;
        QToolBar* groupTwoToolBarPtr;
        QToolBar* groupThreeToolBarPtr;
        QToolBar* southToolBarPtr;
        QToolBar* eastToolBarPtr;
        QToolBar* westToolBarPtr;
        
        QTabWidget* tabWidget;
        QTextEdit* editor;
        MasterActions* masterActions;
        MasterToolBars* masterToolBars;
        MasterMenus* masterMenus;
        CentralGui* centralGui;
        
    private slots:
        ;
    
    public:
        MasterGui(QMainWindow* parent = 0);
        void initToolBars();
        void initMenus();
        void setFileMenuPtr(QMenu* fileMenuPtr);
        QMenu* getFileMenuPtr();
        void setEditMenuPtr(QMenu* editMenuPtr);
        QMenu* getEditMenuPtr();
        void setViewMenuPtr(QMenu* viewMenuPtr);
        QMenu* getViewMenuPtr();
        void setNavigateMenuPtr(QMenu* navigateMenuPtr);
        QMenu* getNavigateMenuPtr();
        void setSourceMenuPtr(QMenu* sourceMenuPtr);
        QMenu* getSourceMenuPtr();
        void setRefactorMenuPtr(QMenu* refactorMenuPtr);
        QMenu* getRefactorMenuPtr();
        void setRunMenuPtr(QMenu* runMenuPtr);
        QMenu* getRunMenuPtr();
        void setDebugMenuPtr(QMenu* debugMenuPtr);
        QMenu* getDebugMenuPtr();
        void setProfileMenuPtr(QMenu* profileMenuPtr);
        QMenu* getProfileMenuPtr();
        void setTeamMenuPtr(QMenu* teamMenuPtr);
        QMenu* getTeamMenuPtr();
        void setToolsMenuPtr(QMenu* toolsMenuPtr);
        QMenu* getToolsMenuPtr();
        void setWindowMenuPtr(QMenu* windowMenuPtr);
        QMenu* getWindowMenuPtr();
        void setHelpMenuPtr(QMenu* helpMenuPtr);
        QMenu* getHelpMenuPtr();
        
        void setGroupOneToolBarPtr(QToolBar* groupOneToolBarPtr);
        QToolBar* getGroupOneToolBarPtr();
        void setGroupTwoToolBarPtr(QToolBar* groupTwoToolBarPtr);
        QToolBar* getGroupTwoToolBarPtr();
        void setGroupThreeToolBarPtr(QToolBar* groupThreeToolBarPtr);
        QToolBar* getGroupThreeToolBarPtr();
        void setSouthToolBarPtr(QToolBar* southToolBarPtr);
        QToolBar* getSouthToolBarPtr();
        void setEastToolBarPtr(QToolBar* eastToolBarPtr);
        QToolBar* getEastToolBarPtr();
        void setWestToolBarPtr(QToolBar* westToolBarPtr);
        QToolBar* getWestToolBarPtr();
        
        void setTabWidget(QTabWidget* tabWidget);
        QTabWidget* getTabWidget();
        void setEditor(QTextEdit* editor);
        QTextEdit* getEditor();
        void setMasterActions(MasterActions* masterActions);
        MasterActions* getMasterActions();
        void setMasterToolBars(MasterToolBars* masterToolBars);
        MasterToolBars* getMasterToolBars();
        void setMasterMenus(MasterMenus* masterMenus);
        MasterMenus* getMasterMenus();
        void setCentralGui(CentralGui* centralGui);
        CentralGui* getCentralGui();
        
        
        ~MasterGui();
            
};

#endif	/* MASTER_GUI_H */