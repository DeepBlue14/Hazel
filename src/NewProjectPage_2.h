/* 
 * File:   NewProjectPage_1.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 5, 2015, 11:13 AM
 */

#ifndef NEW_PROJECT_PAGE_2_H
#define	NEW_PROJECT_PAGE_2_H

#include <QWidget>
#include <QStringList>
#include <QString>
#include <QLineEdit>
#include <QFileDialog>
#include <QPushButton>
#include <QListWidget>
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

class NewProjectPage_2 : public QWidget
{
    Q_OBJECT
           
    private:
        QLineEdit* projectNameLePtr;
        QLineEdit* projectLocLePtr;
        QFileDialog* dirDialogPtr;
        QPushButton* locPbPtr;
        QVector<QListWidgetItem*>* projectTypeLstWidItemPtrVecPtr;
        QListWidget* projectTypeLwPtr; //maxVisibleItems : int
        
        QGridLayout* locationLayout;
        QFormLayout* formLayout;
        QGridLayout* outerLayout;
        
        QString* projectNameStrPtr;
        QString* projectLocStrPtr;
        QString* projectTypeStrPtr;
        
    private slots:
        /**
         * 
         */
        void handleLocPbPtrSlot();
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        NewProjectPage_2(QWidget* parent = 0);
        
        /**
         * 
         */
        void setProjectNameStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getProjectNameStrPtr();
        
        /**
         * 
         */
        void setProjectLocStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getProjectLocStrPtr();
        
        /**
         * 
         */
        void setProjectTypeStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getProjectTypeStrPtr();
        
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
        ~NewProjectPage_2();
};

#endif	/* NEW_PROJECT_PAGE_2_H */