/* 
 * File:   RideFile.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class inherits from class QFile, and acts as an
 *                   additional layer of abstraction for easy access and
 *                   manipulation of files on the computer.
 *
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

#include "FileGui.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class RFile : public QFile
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
        
        FileLang* fileLangPtr;
        FileType* fileTypePtr;
        QString* fileNameStrPtr;
        QString* fileExtStrPtr;
        QString* absFilePathStrPtr;
        QString* relFilePathStrPtr;
        
        FileGui* parallelFileGuiPtr;
        
        QByteArray* toQByteArray(QString* string);
        //QString* fromQByteArray(QByteArray* byteArray);
        
    public:
        RFile();
        RFile(QString name);
        void setFileLangPtr(FileLang* fileLangPtr);
        FileLang* getFileLangPtr();
        void setFileTypePtr(FileType* fileTypePtr);
        FileType* getFileTypePtr();
        void setFileNameStrPtr(QString* fileNameStrPtr);
        QString* getFileNameStrPtr();
        void setFileExtStrPtr(QString* fileExtStrPtr);
        QString* getFileExtStrPtr();
        void setAbsFilePathStrPtr(QString* absFilePathStrPtr);
        QString* getAbsFilePathStrPtr();
        void setRelFilePathStrPtr(QString* relFilePathStrPtr);
        QString* getRelFilePathStrPtr();
        void setParallelFileGuiPtr(FileGui* parallelFileGuiPtr);
        FileGui* getParallelFileGuiPtr();
        bool openRdFile();
        bool openWrFile();
        bool openRdWrFile();
        QString* readFile();
        bool writeFile(QString* text);
        bool closeFile();
        QString* toString();
        ~RFile();
};

#endif	/* RIDE_FILE_H */