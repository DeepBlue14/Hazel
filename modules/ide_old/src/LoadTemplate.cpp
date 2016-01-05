#include "LoadTemplate.h"


LoadTemplate::LoadTemplate()
{
    ;
}


QString* LoadTemplate::loadFile(LangTemplate langTemplate, FileTemplate fileTemplate)
{
    QString* absPathToFileStrPtr = new QString(RosEnv::rideInstallLoc + "rqt_ide/ide/file_templates/");
    
    switch(langTemplate)
    {
        case BELL:
            absPathToFileStrPtr->append("bell_templates/");
            break;
        case C:
            absPathToFileStrPtr->append("c_templates/");
            break;
        case CPP:
            absPathToFileStrPtr->append("cpp_templates/");
            break;
        case PYTHON:
            absPathToFileStrPtr->append("python_templates/");
            break;
        default:
            cerr << "ERROR: default at LoadTemplate::loadFile(...)" << endl;
            return new QString("");
    }

    switch(fileTemplate)
    {
        case CLASS_TEMPLATE:
            absPathToFileStrPtr->append("ClassTemplate.txt");
            break;
        case CLASS_SUB_TEMPLATE:
            absPathToFileStrPtr->append("ClassSubTemplate.txt");
            break;
        case CLASS_PUB_TEMPLATE:
            absPathToFileStrPtr->append("ClassPubTemplate.txt");
            break;
        case MAIN_TEMPLATE:
            absPathToFileStrPtr->append("MainTemplate.txt");
            break;
        case MAIN_SUB_TEMPLATE:
            absPathToFileStrPtr->append("MainSubTemplate.txt");
            break;
        case MAIN_PUB_TEMPLATE:
            absPathToFileStrPtr->append("MainPubTemplate.txt");
            break;
        case MAIN_SUB_PUB_TEMPLATE:
            absPathToFileStrPtr->append("MainSubPubTemplate.txt");
            break;
        default:
            cerr << "ERROR: default at LoadTemplate::loadFile(...)" << endl;
            return new QString("");
    }
    
    
    QFile* templateFilePtr = new QFile(*absPathToFileStrPtr);
    QString* buffer = new QString();
    
    if(templateFilePtr->open(QIODevice::ReadOnly | QIODevice::Text) )
    {
        QTextStream* in = new QTextStream(templateFilePtr);
        buffer->append(in->readAll() ); 
    }
    
    templateFilePtr->close();
    
    setFileContentsStrPtr(buffer);
    
    return getFileContentsStrPtr();
}


void LoadTemplate::setAbsPathToTemplateDirStrPtr(QString* absPathToTemplateDirStrPtr)
{
    this->absPathToTemplateDirStrPtr = absPathToTemplateDirStrPtr;
}


QString* LoadTemplate::getAbsPathToTemplateDirStrPtr()
{
    return absPathToTemplateDirStrPtr;
}


void LoadTemplate::setTemplateStrLstPtr(QStringList* templateStrLstPtr)
{
    this->templateStrLstPtr = templateStrLstPtr;
}


QStringList* LoadTemplate::getTemplateStrLstPtr()
{
    return templateStrLstPtr;
}


void LoadTemplate::setFileContentsStrPtr(QString* fileContentsStrPtr)
{
    this->fileContentsStrPtr = fileContentsStrPtr;
}


QString* LoadTemplate::getFileContentsStrPtr()
{
    return fileContentsStrPtr;
}


QString* LoadTemplate::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


LoadTemplate::~LoadTemplate()
{
    ;
}
