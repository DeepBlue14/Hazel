/* 
 * File:   CentralGui.h
 * Author: james
 *
 * Created on May 6, 2015, 4:33 PM
 */

#ifndef CENTRALGUI_H
#define	CENTRALGUI_H

#include <QWidget>
#include <QGridLayout>

#include <iostream>

#include "CentralTabs.h"
#include "FileTreeGui.h"
#include "OutputGui.h"

using namespace std;

class CentralGui : public QWidget
{
    Q_OBJECT
            
    private:
        CentralTabs* centralTabsPtr;
        FileTreeGui* fileTreeGuiPtr;
        OutputGui* outputGuiPtr;
        
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        CentralGui(QWidget* parent = 0);
        CentralTabs* getCentralTabsPtr();
        ~CentralGui();
};

#endif	/* CENTRALGUI_H */

