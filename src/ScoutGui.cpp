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
        prototypeActionVec.push_back(new QAction(tr(getMethodPrototypeLstPtr()->at(i).toUtf8()), this));
        connect(prototypeActionVec.at(i), SIGNAL(triggered()), this, SLOT(implement()));
        this->addAction(prototypeActionVec.at(i));
    }
}


void ScoutGui::implement()
{
    cout << "implement!" << endl;
}


ScoutGui::~ScoutGui()
{
    ;
}