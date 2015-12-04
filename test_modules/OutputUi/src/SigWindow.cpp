#include "SigWindow.h"


SigWindow::SigWindow(QMainWindow* parent) : QMainWindow(parent)
{
    sigTextEditPtr = new SigTextEdit();
    sigTextToolBarPtr = new SigTextToolBar();
    
    QVector<QAction*>* tmpRunActVec = sigTextToolBarPtr->getActions();
    for(size_t i = 0; i < tmpRunActVec->size(); i++)
    {
        sigTextToolBarPtr->addAction(tmpRunActVec->at(i) );
    }  
    
    this->setCentralWidget(sigTextEditPtr);
    this->addToolBar(Qt::LeftToolBarArea, sigTextToolBarPtr);
}


void SigWindow::setup()
{
    
}


SigTextEdit* SigWindow::getSigTextToolBarPtr()
{
    return sigTextEditPtr;
}


QString* SigWindow::toString()
{
    return new QString("***METHOD STUB***");
}


SigWindow::~SigWindow()
{
    ;
}