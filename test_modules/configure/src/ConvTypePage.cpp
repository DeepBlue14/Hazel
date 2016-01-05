#include "ConvTypePage.h"


ConvTypePage::ConvTypePage(QWidget* parent) : QWidget(parent)
{
    labelPtr = new QLabel("Convert to:");
    toCMakeRbPtr = new QRadioButton("CMake");
    toRosbuildRbPtr = new QRadioButton("Rosbuild");
    toCatkinRbPtr = new QRadioButton("Catkin");
    toRos2RbPtr = new QRadioButton("Ros 2");
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(labelPtr, 0, 0);
    outerLayout->addWidget(toCMakeRbPtr, 1, 0);
    outerLayout->addWidget(toRosbuildRbPtr, 2, 0);
    outerLayout->addWidget(toCatkinRbPtr, 3, 0);
    outerLayout->addWidget(toRos2RbPtr, 4, 0);
    
    this->setLayout(outerLayout);
}


QString* ConvTypePage::toString()
{
    ;
}


ConvTypePage::~ConvTypePage()
{
    ;
}