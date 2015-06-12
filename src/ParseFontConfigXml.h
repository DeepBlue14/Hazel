/* 
 * File:   ParseFontConfigXml.h
 * Author: james
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
        ParseFontConfigXml();
        void loadFile(/*QFile* xmlFile*/);
        void readDoc();
        void parseDoc();
        ~ParseFontConfigXml();
};

#endif	/* PARSE_FONT_CONFIG_XML_H */

