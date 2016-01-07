/*
 * File:   main.cpp
 * Module: new_file
 * Author: james
 * Maintainer: 
 * File Description: 
 *
 * Created on January 5, 2016, 3:01 PM
 * Last Modified: 1/05/2016
 */

#include <QApplication>

#include "NewFileGui.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    NewFileGui newFileGui;
    newFileGui.show();

    return app.exec();
}
