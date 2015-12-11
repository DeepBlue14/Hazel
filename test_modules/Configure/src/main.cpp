/*
 * File:   main.cpp
 * Module: 
 * Author: james
 * Email: 
 * 
 * See: https://metacpan.org/pod/Makefile::AST
 * 
 * Created on December 4, 2015, 4:33 PM
 * Last Modified: 
 */

#include <QApplication>

#include "ReconfigGui.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    //ReconfigCentralWid reconfigGui;
    ReconfigGui reconfigGui;
    reconfigGui.show();

    return app.exec();
}
