/*
 * File:   main.cpp
 * Author: james
 *
 * Created on November 6, 2015, 1:40 PM
 */

#include <QApplication>
//#include "ExeDisplay.h"
#include "OutputUi.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    //ExeDisplay outputGui;
    //outputGui.show();
    OutputUi outputUi;
    outputUi.show();
    
    return app.exec();
}