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
#include "ParseFontConfigXml.h"
#include "NewFileGui.h"
#include "RFile.h"
#include "RProcess.h"
#include "MsgParser.h"
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
         << "\n\t1) Regular run"
         << "\n\t2) Test RProcess"
         << "\n\t3) Test QProcess"
         << "\n\t4) Font XML file parsing"
         << "\n\t5) Scout msg parsing"
         << cct::bold("\nENTER: ");
    cin >> choiceInt;
    
    
    MasterGui masterGui;
    RProcess* rprocess = new RProcess();
    QProcess* qprocess = new QProcess();
    ParseFontConfigXml parseFontConfigXml;
    MsgParser msgParser;
    QString tmpFile("/opt/ros/indigo/share/sensor_msgs/msg/MagneticField.msg");
    QString tmpDir("/opt/ros/indigo/share/sensor_msgs");
    
    switch(choiceInt)
    {
        case 1:
            masterGui.show();
            return app.exec();
            break;
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
        default:
            cerr << "Invalid option" << endl;
            break;
    } // End of switch
    
    return EXIT_SUCCESS;
} // End of main()
//*/