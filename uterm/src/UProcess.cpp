#include "UProcess.h"


QStringList* UProcess::curInUseFileNmStrLstPtr = new QStringList();
QList<int>* UProcess::numsInUseLstPtr = new QList<int>();


UProcess::UProcess()
{
    outputStrPtr = new QString();
}


void UProcess::setWorkingDirStrPtr(QString* workingDirStrPtr)
{
    this->workingDirStrPtr = workingDirStrPtr;
}


QString* UProcess::getWorkingDirStrPtr()
{
    return workingDirStrPtr;
}


void UProcess::redirectStdOutput()
{
    cout << "\n>>" << endl;
    setOutputStrPtr(new QString(readAllStandardOutput().data()) );
    //outputStrPtr->append(readAllStandardOutput());
}


void UProcess::redirectError()
{
    cout << "\n>>" << endl;
    setOutputStrPtr(new QString(readAllStandardOutput().data()));
    //outputStrPtr->append((readAllStandardOutput()));
}


QString* UProcess::genTmpFileNameStrPtr()
{
    ;
}


void UProcess::addHeader(UFile* tmpRideFilePtr)
{
    //Environment::absPathToRosWs = "/home/james/catkin_ws";
    QByteArray tmpBa = Environment::absPathToRosWs.toLatin1();

    tmpRideFilePtr->write("#!/bin/bash"); //^^^UNIX only^^^
    tmpRideFilePtr->write("\n\n#######################");
    tmpRideFilePtr->write("\n# TEMPORARY UTerm FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\ncd "); //^^^UNIX only^^^
    tmpRideFilePtr->write(tmpBa.data());
    tmpRideFilePtr->write("\n");
    //tmpRideFilePtr->write("\nsource ~/.bashrc");
    
    if(Environment::sourceEnv == true)
    {
        cout << "***sourcing env***" << endl;
        tmpRideFilePtr->write("\nsource devel/setup.bash\n");
    }
    else
    {
        cout << "***NOT sourcing env***" << endl;
    }
}


void UProcess::start(const QString& program, const QStringList& arguments, OpenMode mode)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    UFile* tmpRideFilePtr = new UFile(*tmpFileNameStrPtr);
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
    
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");  //^^^UNIX only^^^
    //tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();
    
    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");  //^^^UNIX only^^^

    testProcess.execute("chmod", stringlst);  //^^^UNIX only^^^
    
    testProcess.start(*tmpFileNameStrPtr, mode); //don't run this->execute; this would result in infinite recursion!!!
    testProcess.waitForFinished(-1);
    QByteArray output = testProcess.readAllStandardOutput();
    output.append(testProcess.readAllStandardError());
    cout << "\nOutput: " << output.data() << ":End" << endl;
    //outputStrPtr->append(output.data());
    setOutputStrPtr(new QString(output.data()));
    cout << "exiting RProcess::start(...)" << endl;
}


void UProcess::start(const QString& program, OpenMode mode)
{
    cout << "^^^^^^^^^^^^^^^^^^^^^6" << endl;
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    UFile* tmpRideFilePtr = new UFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();

    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"*^*\"\n");
    tmpRideFilePtr->write("pwd");
    tmpRideFilePtr->write("\necho \"*^*\"\n");
    //tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();

    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    //QProcess qprocess;
    testProcess.execute("chmod", stringlst);
    
    testProcess.start(*tmpFileNameStrPtr, mode); //don't run this->execute; this would result in infinite recursion!!!
    testProcess.waitForFinished(-1);
    QByteArray output = testProcess.readAllStandardOutput();
    output.append(testProcess.readAllStandardError());
    //cout << "\nOutput: " << output.data() << ":End" << endl;
    //outputStrPtr->append(output.data());
    setOutputStrPtr(new QString(output.data()) );
    cout << "exiting RProcess::start(...)" << endl;
}


int UProcess::execute(const QString& program, const QStringList& arguments)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    UFile* tmpRideFilePtr = new UFile(*tmpFileNameStrPtr);
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
    //tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();
    
    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    
    return qprocess.execute(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
}


int UProcess::execute(const QString& program)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    UFile* tmpRideFilePtr = new UFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();

    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    //tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();

    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    
    int rtn = qprocess.execute(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
    QByteArray output = qprocess.readAllStandardOutput();
    output.append(qprocess.readAllStandardError());
    cout << "\nOutput: " << output.data() << endl;
    
    return rtn;
}


bool UProcess::startDetached(const QString& program, const QStringList& arguments)
{   
    //cout << "Program: " << program.toStdString() << endl;
    //cout << "args: " << arguments.at(0).toStdString() << " " << arguments.at(1).toStdString() << endl;

    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    UFile* tmpRideFilePtr = new UFile(*tmpFileNameStrPtr);
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
    //tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();

    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    
    return qprocess.startDetached(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
}


bool UProcess::startDetached(const QString& program, const QStringList& arguments, const QString& workingDirectory, qint64* pid)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    UFile* tmpRideFilePtr = new UFile(*tmpFileNameStrPtr);
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
    //tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();
    
    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    
    // Don't run this->startDetached; this would result in infinite recursion!!!
    return qprocess.startDetached(*tmpFileNameStrPtr, QStringList(), workingDirectory, pid);
}


bool UProcess::startDetached(const QString& program)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    UFile* tmpRideFilePtr = new UFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();

    addHeader(tmpRideFilePtr);
    tmpRideFilePtr->write(programCharPtr);
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    //tmpRideFilePtr->write("\necho \"Finished execution.\"");
    tmpRideFilePtr->close();

    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.setProcessChannelMode(QProcess::MergedChannels);
    //QByteArray output = qprocess.readAll();
    qprocess.execute("chmod", stringlst);
    
    int rtn = qprocess.startDetached(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
    
    return rtn;
}


void UProcess::setOutputStrPtr(QString* outputStrPtr)
{
    this->outputStrPtr = outputStrPtr;
}


QString* UProcess::getOutputStrPtr()
{
    return outputStrPtr;
}


UProcess::~UProcess()
{
    ;
}