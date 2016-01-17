/*
 * File:   main.cpp
 * Module: 
 * Author: James Kuczynski
 *
 * Created on January 16, 2016, 12:49 AM
 */

#include <QApplication>

#include "PkgManagerGui.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    PkgManagerGui pkgManagerGui;
    pkgManagerGui.show();
    
    
    return app.exec();
}
