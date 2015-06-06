/* 
 * File:   XmlMaster.h
 * Author: james
 *
 * Created on May 30, 2015, 11:37 PM
 */

#ifndef XML_MASTER_H
#define	XML_MASTER_H

#include <QWidget>
#include <QtXml>
#include <QDomElement>
#include <QFile>
#include <QString>

#include <iostream>

using namespace std;

namespace XmlMaster
{
    QFile* filePtr;
    QDomDocument* xmlDomDocPtr;
    
    void loadFile(QFile* filePtr);
    void printXmlFile(QFile* filePtr);
    void insertAfterLastOccurrence(QFile* filePtr, QString* occurrenceOfStrPtr, QString* insertionStrPtr);
    // ...
}

#endif	/* XML_MASTER_H */