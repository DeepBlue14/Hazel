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
        ~SearchWidget();
};

#endif	/* SEARCH_WIDGET_H */