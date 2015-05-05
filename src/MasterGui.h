/* 
 * File:   MasterGui.h
 * Author: james
 *
 * Created on April 18, 2015, 8:14 PM
 */

#ifndef MASTERGUI_H
#define	MASTERGUI_H

#include <QWidget>
#include <QMainWindow>
#include <QToolBar>
#include <QDockWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QTabWidget> //temp?
#include <QTextEdit>
#include <QFile>

#include <iostream>

//#include "NewFileGui.h"
#include "NewProjectGui.h"
#include "MasterActions.h"
#include "MasterToolBars.h"
#include "OpeningGui.h"
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
        
        QTabWidget* tabWidget;
        
        QTextEdit* editor;
        
        NewProjectGui* newProjectGui;
        MasterActions* masterActions;
        MasterToolBars* masterToolBars;
        OpeningGui* openingGui;
        MasterMenus* masterMenus;
        
    private slots:
        ;
    
    public:
        MasterGui(QMainWindow* parent = 0);
        void initToolBars();
        void initMenus();
        ~MasterGui();
            
};

#endif	/* MASTERGUI_H */

