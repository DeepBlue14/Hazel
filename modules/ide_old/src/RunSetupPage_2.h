/* 
 * File:   RunPage_2.h
 * Module: Run
 * Author: james
 *
 * Created on May 21, 2015, 7:55 PM
 */

#ifndef RUN_SETUP_PAGE_2_H
#define	RUN_SETUP_PAGE_2_H

#include <QWidget>
#include <QLineEdit>
#include <QFileDialog>
#include <QPushButton>
#include <QFormLayout>
#include <QGridLayout>
#include <QString>

#include <iostream>

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class RunSetupPage_2 : public QWidget
{
    Q_OBJECT
            
    private:
        QLineEdit* launchFileAbsPathLePtr;
        QLineEdit* pkgLePtr;
        static QString pkgStrPtr;
        QLineEdit* fileLePtr;
        static QString fileStrPtr;
        QFileDialog* launchFileDialogPtr;
        QPushButton* selectLaunchFilePbPtr;
        
        QFormLayout* formLayoutPtr;
        QGridLayout* outerLayoutPtr;
        
        QString* launchFileStrPtr;
        
    private slots:
        /**
         * 
         */
        void handleSelectLaunchFilePbPtrSlot();
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        RunSetupPage_2(QWidget* parent = 0);
        
        /**
         * 
         */
        void setLaunchFileStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getLaunchFileStrPtr();
        
        /**
         * 
         * 
         * @param pkgStrPtr
         */
        void setPkgStrPtr(QString pkgStrPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString getPkgStrPtr();
        
        /**
         * 
         * 
         * @param fileStrPtr
         */
        void setFileStrPtr(QString fileStrPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString getFileStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~RunSetupPage_2();
};

#endif	/* RUN_SETUP_PAGE_2_H */