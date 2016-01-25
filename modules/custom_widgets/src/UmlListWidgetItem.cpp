#include "UmlListWidgetItem.h"


UmlListWidgetItem::UmlListWidgetItem(QWidget* parent) : QWidget(parent)
{
    scopeIconPtr = new QPixmap(RosEnv::imagesInstallLoc + "circle_2.png");
    scopeLblPtr = new QLabel();
    typeLblPtr = new QLabel("void");
    nameLblPtr = new QLabel("init()");
    scopeLblPtr->setPixmap(*scopeIconPtr);
    

    
    layout = new QHBoxLayout();
    layout->addWidget(scopeLblPtr, 0, Qt::AlignLeft);
    layout->addWidget(typeLblPtr, 0, Qt::AlignLeft);
    layout->addWidget(nameLblPtr, 0, Qt::AlignLeft);
    layout->setContentsMargins(0, 0, 0, 0); //this fixed it!!!
    
    this->setLayout(layout);
}


UmlListWidgetItem::UmlListWidgetItem(QPixmap pixmap/*QIcon icon*/, QString type, QString name, QWidget* parent) : QWidget(parent)
{
    //FIXME: this hard-coded size is currently only true for circle_2.png
    //scopeIconPtr = new QPixmap(icon.actualSize(QSize(20, 20)) );
    scopeIconPtr = new QPixmap(pixmap);
    scopeLblPtr = new QLabel();
    typeLblPtr = new QLabel("<font color=\"gray\">" + type + "</font>");
    nameLblPtr = new QLabel(name);
    scopeLblPtr->setPixmap(*scopeIconPtr);
    
    layout = new QHBoxLayout();
    layout->addWidget(scopeLblPtr, 0, Qt::AlignLeft);
    layout->addWidget(typeLblPtr, 0, Qt::AlignLeft);
    layout->addWidget(nameLblPtr, 0, Qt::AlignLeft);
    layout->setContentsMargins(0, 0, 0, 0); //this fixed it!!!
    
    this->setLayout(layout);
}


QString* UmlListWidgetItem::toString()
{
    return new QString("***METHOD STUB***");
}


UmlListWidgetItem::~UmlListWidgetItem()
{
    ;
}