#include "OutputUi.h"


OutputUi::OutputUi(QMainWindow* parent) : QMainWindow(parent)
{
    setup();
    
    this->setCentralWidget(buildDisplayPtr);
}


void OutputUi::setup()
{
    buildDisplayPtr = new BuildDisplay();
}
 
 
QString* OutputUi::toString()
{
    return new QString("***METHOD STUB***");
}


OutputUi::~OutputUi()
{
    ;
}