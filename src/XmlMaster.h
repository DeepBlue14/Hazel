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
#include <QFile>
#include <QString>


namespace XmlMaster
{
    void insertAfterLastOccurrence(QFile* filePtr, QString* occurrenceOfStrPtr, QString* insertionStrPtr);
    // ...
}

#endif	/* XML_MASTER_H */

