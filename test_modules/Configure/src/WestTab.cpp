#include "WestTab.h"


WestTab::WestTab(QWidget* parent) : QWidget(parent)
{
    oldFileLstWidItemPtrVecPtr = new QVector<QListWidgetItem*>();
    oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "null.png"), "new_file.xxx") );
    oldFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/new_file.xxx");
    oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "null.png"), "new_file.xxx") );
    oldFileLstWidItemPtrVecPtr->at(1)->setToolTip("/home/james/catkin_ws/src/night_hawk/new_file.xxx");
    oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "null.png"), "new_file.xxx") );
    oldFileLstWidItemPtrVecPtr->at(2)->setToolTip("/home/james/catkin_ws/src/laser_detection/new_file.xxx");
    oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "null.png"), "new_file.xxx") );
    oldFileLstWidItemPtrVecPtr->at(3)->setToolTip("/home/james/catkin_ws/src/network_config/new_file.xxx");
    
    newFileLstWidItemPtrVecPtr = new QVector<QListWidgetItem*>();
    newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "null.png"), "old_file.xxx") );
    newFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/old_file.xxx");
    newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "null.png"), "old_file.xxx") );
    newFileLstWidItemPtrVecPtr->at(1)->setToolTip("/home/james/catkin_ws/src/night_hawk/old_file.xxx");
    newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "null.png"), "old_file.xxx") );
    newFileLstWidItemPtrVecPtr->at(2)->setToolTip("/home/james/catkin_ws/src/laser_detection/old_file.xxx");
    newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "null.png"), "old_file.xxx") );
    newFileLstWidItemPtrVecPtr->at(3)->setToolTip("/home/james/catkin_ws/src/network_config/old_file.xxx");
    
    oldFileLstWidPtr = new QListWidget();
    for(size_t i = 0; i < oldFileLstWidItemPtrVecPtr->size(); i++)
    {
        oldFileLstWidPtr->addItem(oldFileLstWidItemPtrVecPtr->at(i) );
    }
    
    newFileLstWidPtr = new QListWidget();
    for(size_t i = 0; i < newFileLstWidItemPtrVecPtr->size(); i++)
    {
        newFileLstWidPtr->addItem(newFileLstWidItemPtrVecPtr->at(i) );
    }
    
    connect(oldFileLstWidPtr, SIGNAL(pressed()), this, SLOT(handleOldFileSlot()));
    connect(newFileLstWidPtr, SIGNAL(pressed()), this, SLOT(handleNewFileSlot()));
    
    outerLayout = new QVBoxLayout();
    outerLayout->addWidget(oldFileLstWidPtr);
    outerLayout->addWidget(newFileLstWidPtr);

    
    this->setLayout(outerLayout);
}


void WestTab::handleOldFileSlot()
{
    
}


void WestTab::handleNewFileSlot()
{
    
}


void WestTab::setOldFileLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* cmakeLstWidItemPtrVecPtr)
{
    this->oldFileLstWidItemPtrVecPtr = cmakeLstWidItemPtrVecPtr;
}


QVector<QListWidgetItem*>* WestTab::getOldFileLstWidItemPtrVecPtr()
{
    return oldFileLstWidItemPtrVecPtr;
}


void WestTab::setNewFileLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* packageLstWidItemPtrVecPtr)
{
    this->newFileLstWidItemPtrVecPtr = packageLstWidItemPtrVecPtr;
}


QVector<QListWidgetItem*>* WestTab::getNewFileLstWidItemPtrVecPtr()
{
    return newFileLstWidItemPtrVecPtr;
}


void WestTab::setOldFileLstWidPtr(QListWidget* cmakeLstWidPtr)
{
    this->oldFileLstWidPtr = cmakeLstWidPtr;
}


QListWidget* WestTab::getOldFileLstWidPtr()
{
    return oldFileLstWidPtr;
}


void WestTab::setNewFileLstWidPtr(QListWidget* packageLstWidPtr)
{
    this->newFileLstWidPtr = packageLstWidPtr;
}


QListWidget* WestTab::getNewFileLstWidPtr()
{
    return newFileLstWidPtr;
}


void WestTab::setOuterLayout(QVBoxLayout* outerLayout)
{
    this->outerLayout = outerLayout;
}


QVBoxLayout* WestTab::getQVBoxLayout()
{
    return outerLayout;
}


QString* WestTab::toString()
{
    return new QString("***METHOD STUB***");
}


WestTab::~WestTab()
{
    ;
}