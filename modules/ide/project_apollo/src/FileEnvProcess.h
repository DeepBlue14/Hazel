/* 
 * File:   FileEnvProcess.h
 * Module: project_apollo
 * Author: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainer: James Kuczynski, jkuczyns@cs.uml.edu
 * File Description: This implementation inherits from QT class QProcess.  It
 *                   creates a temporary shell script at /tmp, from which it
 *                   runs commands.  This forces .bashrc to be sourced, as well
 *                   as any (or all) environmental variables to be accessed,
 *                   and thus enables custom ROS commands (such as sourceing
 *                   the ROS environment) to be run. 
 *                   
 * Reference: http://www.codeprogress.com/cpp/libraries/qt/showQtExample.php?index=474&key=QProcessRedirectOutput
 *            http://www.qtcentre.org/threads/47538-QProcess-read-from-stdout-lively
 *
 *
 * Created on January 6, 2016, 5:04 PM
 * Last Modified on January 6, 2016, 5:04 PM
 */

#ifndef FILE_ENV_PROCESS_H
#define FILE_ENV_PROCESS_H

#include <QWidget>
#include <QProcess>
#include <QByteArray>
#include <QStringList>
#include <QTextEdit>
#include <QTextStream>
#include <QFile>
#include <QList>
#include <QString>
#include <QProcess>
#include <QDebug>

#include <iostream>

#include "RosEnv.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using std::cout;
using std::endl;

class FileEnvProcess : public QProcess
{
    Q_OBJECT

public:
    explicit FileEnvProcess(QProcess* parent = 0);
    /**
     * Starts a program on a separate thread.
     * 
     * @param program the program/command to be executed.
     * @param arguments options.
     * @param mode the mode.
     */
    void start(const QString& program, const QStringList& arguments, OpenMode mode = ReadWrite);

    /**
     * Starts a program on a separate process.
     * 
     * @param program the program/command to be executed.
     * @param mode the mode.
     */
    void start(const QString& program, OpenMode mode = ReadWrite);

    /**
     * Executes a program and waits for it to finish before returning to
     * the main thread.
     * 
     * @param program the program/command to be executed.
     * @param arguments options.
     * @return the status of the execution.
     */
    static int execute(const QString& program, const QStringList& arguments);

    /**
     * Executes a program and waits for it to finish before returning to
     * the main thread.
     * 
     * @param program the program/command to be executed.
     * @return the status of the execution.
     */
    static int execute(const QString& program);

    /**
     * Launches a program on a child process.
     * 
     * @param program the program/command to be executed.
     * @param arguments the options.
     * @return the status of the execution.
     */
    static bool startDetached(const QString& program, const QStringList& arguments);

    /**
     * Launches a program on a child process.
     * 
     * @param program the program/command to be executed.
     * @param arguments the options.
     * @param workingDirectory the directory from which the program/command
     *        should be executed from.
     * @param pid the pid the child process should be given.
     * @return the status of the execution.
     */
    static bool startDetached(const QString& program, const QStringList& arguments, const QString& workingDirectory, qint64* pid = 0);

    /**
     * Launches a program on a child process.
     * 
     * @param program the program/command to be executed.
     * @return the status of the execution.
     */
    static bool startDetached(const QString& program);

    /**
     * Mutator to specify an textedit UI for output to be redirected to.  
     * 
     * @param outputLocTePtr output textedit.
     */
    void setOutputLocTePtr(QTextEdit* outputLocTePtr);

    /**
     * Accessor of the textedit UI the output is redirected to.
     * 
     * @return outputLocTePtr output textedit.
     */
    QTextEdit* getOutputLocTePtr();
    virtual ~FileEnvProcess();

private slots:
    void redirectStdOutput();
    void redirectError();

private:
    static QStringList* curInUseFileNmStrLstPtr;
    static QList<int>* numsInUseLstPtr;
    QTextEdit* outputLocTePtr;
    QProcess testProcess;

    static QString* genTmpFileNameStrPtr();
    static void addHeader(QFile* tmpRideFilePtr, QString sourceRosSetup = RosEnv::absPathToRosWs);
    static void addFooter(QFile* tmpRideFileptr);
    
        
};

#endif /* FILE_ENV_PROCESS_H */