/* 
 * File:   FindInstalledRosPkgs.h
 * Module: PkgInstaller
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class runs the "rospack list-names" command on the
 *                   system to get a list of the ros packages installed on
 *                   the computer.
 *
 * Created on August 26, 2015, 6:25 PM
 */

#ifndef FIND_ROSPACK_PKGS_H
#define	FIND_ROSPACK_PKGS_H

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

class FindRospackPkgs
{

public:
    FindRospackPkgs();
    void findPkgs();
    QString* toString();
    ~FindRospackPkgs();

    
private:
    QStringList* rosPkgStrLstPtr;

};

#endif	/* FIND_ROSPACK_PKGS_H */