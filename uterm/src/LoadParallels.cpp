#include "LoadParallels.h"


LoadParallels::LoadParallels(QWidget* parent) : QWidget(parent)
{
    parallels = new QVector<QPair<QString*, QString*>*>();
}


void LoadParallels::load(QString* osStrPtr)
{
    QFile file("./res/UnixWindowsParallel.xml");
    if(!file.open(QFile::ReadOnly) )
    {
        cerr << "Failed to open file" << endl;
        return;
    }
    
    QXmlStreamReader xmlReader(&file);

    while(!xmlReader.atEnd() )
    {
        //cout << "Name: " << xmlReader.name().toString().toStdString() << endl;
        if(xmlReader.attributes().size() > 1)
        {
            // Place commands native to current platform in first position.
            QPair<QString*, QString*>* pair = new QPair<QString*, QString*>();
            if(*osStrPtr != "Windows")
            {
                pair->first = new QString(xmlReader.attributes().at(0).value().toString());
                pair->second = new QString(xmlReader.attributes().at(1).value().toString());
            }
            else
            {
                pair->second = new QString(xmlReader.attributes().at(0).value().toString());
                pair->first = new QString(xmlReader.attributes().at(1).value().toString());
            }
            
            parallels->push_back(pair);

        }
        xmlReader.readNext();
    }
    
    xmlReader.clear();
    file.close();
}


QVector<QPair<QString*, QString*>*>* LoadParallels::getDat()
{
    return parallels;
}


QString* LoadParallels::toString()
{
    QString* tmp = new QString();
    tmp->append("\n----------Parallel Data----------\n");
    for(size_t i = 0; i < parallels->size(); i++)
    {
        tmp->append(*parallels->at(i)->first + "\t\t" + *parallels->at(i)->second + "\n");
    }
    
    return tmp;
}


LoadParallels::~LoadParallels()
{
    ;
}