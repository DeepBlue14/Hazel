#include "ReconfigGui.h"


ReconfigGui::ReconfigGui(QMainWindow* parent) : QMainWindow(parent)
{
    reconfigCentralWidPtr = new ReconfigCentralWid();
    
    this->setCentralWidget(reconfigCentralWidPtr);
}


QString* ReconfigGui::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


ReconfigGui::~ReconfigGui()
{
    ;
}