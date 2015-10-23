/*
 * File:   main.cpp
 * Author: james
 *
 * Created on July 22, 2015, 10:42 AM
 */

#include <QApplication>

#include "MasterGui.h"

int main(int argc, char *argv[]) 
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    MasterGui masterGui;
    masterGui.show();
    
    return app.exec();
}
