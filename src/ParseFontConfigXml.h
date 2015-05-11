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

#include <iostream>

using namespace std;

class ParseFontConfigXml
{
    private:
        QFile* filePtr;
        QDomDocument* xmlDomDocPtr;
        
    public:
        ParseFontConfigXml();
        void loadFile(QFile* xmlFile);
        void readDocRoot();
        void parseDoc();
        ~ParseFontConfigXml();
};

#endif	/* PARSE_FONT_CONFIG_XML_H */

