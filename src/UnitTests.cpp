/*
 * File:   UnitTests.cpp
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file provides a series of unit tests to validate
 *                   different components.  If running with NetBeans IDE,
 *                   you will have to comment out the main function in main.cpp,
 *                   otherwise you will get a "multiple main" error.
 *
 * Created on June 15, 2015, 4:00 PM
 */
///*
#include <QApplication>
#include <QString>
#include <QProcess>

#include <string>
#include <iostream>
#include <cstdlib>

#include "MasterGui.h"
#include "HelpGui.h"
#include "ParseFontConfigXml.h"
#include "NewFileGui.h"
#include "RFile.h"
#include "RProcess.h"
#include "MsgParser.h"
#include "RTerm.h"
#include "OptionGui.h"
#include "PkgManagerGui.h"
#include "ReconfigGui.h"
#include "FetchWebSource.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif


int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    
    int choiceInt;
    cout << "Select an option:"
         << "\n\t 0) Quit"
         << "\n\t 1) Regular run"
         << "\n\t 2) Test RProcess"
         << "\n\t 3) Test QProcess"
         << "\n\t 4) Font XML file parsing"
         << "\n\t 5) MsgParser"
         << "\n\t 6) Web Extraction"
         << "\n\t 7) Help GUI"
         << "\n\t 8) RTerm (standalone)"
         << "\n\t 9) Options"
         << "\n\t10) Ros Reconfigure"
         << "\n\t11) software center"
         << cct::bold("\nENTER: ");
    cin >> choiceInt;
    
    FetchWebSource fw;
    
    MasterGui masterGui;
    HelpGui helpGui;
    RProcess* rprocess = new RProcess();
    QProcess* qprocess = new QProcess();
    ParseFontConfigXml parseFontConfigXml;
    MsgParser msgParser;
    QString tmpFile("/opt/ros/indigo/share/sensor_msgs/msg/MagneticField.msg");
    QString tmpDir("/opt/ros/indigo/share/sensor_msgs");
    RTerm rterm;
    OptionGui optionGui;
    ReconfigGui reconfigGui;
    PkgManagerGui pkgManagerGui;
    
    switch(choiceInt)
    {
        case 0:
            //return EXIT_SUCCESS;
            break;
        case 1:
            masterGui.show();
            return app.exec();
        case 2:
            cout << "Beginning RProcess test." << endl;
            rprocess->startDetached("catkin_make");
            cout << "Finished RProcess test." << endl;
            break;
        case 3:
            qprocess->execute("#!/bin/bash");
            qprocess->execute("source ~/.bashrc");
            qprocess->execute("source ~/catkin_ws/devel/setup.bash");
            qprocess->execute("cd ~/catkin_ws");
            qprocess->execute("catkin_make");
            break;
        case 4:
            parseFontConfigXml.loadFile();
            parseFontConfigXml.readDoc();
            break;
        case 5:
            //msgParser.parseFile(tmpFile);
            msgParser.parseDir(&tmpDir);
            cout << msgParser.toString()->toStdString() << endl;
            return EXIT_SUCCESS;
            break;
        case 6:
            //fw.view.show();
            return app.exec();
            break;
        case 7:
            helpGui.show();
            return app.exec();
        case 8:
            rterm.show();
            return app.exec();
        case 9:
            optionGui.show();
            return app.exec();
        case 10:
            reconfigGui.show();
            return app.exec();
        case 11:
            pkgManagerGui.show();
            return app.exec();
        default:
            masterGui.show();
            return app.exec();
            break;
    } // End of switch

    
    //fw.doStuff();
    
    return EXIT_SUCCESS;
} // End of main()
//*/