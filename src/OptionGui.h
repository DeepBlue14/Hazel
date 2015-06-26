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
#include <QGridLayout>

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
        QGridLayout* outerLayout;
        
    public:
        OptionGui(QWidget* parent = 0);
        ~OptionGui();
};

#endif	/* OPTIONS_GUI_H */