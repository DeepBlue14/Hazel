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
        TabGui* northGuiPtr;
        FileTreeGui* fileTreeGuiPtr;
        NavigatorGui* navigatorGuiPtr;
        OutputGui* southGuiPtr;
        
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        CentralGui(QWidget* parent = 0);
        void setNorthGuiPtr(TabGui* northGuiPtr);
        TabGui* getNorthGuiPtr();
        void setFileTreeGuiPtr(FileTreeGui* fileTreeGuiPtr);
        FileTreeGui* getFileTreeGuiPtr();
        void setNavigatorGuiPtr(NavigatorGui* navigatorGuiPtr);
        NavigatorGui* getNavigatorGuiPtr();
        void setSouthGuiPtr(OutputGui* southGuiPtr);
        OutputGui* getSouthGuiPtr();
        void passNorthTabWidgetPtr(QTabWidget* northTabWidgetPtr);
        void passSouthTabWidgetPtr(QTabWidget* southTabWidgetPtr);
        ~CentralGui();
};

#endif	/* CENTRAL_GUI_H */