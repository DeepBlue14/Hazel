#include "SearchType.h"


SearchType::SearchType()
{
    absPathToFileStrPtr = new QString("null");
    lineNum = -1;
    colNum = -1;
}


void SearchType::setAbsPathToFile(QString* absPathToFileStrPtr)
{
    this->absPathToFileStrPtr = absPathToFileStrPtr;
}


QString* SearchType::getAbsPathToFile(QString* absPathToFileStrPtr)
{
    return absPathToFileStrPtr;
}


void SearchType::setLineNum(int lineNum)
{
    this->lineNum = lineNum;
}


int SearchType::getLineNum()
{
    return lineNum;
}


void SearchType::setColNum(int colNum)
{
    this->colNum = colNum;
}


int SearchType::getColNum()
{
    return colNum;
}


QString* SearchType::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


SearchType::~SearchType()
{
    ;
}