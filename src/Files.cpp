#include "Files.h"


Files::Files()
{
    ;
}


QFile* Files::createFile(QString* fileName, QString* fileExtension)
{
    return new QFile(fileName->append(fileExtension));
}


bool Files::openRdFile(QFile* file)
{
    //the "::Text" tells it to convert Windows-style line terminators ("\r\n") to C++-style terminators ("\n")
    if(!file->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

    return true;
}


bool Files::openWrFile(QFile* file)
{
    if(!file->open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }
    
    return true;
}


bool Files::openRdWrFile(QFile* file)
{
    if(!file->open(QIODevice::ReadWrite | QIODevice::Text))
    {
        return false;
    }
    
    return true;
}


QString* Files::readFile(QFile* file)
{
    return new QString(file->readAll() );
}


bool Files::writeFile(QFile* file, QString* text)
{
    file->write(*toQByteArray(text) );
    
    return true; // ***method stub ***
}


bool Files::closeFile(QFile* file)
{
    if(!file->exists() )
    {
        return false;
    }
    
    file->close();
    return true;
}


bool Files::deleteFile(QFile* file)
{
    return file->remove();
}


QByteArray* Files::toQByteArray(QString* string)
{
    return new QByteArray(string->toStdString().c_str() );
}


/*QString* File::fromQByteArray(QByteArray* byteArray)
{
    QString* tmp = new QString();
    *tmp = *byteArray;
    return tmp;
}*/


Files::~Files()
{
    ;
}