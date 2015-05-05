/* 
 * File:   NewProjectPage_1.h
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on May 5, 2015, 11:13 AM
 */

#ifndef NEW_PROJECT_PAGE_1_H
#define	NEW_PROJECT_PAGE_1_H

#include <QWidget>
#include <QStringList>
#include <QListWidget>
#include <QFormLayout>
#include <QGridLayout>

#include <iostream>

using namespace std;

class NewProjectPage_1 : public QWidget
{
    Q_OBJECT
           
    private:
        QLineEdit* projectNameLePtr;
        QLineEdit* projectLocationLePtr;
        QStringList* projectTypeStrList;
        QListWidget* projectTypeLw; //maxVisibleItems : int
        
        QFormLayout* formLayout;
        QGridLayout* outerLayout;
        
    public:
        NewProjectPage_1(QWidget* parent = 0);
        ~NewProjectPage_1();
};

#endif	/* NEW_PROJECT_PAGE_1_H */

