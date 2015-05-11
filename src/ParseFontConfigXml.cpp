#include "ParseFontConfigXml.h"


ParseFontConfigXml::ParseFontConfigXml()
{
    
}


void ParseFontConfigXml::loadFile(/*QFile* xmlFile*/)
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


void ParseFontConfigXml::readDocRoot()
{
    //extract the root markup
    QDomElement root = xmlDomDocPtr->documentElement();
    
    //get root names and attributes
    QString type = root.tagName();
    cout << "<" << type.toStdString() << ">" << endl;
    
    QDomElement component = root.firstChild().toElement();
    cout << "  <" << component.tagName().toStdString() << ">" << endl;
    
    component = component.firstChild().toElement();
    QString foreground = component.attribute("Foreground", "no value");
    QString background = component.attribute("Background", "no value");
    QString effects = component.attribute("Effects", "no value");
    QString effect_color = component.attribute("Effect_Color", "no value");
    
    cout << "     <" << component.tagName().toStdString() << "\""
         << " Foreground=\"" << foreground.toStdString() << "\""
         << " Background=\"" << background.toStdString() << "\""
         << " Effects=\"" << effects.toStdString() << "\""
         << " \"Effect_Color=\"" << effect_color.toStdString() << "\""
         << "/>" << endl;
    
    
    
    
    
    
    
    
}


void ParseFontConfigXml::parseDoc()
{
    ;
}


ParseFontConfigXml::~ParseFontConfigXml()
{
    ;
}