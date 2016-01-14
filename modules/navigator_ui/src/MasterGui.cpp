#include "MasterGui.h"



MasterGui::MasterGui(QWidget* parent) : QWidget(parent)
{
    searchResultsLwPtr = new QListWidget();
    resultLstWidItemPtrVecPtr = new QVector<UmlListWidgetItem*>();
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(searchResultsLwPtr, 0, 0, 1, 0);
    
    initTestData();
    
    this->setLayout(outerLayout);
    this->resize(425, 250);
}


void MasterGui::initTestData()
{
    resultLstWidItemPtrVecPtr->push_back(new UmlListWidgetItem(QPixmap(RosEnv::imagesInstallLoc + "diamond_2.png"), "", "MasterGui") );
    resultLstWidItemPtrVecPtr->push_back(new UmlListWidgetItem(QPixmap(RosEnv::imagesInstallLoc + "circle_2.png"), "void", "initTestData") );
    resultLstWidItemPtrVecPtr->push_back(new UmlListWidgetItem(QPixmap(RosEnv::imagesInstallLoc + "triangle_2.png"), "void", "loadSearchResults") );
    resultLstWidItemPtrVecPtr->push_back(new UmlListWidgetItem(QPixmap(RosEnv::imagesInstallLoc + "circle_2.png"), "QString*", "toString") );
    resultLstWidItemPtrVecPtr->push_back(new UmlListWidgetItem(QPixmap(RosEnv::imagesInstallLoc + "diamond_2.png"), "", "~MasterGui") );
    
    loadSearchResults(resultLstWidItemPtrVecPtr);
}


void MasterGui::loadSearchResults(QVector<UmlListWidgetItem*>* resultLstWidItemPtrVecPtr)
{
    for(size_t i = 0; i < resultLstWidItemPtrVecPtr->size(); i++)
    {
        QListWidgetItem* item = new QListWidgetItem();
        searchResultsLwPtr->addItem(item);
        searchResultsLwPtr->setItemWidget(item, resultLstWidItemPtrVecPtr->at(i) );        
    }
    
}


QString* MasterGui::toString()
{
    return new QString("***METHOD STUB***");
}


MasterGui::~MasterGui()
{
    ;
}