/*
 * File:   main.cpp
 * Module: 
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Tests the execution of ROS processes with different levels
 *                   of the ROS environment.
 *
 * Created on January 13, 2016, 4:23 PM
 */

#include <QApplication>
#include <QProcess>
#include <QByteArray>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    QProcess process;
    process.setWorkingDirectory("/home/james/catkin_ws");
    process.start("catkin_make");
    process.waitForFinished(-1);
    QByteArray output = process.readAllStandardOutput();
    output.append(process.readAllStandardError() );
    QString outputStr = output;
    
    qDebug() << output;
    
    
    
    
    return EXIT_SUCCESS;
}