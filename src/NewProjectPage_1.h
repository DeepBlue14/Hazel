/* 
 * File:   NewProjectPage_1.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 17, 2015, 11:20 PM
 */

#ifndef NEW_PROJECT_PAGE_1_H
#define	NEW_PROJECT_PAGE_1_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QStringList>
#include <QListWidget>
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

class NewProjectPage_1 : public QWidget
{
    Q_OBJECT
            
    private:
        QLabel* titlePtr;
        QVector<QListWidgetItem*>* rosVersionsStrLstPtr;
        QVector<QListWidgetItem*>* newOrFromExStrLstPtr;
        QListWidget* rosVersionsLwPtr;
        QListWidget* newOrFromExLwPtr;
        
        QGridLayout* outerLayoutPtr;
        
        QString* rosVersionStrPtr;
        QString* newOrFromExStrPtr;
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        NewProjectPage_1(QWidget* parent = 0);
        
        /**
         * 
         */
        void setRosVersionStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getRosVersionStrPtr();
        
        /**
         * Mutator.
         */
        void setNewOrFromExStrPtr();
        
        /**
         * Accessor.
         * 
         * @return 
         */
        QString* getNewOrFromExStrPtr();
        
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
        ~NewProjectPage_1();
};

#endif	/* NEW_PROJECT_PAGE_1_H */

