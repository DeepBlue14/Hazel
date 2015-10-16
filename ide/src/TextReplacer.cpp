#include "TextReplacer.h"


TextReplacer::TextReplacer()
{
    ;
}


void TextReplacer::replaceEveryOccurenceOf(RFile* file, QString* oldToken, QString* newToken)
{
    QString* tmpStr = new QString();
    
    tmpStr = file->readFile();
    
    tmpStr->replace(*oldToken, *newToken, Qt::CaseSensitive);
}


void TextReplacer::refactor(QString* oldToken, QString* newToken)
{
    ;
}


QString* TextReplacer::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub at TextReplacer::toString()");
    
    return tmp;
}


TextReplacer::~TextReplacer()
{
    ;
}