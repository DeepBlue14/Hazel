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
    fileTreeGui.setProjectRootAbsPathStrPtr(new QString("/home/james/catkin_ws/src/test_node") );
    fileTreeGui.setProjectNameStrPtr(new QString("test_node") );
    fileTreeGui.initTree();
    
    fileTreeGui.setProjectRootAbsPathStrPtr(new QString("/home/james/catkin_ws/src/chatter_test") );
    fileTreeGui.setProjectNameStrPtr(new QString("chatter_test") );
    fileTreeGui.initTree();
    
    fileTreeGui.show();
    
    
    return app.exec();
}
