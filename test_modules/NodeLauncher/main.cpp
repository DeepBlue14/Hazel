/*
 * File:   main.cpp
 * Author: james
 *
 * Created on November 6, 2015, 1:40 PM
 */

#include <QApplication>
#include "Core.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    Core outputGui;
    outputGui.show();
    
    
    return app.exec();
}