/* 
 * File:   ParseFontConfigXml.h
 * Module: xml_parser
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file parses configuration files which define font
 *                   attributes for the text editor.
 *
 * Created on May 11, 2015, 2:06 PM
 * last Modified: 1/23/2016
 */

#ifndef PARSE_FONT_CONFIG_XML_H
#define	PARSE_FONT_CONFIG_XML_H

#include <QtXml>
#include <QFile>
#include <QIODevice>

#include <iostream>

#include "RosEnv.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using std::cout;
using std::cerr;
using std::endl;

class ParseFontConfigXml
{
    
public:
    /**
     * Constructor.
     */
    ParseFontConfigXml();

    /**
     * Loads the resource XML file containing font configurations for the
     * IDE.
     */
    void loadFile(/*QFile* xmlFile*/);

    /**
     * Reads in the XML data from the IDEs font configurations file.
     */
    void readDoc();

    /**
     * Parses the XML data from the IDEs font configurations file.
     * TODO: implement!
     */
    void parseDoc();

    /**
     * Destructor.
     */
    ~ParseFontConfigXml();

private:
    QFile* filePtr;
    QDomDocument* xmlDomDocPtr;


};

#endif	/* PARSE_FONT_CONFIG_XML_H */

