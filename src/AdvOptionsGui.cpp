#include "AdvOptionsGui.h"


AdvOptionsGui::AdvOptionsGui(QWidget* parent) : QWidget(parent)
{
    QStringList* optionsStrLstPtr = new QStringList();
    optionsStrLstPtr->push_back("ROS");
    optionsStrLstPtr->push_back("C/C++ Compiler");
    optionsStrLstPtr->push_back("Linker");
    optionsStrLstPtr->push_back("Python Interpreter");
    optionsLwPtr = new QListWidget();
    optionsLwPtr->addItems(*optionsStrLstPtr);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(optionsLwPtr, 0, 0, Qt::AlignLeft);
    
    this->setLayout(outerLayout);
}


QString* AdvOptionsGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


AdvOptionsGui::~AdvOptionsGui()
{
    ;
}