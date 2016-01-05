/* 
 * File:   RProcess.h
 * Module: Unaffiliated
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
 *            http://www.qtcentre.org/threads/47538-QProcess-read-from-stdout-lively
 *
 * Created on June 9, 2015, 6:53 PM
 */

#ifndef RPROCESS_H
#define	RPROCESS_H

#include <QWidget>
#include <QProcess>
#include <QByteArray>
#include <QStringList>
#include <QTextStream>
#include <QList>
#include <QString>
#include <QDebug>

#include <iostream>

#include "RFile.h"
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

using namespace std;

class RProcess : public QProcess
{
    Q_OBJECT
    
    private:
        static QStringList* curInUseFileNmStrLstPtr;
        static QList<int>* numsInUseLstPtr;
        QTextEdit* outputLocTePtr;
        QProcess testProcess;

        static QString* genTmpFileNameStrPtr();
        static void addHeader(RFile* tmpRideFilePtr);
        
        
        
    private slots:
        void redirectStdOutput();
        void redirectError();
        
    public:
        /**
         * Constructor.
         */
        RProcess();
        
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

        /**
         * Destructor.
         */
        ~RProcess();
};

#endif	/* RPROCESS_H */