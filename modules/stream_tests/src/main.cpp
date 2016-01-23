/*
 * File:   main.cpp
 * Author: james
 * 
 * Ref: https://www.gnu.org/software/gettext/manual/html_node/The-TERM-variable.html
 *      http://stackoverflow.com/questions/1780483/lines-and-columns-environmental-variables-lost-in-a-script
 * 
 * Created on January 17, 2016, 9:43 PM
 */

#include <QApplication>
#include <QTextStream>
#include <QProcess>
#include <QByteArray>
#include <QString>
#include <QDebug>

#include <iostream>

using std::cout;
using std::endl;

QTextStream& qStdOut()
{
    static QTextStream ts(stdout);
    return ts;
}

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    qStdOut() << "\033[0;32mstd out!\033[0m";
    
    cout << "\033[0;34mcout!\033[0m" << endl;
    
    
    // create and show your widgets here
    QProcess process;
    //process.setWorkingDirectory("/home/james/catkin_ws");
    QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
    //env.insert("TERM", "xterm"); // tell it to handle colors
    //env.insert("COLOR", "y");
    //env.insert("COLUMNS", "80");
    process.setProcessEnvironment(env);
    process.start("ls", QStringList() << "--color");

    process.waitForFinished(-1);
    QByteArray output = process.readAllStandardOutput();
    output.append(process.readAllStandardError() );
    QString outputStr = output;
    
    
    if(output.contains("\033") )
    {
        cout << "FOUND MATCH" << endl;
    }
    else
    {
        cout << "nope :(" << endl;
    }
    
    qDebug() << output;
    cout << outputStr.toStdString() << endl;

    //return app.exec();
    return 0;
}
