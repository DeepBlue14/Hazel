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
#include <QMenu>


#include <iostream>

using namespace std;

class MasterTabs : public QWidget
{
    Q_OBJECT
    
    private:
        ;
        
    private slots:
        ;
    
    public:
        MasterTabs(QWidget* parent = 0);
        template<class TabType>
        void addTab(TabType* tabType);
        ~MasterTabs();
            
};

#endif	/* MASTER_TABS_H */