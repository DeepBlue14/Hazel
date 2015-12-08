/* 
 * File:   SigTextToolBar.h
 * Module: 
 * Author: james
 * Email
 *
 * Created on December 3, 2015, 10:00 PM
 * Last Modified: 
 */

#ifndef SIGTEXTTOOLBAR_H
#define	SIGTEXTTOOLBAR_H

#include <QToolBar>
#include <QString>

#include <iostream>

#include "AbstractOutputToolBar.h"

using namespace std;

class SigTextToolBar : public AbstractOutputToolBar
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
        SigTextToolBar(AbstractOutputToolBar* parent = 0);
        void initActions();
        void initBtnConnecter();
        QString* toString();
        ~SigTextToolBar();
};


#endif	/* SIGTEXTTOOLBAR_H */