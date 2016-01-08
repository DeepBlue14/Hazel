/*
 * File:   main.cpp
 * Module: text_editor
 * Author: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainer: James Kuczynski, jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on January 7, 2016, 11:05 PM
 * Last Modified: 
 */

#include <QApplication>

#include "FileGui.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    FileGui fileGui;
    fileGui.show();

    return app.exec();
}