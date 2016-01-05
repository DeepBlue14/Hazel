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
 * Reference: http://www.codeprogress.com/cpp/libraries/qt/showQtExample.php?index=474&key=QProcessRedirectOutput
 *            https://blog.udemy.com/powershell-tutorial/
 *
 * Created on July 22, 2015, 3:44 PM
 */

#ifndef UPROCESS_H
#define	UPROCESS_H

#include <QWidget>
#include <QProcess>
#include <QByteArray>
#include <QStringList>
#include <QTextEdit>
#include <QList>
#include <QString>
#include <QDebug>

#include <iostream>

#include "UFile.h"
#include "Environment.h"

using std::cout;
using std::endl;

class UProcess : public QProcess
{
    Q_OBJECT

public:
    explicit UProcess();
    void setWorkingDirStrPtr(QString* workingDirStrPtr);
    QString* getWorkingDirStrPtr();
    void start(const QString& program, const QStringList& arguments, OpenMode mode = ReadWrite);
    void start(const QString& program, OpenMode mode = ReadWrite);
    static int execute(const QString& program, const QStringList& arguments);
    static int execute(const QString& program);
    static bool startDetached(const QString& program, const QStringList& arguments);
    static bool startDetached(const QString& program, const QStringList& arguments, const QString& workingDirectory, qint64* pid = 0);
    static bool startDetached(const QString& program);
    void setOutputStrPtr(QString* outputLocTePtr);
    QString* getOutputStrPtr();
    virtual ~UProcess();
    
    
private slots:
    void redirectStdOutput();
    void redirectError();
    
    
private:
    static QStringList* curInUseFileNmStrLstPtr;
    static QList<int>* numsInUseLstPtr;
    QString* outputStrPtr;
    QProcess testProcess;
    QString* workingDirStrPtr;

    static QString* genTmpFileNameStrPtr();
    static void addHeader(UFile* tmpRideFilePtr);
    
};

#endif	/* UPROCESS_H */