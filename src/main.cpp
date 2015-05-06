/*
 * File:   main.cpp
 * Author: james
 *
 * Created on April 18, 2015, 8:13 PM
 * 
 * Lookup:
 * http://doc.qt.io/qt-4.8/qtreewidget.html
 * http://doc.qt.io/qt-5/qmainwindow.html
 * http://doc.qt.io/qt-4.8/qdockwidget.html
 * http://doc.qt.io/qt-4.8/qtreeview.html
 * 
 */

#include <QApplication>

#include "MasterGui.h"


int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    MasterGui masterGui;
    masterGui.show();
    
    return app.exec();
}
