/* 
 * File:   NewProjectPage_2.h
 * Author: james
 * File Description: for package.xml data
 *
 * Created on May 5, 2015, 11:14 AM
 */

#ifndef NEW_PROJECT_PAGE_2_H
#define	NEW_PROJECT_PAGE_2_H

#include <QWidget>
#include <QLineEdit>
#include <QStringList>
#include <QListWidget>
#include <QComboBox>
#include <QFormLayout>
#include <QGridLayout>

#include <iostream>

using namespace std;

class NewProjectPage_2 : public QWidget
{
    Q_OBJECT
           
    private:
        QLineEdit* authorNameLePtr;
        QLineEdit* authorEmailLePtr;
        QStringList* licenseListPtr;
        QComboBox* licenseCbPtr;
        QLineEdit* licenseLePtr;
        
        QLineEdit* dependsLePtr;
        QStringList* dependsEnteredStrList;
        QListWidget* dependsEnteredTypeLw;
        
        QFormLayout* formLayout;
        QGridLayout* outerLayout;
        
    private slots:
        void handleOtherLicenseSlot();
        
    public:
        NewProjectPage_2(QWidget* parent = 0);
        
        ~NewProjectPage_2();
};

#endif	/* NEW_PROJECT_PAGE_2_H */

