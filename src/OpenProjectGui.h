/* 
 * File:   OpenProjectGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 24, 2015, 3:58 PM
 */

#ifndef OPEN_PROJECT_GUI_H
#define	OPEN_PROJECT_GUI_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>
#include <QString>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "FileTreeGui.h"
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

class OpenProjectGui : public QWidget
{
    Q_OBJECT
            
    private:
        QLineEdit* projectLePtr;
        QFileDialog* projectFileDialogPtr;
        QPushButton* fileDialogPbPtr;
        QPushButton* openProjectPbPtr;
        QPushButton* cancelPbPtr;
        QHBoxLayout* buttonLayoutPtr;
        QGridLayout* outerLayoutPtr;
        
        QString* projectStrPtr;
        
    private slots:
        /**
         * 
         */
        void handleFileDialogPbPtrSlot();
        
        /**
         * 
         */
        void handleOpenProjectPbPtrSlot();
        
        /**
         * 
         */
        void handleCancelPbPtrSlot();
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        OpenProjectGui(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @param projectStrPtr
         */
        void setProjectStrPtr(QString* projectStrPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString* getProjectStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~OpenProjectGui();
};

#endif	/* OPEN_PROJECT_GUI_H */