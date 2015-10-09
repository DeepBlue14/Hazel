/* 
 * File:   MasterToolBtns.h
 * Module: Core
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on October 7, 2015, 1:19 PM
 */

#include <QWidget>
#include <QToolButton>
#include <QString>
#include <QVector>

#include <iostream>

#include "MasterActions.h"
#include "RunBtnMenu.h"

using namespace std;

#ifndef MASTER_TOOL_BTNS_H
#define	MASTER_TOOL_BTNS_H

class MasterToolBtns : public QWidget
{
    Q_OBJECT
            
    private:
        MasterActions* masterActionsPtr;
        RunBtnMenu* runBtnMenuPtr;
        
        QVector<QToolButton*>* northGroupOneToolBtnPtrVecPtr;
        QVector<QToolButton*>* northGroupTwoToolBtnPtrVecPtr;
        QVector<QToolButton*>* northGroupThreeToolBtnPtrVecPtr;
        QVector<QToolButton*>* southToolBtnPtrVecPtr;
        QVector<QToolButton*>* eastToolBtnPtrVecPtr;
        QVector<QToolButton*>* westToolBtnPtrVecPtr;
        
        // North
        QToolButton* newFileToolBtnPtr;
        QToolButton* newTerminalToolBtnPtr;
        QToolButton* newProjectToolBtnPtr;
        QToolButton* openProjectToolBtnPtr;
        QToolButton* saveAllToolBtnPtr;
        QToolButton* undoToolBtnPtr;
        QToolButton* redoToolBtnPtr;
        //QToolButton* setProjectConfigToolBtnPtr;
        QToolButton* buildToolBtnPtr;
        QToolButton* cleanAndBuildToolBtnPtr;
        QToolButton* configForRunToolBtnPtr;
        QToolButton* runToolBtnPtr;
        QToolButton* debugToolBtnPtr;
        QToolButton* gitToolBtnPtr;
        
        // South
        QToolButton* outputSouthToolBtnPtr; //outputSouthTabActionPtr
        QToolButton* terminalSouthToolBtnPtr;
        
        // East
        QToolButton* runEastToolBtnPtr;
        QToolButton* navEastToolBtnPtr;
        
        // West
        QToolButton* projectWestToolBtnPtr;
        
    private slots:
        ;
        
    public:
        MasterToolBtns(QWidget* parent = 0);
        void setMasterActionsPtr(MasterActions* masterActionsPtr);
        MasterActions* getMasterActionsPtr();
        void initNorthGroupOneToolBtns(); 
        void initNorthGroupTwoToolBtns();
        void initNorthGroupThreeToolBtns();
        void initSouthGroupOneToolBtns();
        void initEastGroupOneToolBtns();
        void initWestGroupOneToolBtns();
        
        QVector<QToolButton*>* getNorthGroupOneToolBtnPtrVecPtr();
        QVector<QToolButton*>* getNorthGroupTwoToolBtnPtrVecPtr();
        QVector<QToolButton*>* getNorthGroupThreeToolBtnPtrVecPtr();
        QVector<QToolButton*>* getSouthToolBtnPtrVecPtr();
        QVector<QToolButton*>* getEastToolBtnPtrVecPtr();
        QVector<QToolButton*>* getWestToolBtnPtrVecPtr();
        
        // North
        void setNewFileToolBtnPtr(QToolButton* newFileToolBtnPtr);
        QToolButton* getNewFileToolBtnPtr();
        void setNewTerminalToolBtnPtr(QToolButton* newTerminalToolBtnPtr);
        QToolButton* getNewTerminalToolBtnPtr();
        void setNewProjectToolBtnPtr(QToolButton* newProjectToolBtnPtr);
        QToolButton* getNewProjectToolBtnPtr();
        void setOpenProjectToolBtnPtr(QToolButton* openProjectToolBtnPtr);
        QToolButton* getOpenProjectToolBtnPtr();
        void setSaveAllToolBtnPtr(QToolButton* saveAllToolBtnPtr);
        QToolButton* getSaveAllToolBtnPtr();
        void setUndoToolBtnPtr(QToolButton* undoToolBtnPtr);
        QToolButton* getUndoToolBtnPtr();
        void setRedoToolBtnPtr(QToolButton* redoToolBtnPtr);
        QToolButton* getRedoToolBtnPtr();
        void setBuildToolBtnPtr(QToolButton* buildToolBtnPtr);
        QToolButton* getBuildToolBtnPtr();
        void setCleanAndBuildToolBtnPtr(QToolButton* cleanAndBuildToolBtnPtr);
        QToolButton* getCleanAndBuildToolBtnPtr();
        void setConfigForRunToolBtnPtr(QToolButton* configForRunToolBtnPtr);
        QToolButton* getConfigForRunToolBtnPtr();
        void setRunToolBtnPtr(QToolButton* runToolBtnPtr);
        QToolButton* getRunToolBtnPtr();
        void setDebugToolBtnPtr(QToolButton* debugToolBtnPtr);
        QToolButton* getDebugToolBtnPtr();
        void setGitToolBtnPtr(QToolButton* gitToolBtnPtr);
        QToolButton* getGitToolBtnPtr();
        
        // South
        void setOutputSouthToolBtnPtr(QToolButton* outputSouthToolBtnPtr);
        QToolButton* getOutputSouthToolBtnPtr();
        void setTerminalSouthToolBtnPtr(QToolButton* terminalSouthToolBtnPtr);
        QToolButton* getTerminalSouthToolBtnPtr();
        
        // East
        void setRunEastToolBtnPtr(QToolButton* runEastToolBtnPtr);
        QToolButton* getRunEastToolBtnPtr();
        void setNavEastToolBtnPtr(QToolButton* navEastToolBtnPtr);
        QToolButton* getNavEastToolBtnPtr();
        
        // West
        void setProjectWestToolBtnPtr(QToolButton* projectWestToolBtnPtr);
        QToolButton* getProjectWestToolBtnPtr();
        
        QString* toString();
        ~MasterToolBtns();
   
};

#endif	/* MASTER_TOOL_BTNS_H */