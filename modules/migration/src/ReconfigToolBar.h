/* 
 * File:   ReconfigToolBar.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 * 
 * References: http://zetcode.com/gui/qt4/menusandtoolbars/
 *
 * Created on August 18, 2015, 1:45 PM
 * Last Modified: 
 */

#ifndef RECONFIG_TOOLBAR_H
#define	RECONFIG_TOOLBAR_H

#include <QWidget>
#include <QToolBar>
#include <QString>

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

class ReconfigToolBar : public QWidget
{
    Q_OBJECT
            
    private:
        QToolBar* toolbar_1Ptr;
        
    private slots:
        ;
        
    public:
        ReconfigToolBar(QWidget* parent = 0);
        void initToolBarGroup_1();
        QString* toString();
        ~ReconfigToolBar();
};

#endif	/* RECONFIG_TOOLBAR_H */