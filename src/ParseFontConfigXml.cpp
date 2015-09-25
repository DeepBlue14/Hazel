#include "ParseFontConfigXml.h"


ParseFontConfigXml::ParseFontConfigXml()
{
    
}


void ParseFontConfigXml::loadFile(/*QFile* xmlFile*/)
{
    filePtr = new QFile("/home/james/NetBeansProjects/ride/res/rproject/options/pretty_print/Classic.xml");
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


void ParseFontConfigXml::readDoc()
{
    //extract the root markup
    QDomElement root = xmlDomDocPtr->documentElement();
    
    //get root names and attributes
    QString rootOpTag = root.tagName();
    cout << "<" << rootOpTag.toStdString() << ">" << endl;
    
    QDomElement element = root.firstChild().toElement();
    //cout << "  <" << element.tagName().toStdString() << ">" << endl;

    //element = element.firstChild().toElement();
    
    while(!element.isNull() )
    {
        while(element.hasChildNodes() )
        {
            QDomNodeList childNodes = element.childNodes();
            for(size_t i = 0; i < childNodes.size(); i++)
            {
                //childNodes.at(i).attributes()
            }
            
            
        }

        
        element = element.nextSibling().toElement();
    }

    
    
    
    
    
    
    
    
}


ParseFontConfigXml::~ParseFontConfigXml()
{
    ;
}