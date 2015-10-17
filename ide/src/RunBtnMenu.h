/* 
 * File:   RunBtnMenu.h
 * Module: Core
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class implements a menu for the "Run" button located
 *                   in the North toolbar. 
 *
 * Created on October 8, 2015, 5:06 PM
 */

#ifndef RUN_BTN_MENU_H
#define	RUN_BTN_MENU_H

#include <QWidget>
#include <QMenu>
#include <QString>
#include <QPixmap>

#include <iostream>

#include "RosEnv.h"

using namespace std;

class RunBtnMenu : public QWidget
{
    Q_OBJECT
            
    private:
        QMenu* runBtnMenuPtr;
        
    private slots:
        ;
        
    public:
        RunBtnMenu(QWidget* parent = 0);
        void initMenu();
        void addProject(QString* projectNameStrPtr);
        void addExe(QString* projectNameStrPtr = new QString("unaffiliated"), QString* exeNameStrPtr = 0);
        void addLaunch(QString* projectNameStrPtr = new QString("unaffiliated"), QString* launchNameStrPtr = 0);
        QMenu* getMenu();
        QString* toString();
        ~RunBtnMenu();
};

#endif	/* RUN_BTN_MENU_H */