#include "QCellWidget.h"


QCellWidget::QCellWidget(QWidget* parent) : QWidget(parent)
{
    labelPtr = new QLabel();
    layoutPtr = new QHBoxLayout();
    
    this->setLayout(layoutPtr);
}


void QCellWidget::defaultInit()
{
    labelPtr->setFixedSize(20, 20);
    labelPtr->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    labelPtr->setScaledContents(true);
    labelPtr->setPixmap(RosEnv::imagesInstallLoc + "bar_mark.png");
    labelPtr->setAlignment(Qt::AlignCenter);
    layoutPtr->addWidget(labelPtr);
    layoutPtr->setAlignment(Qt::AlignCenter);
    layoutPtr->setContentsMargins(0, 0, 0, 0);
}


void QCellWidget::setLayoutPtr(QHBoxLayout* layoutPtr)
{
    this->layoutPtr = layoutPtr;
}


QHBoxLayout* QCellWidget::getLayoutPtr() const
{
    return layoutPtr;
}


void QCellWidget::setLabelPtr(QLabel* labelPtr)
{
    this->labelPtr = labelPtr;
}


QLabel* QCellWidget::getLabelPtr() const
{
    return labelPtr;
}


QString* QCellWidget::toString()
{
    return new QString("***METHOD STUB***");
}


QCellWidget::~QCellWidget()
{
    ;
}