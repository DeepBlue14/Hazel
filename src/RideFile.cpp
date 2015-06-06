#include "RideFile.h"


RideFile::RideFile()
{
    ;
}


RideFile::RideFile(QString name)
{
    this->setFileName(name);
}


void RideFile::setFileLangPtr(FileLang* fileLangPtr)
{
    this->fileLangPtr = fileLangPtr;
}


RideFile::FileLang* RideFile::getFileLangPtr()
{
    return fileLangPtr;
}


void RideFile::setFileTypePtr(FileType* fileTypePtr)
{
    this->fileTypePtr = fileTypePtr;
}


RideFile::FileType* RideFile::getFileTypePtr()
{
    return fileTypePtr;
}


void RideFile::setFileNameStrPtr(QString* fileNameStrPtr)
{
    this->fileNameStrPtr = fileNameStrPtr;
}


QString* RideFile::getFileNameStrPtr()
{
    return fileNameStrPtr;
}


void RideFile::setFileExtStrPtr(QString* fileExtStrPtr)
{
    this->fileExtStrPtr = fileExtStrPtr;
}


QString* RideFile::getFileExtStrPtr()
{
    return fileExtStrPtr;
}


void RideFile::setAbsFilePathStrPtr(QString* absFilePathStrPtr)
{
    this->absFilePathStrPtr = absFilePathStrPtr;
}


QString* RideFile::getAbsFilePathStrPtr()
{
    return absFilePathStrPtr;
}


void RideFile::setRelFilePathStrPtr(QString* relFilePathStrPtr)
{
    this->relFilePathStrPtr = relFilePathStrPtr;
}


QString* RideFile::getRelFilePathStrPtr()
{
    return relFilePathStrPtr;
}


void RideFile::setParallelFileGuiPtr(FileGui* parallelFileGuiPtr)
{
    this->parallelFileGuiPtr = parallelFileGuiPtr;
}


FileGui* RideFile::getParallelFileGuiPtr()
{
    return parallelFileGuiPtr;
}


bool RideFile::openRdFile()
{
    //the "::Text" tells it to convert Windows-style line terminators ("\r\n") to C++-style terminators ("\n")
    if(!this->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

    return true;
}


bool RideFile::openWrFile()
{
    if(!this->open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }
    
    return true;
}


bool RideFile::openRdWrFile()
{
    if(!this->open(QIODevice::ReadWrite | QIODevice::Text | QFile::Truncate))
    {
        cout << "FAILED to open file" << endl;
        return false;
    }
    
    return true;
}


QString* RideFile::readFile()
{
    return new QString(this->readAll() );
}


bool RideFile::writeFile(QString* text)
{
    this->write(*toQByteArray(text) );
    
    return true; // ***method stub ***
}


bool RideFile::closeFile()
{
    if(!this->exists() )
    {
        return false;
    }
    
    this->close();
    return true;
}


QByteArray* RideFile::toQByteArray(QString* string)
{
    return new QByteArray(string->toStdString().c_str() );
}


/*QString* File::fromQByteArray(QByteArray* byteArray)
{
    QString* tmp = new QString();
    *tmp = *byteArray;
    return tmp;
}*/

QString* RideFile::toString()
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


RideFile::~RideFile()
{
    ;
}