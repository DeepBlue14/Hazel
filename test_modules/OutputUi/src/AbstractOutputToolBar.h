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

using namespace std;

class AbstractOutputToolBar : public QToolBar
{
    Q_OBJECT
    
    private:
        bool isOpenMode;
        QAction* hideActPtr;
        
    private slots:
        virtual void handleHideActPtrSlot() = 0;
            
    public:
        AbstractOutputToolBar(QToolBar* parent = 0);
        virtual void initActions() = 0;
        void swapActionStatus(QAction* hideActPtr, QVector<QAction*>* actionPtrVecPtr);
        virtual QVector<QAction*>* getActions() = 0;
        QString* toString();
        ~AbstractOutputToolBar();
    
};

#endif	/* ABSTRACT_OUTPUT_TOOLBAR_H */