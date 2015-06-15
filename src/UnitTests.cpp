/*
 * File:   UnitTests.cpp
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file provides a series of unit tests to validate
 *                   different components.  If running with NetBeans IDE,
 *                   you will have to comment out the main method in main.cpp,
 *                   otherwise you will get a "multiple main" error.
 *
 * Created on June 15, 2015, 4:00 PM
 */

#include <QApplication>
#include <QString>

#include <string>
#include <iostream>

#include "MasterGui.h"
#include "ParseFontConfigXml.h"
#include "NewFileGui.h"
#include "RFile.h"
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
         << "\n\t2) xxxx"
         << "\n\t3) xxxx"
         << "\n\t4) xxxx"
         << "\n\t5) Scout msg parsing"
         << "ENTER: " << endl;
    cin >> choiceInt;

    
    MasterGui masterGui;
    MsgParser msgParser;
    string tmp("/opt/ros/indigo/share/sensor_msgs/msg/Image.msg");
    
    switch(choiceInt)
    {
        case 1:
            masterGui.show();
            return app.exec();
            break;
        case 2:
            cout << "case 2" << endl;
            break;
        case 3:
            cout << "case 3" << endl;
            break;
        case 4:
            cout << "case 4" << endl;
            break;
        case 5:
            msgParser.parse(&tmp);
            cout << msgParser.toString() << endl;
            return 0;
            break;
        default:
            cerr << "Invalid option" << endl;
            break;
    } // End of switch
    
} // End of main()