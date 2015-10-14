/* 
 * File:   DebugToolbar.h
 * Module: South
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class creates the debug toolbar for the OutputGui.
 *
 * Created on October 13, 2015, 4:53 PM
 */

#ifndef DEBUG_TOOL_BAR_H
#define	DEBUG_TOOL_BAR_H

#include <QToolBar>
#include <QAction>
#include <QVector>
#include <QString>

#include <iostream>

using namespace std;

class DebugToolbar : public QToolBar
{
    Q_OBJECT
            
    private:
        QAction* startActPtr;
        QAction* stopActPtr;
        QAction* pauseActPtr;
        QAction* stepIntoActPtr;
        QAction* stepOverActPtr;
        QVector<QAction*>* actionPtrVecPtr;
        
    private slots:
        void handleStartActPtrSlot();
        void handleStopActPtrSlot();
        void handlePauseActPtrSlot();
        void handleStepIntoActPtrSlot();
        void handleStepOverActPtrSlot();
        
    public:
        DebugToolbar(QToolBar* parent = 0);
        void initActions();
        QVector<QAction*>* getActions();
        QString* toString();
        ~DebugToolbar();
            
};


#endif	/* DEBUG_TOOL_BAR_H */