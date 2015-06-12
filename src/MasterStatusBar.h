/* 
 * File:   MasterStatusBar.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Reference: https://kokkachiprogramming.wordpress.com/2012/11/07/how-to-use-qt-qprogressbar-to-show-busyindefinite-status/
 * 
 * Created on May 19, 2015, 2:27 PM
 */

#ifndef MASTER_STATUS_BAR_H
#define	MASTER_STATUS_BAR_H

#include <QStatusBar>
#include <QProgressBar>

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

class MasterStatusBar : public QStatusBar
{
    private:
        QProgressBar* progressBarPtr;
        
    public:
        MasterStatusBar();
        void initProgressBarPtr();
        ~MasterStatusBar();
};

#endif	/* MASTER_STATUS_BAR_H */