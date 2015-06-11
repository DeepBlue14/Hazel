/*
 * File:   main.cpp
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Project main function.
 *
 * Created on April 18, 2015, 8:13 PM
 * 
 * 
 */

#include <QApplication>
#include "MasterGui.h"

//#include "ParseFontConfigXml.h"
//#include "NewFileGui.h"
//#include "File.h"
//#include <QString>
//#include "MsgParser.h"
//#include <string>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    MasterGui masterGui;
    masterGui.show();
    
    //ParseFontConfigXml parseFontConfigXml;
    //parseFontConfigXml.loadFile();
    //parseFontConfigXml.readDoc();
    
    //NewFileGui newFileGui;
    //newFileGui.show();
    //Files files;
    //QFile* tmp = new QFile(); tmp = files.createFile(new QString("/home/james/NetBeansProjects/ride/"),
    //                                                 new QString("Test_File"),
    //                                                 new QString(".cpp") );
    //files.openRdWrFile(tmp);
    
    //MsgParser msgParser;
    //string tmp("/opt/ros/indigo/share/sensor_msgs/msg/Image.msg");
    //msgParser.parse(&tmp);
    //cout << msgParser.toString() << endl;
    
    return app.exec();
    //return 0;
}