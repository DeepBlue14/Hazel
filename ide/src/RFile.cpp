#include "RFile.h"


RFile::RFile()
{
    ;
}


RFile::RFile(QString name)
{
    this->setFileName(name);
}


void RFile::setFileLangPtr(RideEnv::Lang* fileLangPtr)
{
    this->fileLangPtr = fileLangPtr;
}


RideEnv::Lang* RFile::getFileLangPtr()
{
    return fileLangPtr;
}


void RFile::setFileTypePtr(RideEnv::FileType* fileTypePtr)
{
    this->fileTypePtr = fileTypePtr;
}


RideEnv::FileType* RFile::getFileTypePtr()
{
    return fileTypePtr;
}


void RFile::setFileNameStrPtr(QString* fileNameStrPtr)
{
    this->fileNameStrPtr = fileNameStrPtr;
}


QString* RFile::getFileNameStrPtr()
{
    return fileNameStrPtr;
}


void RFile::setFileExtStrPtr(QString* fileExtStrPtr)
{
    this->fileExtStrPtr = fileExtStrPtr;
}


QString* RFile::getFileExtStrPtr()
{
    return fileExtStrPtr;
}


void RFile::setAbsFilePathStrPtr(QString* absFilePathStrPtr)
{
    this->absFilePathStrPtr = absFilePathStrPtr;
}


QString* RFile::getAbsFilePathStrPtr()
{
    return absFilePathStrPtr;
}


void RFile::setRelFilePathStrPtr(QString* relFilePathStrPtr)
{
    this->relFilePathStrPtr = relFilePathStrPtr;
}


QString* RFile::getRelFilePathStrPtr()
{
    return relFilePathStrPtr;
}


void RFile::setParallelFileGuiPtr(FileGui* parallelFileGuiPtr)
{
    this->parallelFileGuiPtr = parallelFileGuiPtr;
}


FileGui* RFile::getParallelFileGuiPtr()
{
    return parallelFileGuiPtr;
}


bool RFile::openRdFile()
{
    //the "::Text" tells it to convert Windows-style line terminators ("\r\n") to C++-style terminators ("\n")
    if(!this->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

    return true;
}


bool RFile::openWrFile()
{
    if(!this->open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }
    
    return true;
}


bool RFile::openRdWrFile()
{
    if(!this->open(QIODevice::ReadWrite | QIODevice::Text | QFile::Truncate))
    {
        cout << "FAILED to open file" << endl;
        return false;
    }
    
    return true;
}


QString* RFile::readFile()
{
    return new QString(this->readAll() );
}


bool RFile::writeFile(QString* text)
{
    this->write(*toQByteArray(text) );
    
    return true; // ***method stub ***
}


bool RFile::closeFile()
{
    if(!this->exists() )
    {
        return false;
    }
    
    this->close();
    return true;
}


QByteArray* RFile::toQByteArray(QString* string)
{
    return new QByteArray(string->toStdString().c_str() );
}


/*QString* File::fromQByteArray(QByteArray* byteArray)
{
    QString* tmp = new QString();
    *tmp = *byteArray;
    return tmp;
}*/

QString* RFile::toString()
{
    QString* tmp = new QString("File");
    tmp->append("\n- - - - - - - - - - -\n");
    tmp->append("Name: ");
    //tmp->append("\nFile Language: ");
    //tmp->append(getFileLangPtr() );
    //tmp->append("\nFile Type");
    //tmp->append(getFileTypePtr() );
    
    return tmp;
}


RFile::~RFile()
{
    ;
}