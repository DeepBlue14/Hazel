/* 
 * File:   SearchGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 6, 2015, 3:38 PM
 */

#ifndef SEARCH_WIDGET_H
#define	SEARCH_WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QString>

#include <iostream>

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

class SearchWidget : public QLineEdit
{
    Q_OBJECT
            
    private:
        QString* searchInputStrPtr;
    
    public:
        SearchWidget(QWidget* parent = 0);
        void setSearchInputStrPtr();
        QString* getSearchInputStrPtr();
        QString* toString();
        ~SearchWidget();
};

#endif	/* SEARCH_WIDGET_H */