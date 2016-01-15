/* 
 * File:   CustomPkgsGui.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class creates a GUI which allows the user to enter
 *                   custom *_msgs to be added to the "catkin_create_pkg"
 *                   command.
 * 
 * Notes: implement a custom QLineEdit to auto insert msgs on [ENTER]
 * http://stackoverflow.com/questions/25275974/make-qlineedit-detect-tab-key-press-event
 *
 * Created on July 24, 2015, 5:11 PM
 * Last Modified: 12/29/2015
 */

#ifndef CUSTOM_PKGS_GUI_H
#define	CUSTOM_PKGS_GUI_H

#include <QWidget>
#include <QListWidget>
#include <QStringList>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QEvent>
#include <QDebug>

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
        QPushButton* okBtnPtr;
        QPushButton* cancelBtnPtr;
        //QPushButton* applyBtnPtr;
        //QPushButton* helpBtnPtr;
        QHBoxLayout* btnLayout;
        
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
        
        /**
         * 
         */
        void handleOkBtnSlot();
        
        /**
         * 
         */
        void handleCancelBtnSlot();
        
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
        
    signals:
        void updateListSig();
};

#endif	/* CUSTOM_PKGS_GUI_H */