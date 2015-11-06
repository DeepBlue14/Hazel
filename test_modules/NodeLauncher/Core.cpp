#include <qt4/QtGui/qtextedit.h>

#include "Core.h"


Core::Core(QMainWindow* parent) : QMainWindow(parent)
{
    setup();
}


void Core::setup()
{
    QDockWidget* d0 = new QDockWidget();
    QTextEdit* t0 = new QTextEdit();
    t0->setText("hello world 0");
    d0->setWidget(t0);
    this->setCentralWidget(d0);
    
    QDockWidget* d1 = new QDockWidget();
    QTextEdit* t1 = new QTextEdit();
    t1->setText("hello world 1");
    d1->setWidget(t1);
    this->addDockWidget(Qt::BottomDockWidgetArea, d1);

    
    QDockWidget* d2 = new QDockWidget();
    QTextEdit* t2 = new QTextEdit();
    t2->setText("hello world 2");
    d2->setWidget(t2);
    //see: http://stackoverflow.com/questions/18132911/qt-set-default-width-of-a-qwidget
    this->addDockWidget(Qt::TopDockWidgetArea, d2);

    
    QDockWidget* d3 = new QDockWidget();
    QTextEdit* t3 = new QTextEdit();
    t3->setText("hello world 3");
    d3->setWidget(t3);
    this->addDockWidget(Qt::LeftDockWidgetArea, d3);
    
    QDockWidget* d4 = new QDockWidget();
    QTextEdit* t4 = new QTextEdit();
    t4->setText("hello world 4");
    d4->setWidget(t4);
    this->addDockWidget(Qt::RightDockWidgetArea, d4);
    
    QDockWidget* d5 = new QDockWidget();
    QTextEdit* t5 = new QTextEdit();
    t5->setText("hello world 5");
    d5->setWidget(t5);
    this->addDockWidget(Qt::TopDockWidgetArea, d5);
    
    QDockWidget* d6 = new QDockWidget();
    QTextEdit* t6 = new QTextEdit();
    t6->setText("hello world 6");
    d6->setWidget(t6);
    this->addDockWidget(Qt::TopDockWidgetArea, d6);
    
    QDockWidget* d7 = new QDockWidget();
    QTextEdit* t7 = new QTextEdit();
    t7->setText("hello world 7");
    d7->setWidget(t7);
    this->addDockWidget(Qt::BottomDockWidgetArea, d7);
    
    QDockWidget* d8 = new QDockWidget();
    QTextEdit* t8 = new QTextEdit();
    t8->setText("hello world 8");
    d8->setWidget(t8);
    this->addDockWidget(Qt::BottomDockWidgetArea, d8);
    
    
}


QString* Core::toString()
{
    return new QString("***METHOD STUB***");
}


Core::~Core()
{
    ;
}