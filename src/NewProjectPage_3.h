/* 
 * File:   NewProjectPage_3.h
 * Author: james
 *
 * Created on May 5, 2015, 1:36 PM
 */

#ifndef NEWPROJECTPAGE_3_H
#define	NEWPROJECTPAGE_3_H

#include <QWidget>
#include <QListWidget>
#include <QStringList>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

#include <iostream>

using namespace std;

class NewProjectPage_3 : public QWidget
{
    Q_OBJECT
           
    private:
        QStringList* dependsEnteredStrList;
        QLineEdit* dependsLePtr;
        QPushButton* addToListBtnPtr;
        QListWidget* dependsEnteredTypeLw;
        QPushButton* rmFromListBtnPtr;
        
        QGridLayout* outerLayout;

    private slots:
        void handleAddToListBtnPtrSlot();
        void handleRmFromListBtnPtrSlot();
        
    public:
        NewProjectPage_3(QWidget* parent = 0);
        ~NewProjectPage_3();
};

#endif	/* NEWPROJECTPAGE_3_H */

