/* 
 * File:   RProcess.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This implementation inherits from QT class QProcess.  It
 *                   creates a temporary shell script at /tmp, from which it
 *                   runs commands.  This forces .bashrc to be sourced, as well
 *                   as any (or all) environmental variables to be accessed,
 *                   and thus enables custom ROS commands (such as sourceing
 *                   the ROS environment) to be run. 
 *                   
 *
 * Created on June 9, 2015, 6:53 PM
 */

#ifndef RPROCESS_H
#define	RPROCESS_H

#include <QWidget>
#include <QProcess>
#include <QByteArray>
#include <QStringList>
#include <QString>

#include <iostream>

#include "RideFile.h"

using namespace std;

class RProcess : public QProcess
{
    private:
        static QStringList* curInUseFileNmStrLstPtr;
        
        QString* genTmpFileNameStrPtr();
        
    public:
        RProcess();
        void start(const QString& program, const QStringList& arguments, OpenMode mode = ReadWrite);
        void start(const QString& program, OpenMode mode = ReadWrite);
        static int execute(const QString& program, const QStringList& arguments);
        static int execute(const QString& program);
        static bool startDetached(const QString& program, const QStringList& arguments);
        static bool startDetached(const QString& program, const QStringList& arguments, const QString& workingDirectory, qint64* pid = 0);
        static bool startDetached(const QString& program);

        ~RProcess();
};

#endif	/* RPROCESS_H */