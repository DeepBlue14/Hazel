#include "RideFont.h"

void RideFont::initDefaultValues()
{
    font = new QFont();
    font->setFamily("Monospace");
    font->setFixedPitch(true);
    font->setPointSize(10);
    font->setWeight(10);
}


void RideFont::setFamily(QString* fontName)
{
    font->setFamily(*fontName);
}


QString* RideFont::getFamily()
{
    return new QString(font->family() );
}


void RideFont::setFixedPitch(bool isFixedPitch)
{
    font->setFixedPitch(isFixedPitch);
}


bool RideFont::getFixedPitch()
{
    return font->fixedPitch();
}


void RideFont::setPointSize(int pointSize)
{
    font->setPointSize(pointSize);
}


int RideFont::getPointSize()
{
    return font->pointSize();
}


void RideFont::setWeight(int fontWeight)
{
    font->setWeight(fontWeight);
}


int RideFont::getWeight()
{
    return font->weight();
}


QString* RideFont::toString()
{
    //QString* tmp = new QString();
    
    
    return new QString("***METHOD STUB***");
}