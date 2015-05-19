/* 
 * File:   CentralGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file will contain the qcentralwidget of the
 *                   qmainwindow.
 *
 * Created on May 6, 2015, 4:33 PM
 */

#ifndef CENTRALGUI_H
#define	CENTRALGUI_H

#include <QWidget>
#include <QGridLayout>

#include <iostream>

#include "TabGui.h"
#include "FileTreeGui.h"
#include "OutputGui.h"

using namespace std;

class CentralGui : public QWidget
{
    Q_OBJECT
            
    private:
        TabGui* centralTabsPtr;
        FileTreeGui* fileTreeGuiPtr;
        OutputGui* outputGuiPtr;
        
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        CentralGui(QWidget* parent = 0);
        TabGui* getCentralTabsPtr();
        ~CentralGui();
};

#endif	/* CENTRALGUI_H */

