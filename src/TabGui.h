/* 
 * File:   MasterTabs.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file creates the tab widget that will be contained
 *                   within the central gui.
 * Reference: http://codeprogress.com/cpp/libraries/qt/QTabWidgetClosableTabs.php#.VUQ7AXXd_CI
 * 
 * Created on May 1, 2015, 12:38 AM
 */

#ifndef TAB_GUI_H
#define	TAB_GUI_H

#include <QWidget>
#include <QTabWidget>
#include <QMenu>
#include <QGridLayout>
#include <QString>
#include <QVector>


#include <iostream>

#include "OpeningGui.h"
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

class TabGui : public QWidget
{
    Q_OBJECT
    
    private:
        QTabWidget* tabWidget;
        QGridLayout* outerLayout;
        OpeningGui* openingGui;
        
    private slots:
        void handleCloseTabSlot(int index);
    
    public:
        enum TabType
        {
            FILE,
            TERM,
            OTHER
        };
        QVector<TabType> tabTypeVec;
        
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        TabGui(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @param tabType
         */
        template<class GenericTab>
        void addTab(GenericTab* tab, TabType tabType);
        
        /**
         * 
         * 
         * @return 
         */
        QTabWidget* getTabWidget();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~TabGui();
            
};

#endif	/* TAB_GUI_H */