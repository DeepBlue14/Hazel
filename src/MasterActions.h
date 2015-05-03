/* 
 * File:   MasterActions.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on April 29, 2015, 12:57 AM
 */

#ifndef MASTER_ACTIONS_H
#define	MASTER_ACTIONS_H

#include <QWidget>
#include <QAction>
#include <QFile>

#include <iostream>

#include "NewFileGui.h"
#include "Highlighter.h"
#include "File.h"
#include "NewProjectGui.h"

using namespace std;

class MasterActions : public QWidget
{
    Q_OBJECT
    
    private:
        QAction* newFileActionPtr;
        QAction* newTerminalActionPtr;
        QAction* newProjectActionPtr;
        QAction* openProjectActionPtr;
        QAction* saveAllActionPtr;
        QAction* undoActionPtr;
        QAction* redoActionPtr;
        QAction* setProjectConfigActionPtr;
        QAction* buildActionPtr;
        QAction* cleanAndBuildActionPtr;
        QAction* runActionPtr;
        QAction* debugActionPtr;
        QAction* profileProjActionPtr;
        
        QTabWidget* masterTabWidgetPtr;
        Highlighter* highlighter;
        
        NewFileGui* newFileGuiPtr;
        NewProjectGui* newProjectGuiPtr;
        
        
    private slots:
        void handleNewFileActionSlot();
        void handleNewTerminalActionSlot();
        void handleNewProjectActionSlot();
        void handleOpenProjectActionSlot();
        void handleSaveAllActionSlot();
        void handleUndoActionSlot();
        void handleRedoActionSlot();
        void handleSetProjectConfigActionSlot();
        void handleBuildActionSlot();
        void handleCleanAndBuildActionSlot();
        void handleRunActionSlot();
        void handleDebugActionSlot();
        void handleProfileProjActionSlot();
    
    public:
        MasterActions(QWidget* parent = 0);
        void initActions();
        
        void setMasterTabWidgetPtr(QTabWidget* masterTabWidgetPtr);
        QTabWidget* getMasterTabWidgetPtr();
        
        QAction* getNewFileActionPtr();
        QAction* getNewTerminalActionPtr();
        QAction* getNewProjectActionPtr();
        QAction* getOpenProjectActionPtr();
        QAction* getSaveAllActionPtr();
        QAction* getUndoActionPtr();
        QAction* getRedoActionPtr();
        QAction* getSetProjectConfigActionPtr();
        QAction* getBuildActionPtr();
        QAction* getCleanAndBuildActionPtr();
        QAction* getRunActionPtr();
        QAction* getDebugActionPtr();
        QAction* getProfileProjActionPtr();
        
        template<class X>
        void connectToNewFileAction(X* component);
        
        template<class X>
        void connectToNewTerminalAction(X* component);
        
        template<class X>
        void connectToNewProjectAction(X* component);
        
        template<class X>
        void connectToOpenProjectAction(X* component);
        
        template<class X>
        void connectToSaveAllAction(X* component);
        
        template<class X>
        void connectToUndoAction(X* component);
        
        template<class X>
        void connectToRedoAction(X* component);
        
        template<class X>
        void connectToSetProjectConfigAction(X* component);
        
        template<class X>
        void connectToBuildAction(X* component);
        
        template<class X>
        void connectToCleanAndBuildAction(X* component);
        
        template<class X>
        void connectToRunAction(X* component);
        
        template<class X>
        void connectToDebugAction(X* component);
        
        template<class X>
        void connectToProfileProjAction(X* component);
        
        ~MasterActions();
            
};

#endif	/* MASTER_ACTIONS_H */

