/* 
 * File:   Run.h
 * Author: james
 *
 * Created on May 23, 2015, 4:54 PM
 */

#ifndef RUN_H
#define	RUN_H

#include <QProcess>
#include <QString>
#include <QStringList>

#include <iostream>

using namespace std;

class Run
{
    private:
        QProcess* runProcessPtr;
        QString* cmdStrPtr;
        QStringList* argsStrLstPtr;
        
    public:
        Run();
        void run();
        ~Run();
};

#endif	/* RUN_H */

