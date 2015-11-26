#include "BuildDisplay.h"


BuildDisplay::BuildDisplay(QMainWindow* parent) : QMainWindow(parent)
{
    setup();
}


void BuildDisplay::setup()
{
    runDisplayPtr = new RunDisplay();
}


QString* BuildDisplay::toString()
{
    return new QString("***METHOD STUB***");
}


BuildDisplay::~BuildDisplay()
{
    ;
}