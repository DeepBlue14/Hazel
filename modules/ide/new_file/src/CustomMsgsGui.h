/* 
 * File:   CustomMsgsGui.h
 * Module: new_file
 * Author: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainer: James Kuczynski, jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 16, 2015, 4:13 PM
 * Last Modified: 1/05/2016
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

using std::cout;
using std::endl;

class CustomMsgsGui : public QWidget
{
    Q_OBJECT

public:
    CustomMsgsGui(QWidget* parent = 0);
    QString* toString();
    ~CustomMsgsGui();
    
    
private:
    QLineEdit* customPkgLePtr; /**name of package containing custom msg.*/
    QLineEdit* customMsgLePtr; /**name of custom msg.*/
    QPushButton* okBtnPtr;
    QPushButton* cancelBtnPtr;
    QHBoxLayout* btnLayout;
    QGridLayout* outerLayout;
    
    
};

#endif	/* CUSTOM_MSGS_GUI_H */