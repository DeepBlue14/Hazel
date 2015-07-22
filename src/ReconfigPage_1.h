/* 
 * File:   ReconfigPage_1.h
 * Author: james
 *
 * Created on July 20, 2015, 5:11 PM
 */

#ifndef RECONFIGPAGE_1_H
#define	RECONFIGPAGE_1_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>
#include <QString>
#include <QDir>
#include <QFile>
#include <QGridLayout>

#include <iostream>

using namespace std;

class ReconfigPage_1 : public QWidget
{
    Q_OBJECT
            
    private:
        QLineEdit* vanillaPkgLocLePtr;
        QLineEdit* rosPkgLocLePtr;
        QFileDialog* vanillaPkgLocFdPtr;
        QFileDialog* rosPkgLocFdPtr;
        QPushButton* vanillaPkgLocPbPtr;
        QPushButton* rosPkgLocPbPtr;
        QString* vanillaPkgLocStrPtr;
        QString* rosPkgLocStrPtr;
        QGridLayout* outerLayout;
        
    private slots:
        void handleVanillaPkgLocPbPtrSlot();
        void handleRosPkgLocPbPtrPb();
        
    public:
        ReconfigPage_1(QWidget* parent = 0);
        bool isValidRosWs(QString* absPathToWs);
        QString* toString();
        ~ReconfigPage_1();
};

#endif	/* RECONFIGPAGE_1_H */