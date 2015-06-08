/* 
 * File:   CentralGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file will contain the qcentralwidget of the
 *                   qmainwindow.
 *
 * Created on May 6, 2015, 4:33 PM
 */

#ifndef CENTRAL_GUI_H
#define	CENTRAL_GUI_H

#include <QWidget>
#include <QGridLayout>
#include <QTabWidget>

#include <iostream>

#include "TabGui.h"
#include "FileTreeGui.h"
#include "NavigatorGui.h"
#include "OutputGui.h"

using namespace std;

class CentralGui : public QWidget
{
    Q_OBJECT
            
    private:
        TabGui* centralTabsPtr;
        FileTreeGui* fileTreeGuiPtr;
        NavigatorGui* navigatorGuiPtr;
        OutputGui* outputGuiPtr;
        
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        CentralGui(QWidget* parent = 0);
        void setCentralTabsPtr(TabGui* centralTabsPtr);
        TabGui* getCentralTabsPtr();
        void setFileTreeGuiPtr(FileTreeGui* fileTreeGuiPtr);
        FileTreeGui* getFileTreeGuiPtr();
        void setNavigatorGuiPtr(NavigatorGui* navigatorGuiPtr);
        NavigatorGui* getNavigatorGuiPtr();
        void setOutputGuiPtr(OutputGui* outputGuiPtr);
        OutputGui* getOutputGuiPtr();
        void passMasterTabWidgetPtr(QTabWidget* masterTabWidgetPtr);
        ~CentralGui();
};

#endif	/* CENTRAL_GUI_H */