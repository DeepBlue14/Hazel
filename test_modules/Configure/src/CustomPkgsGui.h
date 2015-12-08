/* 
 * File:   CustomPkgsGui.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on July 24, 2015, 5:11 PM
 * Last Modified: 
 */

#ifndef CUSTOM_PKGS_GUI_H
#define	CUSTOM_PKGS_GUI_H

#include <QWidget>
#include <QListWidget>
#include <QStringList>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
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

class CustomPkgsGui : public QWidget
{
    Q_OBJECT
           
    private:
        QStringList* dependsEnteredStrList;
        QLineEdit* dependsLePtr;
        QPushButton* addToListBtnPtr;
        QListWidget* dependsEnteredTypeLw;
        QPushButton* rmFromListBtnPtr;
        
        QGridLayout* outerLayout;
        

    private slots:
        /**
         * 
         */
        void handleAddToListBtnPtrSlot();
        
        /**
         * 
         */
        void handleRmFromListBtnPtrSlot();
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        CustomPkgsGui(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @return 
         */
        QStringList* getDependsEnteredStrList();
        
        /**
         * Classic toString method.
         * 
         * @return class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~CustomPkgsGui();
};

#endif	/* CUSTOM_PKGS_GUI_H */