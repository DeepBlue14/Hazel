#include "RunPage_1.h"


RunPage_1::RunPage_1(QWidget* parent) : QWidget(parent)
{
    buttonGroupPtr = new QButtonGroup();
    buttonGroupPtr->addButton(new QRadioButton(tr("Launch File")));
    buttonGroupPtr->addButton(new QRadioButton(tr("Individual Nodes")));
    
    outerLayoutPtr = new QGridLayout();
    
    for(size_t i = 0; i < buttonGroupPtr->buttons().size(); i++)
    {
        outerLayoutPtr->addWidget(buttonGroupPtr->buttons().at(i), i, 0);
    }
        
    this->setLayout(outerLayoutPtr);
}


QString* RunPage_1::getRunOptionPtr()
{
    for(size_t i = 0; i < buttonGroupPtr->children().size(); i++)
    {
        if(buttonGroupPtr->button(i)->isChecked() )
        {
            return new QString(buttonGroupPtr->checkedButton()->text() );
        }
    }
    
    return new QString("No button was selected");
}


QString* RunPage_1::toString()
{
    QString* tmp = new QString("RunPage_1::toString()");
    tmp->append("Selected run type: ");
    tmp->append(buttonGroupPtr->checkedButton()->text() );
}


RunPage_1::~RunPage_1()
{
    ;
}