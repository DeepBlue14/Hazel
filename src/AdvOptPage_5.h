/* 
 * File:   AdvOptPage_5.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class provides the "Run" options for AdvOptionsGui.
 *
 * Created on July 28, 2015, 7:06 PM
 */

#ifndef ADV_OPT_PAGE_5_H
#define	ADV_OPT_PAGE_5_H

#include <QWidget>
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

class AdvOptPage_5 : public QWidget
{
    Q_OBJECT
      
    private:
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        AdvOptPage_5(QWidget* parent = 0);
        ~AdvOptPage_5();
        
};

#endif	/* ADV_OPT_PAGE_5_H */