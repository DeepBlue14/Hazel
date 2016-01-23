/* 
 * File:   PkgManagerTabs.h
 * Module: PkgInstaller
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains the ...
 *
 * Created on August 27, 2015, 5:44 PM
 */

#ifndef PKG_MANAGER_TABS_H
#define	PKG_MANAGER_TABS_H

#include <QWidget>
#include <QListWidget>
#include <QString>
#include <QThread>
#include <QtConcurrentRun>
#include <QGridLayout>

#include <iostream>

//#include "FetchWebSource.h"
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

class PkgManagerTabs : public QWidget
{
    Q_OBJECT

public:
    explicit PkgManagerTabs(QWidget* parent = 0);
    void load(QString rosDistro = "indigo", int fetchOrFind = 0);
    QString* toString();
    virtual ~PkgManagerTabs();


private slots:
    ;


private:
    QListWidget* pkgNamesLstWidPtr;
    QListWidget* pkgDescLstWidPtr;
    QStringList* pkgNamesStrLstPtr; //pkg names for the current distro
    QStringList* pkgDescStrLstPtr;
    QGridLayout* outerLayout;

    //        FetchWebSource* fetchWebSourcePtr;
        
        
};

#endif	/* PKG_MANAGER_TABS_H */