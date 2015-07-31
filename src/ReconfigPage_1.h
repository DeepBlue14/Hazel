/* 
 * File:   ReconfigPage_1.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains a "page" which allows the user to
 *                   select the location of the package, as well as the
 *                   final resting place/destination of the rosified resulting
 *                   package.
 *
 * Created on July 20, 2015, 5:11 PM
 */

#ifndef RECONFIG_PAGE_1_H
#define	RECONFIG_PAGE_1_H

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
        
        QString* vanillaPkgAbsPathStr;
        QString* rosPkgAbsPathStr;
        
    private slots:
        void handleVanillaPkgLocPbPtrSlot();
        void handleRosPkgLocPbPtrPb();
        
    public:
        ReconfigPage_1(QWidget* parent = 0);
        void setVanillaPkgAbsPathStr(QString* rosPkgAbsPathStr);
        QString* getVanillaPkgAbsPathStr();
        void setRosPkgAbsPathStr(QString* rosPkgAbsPathStr);
        QString* getRosPkgAbsPathStr();
        bool isValidRosWs(QString* absPathToWs);
        QString* toString();
        ~ReconfigPage_1();
};

#endif	/* RECONFIG_PAGE_1_H */