/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: james
 *
 * Created on January 23, 2016, 11:13 AM
 */

#include <QApplication>

#include <iostream>
#include <string>


#include "OverriddenOperators.h"
#include "Env.h"
#include "CustomizableConsoleText.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    env::init();
    
    cout << "username: " << env::username.toStdString() << endl;
    cout << "sigilHome: " << env::sigilHome.toStdString() << endl;
    cout << "rideInstallLoc: " << env::rideInstallLoc.toStdString() << endl;
    cout << "imagesInstallLoc: " << env::imagesInstallLoc.toStdString() << endl;

    cout << cct::blue("Hello cct!") << endl;
    
    return EXIT_SUCCESS;
}