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

using std::cout;
using std::endl;

class DebugToolbar : public AbstractOutputToolBar
{
    Q_OBJECT

public:
    /**
     * 
     * 
     * @param parent
     */
    explicit DebugToolbar(AbstractOutputToolBar* parent = 0);
    
    /**
     * Defines action member variables.
     */
    void initActions();
    
    /**
     * Defines buttons and connects them to actions.
     */
    void initBtnConnecter();
    
    /**
     * Classic toString method.
     * 
     * @return 
     */
    QString* toString();
    
    /**
     * Destructor.
     */
    virtual ~DebugToolbar();
    
    
private slots:
    /**
     * Starts process being debugged in pseudo terminal.
     */
    void handleStartActPtrSlot();
    
    /**
     * Stops process being debugged in pseudo terminal.
     */
    void handleStopActPtrSlot();
    
    /**
     * Pauses the process being debugged in pseudo terminal.
     */
    void handlePauseActPtrSlot();
    
    /**
     * Implements a "step into" action.
     */
    void handleStepIntoActPtrSlot();
    
    /**
     * Implements a "step over" action.
     */
    void handleStepOverActPtrSlot();
    
    
private:
    QAction* startActPtr; /** Start process. */
    QAction* stopActPtr; /** Stop process. */
    QAction* pauseActPtr; /** Pause process. */
    QAction* stepIntoActPtr; /** Step into. */
    QAction* stepOverActPtr; /** Step over. */
    
};


#endif	/* DEBUG_TOOL_BAR_H */