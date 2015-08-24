/* 
 * File:   DetectOnStart.h
 * Author: james
 * Email:
 * File Description: This class detects various programs, directories, etc. on
 *                   the users computer, such as the username and the ROS
 *                   distributions installed under /opt. 
 *
 * Created on August 23, 2015, 8:25 PM
 */

#ifndef DETECT_ON_START_H
#define	DETECT_ON_START_H

#include <QString>
#include <QStringList>

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

class DetectOnStart
{
    private:
        QString* usersNameStrPtr;
        QStringList* rosDistrosStrLstPtr;
        
    public:
        DetectOnStart();
        void setUsersNameStrPtr(QString* usersNameStrPtr);
        QString* getUsersNameStrPtr();
        void setRosDistrosStrLstPtr(QStringList* rosDistrosStrLstPtr);
        void addToRosDistrosStrLstPtr(QString* rosDistrosStrPtr);
        QStringList* getRosDistrosStrLstPtr();
        QString* toString();
        ~DetectOnStart();
};

#endif	/* DETECT_ON_START_H */