/* 
 * File:   MasterTabs.h
 * Author: James Kuczynski
 *
 * Created on May 1, 2015, 12:38 AM
 */

#ifndef MASTERTABS_H
#define	MASTERTABS_H

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

#endif	/* MASTERTABS_H */