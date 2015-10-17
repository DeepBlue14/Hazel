/* 
 * File:   XmlMaster.h
 * Module: XmlLib
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Basic XML file reader namespace to be used by several
 *                   classes of this project.
 * 
 * Use QXmlStreamReader instead of dom stuff
 * Ref: http://doc.qt.io/qt-4.8/qxmlstreamreader.html#isEndElement
 *
 * Created on May 30, 2015, 11:37 PM
 */

#ifndef XML_MASTER_H
#define	XML_MASTER_H

#include <QWidget>
#include <QtXml>
#include <QXmlStreamReader>
#include <QFile>
#include <QString>

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

using namespace std;

namespace XmlMaster
{
    //QFile* filePtr;
    //QDomDocument* xmlDomDocPtr;
    
    /**
     * Loads an XML file.
     * 
     * @param filePtr reference to the file.
     */
    void loadFile(QFile* filePtr);
    
    /**
     * Outputs the contents of the file. 
     * 
     * @param filePtr reference to the file.
     */
    void printXmlFile(QFile* filePtr);
    
    /**
     * Inserts data into a XML file at a specified location.
     * 
     * @param filePtr reference to file.
     * @param occurrenceOfStrPtr search param.
     * @param insertionStrPtr data to insert.
     */
    void insertAfterLastOccurrence(QFile* filePtr, QString* occurrenceOfStrPtr, QString* insertionStrPtr);
    // ...
}

#endif	/* XML_MASTER_H */