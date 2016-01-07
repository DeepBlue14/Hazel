/* 
 * File:   LauncherGui.h
 * Module: 
 * Author: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainer: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainer:
 * File Description: This is the base class of the RunPanelGui, a fragment of
 *                   the central UI, which will (by default) by part of the
 *                   East group.  It will provide the user with a quick and
 *                   easy modifiable launcher for ROS nodes. 
 *
 * Created on January 6, 2016, 10:55 PM
 */

#ifndef LAUNCHER_GUI_H
#define LAUNCHER_GUI_H

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

//#include "SearchWidget.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using std::cout;
using std::endl;

class LauncherGui : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit LauncherGui(QWidget* parent = 0);

    /**
     * 
     */
    void loadData();

    /**
     * 
     * 
     * @param runablesTblWidItmPtrVecPtr
     */
    void setRunablesTblWidItmPtrVecPtr(QVector<QTableWidgetItem*>* runablesTblWidItmPtrVecPtr);

    /**
     * 
     * 
     * @return 
     */
    QVector<QTableWidgetItem*>* getRunablesTblWidItmPtrVecPtr();

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
    virtual ~LauncherGui();
    
    
private slots:
    ;
    
    
private:
    int numOfNodes;
    QTableWidget* tableWidgetPtr;
    QVector<QTableWidgetItem*>* runablesTblWidItmPtrVecPtr;
    QTabWidget* westTabWidgetPtr;
    QGridLayout* outerLayout;
};

#endif /* LAUNCHER_GUI_H */