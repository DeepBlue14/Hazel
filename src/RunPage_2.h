/* 
 * File:   RunPage_2.h
 * Author: james
 *
 * Created on May 21, 2015, 7:55 PM
 */

#ifndef RUNPAGE_2_H
#define	RUNPAGE_2_H

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

class RunPage_2 : public QWidget
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
        RunPage_2(QWidget* parent = 0);
        
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
        ~RunPage_2();
};

#endif	/* RUNPAGE_2_H */