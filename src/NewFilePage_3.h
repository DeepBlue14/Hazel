/* 
 * File:   NewFilePage_3.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 15, 2015, 10:53 PM
 */

#ifndef NEWFILEPAGE_3_H
#define	NEWFILEPAGE_3_H

#include <QWidget>
#include <QStringList>
#include <QVector>
#include <QListWidget>
#include <QLineEdit>
#include <QGridLayout>

#include <iostream>

using namespace std;

class NewFilePage_3 : public QWidget
{
    Q_OBJECT
            
    private:
        QStringList* msgCatagoryStrLstPtr;
        QVector<QStringList*> specificMsgStrLstVec;
        QListWidget* msgCatagoryLwPtr;
        QListWidget* specificMsgLwPtr;
        
        QGridLayout* outerLayoutPtr;
        
        QString* msgCatagoryStrPtr;
        QString* specificMsgStrPtr;
        
    private slots:
        void handleSwapOptionsSlot();
        
    public:
        NewFilePage_3(QWidget* parent = 0);
        void setMsgCatagoryStrPtr();
        QString* getMsgCatagoryStrPtr();
        void setSpecificMsgStrPtr();
        QString* getSpecificMsgStrPtr();
        QString* toString();
        ~NewFilePage_3();
};

#endif	/* NEWFILEPAGE_3_H */