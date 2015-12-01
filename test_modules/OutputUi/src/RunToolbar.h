/* 
 * File:   RunToolbar.h
 * Author: james
 *
 * Created on November 29, 2015, 6:36 PM
 */

#ifndef RUN_TOOLBAR_H
#define	RUN_TOOLBAR_H

#include <QToolBar>
#include <QAction>
#include <QVector>
#include <QString>

#include <iostream>

#include "RosEnv.h"

using namespace std;

class RunToolbar : public QToolBar
{
    Q_OBJECT
            
    private:
        bool isOpenMode;
        QAction* hideActPtr;
        QAction* runActPtr;
        QAction* termActPtr;
        QVector<QAction*>* actionPtrVecPtr;
        
        
    private slots:
        void handleHideActPtrSlot();
        void handleRunActPtrSlot();
        void handleTermActPtrSlot();
        
    public:
        RunToolbar(QToolBar* parent = 0);
        void initActions();
        void swapActionStatus();
        QVector<QAction*>* getActions();
        QString* toString();
        ~RunToolbar();
        
};

#endif	/* RUN_TOOLBAR_H */