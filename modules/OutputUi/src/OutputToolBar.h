/* 
 * File:   OutputToolbar.h
 * Module: Output-South
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on November 29, 2015, 6:36 PM
 * Last Modified: 
 */

#ifndef OUTPUT_TOOLBAR_H
#define	OUTPUT_TOOLBAR_H

#include <QToolBar>
#include <QAction>
#include <QVector>
#include <QString>

#include <iostream>

#include "RosEnv.h"
#include "AbstractOutputToolBar.h"

using std::cout;
using std::endl;

class OutputToolbar : public AbstractOutputToolBar
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent
     */
    explicit OutputToolbar(AbstractOutputToolBar* parent = 0);
    
    /**
     * Defines action member variables.
     */
    void initActions();
    
    /**
     * Defines button members and connects them to their corresponding
     * actions.
     * @see #initActions()
     */
    void initBtnConnecter();
    
    /**
     * Classic toString method.
     * 
     * @return text data of class members
     */
    QString* toString();
    
    /**
     * Destructor.
     */
    virtual ~OutputToolbar();
    
    
private slots:
    /**
     * 
     */
    void handleTermActPtrSlot();
    
    
private:
    QAction* termActPtr;
        
};

#endif	/* OUTPUT_TOOLBAR_H */