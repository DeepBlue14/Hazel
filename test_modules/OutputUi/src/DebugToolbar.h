/* 
 * File:   DebugToolbar.h
 * Module: Output (or South)
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class creates the debug toolbar for the OutputGui.
 *
 * Created on October 13, 2015, 4:53 PM
 * Last modified on 11/16/2015 by JK
 */

#ifndef DEBUG_TOOL_BAR_H
#define	DEBUG_TOOL_BAR_H

#include <QToolBar>
#include <QAction>
#include <QVector>
#include <QString>

#include <iostream>

#include "RosEnv.h"
#include "AbstractOutputToolBar.h"

using namespace std;

class DebugToolbar : public AbstractOutputToolBar
{
    Q_OBJECT
            
    private:
        QAction* startActPtr;
        QAction* stopActPtr;
        QAction* pauseActPtr;
        QAction* stepIntoActPtr;
        QAction* stepOverActPtr;
        
    private slots:
        void handleStartActPtrSlot();
        void handleStopActPtrSlot();
        void handlePauseActPtrSlot();
        void handleStepIntoActPtrSlot();
        void handleStepOverActPtrSlot();
        
    public:
        DebugToolbar(AbstractOutputToolBar* parent = 0);
        void initActions();
        void initBtnConnecter();
        QString* toString();
        ~DebugToolbar();
            
};


#endif	/* DEBUG_TOOL_BAR_H */