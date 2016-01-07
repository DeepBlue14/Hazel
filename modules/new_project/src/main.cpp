/*
 * File:   main.cpp
 * Module: new_project
 * Author: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainer: James Kuczynski, jkuczyns@cs.uml.edu
 *
 * Created on January 5, 2016, 2:07 PM
 * Last Modified 1/05/2016
 */

#include <QApplication>

#include "NewProjectGui.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    NewProjectGui newProjectGui;
    newProjectGui.show();
    
    return app.exec();
}
