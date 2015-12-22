/* 
 * File:   ReconfigPage_1.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains a "page" which allows the user to
 *                   select the location of the package, as well as the
 *                   final resting place/destination of the rosified resulting
 *                   package.
 *
 * Created on July 20, 2015, 5:11 PM
 * Last Modified: 
 */

#ifndef RECONFIG_PAGE_1_H
#define	RECONFIG_PAGE_1_H

#include <QWidget>
#include <QLineEdit>
#include <QRadioButton>
#include <QPushButton>
#include <QCheckBox>
#include <QFileDialog>
#include <QMessageBox>
#include <QString>
#include <QDir>
#include <QFile>
#include <QGridLayout>

#include <iostream>

#include "RosEnv.h"

using namespace std;

class InitialSetupPage : public QWidget
{
    Q_OBJECT
    
    
            
    private:
        QRadioButton* scanBtnPtr;
        QRadioButton* reconfigBtnPtr;
        
        QLineEdit* vanillaPkgLocLePtr;
        QLineEdit* rosPkgLocLePtr;
        QFileDialog* vanillaPkgLocFdPtr;
        QFileDialog* rosPkgLocFdPtr;
        QPushButton* vanillaPkgLocPbPtr;
        QPushButton* rosPkgLocPbPtr;
        
        QCheckBox* verifyCbPtr;
        QCheckBox* buildCbPtr;
        
        QGridLayout* outerLayout;
        
        QString* vanillaPkgAbsPathStr;
        QString* rosPkgAbsPathStr;
        
        QGridLayout* btnLayout;
        
    private slots:
        void handleScanMode();
        void handleVerifyMode();
        /**
         * 
         */
        void handleVanillaPkgLocPbPtrSlot();
        
        /**
         * 
         */
        void handleRosPkgLocPbPtrPb();
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        InitialSetupPage(QWidget* parent = 0);
        
        
        void swapOptionMode(bool isScanMode);
        
        /**
         * 
         * 
         * @param rosPkgAbsPathStr
         */
        void setVanillaPkgAbsPathStr(QString* rosPkgAbsPathStr);
        
        /**
         * 
         * 
         * @return 
         */
        QString* getVanillaPkgAbsPathStr();
        
        /**
         * 
         * 
         * @param rosPkgAbsPathStr
         */
        void setRosPkgAbsPathStr(QString* rosPkgAbsPathStr);
        
        /**
         * 
         * 
         * @return 
         */
        QString* getRosPkgAbsPathStr();
        
        /**
         * 
         * 
         * @param absPathToWs
         * @return 
         */
        bool isValidRosWs(QString* absPathToWs);
        
        /**
         * Classic toString method.
         * 
         * @return class data. 
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~InitialSetupPage();
};

#endif	/* RECONFIG_PAGE_1_H */