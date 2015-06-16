#include "RProcess.h"


QStringList* RProcess::curInUseFileNmStrLstPtr = new QStringList();
QList<int>* RProcess::numsInUseLstPtr = new QList<int>();


RProcess::RProcess()
{
    ;
}


QString* RProcess::genTmpFileNameStrPtr()
{
    ;
}


void RProcess::addHeader(RFile* tmpRideFilePtr, QString* absPathToRosWs)
{
    tmpRideFilePtr->write("#!/bin/bash");
    tmpRideFilePtr->write("\n\n#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    QByteArray tmpBa = absPathToRosWs->toLatin1();
    tmpRideFilePtr->write("\n\nsource "  + *tmpBa.data() );
}


void RProcess::start(const QString& program, const QStringList& arguments, OpenMode mode)
{
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    tmpRideFilePtr->write("#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\n#!/bin/bash\nsource ");
    
    QByteArray tmpByteArray;
    for(size_t i = 0; i < arguments.size(); i++)
    {
        tmpByteArray.append(arguments.at(i) + "\n");
        tmpRideFilePtr->write(tmpByteArray);
        tmpByteArray.clear();
    }
    

    tmpRideFilePtr->close();
    
    this->start(*tmpFileNameStrPtr, mode);
}


void RProcess::start(const QString& program, OpenMode mode)
{
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    tmpRideFilePtr->write("#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\n#!/bin/bash\nsource ");
    
    tmpRideFilePtr->close();
    
    this->start(*tmpFileNameStrPtr, mode);
}


int RProcess::execute(const QString& program, const QStringList& arguments)
{
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    tmpRideFilePtr->write("#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\n#!/bin/bash\nsource ");
    
    QByteArray tmpByteArray;
    for(size_t i = 0; i < arguments.size(); i++)
    {
        tmpByteArray.append(arguments.at(i) + "\n");
        tmpRideFilePtr->write(tmpByteArray);
        tmpByteArray.clear();
    }
    

    tmpRideFilePtr->close();
    
    return execute(*tmpFileNameStrPtr);
}


int RProcess::execute(const QString& program)
{
    cout << cct::yellow("Warning! RProcess::execute(...) is hardcoded!") << endl;
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    tmpRideFilePtr->write("#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\n#!/bin/bash");
    tmpRideFilePtr->write("\ncd /home/james/catkin_ws");
    tmpRideFilePtr->write("\npwd");
    tmpRideFilePtr->write("\nsource ~/.bashrc");
    tmpRideFilePtr->write("\nsource devel/setup.bash");
    tmpRideFilePtr->write("\ncatkin_make");
    //tmpRideFilePtr->write("rm tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"finished execution.\"");

    tmpRideFilePtr->close();
    //------------
    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    cout << "HERE (1)" << endl;
    //------------
    int rtn = qprocess.execute(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
    
    cout << "about to return" << endl;
    return rtn;
}


bool RProcess::startDetached(const QString& program, const QStringList& arguments)
{
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    tmpRideFilePtr->write("#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\n#!/bin/bash\nsource ");
    
    QByteArray tmpByteArray;
    for(size_t i = 0; i < arguments.size(); i++)
    {
        tmpByteArray.append(arguments.at(i) + "\n");
        tmpRideFilePtr->write(tmpByteArray);
        tmpByteArray.clear();
    }
    

    tmpRideFilePtr->close();
    
    return startDetached(*tmpFileNameStrPtr);
}


bool RProcess::startDetached(const QString& program, const QStringList& arguments, const QString& workingDirectory, qint64* pid)
{
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    tmpRideFilePtr->write("#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\n#!/bin/bash\nsource ");
    
    QByteArray tmpByteArray;
    for(size_t i = 0; i < arguments.size(); i++)
    {
        tmpByteArray.append(arguments.at(i) + "\n");
        tmpRideFilePtr->write(tmpByteArray);
        tmpByteArray.clear();
    }
    

    tmpRideFilePtr->close();
    
    return true; // *** METHOD STUB ***
}


bool RProcess::startDetached(const QString& program)
{
    QByteArray programBa = program.toLatin1();
    const char* programCharPtr = programBa.data();
    
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    tmpRideFilePtr->write("#!/bin/bash");
    tmpRideFilePtr->write("\n\n#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\ncd /home/james/catkin_ws");
    tmpRideFilePtr->write("\npwd");
    tmpRideFilePtr->write("\nsource ~/.bashrc");
    tmpRideFilePtr->write("\nsource devel/setup.bash\n");
    tmpRideFilePtr->write(programCharPtr);
    tmpRideFilePtr->write("\nrm /tmp/tmpRideFile.bash");
    tmpRideFilePtr->write("\necho \"Finished execution.\"");

    tmpRideFilePtr->close();
    //------------
    QStringList stringlst; stringlst.push_back("+x"); stringlst.push_back("/tmp/tmpRideFile.bash");
    QProcess qprocess;
    qprocess.execute("chmod", stringlst);
    cout << "HERE (1)" << endl;
    //------------
    int rtn = qprocess.execute(*tmpFileNameStrPtr); //don't run this->execute; this would result in infinate recursion!!!
    
    cout << "about to return" << endl;
    
    return rtn;
}


RProcess::~RProcess()
{
    ;
}