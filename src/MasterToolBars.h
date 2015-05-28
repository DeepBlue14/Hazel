/* 
 * File:   MasterToolBars.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on April 29, 2015, 1:48 AM
 */

#ifndef MASTER_TOOLBARS_H
#define	MASTER_TOOLBARS_H

#include <QWidget>
#include <QToolBar>


#include <iostream>

#include "NewProjectGui.h"
#include "MasterActions.h"

using namespace std;

class MasterToolBars : public QWidget
{
    Q_OBJECT
    
    private:
        MasterActions* masterActions;
        
    private slots:
        ;
    
    public:
        MasterToolBars(QWidget* parent = 0);
        void setMasterActionsPtr(MasterActions* masterActionsPtr);
        MasterActions* getMasterActionsPtr();
        void initGroupOneToolBar(QToolBar* toolbarPtr); 
        void initGroupTwoToolBar(QToolBar* toolbarPtr);
        void initGroupThreeToolBar(QToolBar* toolbarPtr);
        ~MasterToolBars();
            
};

#endif	/* MASTER_TOOLBARS_H */