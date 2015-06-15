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
#include <QProcess>
#include <QProcessEnvironment>
#include <QDebug>

#include <iostream>

#include "NewFileGui.h"
#include "Highlighter.h"
#include "FileGui.h"
#include "NewProjectGui.h"
#include "Terminal.h"
#include "RunGui.h"
#include "OpenProjectGui.h"
#include "SaveAll.h"
#include "FileTreeGui.h"
#include "NavigatorGui.h"
#include "Build.h"
#include "RProcess.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace SaveAll;
using namespace std;

class MasterActions : public QWidget
{
    Q_OBJECT
    
    private:
        // North
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
        QAction* configForRunActionPtr;
        QAction* runActionPtr;
        QAction* debugActionPtr;
        QAction* gitActionPtr;
        
        // South
        QAction* outputSouthActionPtr; //outputSouthTabActionPtr
        QAction* terminalSouthActionPtr;
        
        // East
        QAction* navEastActionPtr;
        
        
        // West
        QAction* projectWestActionPtr;
        
        
        QTabWidget* northTabWidgetPtr;
        QTabWidget* southTabWidgetPtr;
        Highlighter* highlighter;
        
        NewFileGui* newFileGuiPtr;
        NewProjectGui* newProjectGuiPtr;
        Terminal* terminalPtr;
        RunGui* runGuiPtr;
        OpenProjectGui* openProjectGuiPtr;
        FileTreeGui* westWidgetPtr; // i.e. west widget
        NavigatorGui* eastWidgetPtr;
        Build* buildPtr;
        
    private slots:
        // North
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
        void handleConfigForRunActionSlot();
        void handleRunActionSlot();
        void handleDebugActionSlot();
        void handleGitActionSlot();
        
        // South
        void handleOutputSouthActionSlot();
        void handleTerminalSouthActionSlot();
        
        // East
        void handleNavEastActionSlot();
        
        // West
        void handleProjectWestActionSlot();
    
    public:
        MasterActions(QWidget* parent = 0);
        void initActions();
        
        void setNorthTabWidgetPtr(QTabWidget* northTabWidgetPtr);
        QTabWidget* getNorthTabWidgetPtr();
        void setSouthTabWidgetPtr(QTabWidget* southTabWidgetPtr);
        QTabWidget* getSouthTabWidgetPtr();
        void setHighlighter(Highlighter* highlighter);
        Highlighter* getHighlighter();
        void setNewFileGuiPtr(NewFileGui* newFileGuiPtr);
        NewFileGui* getNewFileGuiPtr();
        void setNewProjectGuiPtr(NewProjectGui* newProjectGuiPtr);
        NewProjectGui* getNewProjectGuiPtr();
        void setTerminalPtr(Terminal* terminalPtr);
        Terminal* getTerminalPtr();
        void setRunGuiPtr(RunGui* runGuiPtr);
        RunGui* getRunGuiPtr();
        void setOpenProjectGuiPtr(OpenProjectGui* openProjectGuiPtr);
        OpenProjectGui* getOpenProjectGuiPtr();
        void setWestWidgetPtr(FileTreeGui* westWidgetPtr);
        FileTreeGui* getWestWidgetPtr();
        void setEastWidgetPtr(NavigatorGui* eastWidgetPtr);
        NavigatorGui* getEastWidgetPtr();
        void setBuildPtr(Build* buildPtr);
        Build* getBuildPtr();
        
        // North
        void setNewFileActionPtr(QAction* newFileActionPtr);
        QAction* getNewFileActionPtr();
        void setNewTerminalActionPtr(QAction* newTerminalActionPtr);
        QAction* getNewTerminalActionPtr();
        void setNewProjectActionPtr(QAction* newProjectActionPtr);
        QAction* getNewProjectActionPtr();
        void setOpenProjectActionPtr(QAction* openProjectActionPtr);
        QAction* getOpenProjectActionPtr();
        void setSaveAllActionPtr(QAction* saveAllActionPtr);
        QAction* getSaveAllActionPtr();
        void setUndoActionPtr(QAction* undoActionPtr);
        QAction* getUndoActionPtr();
        void setRedoActionPtr(QAction* redoActionPtr);
        QAction* getRedoActionPtr();
        void setSetProjectConfigActionPtr(QAction* setProjectConfigActionPtr);
        QAction* getSetProjectConfigActionPtr();
        void setBuildActionPtr(QAction* setBuildActionPtr);
        QAction* getBuildActionPtr();
        void setCleanAndBuildActionPtr(QAction* cleanAndBuildActionPtr);
        QAction* getCleanAndBuildActionPtr();
        void setConfigForRunActionPtr(QAction* configForRunActionPtr);
        QAction* getConfigForRunActionPtr();
        void setRunActionPtr(QAction* runActionPtr);
        QAction* getRunActionPtr();
        void setDebugActionPtr(QAction* debugActionPtr);
        QAction* getDebugActionPtr();
        void setGitActionPtr(QAction* profileProjActionPtr);
        QAction* getGitActionPtr();
        
        // South
        void setOutputSouthActionPtr(QAction* outputSouthActionPtr);
        QAction* getOutputSouthActionPtr();
        void setTerminalSouthActionPtr(QAction* terminalSouthActionPtr);
        QAction* getTerminalSouthActionPtr();
        
        // East
        void setNavEastActionPtr(QAction* navEastActionptr);
        QAction* getNavEastActionPtr();
        
        // West
        void setProjectWestActionPtr(QAction* projectWestActionPtr);
        QAction* getProjectWestActionPtr();

        // North
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
        void connectToConfigForRunAction(X* component);
        
        template<class X>
        void connectToRunAction(X* component);
        
        template<class X>
        void connectToDebugAction(X* component);
        
        template<class X>
        void connectToGitAction(X* component);
        
        // South
        template<class X>
        void connectToOutputSouthAction(X* component);
        
        template<class X>
        void connectToTerminalSouthAction(X* component);
        
        // East
        template<class X>
        void connectToNavEastAction(X* component);
        
        // West
        template<class X>
        void connectToProjectWestAction(X* component);
 
        
        ~MasterActions();
            
};

#endif	/* MASTER_ACTIONS_H */