#include "MirrorChar.h"


MirrorChar::MirrorChar()
{
    mirrorChar = new QChar('x');
    mirrorType = MirrorChar::UNKNOWN_CHAR;
}


MirrorChar::MirrorChar(QChar* mirrorChar)
{
    mirrorChar = new QChar(*mirrorChar);
    mirrorType = MirrorChar::UNKNOWN_CHAR;
}


MirrorChar::MirrorChar(QChar* mirrorChar, Type mirrorType)
{
    mirrorChar = new QChar(*mirrorChar);
    this->mirrorType = mirrorType;
}


void MirrorChar::setText(QChar* mirrorChar)
{
    this->mirrorChar = mirrorChar;
}


QChar* MirrorChar::getText()
{
    return mirrorChar;
}


void MirrorChar::setType(MirrorChar::Type mirrorType)
{
    this->mirrorType = mirrorType;
}


MirrorChar::Type MirrorChar::getType()
{
    return mirrorType;
}


QString* MirrorChar::typeToString(MirrorChar::Type mirrorType)
{
    switch(mirrorType)
    {
        case MirrorChar::OPN_PAREN:
            return new QString("OPN_PAREN");
        case MirrorChar::CLS_PAREN:
            return new QString("CLS_PAREN");
        case MirrorChar::OPN_CRLY_BRACE:
            return new QString("OPN_CRLY_BRACE");
        case MirrorChar::CLS_CRLY_BRACE:
            return new QString("CLS_CRLY_BRACE");
        case MirrorChar::OPN_SQR_BRACE:
            return new QString("OPN_SQR_BRACE");
        case MirrorChar::CLS_SQR_BRACE:
            return new QString("CLS_SQR_BRACE");
        case MirrorChar::UNKNOWN_CHAR:
            return new QString("UNKNOWN_CHAR");
        default:
            return new QString("default case at MirrorChar::typeToString(...)");
    }
}


QString* MirrorChar::toString()
{
    QString* tmp = new QString();
    tmp->append("MirrorChar: " + QString(mirrorChar) );
    
    return tmp;
}


MirrorChar::~MirrorChar()
{
    
}