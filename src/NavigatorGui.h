/* 
 * File:   NavigatorGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 12, 2015, 10:03 PM
 */

#ifndef NAVIGATOR_GUI_H
#define	NAVIGATOR_GUI_H

#include <QWidget>
#include <QListWidget>
#include <QSplitter>
#include <QTabWidget>
#include <QPushButton>
#include <QGridLayout>

#include "SearchWidget.h"

#include <iostream>

using namespace std;

class NavigatorGui : public QWidget
{
    Q_OBJECT
    
    private:
        QListWidget* listWidgetPtr;
        SearchWidget* searchWidgetPtr;
        QPushButton* activateSearchBtn;
        QString* fileStrPtr;
        
        QTabWidget* westTabWidgetPtr;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        NavigatorGui(QWidget* parent = 0);
        void loadData();
        void setWestTabWidgetPtr(QTabWidget* masterTabWidgetPtr);
        QTabWidget* getWestTabWidgetPtr();
        ~NavigatorGui();
};

#endif	/* NAVIGATOR_GUI_H */