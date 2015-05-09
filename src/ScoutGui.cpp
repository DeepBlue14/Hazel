#include "ScoutGui.h"


ScoutGui::ScoutGui(QMenu* parent) : QMenu(parent)
{
    ;
}


void ScoutGui::setMethodPrototypeLstPtr(QStringList* methodPrototypeLstPtr)
{
    this->methodPrototypeLstPtr = methodPrototypeLstPtr;
}


QStringList* ScoutGui::getMethodPrototypeLstPtr()
{
    return methodPrototypeLstPtr;
}


void ScoutGui::fillScoutMenu()
{
    for(size_t i = 0; i < getMethodPrototypeLstPtr()->length(); i++)
    {
        //create action for each prototype
        //this->addAction()
    }
}


ScoutGui::~ScoutGui()
{
    ;
}