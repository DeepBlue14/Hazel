/* 
 * File:   NewProjectPage_1.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 5, 2015, 11:13 AM
 */

#ifndef NEW_PROJECT_PAGE_2_H
#define	NEW_PROJECT_PAGE_2_H

#include <QWidget>
#include <QStringList>
#include <QString>
#include <QLineEdit>
#include <QFileDialog>
#include <QPushButton>
#include <QListWidget>
#include <QFormLayout>
#include <QGridLayout>

#include <iostream>

using namespace std;

class NewProjectPage_2 : public QWidget
{
    Q_OBJECT
           
    private:
        QLineEdit* projectNameLePtr;
        QLineEdit* projectLocLePtr;
        QFileDialog* dirDialogPtr;
        QPushButton* locPbPtr;
        QStringList* projectTypeStrList;
        QListWidget* projectTypeLwPtr; //maxVisibleItems : int
        
        QGridLayout* locationLayout;
        QFormLayout* formLayout;
        QGridLayout* outerLayout;
        
        QString* projectNameStrPtr;
        QString* projectLocStrPtr;
        QString* projectTypeStrPtr;
        
    private slots:
        void handleLocPbPtrSlot();
        
    public:
        NewProjectPage_2(QWidget* parent = 0);
        void setProjectNameStrPtr();
        QString* getProjectNameStrPtr();
        void setProjectLocStrPtr();
        QString* getProjectLocStrPtr();
        void setProjectTypeStrPtr();
        QString* getProjectTypeStrPtr();
        void triggerMutators();
        QString* toString();
        ~NewProjectPage_2();
};

#endif	/* NEW_PROJECT_PAGE_2_H */

