/* 
 * File:   NewWorkspacePage_1.h
 * Module: NewWorkspace
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 5, 2015, 11:13 AM
 */

#ifndef NEW_WORKSPACE_PAGE_2_H
#define	NEW_WORKSPACE_PAGE_2_H

#include <QWidget>
#include <QStringList>
#include <QString>
#include <QLabel>
#include <QCheckBox>
#include <QLineEdit>
#include <QFileDialog>
#include <QPushButton>
#include <QListWidget>
#include <QFormLayout>
#include <QGridLayout>

#include <iostream>

#include "RosEnv.h"
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

class NewWorkspacePage_2 : public QWidget
{
    Q_OBJECT
           
    private:
        QLabel* titlePtr;
        QLineEdit* workspaceNameLePtr;
        QLineEdit* workspaceLocLePtr;
        QFileDialog* dirDialogPtr;
        QPushButton* locPbPtr;
        QCheckBox* verifyCbPtr;
        
        QGridLayout* locationLayout;
        QFormLayout* formLayout;
        QGridLayout* outerLayout;
        
        QString* workspaceNameStrPtr;
        QString* workspaceLocStrPtr;
        
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
        NewWorkspacePage_2(QWidget* parent = 0);
        
        /**
         * 
         */
        void setWorkspaceNameStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getWorkspaceNameStrPtr();
        
        /**
         * 
         */
        void setWorkspaceLocStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getWorkspaceLocStrPtr();
        
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
        ~NewWorkspacePage_2();
};

#endif	/* NEW_WORKSPACE_PAGE_2_H */
