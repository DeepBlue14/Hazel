#include "File.h"


File::File()
{
    ;
}


QFile* File::createFile(QString* absPath, QString* fileName, QString* fileExtension)
{
    return new QFile(absPath->append(fileName->append(fileExtension)));
}


void File::setFilePtr(QFile* filePtr)
{
    this->filePtr = filePtr;
}


QFile* File::getFilePtr()
{
    return filePtr;
}


void File::setFileLangPtr(FileLang* fileLangPtr)
{
    this->fileLangPtr = fileLangPtr;
}


File::FileLang* File::getFileLangPtr()
{
    return fileLangPtr;
}


void File::setFileTypePtr(FileType* fileTypePtr)
{
    this->fileTypePtr = fileTypePtr;
}


File::FileType* File::getFileTypePtr()
{
    return fileTypePtr;
}


bool File::openRdFile(QFile* file)
{
    //the "::Text" tells it to convert Windows-style line terminators ("\r\n") to C++-style terminators ("\n")
    if(!file->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

    return true;
}


bool File::openWrFile(QFile* file)
{
    if(!file->open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }
    
    return true;
}


bool File::openRdWrFile(QFile* file)
{
    if(!file->open(QIODevice::ReadWrite | QIODevice::Text))
    {
        return false;
    }
    
    return true;
}


QString* File::readFile(QFile* file)
{
    return new QString(file->readAll() );
}


bool File::writeFile(QFile* file, QString* text)
{
    file->write(*toQByteArray(text) );
    
    return true; // ***method stub ***
}


bool File::closeFile(QFile* file)
{
    if(!file->exists() )
    {
        return false;
    }
    
    file->close();
    return true;
}


bool File::deleteFile(QFile* file)
{
    return file->remove();
}


QByteArray* File::toQByteArray(QString* string)
{
    return new QByteArray(string->toStdString().c_str() );
}


/*QString* File::fromQByteArray(QByteArray* byteArray)
{
    QString* tmp = new QString();
    *tmp = *byteArray;
    return tmp;
}*/

QString* File::toString()
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


File::~File()
{
    ;
}