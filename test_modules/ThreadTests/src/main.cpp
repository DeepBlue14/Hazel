/*
 * File:   main.cpp
 * Module: ThreadTests
 * Author: james
 * Email:
 * File Description: 
 * 
 * 
 * Created on December 31, 2015, 11:22 PM
 * Last Modified: 1/01/2016
 */

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

#include "Calc.h"

using std::cout;
using std::endl;

// Reference: http://www.qtcentre.org/threads/32416-Update-GUI-from-another-thread

/*
class Calc : public QObject
{

    Q_OBJECT
    
    public:
        QProcess* process;
        

    public slots:
        void readOut()
        {
            cout << "@ readOut()" << endl;
            QString all;
            all.append(process->readAllStandardOutput() );
            emit message(all);
        }
        void readErr()
        {
            cout << "@ readErr()" << endl;
            QString all;
            all.append(process->readAllStandardError() );
            emit message(all);
        }
        void doCalc()
        {
            QProcess* process = new QProcess();
            this->process = process;

            process->setWorkingDirectory("res");
            process->start("./OutputTest.bash");
            
            process->waitForStarted();
            QObject::connect(process, SIGNAL(readyReadStandardOutput()), this, SLOT(readOut()));
            QObject::connect(process, SIGNAL(readyReadStandardError()), this, SLOT(readErr()));        
            
            emit message("finished!");
        }

    signals:
        void message(QString);
};
*/

int main(int argv, char **args)
{
    QApplication app(argv, args);

    // GUI
    QWidget w;
    QPushButton* runPb = new QPushButton("start", &w);
    QPlainTextEdit* te = new QPlainTextEdit(&w);
    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(te);
    layout->addWidget(runPb);
    w.setLayout(layout);
    w.show();

    // Thread
    Calc calcPtr;
    QThread thread;
    calcPtr.moveToThread(&thread);
    thread.start();

    // Connections
    QObject::connect(&calcPtr, SIGNAL(message(QString)), te, SLOT(appendHtml(QString) ) );
    QObject::connect(runPb, SIGNAL(clicked()), &calcPtr, SLOT(doCalc() ) );

    return app.exec();
}

//#include "main.moc" //turn this on if you turn on commented out class in this file