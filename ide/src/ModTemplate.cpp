#include "ModTemplate.h"


ModTemplate::ModTemplate()
{
    ;
}


QString* ModTemplate::replaceAllOldWithNew(QString* data, QString* oldToken, QString* newToken)
{
    data->replace(QRegExp(*oldToken), *newToken);
}


QString* ModTemplate::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


ModTemplate::~ModTemplate()
{
    ;
}