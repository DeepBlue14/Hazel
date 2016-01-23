#include "XmlMaster.h"


void XmlMaster::loadFile(QFile* filePtr)
{
    QFile* file = new QFile(RosEnv::rideInstallLoc + "rqt_ide/res/test.xml");
    file->open(QFile::ReadOnly);
    QXmlStreamReader xmlReader;
    xmlReader.setDevice(file);
    
    xmlReader.readNext();
    
    int safety = 0;
    while(!xmlReader.isEndDocument() && safety < 50 )
    {
        
     
        if(!xmlReader.isEndElement() )
        {
            QString openingTag = xmlReader.name().toString();
            cout << openingTag.toStdString() << endl;
        }
        else
        {
            QString closingTag = xmlReader.name().toString();
            //cout << closingTag.toStdString() << endl;
        }
        
        QXmlStreamAttributes attributes = xmlReader.attributes();
        for(size_t i = 0; i < attributes.size(); i++)
        {
            cout << attributes.at(i).name().toString().toStdString() << endl;
            cout << attributes.at(i).value().toString().toStdString() << endl;
        }
        
        
        xmlReader.readNext();
        
        safety++;
    }
    
    
}


void XmlMaster::printXmlFile(QFile* filePtr)
{
    
}


void XmlMaster::insertAfterLastOccurrence(QFile* filePtr, QString* occurrenceOfStrPtr, QString* insertionStrPtr)
{
    ;
}
