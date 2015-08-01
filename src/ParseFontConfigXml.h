/* 
 * File:   ParseFontConfigXml.h
 * Author: James Kuczynski
 *
 * Created on May 11, 2015, 2:06 PM
 */

#ifndef PARSE_FONT_CONFIG_XML_H
#define	PARSE_FONT_CONFIG_XML_H

#include <QtXml>
#include <QFile>
#include <QIODevice>

#include <iostream>
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class ParseFontConfigXml
{
    private:
        QFile* filePtr;
        QDomDocument* xmlDomDocPtr;
        
    public:
        /**
         * Constructor.
         */
        ParseFontConfigXml();
        
        /**
         * Loads the resouce XML file containing font configurations for the
         * IDE.
         */
        void loadFile(/*QFile* xmlFile*/);
        
        /**
         * Reads in the XML data from the IDEs font configurations file.
         */
        void readDoc();
        
        /**
         * Parses the XML data from the IDEs font configurations file.
         */
        void parseDoc();
        
        /**
         * Destructor.
         */
        ~ParseFontConfigXml();
};

#endif	/* PARSE_FONT_CONFIG_XML_H */

