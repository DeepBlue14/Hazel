#include "ParseFontConfigXml.h"


ParseFontConfigXml::ParseFontConfigXml()
{
    
}


void ParseFontConfigXml::loadFile(QFile* xmlFile)
{
    filePtr = new QFile("testXmlFile.xml");
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
    
    //get root names adn attributes
    QString Type = root.tagName();
    QString Board = root.attribute("BOARD", "No name");
    int Year = root.attribute("YEAR", "1900").toInt();
    
    //display root data
    cout << "Type = " << Type.toStdString().c_str() << endl;
    cout << "Board = " << Board.toStdString().c_str() << endl;
    cout << "Year = " << Year << endl;
    
    //parse the rest of the doc
    QDomElement Component=root.firstChild().toElement();
 
// Loop while there is a child
while(!Component.isNull())
{    
    // Check if the child tag name is COMPONENT
    if (Component.tagName()=="COMPONENT")
    {
 
        // Read and display the component ID
        QString ID=Component.attribute("ID","No ID");
 
        // Get the first child of the component
        QDomElement Child=Component.firstChild().toElement();
 
        QString Name;
        double Value;
 
        // Read each child of the component node
        while (!Child.isNull())
        {
            // Read Name and value
            if (Child.tagName()=="NAME") Name=Child.firstChild().toText().data();
            if (Child.tagName()=="VALUE") Value=Child.firstChild().toText().data().toDouble();
 
            // Next child
            Child = Child.nextSibling().toElement();
        }
 
        // Display component data
        std::cout << "Component " << ID.toStdString().c_str() << std::endl;
        std::cout << "   Name  = " << Name.toStdString().c_str() << std::endl;
        std::cout << "   Value = " << Value << std::endl;
        std::cout << std::endl;        
    }
 
    // Next component
    Component = Component.nextSibling().toElement();
}
}


void ParseFontConfigXml::parseDoc()
{
    ;
}


ParseFontConfigXml::~ParseFontConfigXml()
{
    ;
}