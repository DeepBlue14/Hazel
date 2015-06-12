/* 
 * File:   MasterToolBars.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on April 29, 2015, 1:48 AM
 */

#ifndef NORTH_TOOLBARS_H
#define	NORTH_TOOLBARS_H

#include <QWidget>
#include <QToolBar>

#include <iostream>

#include "NewProjectGui.h"
#include "MasterActions.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

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
        void initNorthGroupOneToolBar(QToolBar* toolbarPtr); 
        void initNorthGroupTwoToolBar(QToolBar* toolbarPtr);
        void initNorthGroupThreeToolBar(QToolBar* toolbarPtr);
        void initSouthGroupOneToolBar(QToolBar* toolbarPtr);
        void initEastGroupOneToolBar(QToolBar* toolbarPtr);
        void initWestGroupOneToolBar(QToolBar* toolbarPtr);
        ~MasterToolBars();
            
};

#endif	/* NORTH_TOOLBARS_H */