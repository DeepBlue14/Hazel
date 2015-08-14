#include "LoadTemplate.h"


LoadTemplate::LoadTemplate()
{
    ;
}


void LoadTemplate::loadFile(FileTemplate fileTemplate)
{
    ;
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