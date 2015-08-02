/* 
 * File:   NewProjectPage_2.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: for package.xml data
 *
 * Created on May 5, 2015, 11:14 AM
 */

#ifndef NEW_PROJECT_PAGE_3_H
#define	NEW_PROJECT_PAGE_3_H

#include <QWidget>
#include <QLineEdit>
#include <QStringList>
#include <QString>
#include <QListWidget>
#include <QComboBox>
#include <QFormLayout>
#include <QGridLayout>

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

class NewProjectPage_3 : public QWidget
{
    Q_OBJECT
           
    private:
        QLineEdit* authorNameLePtr;
        QLineEdit* authorEmailLePtr;
        QStringList* licenseListPtr;
        QComboBox* licenseCbPtr;
        QLineEdit* licenseLePtr;
        
        QFormLayout* formLayout;
        QGridLayout* outerLayout;
        
        QString* authorNameStrPtr;
        QString* authorEmailStrPtr;
        QString* licenseStrPtr;
        
    private slots:
        /**
         * 
         */
        void handleOtherLicenseSlot();
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        NewProjectPage_3(QWidget* parent = 0);
        
        /**
         * 
         */
        void setAuthorNameStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getAuthorNameStrPtr();
        
        /**
         * 
         */
        void setAuthorEmailStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getAuthorEmailStrPtr();
        
        /**
         * 
         */
        void setLicenseStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getLicenseStrPtr();
        
        /**
         * 
         */
        void triggerMutators();
        
        /**
         * Classic toString method.
         * 
         * @return class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~NewProjectPage_3();
};

#endif	/* NEW_PROJECT_PAGE_3_H */