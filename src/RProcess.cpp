#include "RProcess.h"


QStringList* RProcess::curInUseFileNmStrLstPtr = new QStringList();
QList<int>* RProcess::numsInUseLstPtr = new QList<int>();


RProcess::RProcess()
{
    ;
}


void RProcess::redirectStdOutput()
{
    cout << "\n>>" << endl;
    outputLocTePtr->append(readAllStandardOutput() );
}


void RProcess::redirectError()
{
    cout << "\n>>" << endl;
    outputLocTePtr->append((readAllStandardOutput()) );
}


QString* RProcess::genTmpFileNameStrPtr()
{
    ;
}


void RProcess::addHeader(RFile* tmpRideFilePtr)
{
    cout << cct::yellow("Hardcoded path to catkin_ws at: RProcess::addHeader(...)");
    RosEnv::absPathToRosWs = "/home/james/catkin_ws";
    QByteArray tmpBa = RosEnv::absPathToRosWs.toLatin1();

    tmpRideFilePtr->write("#!/bin/bash");
    tmpRideFilePtr->write("\n\n#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\ncd ");
    tmpRideFilePtr->write(tmpBa.data());
    tmpRideFilePtr->write("\nsource ~/.bashrc");
    tmpRideFilePtr->write("\nsource devel/setup.bash\n");
}


void RProcess::start(const QString& program, const QStringList& arguments, OpenMode mode)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    tmpRideFilePtr->write(" ");
    
    QByteArray tmpByteArray;
    for(size_t i = 0; i < arguments.size(); i++)
    {
        tmpByteArray.append(arguments.at(i) + " ");
        tmpRideFilePtr->write(tmpByteArray);
        tmpByteArray.clear();
    }
    
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();
    
    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");

    testProcess.execute("chmod", stringlst);
    
    testProcess.start(*tmpFileNameStrPtr, mode); //don't run this->execute; this would result in infinate recursion!!!
    testProcess.waitForFinished(-1);
    QByteArray output = testProcess.readAllStandardOutput();
    cout << cct::bold("\nOutput: ") << output.data() << ":End" << endl;
    outputLocTePtr->append(output.data());
    cout << "exiting RProcess::start(...)" << endl;
}


void RProcess::start(const QString& program, OpenMode mode)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();

    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();

    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    //QProcess qprocess;
    testProcess.execute("chmod", stringlst);
    
    testProcess.start(*tmpFileNameStrPtr, mode); //don't run this->execute; this would result in infinate recursion!!!
    testProcess.waitForFinished(-1);
    
    
    /*
    QTextStream rsyncStdOutStream(testProcess.readAll() );
    QString buffer;
    int count = 0;
    while(true)
    {
        QString line = rsyncStdOutStream.readLine();
        if(line.isNull() && count == 50 )
            break;
        else if(line.isNull() )
            count++;
        else
            buffer.append("\n" + line);
    }
    cout << cct::bold("\nOutput: " ) << buffer.toStdString() << ":End" << endl;
    */
    
    QByteArray output = testProcess.readAllStandardOutput();
    cout << cct::bold("\nOutput: ") << output.data() << ":End" << endl;
    outputLocTePtr->append(output.data());
    cout << "exiting RProcess::start(...)" << endl;
}


int RProcess::execute(const QString& program, const QStringList& arguments)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    
    QByteArray tmpByteArray;
    for(size_t i = 0; i < arguments.size(); i++)
    {
        tmpByteArray.append(arguments.at(i) + "\n");
        tmpRideFilePtr->write(tmpByteArray);
        tmpByteArray.clear();
    }
    
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();
    
    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    
    return qprocess.execute(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
}


int RProcess::execute(const QString& program)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();

    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();

    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    
    int rtn = qprocess.execute(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
    QByteArray output = qprocess.readAllStandardOutput();
    cout << cct::bold("\nOutput: ") << output.data() << endl;
    
    return rtn;
}


bool RProcess::startDetached(const QString& program, const QStringList& arguments)
{   
    //cout << "Program: " << program.toStdString() << endl;
    //cout << "args: " << arguments.at(0).toStdString() << " " << arguments.at(1).toStdString() << endl;

    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();

    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    tmpRideFilePtr->write(" ");

    QByteArray tmpByteArray;
    for(size_t i = 0; i < arguments.size(); i++)
    {
        tmpByteArray.append(arguments.at(i) + " ");
        tmpRideFilePtr->write(tmpByteArray);
        tmpByteArray.clear();
    }

    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();

    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    
    return qprocess.startDetached(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
}


bool RProcess::startDetached(const QString& program, const QStringList& arguments, const QString& workingDirectory, qint64* pid)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    
    QByteArray tmpByteArray;
    for(size_t i = 0; i < arguments.size(); i++)
    {
        tmpByteArray.append(arguments.at(i) + "\n");
        tmpRideFilePtr->write(tmpByteArray);
        tmpByteArray.clear();
    }
    
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();
    
    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    
    // Don't run this->startDetached; this would result in infinite recursion!!!
    return qprocess.startDetached(*tmpFileNameStrPtr, QStringList(), workingDirectory, pid);
}


bool RProcess::startDetached(const QString& program)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();

    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();

    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.setProcessChannelMode(QProcess::MergedChannels);
    //QByteArray output = qprocess.readAll();
    qprocess.execute("chmod", stringlst);
    
    int rtn = qprocess.startDetached(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
    //cout << cct::bold("\nOutput: ") << output.data() << cct::bold("\nEnd of output") << endl;
    
    return rtn;
}


void RProcess::setOutputLocTePtr(QTextEdit* outputLocTePtr)
{
    this->outputLocTePtr = outputLocTePtr;
}


QTextEdit* RProcess::getOutputLocTePtr()
{
    return outputLocTePtr;
}


RProcess::~RProcess()
{
    ;
}