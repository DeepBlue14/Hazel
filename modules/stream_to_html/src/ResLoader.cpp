#include "ResLoader.h"


ResLoader::ResLoader()
{
    loadData();
}


void ResLoader::loadData()
{
    QFile("res/conversions.xml");
    //read data
    //store it into a QVector<TextPair*>*
    //close file
}


QString* ResLoader::toString()
{
    return new QString("***METHOD STUB***");
}


ResLoader::~ResLoader()
{
    ;
}