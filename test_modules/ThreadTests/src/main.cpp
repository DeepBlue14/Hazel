/*
 * File:   main.cpp
 * Module: ThreadTests
 * Author: james
 * Email:
 * File Description: 
 * 
 * 
 * Created on December 31, 2015, 11:22 PM
 * Last Modified: 
 */

#include <QApplication>
#include <QDebug>

#include "MasterGui.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    MasterGui masterGui;
    masterGui.show();
    
    return app.exec();
}