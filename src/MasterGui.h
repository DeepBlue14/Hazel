/* 
 * File:   MasterGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on April 18, 2015, 8:14 PM
 */

#ifndef MASTER_GUI_H
#define	MASTER_GUI_H

#include <QWidget>
#include <QMainWindow>
#include <QToolBar>
#include <QDockWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
//#include <QTabWidget> //temp?
#include <QTextEdit>
#include <QFile>

#include <iostream>

//#include "NewProjectGui.h"
#include "MasterActions.h"
#include "MasterToolBars.h"
//#include "OpeningGui.h"
#include "CentralGui.h"
#include "MasterMenus.h"

using namespace std;

class MasterGui : public QMainWindow
{
    Q_OBJECT
    
    private:
        QMenu* fileMenuPtr;
        QMenu* editMenuPtr;
        QMenu* viewMenuPtr;
        QMenu* navigateMenuPtr;
        QMenu* sourceMenuPtr;
        QMenu* refactorMenuPtr;
        QMenu* runMenuPtr;
        QMenu* debugMenuPtr;
        QMenu* profileMenuPtr;
        QMenu* teamMenuPtr;
        QMenu* toolsMenuPtr;
        QMenu* windowMenuPtr;
        QMenu* helpMenuPtr;
        
        QToolBar* groupOneToolBarPtr;
        QToolBar* groupTwoToolBarPtr;
        QToolBar* groupThreeToolBarPtr;
        QToolBar* southToolBarPtr;
        QToolBar* eastToolBarPtr;
        QToolBar* westToolBarPtr;
        
        QTabWidget* tabWidget;
        
        QTextEdit* editor;
        
        //NewProjectGui* newProjectGui;
        MasterActions* masterActions;
        MasterToolBars* masterToolBars;
        //OpeningGui* openingGui;
        MasterMenus* masterMenus;
        CentralGui* centralGui;
        
    private slots:
        ;
    
    public:
        MasterGui(QMainWindow* parent = 0);
        void initToolBars();
        void initMenus();
        ~MasterGui();
            
};

#endif	/* MASTER_GUI_H */

