/* 
 * File:   DetectOnStart.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class detects various programs, directories, etc. on
 *                   the users computer, such as the location of the RIDE
 *                   executable (i.e. where RIDE was installed), the username
 *                   and the ROS distributions installed under /opt.
 *                   
 *
 * Created on August 23, 2015, 8:25 PM
 */

#ifndef DETECT_ON_START_H
#define	DETECT_ON_START_H

#include <QString>
#include <QStringList>
#include <QProcess>

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
        QStringList* installedRosDistrosStrLstPtr;
        
    public:
        DetectOnStart();
        void findUsersName();
        void findInstalledRosDistros();
        void loadPreOpenedProjs();//TODO !!!implement!!!
        void setUsersNameStrPtr(QString* usersNameStrPtr);
        QString* getUsersNameStrPtr();
        void setInstalledRosDistrosStrLstPtr(QStringList* installedRosDistrosStrLstPtr);
        void addToInstalledRosDistrosStrLstPtr(QString* installedRosDistrosStrPtr);
        QStringList* getInstalledRosDistrosStrLstPtr();
        QString* toString();
        ~DetectOnStart();
};

#endif	/* DETECT_ON_START_H */