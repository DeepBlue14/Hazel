#include "RunDisplay.h"


RunDisplay::RunDisplay(QMainWindow* parent) : QMainWindow(parent)
{
    setup();
}


void RunDisplay::setup()
{
    QTabWidget* tabWidgetPtr = new QTabWidget();
    this->setCentralWidget(tabWidgetPtr);
    
    for(size_t i = 0; i < 9; i++)
    {
        /*
        QDockWidget* dockWidgetPtr = new QDockWidget("d" + i);
        QTextEdit* textEditPtr = new QTextEdit();
        textEditPtr->setText("hello world 0");
        dockWidgetPtr->setWidget(textEditPtr);
        
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
        */
        
        QTextEdit* textEditPtr = new QTextEdit();
        textEditPtr->setText("hello world 0");
        tabWidgetPtr->addTab(textEditPtr, "tab");
        
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