/* 
 * File:   MasterGui.h
 * Module: 
 * Author: james
 * Email: 
 * File Description:
 *
 * Created on December 31, 2015, 11:40 PM
 * Last Modified: 
 */

#ifndef MASTER_GUI_H
#define MASTER_GUI_H

#include <QApplication>
#include <QWidget>
#include <QTime>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QThread>
#include <QProcess>
#include <QTextCodec>
#include <QDebug>

#include <iostream>

using std::cout;
using std::endl;


class Calc : public QObject
{
    Q_OBJECT

public:
    explicit Calc(QObject* parent = 0);
    virtual ~Calc();
    
    QProcess* process;
    

public slots:
    void readOut();
    void readErr();
    void doCalc();

signals:
    void message(QString);
};

#endif /* MASTER_GUI_H */