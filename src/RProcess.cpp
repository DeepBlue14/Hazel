#include "RProcess.h"


RProcess::RProcess()
{
    ;
}


QString* RProcess::genTmpFileNameStrPtr()
{
    ;
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
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    tmpRideFilePtr->write("#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\n#!/bin/bash\nsource ");

    tmpRideFilePtr->close();
    
    return execute(*tmpFileNameStrPtr);
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
    QString* tmpFileNameStrPtr = new QString("/tmp/tmpRideFile.bash");
    RFile* tmpRideFilePtr = new RFile(*tmpFileNameStrPtr);
    tmpRideFilePtr->openWrFile();
    
    tmpRideFilePtr->write("#######################");
    tmpRideFilePtr->write("\n# TEMPORARY RIDE FILE #");
    tmpRideFilePtr->write("\n#######################");
    tmpRideFilePtr->write("\n\n#!/bin/bash\nsource ");

    tmpRideFilePtr->close();
    
    return startDetached(*tmpFileNameStrPtr);
}


RProcess::~RProcess()
{
    ;
}