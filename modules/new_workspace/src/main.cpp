/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Module: new_workspace
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on January 23, 2016, 2:00 PM
 * Last Modified: 1/23/2016
 */

#include <QApplication>

#include "NewWorkspaceGui.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    NewWorkspaceGui newWorkspaceGui;
    newWorkspaceGui.show();
    return app.exec();
}