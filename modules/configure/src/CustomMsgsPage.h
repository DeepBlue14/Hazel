/* 
 * File:   CustomMsgsPage.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on December 22, 2015, 2:26 PM
 * Last Modified: 
 */

#ifndef CUSTOM_MSGS_PAGE_H
#define CUSTOM_MSGS_PAGE_H

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

class CustomMsgsPage : public QWidget
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
        CustomMsgsPage(QWidget* parent = 0);
        QString* toString();
        ~CustomMsgsPage();
};

#endif /* CUSTOM_MSGS_PAGE_H */