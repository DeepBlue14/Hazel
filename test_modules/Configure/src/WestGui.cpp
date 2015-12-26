#include "WestGui.h"


WestGui::WestGui(QWidget* parent) : QWidget(parent)
{
    cmakeLstWidItemPtrVecPtr = new QVector<QListWidgetItem*>();
    packageLstWidItemPtrVecPtr = new QVector<QListWidgetItem*>();
    
    cmakeLstWidPtr = new QListWidget();
    packageLstWidPtr = new QListWidget();
    
    outerLayout = new QVBoxLayout();
    outerLayout->addWidget(cmakeLstWidPtr);
    outerLayout->addWidget(packageLstWidPtr);
    
    this->setLayout(outerLayout);
}


void WestGui::setCmakeLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* cmakeLstWidItemPtrVecPtr)
{
    this->cmakeLstWidItemPtrVecPtr = cmakeLstWidItemPtrVecPtr;
}


QVector<QListWidgetItem*>* WestGui::getCmakeLstWidItemPtrVecPtr()
{
    return cmakeLstWidItemPtrVecPtr;
}


void WestGui::setPackageLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* packageLstWidItemPtrVecPtr)
{
    this->packageLstWidItemPtrVecPtr = packageLstWidItemPtrVecPtr;
}


QVector<QListWidgetItem*>* WestGui::getPackageLstWidItemPtrVecPtr()
{
    return packageLstWidItemPtrVecPtr;
}


void WestGui::setCmakeLstWidPtr(QListWidget* cmakeLstWidPtr)
{
    this->cmakeLstWidPtr = cmakeLstWidPtr;
}


QListWidget* WestGui::getCmakeLstWidPtr()
{
    return cmakeLstWidPtr;
}


void WestGui::setPackageLstWidPtr(QListWidget* packageLstWidPtr)
{
    this->packageLstWidPtr = packageLstWidPtr;
}


QListWidget* WestGui::getPackageLstWidPtr()
{
    return packageLstWidPtr;
}


void WestGui::setOuterLayout(QVBoxLayout* outerLayout)
{
    this->outerLayout = outerLayout;
}


QVBoxLayout* WestGui::getQVBoxLayout()
{
    return outerLayout;
}


QString* WestGui::toString()
{
    return new QString("***METHOD STUB***");
}


WestGui::~WestGui()
{
    ;
}