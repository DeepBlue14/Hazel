#include "NewFilePage_3.h"


NewFilePage_3::NewFilePage_3(QWidget* parent) : QWidget(parent)
{
    msgCatagoryStrLstPtr = new QStringList();
    msgCatagoryStrLstPtr->push_back("std_msgs");
    msgCatagoryStrLstPtr->push_back("sensor_msgs");
    msgCatagoryStrLstPtr->push_back("geometry_msgs");
    msgCatagoryStrLstPtr->push_back("...");

    
    QStringList* std_msgsStrLstPtr = new QStringList();
    std_msgsStrLstPtr->push_back("char");
    std_msgsStrLstPtr->push_back("std_string");
    
    QStringList* sensor_msgsStrLstPtr = new QStringList();
    sensor_msgsStrLstPtr->push_back("image");
    sensor_msgsStrLstPtr->push_back("pointcloud");
    sensor_msgsStrLstPtr->push_back("pointcloud2");
    sensor_msgsStrLstPtr->push_back("imu");
    
    QStringList* geometry_msgsStrLstPtr = new QStringList();
    geometry_msgsStrLstPtr->push_back("vector2");
    geometry_msgsStrLstPtr->push_back("vector3");

    specificMsgStrLstVec.push_back(std_msgsStrLstPtr);
    specificMsgStrLstVec.push_back(sensor_msgsStrLstPtr);
    specificMsgStrLstVec.push_back(geometry_msgsStrLstPtr);
    
    msgCatagoryLwPtr = new QListWidget();
    msgCatagoryLwPtr->addItems(*msgCatagoryStrLstPtr);
    specificMsgLwPtr = new QListWidget();
    specificMsgLwPtr->addItems(*(specificMsgStrLstVec.at(0)) ); // default: first option
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(msgCatagoryLwPtr, 0, 0);
    outerLayoutPtr->addWidget(specificMsgLwPtr, 0, 1);
    
    this->setLayout(outerLayoutPtr);
}


NewFilePage_3::~NewFilePage_3()
{
    ;
}