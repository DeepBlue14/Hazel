/*
 * File:   main.cpp
 * Module: file_tree
 * Author: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainer: James Kuczynski, jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on January 5, 2016, 3:50 PM
 * Last Modified: 1/05/2016
 */

#include <QApplication>

#include "FileTreeGui.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    FileTreeGui fileTreeGui;
    fileTreeGui.show();

    return app.exec();
}
