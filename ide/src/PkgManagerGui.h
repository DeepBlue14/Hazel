/* 
 * File:   PkgManagerGui.h
 * Module: PkgInstaller
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains the UI which holds the installer data,
 *                   including the tabs (see PkgManagerTabs.h).
 *
 * Created on August 27, 2015, 10:36 AM
 */

#ifndef PKG_MANAGER_GUI_H
#define	PKG_MANAGER_GUI_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QLineEdit>
#include <QTabWidget>
#include <QComboBox>
#include <QListWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "PkgManagerTabs.h"

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


class PkgManagerGui : public QWidget
{
    Q_OBJECT
            
    private:
        QTabWidget* tabWidgetPtr;
        QLineEdit* searchLePtr;
        QStringList* rosVersionsStrLstPtr;
        QComboBox* rosVersionCbPtr;
        QPushButton* installBtnPtr;
        QPushButton* exitBtnPtr;
        QPushButton* helpBtnPtr;
        QHBoxLayout* rightHLayout;
        QHBoxLayout* btnLayout;
        QGridLayout* outerLayout;
        
        PkgManagerTabs* installedTab;
        PkgManagerTabs* availableTab;
       
    private slots:
        void handleDistroChangeSlot(int newIndex);
        
    public:
        PkgManagerGui(QWidget* parent = 0);
        QString* toString();
        ~PkgManagerGui();
};


#endif	/* PKG_MANAGER_GUI_H */