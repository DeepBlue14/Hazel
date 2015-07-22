#include "ReconfigPage_2.h"


ReconfigPage_2::ReconfigPage_2(QWidget* parent) : QWidget(parent)
{
    rosPkgStrLstPtr = new QStringList();
    initRosPkgStrLstPtr();
            
    rosPkgLwPtr = new QListWidget();
    QListWidgetItem* item;
    for(size_t i = 0; i < rosPkgStrLstPtr->size(); i++)
    {
        item = new QListWidgetItem(rosPkgStrLstPtr->at(i), rosPkgLwPtr);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
        item->setCheckState(Qt::Unchecked);
    }

    advancedOptionsPbStr = new QPushButton("Advanced");
    
    connect(advancedOptionsPbStr, SIGNAL(released()), this, SLOT(handleAdvancedOptionsPbStr()));
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(rosPkgLwPtr, 0, 0);
    outerLayout->addWidget(advancedOptionsPbStr, 1, 0, Qt::AlignRight);
    
    this->setLayout(outerLayout);
}


void ReconfigPage_2::handleAdvancedOptionsPbStr()
{
    
}


void ReconfigPage_2::initRosPkgStrLstPtr()
{
    rosPkgStrLstPtr->push_back("actionlib_msgs");
    rosPkgStrLstPtr->push_back("diagnostic_msgs");
    rosPkgStrLstPtr->push_back("geometry_msgs");
    rosPkgStrLstPtr->push_back("nav_msgs");
    rosPkgStrLstPtr->push_back("sensor_msgs");
    rosPkgStrLstPtr->push_back("shape_msgs");
    rosPkgStrLstPtr->push_back("std_msgs");
    rosPkgStrLstPtr->push_back("stereo_msgs");
    rosPkgStrLstPtr->push_back("trajectory_msgs");
    rosPkgStrLstPtr->push_back("visualization_msgs");
}


QString* ReconfigPage_2::toString()
{
    
}


ReconfigPage_2::~ReconfigPage_2()
{
    ;
}