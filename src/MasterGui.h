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
#include <QStatusBar>
#include <QDockWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QTextEdit>
#include <QFile>
#include <QString>

#include <iostream>

//#include "NewProjectGui.h"
#include "MasterActions.h"
#include "MasterToolBars.h"
//#include "OpeningGui.h"
#include "CentralGui.h"
#include "MasterMenus.h"
#include "MasterStatusBar.h"
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
        MasterStatusBar* masterStatusBar;
        CentralGui* centralGui;
        
    private slots:
        ;
    
    public:
        /**
         * 
         * 
         * @param parent
         */
        MasterGui(QMainWindow* parent = 0);
        
        /**
         * 
         */
        void initToolBars();
        
        /**
         * 
         */
        void initMenus();
        
        /**
         * 
         * 
         * @param style
         */
        void loadStyle(QString* style = new QString(/*"./src/qss/Classic.css"*/"./src/qss/Vanilla.css"));
        
        /**
         * 
         * 
         * @param fileMenuPtr
         */
        void setFileMenuPtr(QMenu* fileMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getFileMenuPtr();
        
        /**
         * 
         * 
         * @param editMenuPtr
         */
        void setEditMenuPtr(QMenu* editMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getEditMenuPtr();
        
        /**
         * 
         * 
         * @param viewMenuPtr
         */
        void setViewMenuPtr(QMenu* viewMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getViewMenuPtr();
        
        /**
         * 
         * 
         * @param navigateMenuPtr
         */
        void setNavigateMenuPtr(QMenu* navigateMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getNavigateMenuPtr();
        
        /**
         * 
         * 
         * @param sourceMenuPtr
         */
        void setSourceMenuPtr(QMenu* sourceMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getSourceMenuPtr();
        
        /**
         * 
         * 
         * @param refactorMenuPtr
         */
        void setRefactorMenuPtr(QMenu* refactorMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getRefactorMenuPtr();
        
        /**
         * 
         * 
         * @param runMenuPtr
         */
        void setRunMenuPtr(QMenu* runMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getRunMenuPtr();
        
        /**
         * 
         * 
         * @param debugMenuPtr
         */
        void setDebugMenuPtr(QMenu* debugMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getDebugMenuPtr();
        
        /**
         * 
         * 
         * @param profileMenuPtr
         */
        void setProfileMenuPtr(QMenu* profileMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getProfileMenuPtr();
        
        /**
         * 
         * 
         * @param teamMenuPtr
         */
        void setTeamMenuPtr(QMenu* teamMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getTeamMenuPtr();
        
        /**
         * 
         * 
         * @param toolsMenuPtr
         */
        void setToolsMenuPtr(QMenu* toolsMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getToolsMenuPtr();
        
        /**
         * 
         * 
         * @param windowMenuPtr
         */
        void setWindowMenuPtr(QMenu* windowMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getWindowMenuPtr();
        
        /**
         * 
         * 
         * @param helpMenuPtr
         */
        void setHelpMenuPtr(QMenu* helpMenuPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QMenu* getHelpMenuPtr();
        
        
        /**
         * 
         * 
         * @param groupOneToolBarPtr
         */
        void setGroupOneToolBarPtr(QToolBar* groupOneToolBarPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QToolBar* getGroupOneToolBarPtr();
        
        /**
         * 
         * 
         * @param groupTwoToolBarPtr
         */
        void setGroupTwoToolBarPtr(QToolBar* groupTwoToolBarPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QToolBar* getGroupTwoToolBarPtr();
        
        /**
         * 
         * 
         * @param groupThreeToolBarPtr
         */
        void setGroupThreeToolBarPtr(QToolBar* groupThreeToolBarPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QToolBar* getGroupThreeToolBarPtr();
        
        /**
         * 
         * 
         * @param southToolBarPtr
         */
        void setSouthToolBarPtr(QToolBar* southToolBarPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QToolBar* getSouthToolBarPtr();
        
        /**
         * 
         * 
         * @param eastToolBarPtr
         */
        void setEastToolBarPtr(QToolBar* eastToolBarPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QToolBar* getEastToolBarPtr();
        
        /**
         * 
         * 
         * @param westToolBarPtr
         */
        void setWestToolBarPtr(QToolBar* westToolBarPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QToolBar* getWestToolBarPtr();
        
        
        /**
         * 
         * 
         * @param tabWidget
         */
        void setTabWidget(QTabWidget* tabWidget);
        
        /**
         * 
         * 
         * @return 
         */
        QTabWidget* getTabWidget();
        
        /**
         * 
         * 
         * @param editor
         */
        void setEditor(QTextEdit* editor);
        
        /**
         * 
         * 
         * @return 
         */
        QTextEdit* getEditor();
        
        /**
         * 
         * 
         * @param masterActions
         */
        void setMasterActions(MasterActions* masterActions);
        
        /**
         * 
         * 
         * @return 
         */
        MasterActions* getMasterActions();
        
        /**
         * 
         * 
         * @param masterToolBars
         */
        void setMasterToolBars(MasterToolBars* masterToolBars);
        
        /**
         * 
         * 
         * @return 
         */
        MasterToolBars* getMasterToolBars();
        
        /**
         * 
         * 
         * @param masterMenus
         */
        void setMasterMenus(MasterMenus* masterMenus);
        
        /**
         * 
         * 
         * @return 
         */
        MasterMenus* getMasterMenus();
        
        /**
         * 
         * 
         * @param centralGui
         */
        void setCentralGui(CentralGui* centralGui);
        
        /**
         * 
         * 
         * @return 
         */
        CentralGui* getCentralGui();
        
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~MasterGui();
            
};

#endif	/* MASTER_GUI_H */