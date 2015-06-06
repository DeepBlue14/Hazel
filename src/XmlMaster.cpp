#include "XmlMaster.h"


void XmlMaster::loadFile(QFile* filePtr)
{
    filePtr = new QFile("/home/james/NetBeansProjects/Hazel/config/SyntaxColors/NetBeans.xml");
    xmlDomDocPtr = new QDomDocument();
    
    if(!filePtr->open(QIODevice::ReadOnly) )
    {
        //error while loading file
        cerr << "Error while loading file" << endl;
    }
    
    //set data into QDomDocument before processing
    xmlDomDocPtr->setContent(filePtr);
    filePtr->close();
}


void XmlMaster::printXmlFile(QFile* filePtr)
{
    
}


void XmlMaster::insertAfterLastOccurrence(QFile* filePtr, QString* occurrenceOfStrPtr, QString* insertionStrPtr)
{
    ;
}