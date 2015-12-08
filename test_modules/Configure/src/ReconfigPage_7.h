/* 
 * File:   ReconfigPage_7.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This "page" allows the user to interactively modify the
 *                   new ROS CMakeLists files.  The program will give the user
 *                   suggestions.
 * 
 * Reference: http://www.codeprogress.com/cpp/libraries/qt/showQtExample.php?index=352&key=QMainWindowMoveWidget
 *            http://doc.qt.io/qt-4.8/qrubberband.html#details
 *            
 *
 * Created on October 4, 2015, 7:32 PM
 * Last Modified: 
 */

#include <QWidget>
#include <QTextEdit>
#include <QString>
#include <QGridLayout>

#include <iostream>


using namespace std;

#ifndef RECONFIG_PAGE_7_H
#define	RECONFIG_PAGE_7_H

class ReconfigPage_7 : public QWidget
{
    Q_OBJECT
            
    private:
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        ReconfigPage_7(QWidget* parent = 0);
        QString* toString();
        ~ReconfigPage_7();
        
};

#endif	/* RECONFIG_PAGE_7_H */