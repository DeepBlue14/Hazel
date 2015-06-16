#include "OutputGui.h"


OutputGui::OutputGui(QWidget* parent) : QWidget(parent)
{
    outputTePtr = new QTextEdit("");
    outputTePtr->setEnabled(false);
    outputTePtr->setTextBackgroundColor(Qt::black);
    outputTePtr->setText("testing");
    tabWidgetPtr = new QTabWidget();
    tabWidgetPtr->addTab(outputTePtr, "output text");
    tabWidgetPtr->setTabsClosable(true);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(tabWidgetPtr, 0, 0);
    
    
    this->setLayout(outerLayout);
}


void OutputGui::addTab(QWidget* tab, QString* tabName)
{
    tabPtrVec.push_back(tab);
    tabWidgetPtr->addTab(tab, *tabName);
}


QTabWidget* OutputGui::getTabWidget()
{
    return tabWidgetPtr;
}


QString* OutputGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


void OutputGui::setOutputStrPtr(QString* outputStrPtr)
{
    this->outputStrPtr = outputStrPtr;
}
QString* OutputGui::getOutputStrPtr()
{
    return outputStrPtr;
}


void OutputGui::dumpToGui(QString* outputStrPtr)
{
    outputTePtr->setText(*outputStrPtr);
}


OutputGui::~OutputGui()
{
    ;
}