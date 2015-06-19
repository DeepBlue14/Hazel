/* 
 * File:   HelpPage_3.h
 * Author: james
 *
 * Created on June 18, 2015, 5:50 PM
 */

#ifndef HELPPAGE_3_H
#define	HELPPAGE_3_H

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


class HelpPage_3 : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    private slots:
        ;
        
    public:
        HelpPage_3(QWidget* parent = 0);
        ~HelpPage_3();
};

#endif	/* HELPPAGE_3_H */