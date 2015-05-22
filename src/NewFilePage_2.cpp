#include "NewFilePage_2.h"


NewFilePage_2::NewFilePage_2(QWidget* parent) : QWidget(parent)
{
    optionStrPtr = new QString("");
    
    buttonGroupPtr = new QButtonGroup();
    buttonGroupPtr->addButton(new QRadioButton(tr("Empty")));
    buttonGroupPtr->addButton(new QRadioButton(tr("Class")));
    buttonGroupPtr->addButton(new QRadioButton(tr("Subscriber")));
    buttonGroupPtr->addButton(new QRadioButton(tr("Publisher")));
    
    outerLayoutPtr = new QGridLayout();
    
    for(size_t i = 0; i < buttonGroupPtr->buttons().size(); i++)
    {
        outerLayoutPtr->addWidget(buttonGroupPtr->buttons().at(i), i, 0);
    }
        
    this->setLayout(outerLayoutPtr);
}


void NewFilePage_2::setOptionStrPtr()
{
    for(size_t i = 0; i < buttonGroupPtr->children().size(); i++)
    {
        if(buttonGroupPtr->button(i)->isChecked() )
        {
            optionStrPtr = new QString(buttonGroupPtr->checkedButton()->text() );
            return;
        }
    }
    
    //else don't try to retrieve a checked (because there isn't one)
}


QString* NewFilePage_2::getOptionStrPtr()
{
    return optionStrPtr;
}


void NewFilePage_2::triggerMutators()
{
    setOptionStrPtr();
}


QString* NewFilePage_2::toString()
{
    QString* tmp = new QString("File Subtype: ");
    tmp->append(getOptionStrPtr() );
    
    return tmp;
}


NewFilePage_2::~NewFilePage_2()
{
    ;
}