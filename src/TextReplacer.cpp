#include "TextReplacer.h"


TextReplacer::TextReplacer()
{
    ;
}


void TextReplacer::replaceEveryOccurenceOf(RFile* file, QString* oldToken, QString* newToken)
{
    QString* tmpStr = new QString();
    int beginningOfOldToken;
    
    tmpStr = file->readFile();
    
    while( (beginningOfOldToken = tmpStr->indexOf(oldToken) ) != -1)
    {
        tmpStr->replace(beginningOfOldToken, oldToken->size(), *newToken);
    }
    
    
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