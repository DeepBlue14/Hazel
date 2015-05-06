/* 
 * File:   MasterTabs.h
 * Author: James Kuczynski
 *
 * Reference: http://codeprogress.com/cpp/libraries/qt/QTabWidgetClosableTabs.php#.VUQ7AXXd_CI
 * 
 * Created on May 1, 2015, 12:38 AM
 */

#ifndef MASTER_TABS_H
#define	MASTER_TABS_H

#include <QWidget>
#include <QTabWidget>
#include <QMenu>
#include <QGridLayout>

#include "OpeningGui.h"

#include <iostream>

using namespace std;

class CentralTabs : public QWidget
{
    Q_OBJECT
    
    private:
        QTabWidget* tabWidget;
        
        QGridLayout* outerLayout;
        
        OpeningGui* openingGui;
        
    private slots:
        ;
    
    public:
        CentralTabs(QWidget* parent = 0);
        template<class TabType>
        void addTab(TabType* tabType);
        QTabWidget* getTabWidget();
        ~CentralTabs();
            
};

#endif	/* MASTER_TABS_H */