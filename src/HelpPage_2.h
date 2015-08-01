/* 
 * File:   HelpPage_2.h
 * Author: james
 *
 * Created on June 18, 2015, 5:49 PM
 */

#ifndef HELPPAGE_2_H
#define	HELPPAGE_2_H

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


class HelpPage_2 : public QWidget
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
        HelpPage_2(QWidget* parent = 0);
        
        /**
         * 
         */
        ~HelpPage_2();
};

#endif	/* HELPPAGE_2_H */