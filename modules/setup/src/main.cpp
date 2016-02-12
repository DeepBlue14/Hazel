/*
 * File:   main.cpp
 * Author: james
 *
 * Created on January 29, 2016, 9:41 PM
 */

#include <QApplication>
#include <QProcess>

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    QProcess process;
    process.start("bash", QStringList() << "-c" << "echo $USER");
    process.waitForFinished(-1);
    QByteArray bt = process.readAllStandardOutput();
    process.close();
    QString str(bt);
    cout << str.toStdString() << endl;
    

    return 0;
}