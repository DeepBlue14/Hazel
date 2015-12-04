/* 
 * File:   SigTextToolBar.h
 * Author: james
 *
 * Created on December 3, 2015, 10:00 PM
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
    private:
        QAction* runActPtr;
        QAction* controlCActPtr;
        QAction* controlBackslashActPtr;
        QAction* termActPtr;
        
    private slots:
        ;
        
    public:
        SigTextToolBar(AbstractOutputToolBar* parent = 0);
        void initActions();
        void initBtnConnecter();
        QString* toString();
        ~SigTextToolBar();
};


#endif	/* SIGTEXTTOOLBAR_H */