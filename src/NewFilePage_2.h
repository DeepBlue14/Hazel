/* 
 * File:   NewFilePage_2.h
 * Author: james
 * Email: 
 * File Description:
 *
 * Created on May 15, 2015, 9:25 AM
 */

#ifndef NEW_FILE_PAGE_2_H
#define	NEW_FILE_PAGE_2_H

#include <QWidget>
#include <QString>
#include <QRadioButton>
#include <QButtonGroup>
#include <QGridLayout>

#include <iostream>

using namespace std;

class NewFilePage_2 : public QWidget
{
    Q_OBJECT
            
    private:
        QButtonGroup* buttonGroupPtr;
        
        QGridLayout* outerLayoutPtr;
        
        QString* optionStrPtr;
        
    private slots:
        ;
        
    public:
        NewFilePage_2(QWidget* parent = 0);
        void setOptionStrPtr();
        QString* getOptionStrPtr();
        void triggerMutators();
        QString* toString();
        ~NewFilePage_2();
};

#endif	/* NEW_FILE_PAGE_2_H */