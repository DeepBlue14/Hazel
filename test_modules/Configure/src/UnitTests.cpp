/*
 * File:   UnitTests.cpp
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 * 
 * Created on December 23, 2015, 4:56 PM
 * Last Modified: 
 */

#include <QApplication>

#include "ReconfigGui.h"
#include "EditorGui.h"
#include "PkgScanner.h"
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
    
    int choiceInt;
    cout << "Select an option:"
         << "\n\t 0) Quit"
         << "\n\t 1) Regular run"
         << "\n\t 2) Editor"
         << "\n\t 3) run PkgScanner"
         << cct::bold("\nENTER: ");
    cin >> choiceInt;

    //ReconfigCentralWid reconfigGui;
    ReconfigGui reconfigGui;
    EditorGui editorGui;
    PkgScanner pkgScanner;
    
    switch(choiceInt)
    {
        case 0:
            break;
        case 1:
            reconfigGui.show();
            return app.exec();
        case 2:
            editorGui.show();
            return app.exec();
        case 3:
            pkgScanner.scan();
            break;
        default:
            ;
    }

    
    return EXIT_SUCCESS;
}
