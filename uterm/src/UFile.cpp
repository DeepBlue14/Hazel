#include "UFile.h"


UFile::UFile()
{
    ;
}


UFile::UFile(QString name)
{
    this->setFileName(name);
}


void UFile::setFileLangPtr(FileLang* fileLangPtr)
{
    this->fileLangPtr = fileLangPtr;
}


UFile::FileLang* UFile::getFileLangPtr()
{
    return fileLangPtr;
}


void UFile::setFileTypePtr(FileType* fileTypePtr)
{
    this->fileTypePtr = fileTypePtr;
}


UFile::FileType* UFile::getFileTypePtr()
{
    return fileTypePtr;
}


void UFile::setFileNameStrPtr(QString* fileNameStrPtr)
{
    this->fileNameStrPtr = fileNameStrPtr;
}


QString* UFile::getFileNameStrPtr()
{
    return fileNameStrPtr;
}


void UFile::setFileExtStrPtr(QString* fileExtStrPtr)
{
    this->fileExtStrPtr = fileExtStrPtr;
}


QString* UFile::getFileExtStrPtr()
{
    return fileExtStrPtr;
}


void UFile::setAbsFilePathStrPtr(QString* absFilePathStrPtr)
{
    this->absFilePathStrPtr = absFilePathStrPtr;
}


QString* UFile::getAbsFilePathStrPtr()
{
    return absFilePathStrPtr;
}


void UFile::setRelFilePathStrPtr(QString* relFilePathStrPtr)
{
    this->relFilePathStrPtr = relFilePathStrPtr;
}


QString* UFile::getRelFilePathStrPtr()
{
    return relFilePathStrPtr;
}


void UFile::setOutputStrPtr(QString* outputStrPtr)
{
    this->outputStrPtr = outputStrPtr;
}


QString* UFile::getOutputStrPtr()
{
    return outputStrPtr;
}


bool UFile::openRdFile()
{
    //the "::Text" tells it to convert Windows-style line terminators ("\r\n") to C++-style terminators ("\n")
    if(!this->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

    return true;
}


bool UFile::openWrFile()
{
    if(!this->open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }
    
    return true;
}


bool UFile::openRdWrFile()
{
    if(!this->open(QIODevice::ReadWrite | QIODevice::Text | QFile::Truncate))
    {
        cout << "FAILED to open file" << endl;
        return false;
    }
    
    return true;
}


QString* UFile::readFile()
{
    return new QString(this->readAll() );
}


bool UFile::writeFile(QString* text)
{
    this->write(*toQByteArray(text) );
    
    return true; // ***method stub ***
}


bool UFile::closeFile()
{
    if(!this->exists() )
    {
        return false;
    }
    
    this->close();
    return true;
}


QByteArray* UFile::toQByteArray(QString* string)
{
    return new QByteArray(string->toStdString().c_str() );
}


/*QString* File::fromQByteArray(QByteArray* byteArray)
{
    QString* tmp = new QString();
    *tmp = *byteArray;
    return tmp;
}*/

QString* UFile::toString()
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


UFile::~UFile()
{
    ;
}