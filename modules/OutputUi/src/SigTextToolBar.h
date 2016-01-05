/* 
 * File:   SigTextToolBar.h
 * Module: 
 * Author: james
 * Email
 *
 * Created on December 3, 2015, 10:00 PM
 * Last Modified: 
 */

#ifndef SIG_TEXT_TOOLBAR_H
#define	SIG_TEXT_TOOLBAR_H

#include <QToolBar>
#include <QString>

#include <iostream>

#include "AbstractOutputToolBar.h"

using std::cout;
using std::endl;

class SigTextToolBar : public AbstractOutputToolBar
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent
     */
    explicit SigTextToolBar(AbstractOutputToolBar* parent = 0);
    
    /**
     * Define action member variables.
     */
    void initActions();
    
    /**
     * Define button member variables and connect them to their corresponding
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
     * Destructor.s
     */
    virtual ~SigTextToolBar();
    
    
private slots:
    /**
     * Triggered by "Run" button pressed.
     */
    void handleRunActPtrSlot();
    
    /**
     * Triggered by [CTRL] C key sequence entered.  Sends the signal to the
     * process.
     */
    void handleControlCActPtrSlot();
    
    /**
     * Triggered by [CTRL] \ key sequence entered.  Sends the signal to the
     * process.s
     */
    void handleControlBackslashActPtrSlot();
    
    /**
     * 
     */
    void handleTermActPtrSlot();
    
    
private:
    QAction* runActPtr;
    QAction* controlCActPtr;
    QAction* controlBackslashActPtr;
    QAction* termActPtr;
    
};


#endif	/* SIG_TEXT_TOOLBAR_H */