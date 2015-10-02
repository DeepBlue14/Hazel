/* 
 * File:   RunPanelGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This is the base class of the RunPanelGui, a fragment of
 *                   the central UI, which will (by default) by part of the
 *                   East group.  It will provide the user with a quick and
 *                   easy modifiable launcher for ROS nodes. 
 *
 * Created on October 2, 2015, 9:38 AM
 */

#ifndef RUN_PANEL_GUI_H
#define	RUN_PANEL_GUI_H

#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QVector>
#include <QLabel>
#include <QCheckBox>
#include <QSpinBox>
#include <QSplitter>
#include <QTabWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QString>

#include <iostream>

#include "SearchWidget.h"
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

class RunPanelGui : public QWidget
{
    Q_OBJECT
    
    private:
        QTableWidget* tableWidgetPtr;
        QVector<QTableWidgetItem*>* runablesTblWidItmPtrVecPtr;
        QTabWidget* westTabWidgetPtr;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        RunPanelGui(QWidget* parent = 0);
        
        /**
         * 
         */
        void loadData();
        
        /**
         * 
         * 
         * @param masterTabWidgetPtr
         */
        void setWestTabWidgetPtr(QTabWidget* masterTabWidgetPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QTabWidget* getWestTabWidgetPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~RunPanelGui();
};

#endif	/* RUN_PANEL_GUI_H */