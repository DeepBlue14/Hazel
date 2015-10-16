/* 
 * File:   MasterToolBars.h
 * Module: Core
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
#include <QString>

#include <iostream>

#include "NewProjectGui.h"
//#include "MasterActions.h"
#include "MasterToolBtns.h"
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
        //MasterActions* masterActions;
        MasterToolBtns* masterToolBtnsPtr;
        
    private slots:
        ;
    
    public:
        /**
         * 
         * 
         * @param parent
         */
        MasterToolBars(QWidget* parent = 0);
        
        /**
         * Mutator.
         * 
         * @param masterToolBtnsPtr
         */
        void setMasterToolBtnsPtr(MasterToolBtns* masterToolBtnsPtr);
        
        /**
         * Accessor.
         * 
         * @return 
         */
        MasterToolBtns* getMasterToolBtnsPtr();
        
        /**
         * 
         * 
         * @param toolbarPtr
         */
        void initNorthGroupOneToolBar(QToolBar* toolbarPtr);
        
        /**
         * 
         * 
         * @param toolbarPtr
         */
        void initNorthGroupTwoToolBar(QToolBar* toolbarPtr);
        
        /**
         * 
         * 
         * @param toolbarPtr
         */
        void initNorthGroupThreeToolBar(QToolBar* toolbarPtr);
        
        /**
         * 
         * 
         * @param toolbarPtr
         */
        void initSouthGroupOneToolBar(QToolBar* toolbarPtr);
        
        /**
         * 
         * 
         * @param toolbarPtr
         */
        void initEastGroupOneToolBar(QToolBar* toolbarPtr);
        
        /**
         * 
         * 
         * @param toolbarPtr
         */
        void initWestGroupOneToolBar(QToolBar* toolbarPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~MasterToolBars();
            
};

#endif	/* NORTH_TOOLBARS_H */