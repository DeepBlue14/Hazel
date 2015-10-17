#include "RunSetupPage_1.h"


RunSetupPage_1::RunSetupPage_1(QWidget* parent) : QWidget(parent)
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


QString* RunSetupPage_1::getRunOptionPtr()
{
    for(size_t i = 0; i < buttonGroupPtr->buttons().size(); i++)
    {
        if(buttonGroupPtr->buttons().at(i)->isChecked() )
        {
            return new QString(buttonGroupPtr->checkedButton()->text() );
        }
    }
    
    buttonGroupPtr->buttons().at(0)->setChecked(true); // set launch option as default
    return new QString(buttonGroupPtr->checkedButton()->text() );
}


QString* RunSetupPage_1::toString()
{
    QString* tmp = new QString("RunPage_1::toString()");
    tmp->append("Selected run type: ");
    tmp->append(buttonGroupPtr->checkedButton()->text() );
}


RunSetupPage_1::~RunSetupPage_1()
{
    ;
}