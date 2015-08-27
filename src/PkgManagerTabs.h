/* 
 * File:   PkgManagerTabs.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 27, 2015, 5:44 PM
 */

#ifndef PKG_MANAGER_TABS_H
#define	PKG_MANAGER_TABS_H

#include <QWidget>
#include <QListWidget>
#include <QString>
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

class PkgManagerTabs : public QWidget
{
    Q_OBJECT
            
    private:
        QListWidget* pkgNamesLstWidPtr;
        QListWidget* pkgDescLstWidPtr;
        QStringList* pkgNamesStrLstPtr; //pkg names for the current distro
        QStringList* pkgDescStrLstPtr;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        PkgManagerTabs(QWidget* parent = 0);
        QString* toString();
        ~PkgManagerTabs();
};

#endif	/* PKG_MANAGER_TABS_H */