/* 
 * File:   Dashboard.h
 * Module: Configure
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on December 15, 2015, 5:59 PM
 * Last Modified: 
 */

#ifndef RECONFIG_DASHBOARD_H
#define	RECONFIG_DASHBOARD_H

#include <QWidget>
#include <QLabel>
#include <QStringList>
#include <QVector>
#include <QIcon>
#include <QTableWidget>
#include <QHeaderView>
#include <QListWidget>
#include <QString>
#include <QGridLayout>

#include <iostream>

#include "QCellWidget.h"
#include "RosEnv.h"

using namespace std;

class ReconfigDashboard : public QWidget
{
    Q_OBJECT
            
    private:
        //QListWidget* historyLstWidPtr;
        QTableWidget* historyTblWidPtr;
        QGridLayout* outerLayout;
        
    public:
        ReconfigDashboard(QWidget* parent = 0);
        QString* toString();
        ~ReconfigDashboard();
};


#endif	/* RECONFIG_DASHBOARD_H */