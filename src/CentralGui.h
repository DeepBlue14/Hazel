/* 
 * File:   CentralGui.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file will contain the qcentralwidget of the
 *                   qmainwindow.  Currently, it is divided into four sections
 *                   (although this could be changed), north, south, east,
 *                   and west. 
 *
 * Created on May 6, 2015, 4:33 PM
 */

#ifndef CENTRAL_GUI_H
#define	CENTRAL_GUI_H

#include <QWidget>
#include <QGridLayout>
#include <QTabWidget>
#include <QProgressBar>

#include <iostream>

#include "TabGui.h"
#include "FileTreeGui.h"
#include "RunPanelGui.h"
#include "NavigatorGui.h"
#include "OutputGui.h"
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

class CentralGui : public QWidget
{
    Q_OBJECT
            
    private:
        TabGui* northGuiPtr;
        FileTreeGui* fileTreeGuiPtr;
        RunPanelGui* runPanelGuiPtr;
        NavigatorGui* navigatorGuiPtr;
        OutputGui* southGuiPtr;
        
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        CentralGui(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @param northGuiPtr
         */
        void setNorthGuiPtr(TabGui* northGuiPtr);
        
        /**
         * 
         * 
         * @return 
         */
        TabGui* getNorthGuiPtr();
        
        /**
         * 
         * 
         * @param fileTreeGuiPtr
         */
        void setFileTreeGuiPtr(FileTreeGui* fileTreeGuiPtr);
        
        /**
         * 
         * 
         * @return 
         */
        FileTreeGui* getFileTreeGuiPtr();
        
        
        void setRunPanelGuiPtr(RunPanelGui* runPanelGuiPtr);
        
        
        RunPanelGui* getRunPanelGuiPtr();
        
        /**
         * 
         * 
         * @param navigatorGuiPtr
         */
        void setNavigatorGuiPtr(NavigatorGui* navigatorGuiPtr);
        
        /**
         * 
         * 
         * @return 
         */
        NavigatorGui* getNavigatorGuiPtr();
        
        /**
         * 
         * 
         * @param southGuiPtr
         */
        void setSouthGuiPtr(OutputGui* southGuiPtr);
        
        /**
         * 
         * 
         * @return 
         */
        OutputGui* getSouthGuiPtr();
        
        /**
         * 
         * 
         * @return 
         */
        static QProgressBar getProgressBarPtr();
        
        /**
         * 
         * 
         * @param northTabWidgetPtr
         */
        void passNorthTabWidgetPtr(QTabWidget* northTabWidgetPtr);
        
        /**
         * 
         * 
         * @param southTabWidgetPtr
         */
        void passSouthTabWidgetPtr(QTabWidget* southTabWidgetPtr);
        
        /**
         * Classic toString method.
         * 
         * @return class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~CentralGui();
};

#endif	/* CENTRAL_GUI_H */