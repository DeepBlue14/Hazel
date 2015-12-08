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

using namespace std;


class RunToolBar : public AbstractOutputToolBar
{
    Q_OBJECT
            
    private:
        QAction* runActPtr;
        QAction* controlCActPtr;
        QAction* controlBackslashActPtr;
        QAction* termActPtr;
        
        
    private slots:
        void handleRunActPtrSlot();
        void handleControlCActPtrSlot();
        void handleControlBackslashActPtrSlot();
        void handleTermActPtrSlot();
        
    public:
        RunToolBar(AbstractOutputToolBar* parent = 0);
        void initActions();
        void initBtnConnecter();
        QString* toString();
        ~RunToolBar();
        
};

#endif	/* RUN_TOOLBAR_H */