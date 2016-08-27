/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: james
 *
 * Created on August 25, 2016, 11:57 AM
 */

#include <QApplication>

#include "SharedOperations.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    mdl::makeFile();

    return app.exec();
}