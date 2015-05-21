#include "RideFile.h"


RideFile::RideFile()
{
    ;
}


QFile* RideFile::createFile(QString* absPath, QString* fileName, QString* fileExtension)
{
    return new QFile(absPath->append(fileName->append(fileExtension)));
}


void RideFile::setFilePtr(QFile* filePtr)
{
    this->filePtr = filePtr;
}


QFile* RideFile::getFilePtr()
{
    return filePtr;
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


bool RideFile::openRdFile(QFile* file)
{
    //the "::Text" tells it to convert Windows-style line terminators ("\r\n") to C++-style terminators ("\n")
    if(!file->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

    return true;
}


bool RideFile::openWrFile(QFile* file)
{
    if(!file->open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }
    
    return true;
}


bool RideFile::openRdWrFile(QFile* file)
{
    if(!file->open(QIODevice::ReadWrite | QIODevice::Text))
    {
        return false;
    }
    
    return true;
}


QString* RideFile::readFile(QFile* file)
{
    return new QString(file->readAll() );
}


bool RideFile::writeFile(QFile* file, QString* text)
{
    file->write(*toQByteArray(text) );
    
    return true; // ***method stub ***
}


bool RideFile::closeFile(QFile* file)
{
    if(!file->exists() )
    {
        return false;
    }
    
    file->close();
    return true;
}


bool RideFile::deleteFile(QFile* file)
{
    return file->remove();
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
    tmp->append(getFilePtr()->fileName() );
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