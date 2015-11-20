#include "ExeData.h"


ExeData::ExeData(QWidget* parent) : QWidget(parent)
{
    ;
}


void ExeData::setType(Type* type)
{
    this->type = type;
}


ExeData::Type* ExeData::getType()
{
    return type;
}


void ExeData::setRunMe(bool runMe)
{
    this->runMe = runMe;
}


bool ExeData::getRunMe()
{
    return runMe;
}


void ExeData::setOrder(int order)
{
    this->order = order;
}


int ExeData::getOrder()
{
    return order;
}


void ExeData::setExeCmd(QString* exeCmd)
{
    this->exeCmd = exeCmd;
}


QString* ExeData::getExeCmd()
{
    return exeCmd;
}


QString* ExeData::toString()
{
    return new QString("***METHOD STUB***");
}


ExeData::~ExeData()
{
    ;
}