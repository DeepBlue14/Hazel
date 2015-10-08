#include "OutputGui.h"


OutputGui::OutputGui(QWidget* parent) : QWidget(parent)
{
    //--------------------------------
    debugWidPtr = new QToolBar();

    QAction* tmpAct = new QAction(QIcon("images/newFile01.png"), tr("&New File"), this);
    tmpAct->setShortcut(QKeySequence::New);
    tmpAct->setStatusTip("New File");
    connect(tmpAct, SIGNAL(triggered() ), this, SLOT(handleNewFileActionSlot() ) );
    
    debugWidPtr->addAction(tmpAct);
    //-----------------------------
    
    outputTePtr = new QTextEdit("");
    //outputTePtr->setEnabled(false);
    outputTePtr->setReadOnly(true);
    //outputTePtr->setTextBackgroundColor(Qt::black);
    outputTePtr->setText("testing");
    tabWidgetPtr = new QTabWidget();
    tabWidgetPtr->addTab(outputTePtr, "output text");
    tabWidgetPtr->setTabsClosable(true);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(debugWidPtr, 0, 0);
    outerLayout->addWidget(tabWidgetPtr, 1, 0);
    
    
    
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