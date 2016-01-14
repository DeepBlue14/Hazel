#include "MasterGui.h"



MasterGui::MasterGui(QWidget* parent) : QWidget(parent)
{
    searchResultsLwPtr = new QListWidget();
    resultLstWidItemPtrVecPtr = new QVector<QListWidgetItem*>();
    searchLePtr = new QLineEdit();
    searchBtnPtr = new QPushButton("Search");
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(searchResultsLwPtr, 0, 0, 1, 0);
    outerLayout->addWidget(searchLePtr, 1, 0);
    outerLayout->addWidget(searchBtnPtr, 1, 1);
    
    initTestData();
    
    this->setLayout(outerLayout);
}


void MasterGui::initTestData()
{
    resultLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "diamond.png"), "MasterGui") );
    resultLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "circle.png"), "initTestData") );
    resultLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "triangle.png"), "loadSearchResults") );
    resultLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "circle.png"), "toString") );
    resultLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "diamond.png"), "~MasterGui") );
    
    loadSearchResults(resultLstWidItemPtrVecPtr);
}


void MasterGui::loadSearchResults(QVector<QListWidgetItem*>* resultLstWidItemPtrVecPtr)
{
    for(size_t i = 0; i < resultLstWidItemPtrVecPtr->size(); i++)
    {
        searchResultsLwPtr->addItem(resultLstWidItemPtrVecPtr->at(i) );        
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