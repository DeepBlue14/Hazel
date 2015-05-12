#include "File.h"


File::File()
{
    ;
}


QFile* File::createFile(QString* fileName, QString* fileExtension)
{
    return new QFile(fileName->append(fileExtension));
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


File::~File()
{
    ;
}