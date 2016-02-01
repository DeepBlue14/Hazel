/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "ButtonGroupWidget.h"

template<class AbsBtnType>
ButtonGroupWidget<AbsBtnType>::ButtonGroupWidget(QWidget* parent) : QWidget(parent)
{
    outerLayout = new QVBoxLayout();
    
    this->setLayout(outerLayout);
}


template<class AbsBtnType>
ButtonGroupWidget<AbsBtnType>::ButtonGroupWidget(QList<AbsBtnType*> btnLst, QWidget* parent) : QWidget(parent)
{
    outerLayout = new QVBoxLayout();
    setButtonGroup(btnLst);
    
    this->setLayout(outerLayout);
}


template<class AbsBtnType>
void ButtonGroupWidget<AbsBtnType>::setButtonGroup(QList<AbsBtnType*> btnLst)
{   
    for(size_t i = 0; i < btnLst.size(); i++)
    {
        outerLayout->addWidget(btnLst.at(i) );
    }
}


template<class AbsBtnType>
QButtonGroup* ButtonGroupWidget<AbsBtnType>::getButtonGroup()
{
    
}


template<class AbsBtnType>
QString* ButtonGroupWidget<AbsBtnType>::toString()
{
    
}

template<class AbsBtnType>
ButtonGroupWidget<AbsBtnType>::~ButtonGroupWidget()
{
    ;
}

//ButtonGroupWidget<QRadioButton> inst;