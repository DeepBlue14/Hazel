/* 
 * File:   HelpPage_4.h
 * Module: Help
 * Author: james
 *
 * Created on June 18, 2015, 5:50 PM
 */

#ifndef HELPPAGE_4_H
#define	HELPPAGE_4_H

#include <QWidget>

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


class HelpPage_4 : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    private slots:
        ;
        
    public:
        /**
         * 
         * 
         * @param parent
         */
        HelpPage_4(QWidget* parent = 0);
        
        /**
         * 
         */
        ~HelpPage_4();
};

#endif	/* HELPPAGE_4_H */