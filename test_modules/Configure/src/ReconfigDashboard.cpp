#include "ReconfigDashboard.h"


ReconfigDashboard::ReconfigDashboard(QWidget* parent) : QWidget(parent)
{
    
    historyLstWidPtr = new QListWidget();
    
    QStringList* historyStrLstPtr = new QStringList();
    historyStrLstPtr->push_back("test_node");
    historyStrLstPtr->push_back("laser_detection");
    historyStrLstPtr->push_back("night_hawk");
    historyLstWidPtr->addItems(*historyStrLstPtr);

    historyLstWidPtr->item(0)->setToolTip("/home/james/catkin_ws/src/test_node");
    historyLstWidPtr->item(1)->setToolTip("/home/james/frankenscooter_ws/src/laser_detection");
    historyLstWidPtr->setBackgroundRole(QPalette::Highlight);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(new QLabel("History"), 0, 0);
    outerLayout->addWidget(historyLstWidPtr, 1, 0);
    
    this->setLayout(outerLayout);
}


QString* ReconfigDashboard::toString()
{
    return new QString("***METHOD STUB***");
}


ReconfigDashboard::~ReconfigDashboard()
{
    ;
}