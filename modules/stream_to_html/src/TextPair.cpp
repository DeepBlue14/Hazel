#include "TextPair.h"


TextPair::TextPair()
{
    unixElem = new QString();
    htmlElem = new QString();
}


void TextPair::setUnixElem(QString& unixElem)
{
    this->unixElem = &unixElem;
}


QString* TextPair::getUnixElem()
{
    return unixElem;
}


void TextPair::setHtmlElem(QString& htmlElem)
{
    this->htmlElem = &htmlElem;
}


QString* TextPair::getHtmlElem()
{
    return htmlElem;
}


QString* TextPair::toString()
{
    QString* tmp;
    tmp->append("UNIX: " + *unixElem);
    tmp->append("\nHTML: " + *htmlElem);
    
    return tmp;
}


TextPair::~TextPair()
{
    ;
}