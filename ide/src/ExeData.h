/* 
 * File:   ExeData.h
 * Module: Run
 * Author: James Kuczynski
 * File Description: This serves as a container class, to hold the data of a
 *                   executable.  This executable can be a script, a ROS node,
 *                   or a launch file.
 *
 * Created on November 20, 2015, 2:14 PM
 */

#ifndef EXE_DATA_H
#define	EXE_DATA_H

#include <QWidget>
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

class ExeData : public QWidget
{
    Q_OBJECT
            
    private:
        enum Type
        {
            SCRIPT,
            NODE,
            LAUNCH_FILE
        };
        
        Type* type; //what type of exe is it?
        bool runMe; //should it be run, or is it currently off?
        int order; //if multiple exes are run, in what order should this be done?
        QString* exeCmd; //string command to run the exe
        
    public:
        ExeData(QWidget* parent = 0);
        void setType(Type* type);
        Type* getType();
        void setRunMe(bool runMe);
        bool getRunMe();
        void setOrder(int order);
        int getOrder();
        void setExeCmd(QString* exeCmd);
        QString* getExeCmd();
        QString* toString();
        ~ExeData();
};

#endif	/* EXE_DATA_H */