#include "ThemeDat.h"


ThemeDat::ThemeDat()
{
    ;
}


void ThemeDat::setNameStrPtr(QString* nameStrPtr)
{
    this->nameStrPtr = nameStrPtr;
}


QString* ThemeDat::getNameStrPtr()
{
    return nameStrPtr;
}


void ThemeDat::setLocStrPtr(QString* locStrPtr)
{
    this->locStrPtr = locStrPtr;
}


QString* ThemeDat::getLocStrPtr()
{
    return locStrPtr;
}


void ThemeDat::setFontNameStrPtr(QString* fontNameStrPtr)
{
    this->fontNameStrPtr = fontNameStrPtr;
}


QString* ThemeDat::getFontNameStrPtr()
{
    return fontNameStrPtr;
}


void ThemeDat::setFontSize(int fontSize)
{
    this->fontSize = fontSize;
}


int ThemeDat::getFontSize()
{
    return fontSize;
}


void ThemeDat::setBackgroundColorStrPtr(QString* backgroundColorStrPtr)
{
    this->backgroundColorStrPtr = backgroundColorStrPtr;
}


QString* ThemeDat::getBackgroundColorStrPtr()
{
    return backgroundColorStrPtr;
}


void ThemeDat::setForegroundColorStrPtr(QString* foregroundColorStrPtr)
{
    this->foregroundColorStrPtr = foregroundColorStrPtr;
}


QString* ThemeDat::getForegroundColorStrPtr()
{
    return foregroundColorStrPtr;
}


void ThemeDat::setFoldFontNameStrPtr(QString* foldFontNameStrPtr)
{
    this->foldFontNameStrPtr = foldFontNameStrPtr;
}


QString* ThemeDat::getFoldFontNameStrPtr()
{
    return foldFontNameStrPtr;
}


void ThemeDat::setFoldFontSize(int foldFontSize)
{
    this->foldFontSize = foldFontSize;
}


int ThemeDat::getFoldFontSize()
{
    return foldFontSize;
}


void ThemeDat::setTxtBackgroundColorStrPtr(QString* txtBackgroundColorStrPtr)
{
    this->txtBackgroundColorStrPtr = txtBackgroundColorStrPtr;
}


QString* ThemeDat::getTxtBackgroundColorStrPtr()
{
    return txtBackgroundColorStrPtr;
}


void ThemeDat::setTxtForegroundColorStrPtr(QString* txtForegroundColorStrPtr)
{
    this->txtForegroundColorStrPtr = txtForegroundColorStrPtr;
}


QString* ThemeDat::getTxtForegroundColorStrPtr()
{
    return txtForegroundColorStrPtr;
}


void ThemeDat::setTxtFontNameStrPtr(QString* txtFontNameStrPtr)
{
    this->txtFontNameStrPtr = txtFontNameStrPtr;
}


QString* ThemeDat::getTxtFontNameStrPtr()
{
    return txtFontNameStrPtr;
}


void ThemeDat::setTxtFontSize(int txtFontSize)
{
    this->txtFontSize = txtFontSize;
}


int ThemeDat::getTxtFontSize()
{
    return txtFontSize;
}


void ThemeDat::pushToThemeTxtElemPtrVecPtr(ThemeTxtElem* themeTxtElemPtr)
{
    themeTxtElemPtrVecPtr->push_back(themeTxtElemPtr);
}


ThemeTxtElem* ThemeDat::popFromThemeTxtElemPtrVecPtr()
{
    ThemeTxtElem* tmp = themeTxtElemPtrVecPtr->back();
    themeTxtElemPtrVecPtr->pop_back();
    
    return tmp;
}


void ThemeDat::setThemeTxtElemPtrVecPtr(QVector<ThemeTxtElem*>* themeTxtElemPtrVecPtr)
{
    this->themeTxtElemPtrVecPtr = themeTxtElemPtrVecPtr;
}


QVector<ThemeTxtElem*>* ThemeDat::getThemeTxtElemPtrVecPtr()
{
    return themeTxtElemPtrVecPtr;
}


QString* ThemeDat::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


ThemeDat::~ThemeDat()
{
    ;
}