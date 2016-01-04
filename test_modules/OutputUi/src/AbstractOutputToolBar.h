/* 
 * File:   AbstractOutputToolbar.h
 * Module: Output-South
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Base class for the toolbars used by the Output-South
 *                   module.
 * 
 * Ref:
 *  https://en.wikibooks.org/wiki/C%2B%2B_Programming/Classes/Abstract_Classes
 * 
 * Created on December 1, 2015, 6:30 PM
 * Last Modified: 
 */

#ifndef ABSTRACT_OUTPUT_TOOLBAR_H
#define	ABSTRACT_OUTPUT_TOOLBAR_H

#include <QToolBar>
#include <QAction>
#include <QVector>
#include <QString>

#include <iostream>

#include "RosEnv.h"

using std::cout;
using std::endl;

class AbstractOutputToolBar : public QToolBar
{
    Q_OBJECT
    
    
public:
    /**
     * Constructor.
     * 
     * @param parent
     */
    explicit AbstractOutputToolBar(QToolBar* parent = 0);
    
    /**
     * Defines the QAction object members of the class.
     */
    virtual void initActions() = 0;
    
    /**
     * Defines the button object members, and connects them to actual processes.
     */
    virtual void initBtnConnecter() = 0;
    
    /**
     * Swaps the status of the toolbar between hide and reveal.
     */
    void swapActionStatus();
    
    /**
     * Accessor.
     * 
     * @return 
     */
    QVector<QAction*>* getActions();
    
    /**
     * Classic toString method.
     * 
     * @return 
     */
    QString* toString();
    
    /**
     * Destructor.
     */
    virtual ~AbstractOutputToolBar();
        
    
private slots:
    /**
     * 
     */
    void handleHideActPtrSlot();
        
    
private:
    bool isOpenMode; /** Toolbar visible/hidden flag. */
    QAction* hideActPtr; /** Mandatory action to hide the toolbar. */
    QVector<QAction*>* actionPtrVecPtr; /** vector of toolbar button actions. */
    
};

#endif	/* ABSTRACT_OUTPUT_TOOLBAR_H */