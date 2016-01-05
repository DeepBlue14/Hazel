#include "DebugGui.h"


DebugGui::DebugGui(QWidget* parent) : QWidget(parent)
{
    stepIntoTbPtr = new QToolBar();
    stepOverTbPtr = new QToolBar();
    toolBarLayout = new QVBoxLayout();
}


void DebugGui::initToolBars()
{
    ;
}


DebugGui::~DebugGui()
{
    ;
}