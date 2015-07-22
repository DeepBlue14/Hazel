/*
 * File:   main.cpp
 * Author: james
 *
 * Created on June 19, 2015, 1:49 AM
 */

#include <QtGui>
#include <QApplication>
#include <ros/ros.h>
#include <ecl/threads/thread.hpp> // or boost threads if you prefer

#include "Spinner.h"
#include "MasterGui.h"


/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char **argv) {

    ros::init(argc,argv,"RQT2");
    ros::NodeHandle node;
    Spinner spinner;

    QApplication app(argc, argv);
    MasterGui w;  // automatically starts spinning a qgoo node inside
    w.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    int result = app.exec();
    return result;
}
