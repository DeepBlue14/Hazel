/* 
 * File:   SearchGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 6, 2015, 3:38 PM
 */

#ifndef SEARCH_GUI_H
#define	SEARCH_GUI_H

#include <QWidget>
#include <QLineEdit>
#include <QString>

#include <iostream>

using namespace std;

class SearchGui : public QLineEdit
{
    Q_OBJECT
            
    private:
        QString* searchInputStrPtr;
    
    public:
        SearchGui(QWidget* parent = 0);
        void setSearchInputStrPtr(QString* inputStrPtr);
        QString* getSearchInputStrPtr();
        ~SearchGui();
};

#endif	/* SEARCH_GUI_H */