#include "RunDisplay.h"


RunDisplay::RunDisplay(QMainWindow* parent) : QMainWindow(parent)
{
    setup();
}


void RunDisplay::setup()
{
    runToolbarPtr = new RunToolBar();

    QVector<QAction*>* tmpRunActVec = runToolbarPtr->getActions();
    
    for(size_t i = 0; i < tmpRunActVec->size(); i++)
    {
        runToolbarPtr->addAction(tmpRunActVec->at(i) );
    }    
    
    // Two different available modes
    //loadTabMode();
    loadPanelMode();
    this->addToolBar(Qt::LeftToolBarArea, runToolbarPtr);
}


void RunDisplay::loadTabMode()
{
    QTabWidget* tabWidgetPtr = new QTabWidget();
    this->setCentralWidget(tabWidgetPtr);
    
    for(size_t i = 0; i < 9; i++)
    {
        SigTextEdit* textEditPtr = new SigTextEdit();
        textEditPtr->setText("hello world 0");
        tabWidgetPtr->addTab(textEditPtr, "tab");
    }
}


void RunDisplay::loadPanelMode()
{
    //QTabWidget* tabWidgetPtr = new QTabWidget();
    //this->setCentralWidget(tabWidgetPtr);
    
    for(size_t i = 0; i < 8; i++)
    {
        QDockWidget* dockWidgetPtr = new QDockWidget("d" + i);
        //SigTextEdit* textEditPtr = new SigTextEdit();
        SigWindow* sigWindowPtr = new SigWindow();
        SigTextEdit* textEditPtr = sigWindowPtr->getSigTextToolBarPtr();
        textEditPtr->setText("hello world 0");
        dockWidgetPtr->setWidget(sigWindowPtr/*textEditPtr*/);
        
        switch(i%4)
        {
            case 0:
                this->addDockWidget(Qt::TopDockWidgetArea, dockWidgetPtr);
                break;
            case 1:
                this->addDockWidget(Qt::BottomDockWidgetArea, dockWidgetPtr);
                break;
            case 2:
                this->addDockWidget(Qt::LeftDockWidgetArea, dockWidgetPtr);
                break;
            case 3:
                this->addDockWidget(Qt::RightDockWidgetArea, dockWidgetPtr);
                break;
        }
        
        
    }
}


QString* RunDisplay::toString()
{
    return new QString("***METHOD STUB***");
}


RunDisplay::~RunDisplay()
{
    ;
}