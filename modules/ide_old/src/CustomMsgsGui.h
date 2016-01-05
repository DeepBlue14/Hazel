/* 
 * File:   CustomMsgsGui.h
 * Module: NewFile
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 16, 2015, 4:13 PM
 */

#ifndef CUSTOM_MSGS_GUI_H
#define	CUSTOM_MSGS_GUI_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QString>
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

class CustomMsgsGui : public QWidget
{
    Q_OBJECT
            
    private:
        QLineEdit* customPkgLePtr; /**name of package containing custom msg.*/ 
        QLineEdit* customMsgLePtr;/**name of custom msg.*/ 
        QPushButton* okBtnPtr;
        QPushButton* cancelBtnPtr;
        QHBoxLayout* btnLayout;
        QGridLayout* outerLayout;
        
    public:
        CustomMsgsGui(QWidget* parent = 0);
        QString* toString();
        ~CustomMsgsGui();
};

#endif	/* CUSTOM_MSGS_GUI_H */