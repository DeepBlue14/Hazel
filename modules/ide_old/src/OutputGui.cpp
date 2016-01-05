#include "OutputGui.h"


OutputGui::OutputGui(QMainWindow* parent) : QMainWindow(parent)
{
    debugToolbarPtr = new DebugToolbar();
    debugWidPtr = new QToolBar();

    QVector<QAction*>* tmpActVec = debugToolbarPtr->getActions();
    for(size_t i = 0; i < tmpActVec->size(); i++)
    {
        debugWidPtr->addAction(tmpActVec->at(i) );
        
    }
    
    //TODO: if the user presses the "debug" button, enable/vis this
    debugWidPtr->setEnabled(false);
    debugWidPtr->setVisible(false);
    
    outputTePtr = new QTextEdit("");
    //outputTePtr->setEnabled(false);
    outputTePtr->setReadOnly(true);
    //outputTePtr->setTextBackgroundColor(Qt::black);
    outputTePtr->setText("testing");
    tabWidgetPtr = new QTabWidget();
    tabWidgetPtr->addTab(outputTePtr, "output text");
    tabWidgetPtr->setTabsClosable(true);
    
    
    this->setCentralWidget(tabWidgetPtr);
    this->addToolBar(Qt::RightToolBarArea, debugWidPtr);

    
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


void OutputGui::setOutputStrPtr(QString* outputStrPtr)
{
    this->outputStrPtr = outputStrPtr;
}
QString* OutputGui::getOutputStrPtr()
{
    return outputStrPtr;
}


void OutputGui::setOutputTePtr(QTextEdit* outputTePtr)
{
    this->outputTePtr = outputTePtr;
}


QTextEdit* OutputGui::getOutputTePtr()
{
    return outputTePtr;
}


void OutputGui::dumpToGui(QString* outputStrPtr)
{
    outputTePtr->setText(*outputStrPtr);
}


OutputGui::~OutputGui()
{
    ;
}


QString* OutputGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}