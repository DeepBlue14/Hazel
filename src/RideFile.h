/* 
 * File:   Files.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 12, 2015, 12:28 AM
 */

#ifndef RIDE_FILE_H
#define	RIDE_FILE_H

#include <QWidget>
#include <QFile>
#include <QDir>
#include <QByteArray>
#include <QString>
#include <QVector>

#include <iostream>

using namespace std;

class RideFile : public QFile
{
    private:
        enum FileLang
        {
            C,
            CPP,
            PYTHON,
            JAVA,
            LISP,
            SHELL,
            OTHER
        };
        
        enum FileType
        {
            HEADER,
            SOURCE,
            DYN_CONFIG,
            PACKAGE,
            CMAKELISTS,
            BASH_SHELL,
            BOURNE_SHELL,
            C_SHELL,
            KORN_SHELL,
            Z_SHELL,
            XML,
            JSON,
            DB,
            YAML,
            CSS,
            TEXT,
            EMPTY
        };
        
        //QFile* filePtr;
        FileLang* fileLangPtr;
        FileType* fileTypePtr;
        QString* fileNameStrPtr;
        QString* fileExtStrPtr;
        QString* absFilePathStrPtr;
        QString* relFilePathStrPtr;
        
        QByteArray* toQByteArray(QString* string);
        //QString* fromQByteArray(QByteArray* byteArray);
        
    public:
        RideFile();
        RideFile(QString name);
        void setFileLangPtr(FileLang* fileLangPtr);
        FileLang* getFileLangPtr();
        void setFileTypePtr(FileType* fileTypePtr);
        FileType* getFileTypePtr();
        bool openRdFile();
        bool openWrFile();
        bool openRdWrFile();
        QString* readFile();
        bool writeFile(QString* text);
        bool closeFile();
        QString* toString();
        ~RideFile();
};

#endif	/* RIDE_FILE_H */