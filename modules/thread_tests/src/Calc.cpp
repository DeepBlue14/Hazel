#include "Calc.h"


Calc::Calc(QObject* parent) : QObject(parent)
{
    ;
}


void Calc::readOut()
{
    cout << "@ readOut()" << endl;
    QString all;
    all.append(process->readAllStandardOutput());
    emit message(all);
}


void Calc::readErr()
{
    cout << "@ readErr()" << endl;
    QString all;
    all.append(process->readAllStandardError());
    emit message(all);
}


void Calc::doCalc()
{
    QProcess* process = new QProcess();
    this->process = process;

    process->setWorkingDirectory("res");
    
    //process->start("./OutputTest.bash");
    process->start("./CatkinTest.bash", QStringList() << "--color");

    process->waitForStarted();
    QObject::connect(process, SIGNAL(readyReadStandardOutput()), this, SLOT(readOut()));
    QObject::connect(process, SIGNAL(readyReadStandardError()), this, SLOT(readErr()));

    emit message("finished!");
}


Calc::~Calc()
{
    ;
}