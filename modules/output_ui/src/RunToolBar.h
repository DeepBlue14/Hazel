/* 
 * File:   RunToolbar.h
 * Module: Output-South
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 * 
 * Created on November 29, 2015, 6:36 PM
 * Last Modified 12/04/2015 by JK
 */

#ifndef RUN_TOOLBAR_H
#define	RUN_TOOLBAR_H

#include <QToolBar>
#include <QString>

#include <iostream>

#include "AbstractOutputToolBar.h"

using std::cout;
using std::endl;


class RunToolBar : public AbstractOutputToolBar
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent
     */
    RunToolBar(AbstractOutputToolBar* parent = 0);
    
    /**
     * Defines action member variables.
     */
    void initActions();
    
    /**
     * Defines button members and connects them with their corresponding
     * actions.
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
    ~RunToolBar();
    
    
private slots:
    /**
     * Is triggered by the "Run" button being pressed.
     */
    void handleRunActPtrSlot();
    
    /**
     * Is triggered by [CTRL] C.
     */
    void handleControlCActPtrSlot();
    
    /**
     * Is triggered by [CTRL] \
     */
    void handleControlBackslashActPtrSlot();
    
    /**
     * Is triggered by the "Terminate" button being pressed.
     */
    void handleTermActPtrSlot();
    
    
private:
    QAction* runActPtr; /// For "Run" button.
    QAction* controlCActPtr; /// For [CTRL] C triggered.
    QAction* controlBackslashActPtr; /// For [CTRL] \ triggered.
    QAction* termActPtr; /// For "Terminate" button.
        
};

#endif	/* RUN_TOOLBAR_H */