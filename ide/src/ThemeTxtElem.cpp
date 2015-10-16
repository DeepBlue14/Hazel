#include "ThemeTxtElem.h"


ThemeTxtElem::ThemeTxtElem()
{
    ;
}


void ThemeTxtElem::setElemNameStrPtr(QString* elemNameStrPtr)
{
    this->elemNameStrPtr = elemNameStrPtr;
}


QString* ThemeTxtElem::getElemNameStrPtr()
{
    return elemNameStrPtr;
}


void ThemeTxtElem::setForegroundStrPtr(QString* foregroundColorStrPtr)
{
    this->foregroundColorStrPtr = foregroundColorStrPtr;
}


QString* ThemeTxtElem::getForegroundStrPtr()
{
    return foregroundColorStrPtr;
}


void ThemeTxtElem::setBackgroundStrPtr(QString* backgroundColorStrPtr)
{
    this->backgroundColorStrPtr = backgroundColorStrPtr;
}


QString* ThemeTxtElem::getBackgroundStrPtr()
{
    return backgroundColorStrPtr;
}


void ThemeTxtElem::setEffect(Effect effect)
{
    this->effect = effect;
}


ThemeTxtElem::Effect ThemeTxtElem::getEffect()
{
    return effect;
}


void ThemeTxtElem::setEffectColorStrPtr(QString* effectColorStrPtr)
{
    this->effectColorStrPtr = effectColorStrPtr;
}


QString* ThemeTxtElem::getEffectColorStrPtr()
{
    return effectColorStrPtr;
}


QString* ThemeTxtElem::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


ThemeTxtElem::~ThemeTxtElem()
{
    ;
}