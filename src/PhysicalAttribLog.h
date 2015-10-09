/* 
 * File:   PhysicalAttribLog.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file will organize and store pointers to the current
 *                   open project, its directories, and files.
 *
 * Created on May 17, 2015, 2:07 PM
 */

#ifndef PHYSICAL_ATTRIB_LOG_H
#define	PHYSICAL_ATTRIB_LOG_H

#include <QWidget>
#include <QFile>
#include <QDir>
#include <QVector>

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

class PhysicalAttribLog : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent class QWidget.
         */
        PhysicalAttribLog(QWidget* parent = 0);
        
        /**
         * Destructor.
         */
        ~PhysicalAttribLog();
};

#endif	/* PHYSICAL_ATTRIB_LOG_H */