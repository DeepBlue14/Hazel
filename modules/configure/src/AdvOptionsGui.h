/* 
 * File:   AdvOptionsGui.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains advanced options for setting up a 
 *                   ROS program, including custom CMake conditions.  This will
 *                   also take into consideration that the use may want to omit
 *                   certain options which were included in the original
 *                   project.
 *
 * Created on July 24, 2015, 5:12 PM
 * Last Modified: 
 */

#ifndef ADV_OPTIONS_GUI_H
#define	ADV_OPTIONS_GUI_H

#include <QWidget>
#include <QListWidget>
#include <QStringList>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
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

class AdvOptionsGui : public QWidget
{
    Q_OBJECT
            
    private:
        QStringList* optionsStrLstPtr;
        QListWidget* optionsLwPtr;
        QPushButton* okBtn;
        QPushButton* cancelBtn;
        QPushButton* applyBtn;
        QPushButton* helpBtn;
        QHBoxLayout* buttonLayout;
        QGridLayout* outerLayout;
        
    private slots:
        /**
         * 
         */
        void handleOkBtnSlot();
        
        /**
         * 
         */
        void handleCancelBtnSlot();
        
        /**
         * 
         */
        void handleApplyBtnSlot();
        
        /**
         * 
         */
        void handleHelpBtnSlot();
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        AdvOptionsGui(QWidget* parent = 0);
        
        /**
         * 
         */
        void initBtns();
        //loaders and unloaders for each page
        /**
         * Classic toString method.
         * 
         * @return class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~AdvOptionsGui();
};

#endif	/* ADV_OPTIONS_GUI_H */