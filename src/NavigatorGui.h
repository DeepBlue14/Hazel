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
#include <QString>

#include <iostream>

#include "SearchWidget.h"
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
        QString* toString();
        ~NavigatorGui();
};

#endif	/* NAVIGATOR_GUI_H */