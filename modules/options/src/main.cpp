/*
 * File:   main.cpp
 * Module: 
 * Author: james
 * Email:
 * File Description:
 *
 * Created on January 31, 2016, 9:36 PM
 * Last Modified: 
 */

#include <QApplication>

#include "OptionsGui.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    OptionsGui optionsGui;
    optionsGui.show();
    
    return app.exec();
}