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
#include "ParseFontConfigXml.h"


int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    //MasterGui masterGui;
    //masterGui.show();
    ParseFontConfigXml parseFontConfigXml;
    parseFontConfigXml.loadFile();
    parseFontConfigXml.readDoc();
    
    //return app.exec();
    return 0;
}
