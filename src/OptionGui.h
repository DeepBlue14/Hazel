/* 
 * File:   OptionsGui.h
 * Author: James Kuczynski
 * Email jkuczyns@cs.uml.edu
 * File Description: GUI to allow the user to modify the look and feel.
 *                   This will be located by going to the menu bar at the top
 *                   of the application, and select Tools -> Options.
 *
 * Created on June 25, 2015, 4:47 PM
 */

#ifndef OPTIONS_GUI_H
#define	OPTIONS_GUI_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>
//ok, apply, cancel, help

#include <iostream>

#include "OptionPage_1.h"
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

class OptionGui : public QWidget
{
    Q_OBJECT
            
    private:
        OptionPage_1* optionPage_1Ptr;
        
        QPushButton* okBtn;
        QPushButton* applyBtn;
        QPushButton* cancelBtn;
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
        void handleApplyBtnSlot();
        
        /**
         * 
         */
        void handleCancelBtnSlot();
        
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
        OptionGui(QWidget* parent = 0);
        
        /**
         * 
         */
        void initBtns();
        
        /**
         * Destructor.
         */
        ~OptionGui();
};

#endif	/* OPTIONS_GUI_H */