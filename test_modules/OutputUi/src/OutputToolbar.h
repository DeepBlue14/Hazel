/* 
 * File:   OutputToolbar.h
 * Author: james
 *
 * Created on November 29, 2015, 6:36 PM
 */

#ifndef OUTPUTTOOLBAR_H
#define	OUTPUTTOOLBAR_H

#include <QToolBar>
#include <QAction>
#include <QVector>
#include <QString>

#include <iostream>

#include "RosEnv.h"

using namespace std;

class OutputToolbar : public QToolBar
{
    Q_OBJECT
            
    private:
        QAction* hideActPtr;
        QAction* termActPtr;
        QVector<QAction*>* actionPtrVecPtr;
        
        
    private slots:
        void handleHideActPtrSlot();
        void handleTermActPtrSlot();
        
    public:
        OutputToolbar(QToolBar* parent = 0);
        void initActions();
        QVector<QAction*>* getActions();
        QString* toString();
        ~OutputToolbar();
        
};

#endif	/* OUTPUTTOOLBAR_H */