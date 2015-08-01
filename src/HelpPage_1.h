/* 
 * File:   HelpPage_1.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 18, 2015, 5:49 PM
 */

#ifndef HELP_PAGE_1_H
#define	HELP_PAGE_1_H

#include <QWidget>
#include <QPushButton>
#include <QString>
#include <QStringList>
#include <QListWidget>
#include <QGridLayout>

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


class HelpPage_1 : public QWidget
{
    Q_OBJECT
            
    private:
        SearchWidget* searchWidget;
        QPushButton* searchBtn;
        QStringList* strLstPtr;
        QListWidget* listWidgetPtr;
        
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        /**
         * 
         * 
         * @param parent
         */
        HelpPage_1(QWidget* parent = 0);
        
        /**
         * 
         */
        void fillList();
        
        /**
         * 
         */
        ~HelpPage_1();
};

#endif	/* HELP_PAGE_1_H */