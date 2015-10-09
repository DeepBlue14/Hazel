/* 
 * File:   RideFile.h
 * Module: Unaffiliated
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

#include "RideEnv.h"
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
        RideEnv::Lang* fileLangPtr;
        //FileLang* fileLangPtr;
        RideEnv::FileType* fileTypePtr;
        //FileType* fileTypePtr;
        QString* fileNameStrPtr;
        QString* fileExtStrPtr;
        QString* absFilePathStrPtr;
        QString* relFilePathStrPtr;
        
        FileGui* parallelFileGuiPtr;
        
        QByteArray* toQByteArray(QString* string);
        //QString* fromQByteArray(QByteArray* byteArray);
        
    public:
        /**
         * Constructor.
         */
        RFile();
        
        /**
         * Overloaded constructor.
         * 
         * @param name file name.
         */
        RFile(QString name);
        
        /**
         * Set the programming/markup/etc. language (ie. C, C++, XML, etc.)
         * which this file will contain.
         * 
         * @param fileLangPtr the selected language.
         */
        void setFileLangPtr(RideEnv::Lang* fileLangPtr);
        
        /**
         * Accessor for a pointer to the file.
         * 
         * @return pointer to the file.
         */
        RideEnv::Lang* getFileLangPtr();
        
        /**
         * Mutator for the file type variable.
         */
        void setFileTypePtr(RideEnv::FileType* fileTypePtr);
        
        /**
         * Accessor of the file type.
         * 
         * @return file type.
         */
        RideEnv::FileType* getFileTypePtr();
        
        /**
         * Mutator for the file name.m
         * 
         * @param fileNameStrPtr the files name.
         */
        void setFileNameStrPtr(QString* fileNameStrPtr);
        
        /**
         * Accessor of the file name
         * 
         * @return fileNameStrPtr the file name
         */
        QString* getFileNameStrPtr();
        
        /**
         * Mutator of the file extension.
         * 
         * @param fileExtStrPtr the file extension.
         */
        void setFileExtStrPtr(QString* fileExtStrPtr);
        
        /**
         * Accessor of the file extension.
         * 
         * @return fileExtStrPtr the file extension.
         */
        QString* getFileExtStrPtr();
        
        /**
         * Mutator for the absolute file path.
         * 
         * @param absFilePathStrPtr absolute path of the file.
         */
        void setAbsFilePathStrPtr(QString* absFilePathStrPtr);
        
        /**
         * Accessor for the file's path.
         * 
         * @return absFilePathStrPtr.
         */
        QString* getAbsFilePathStrPtr();
        
        /**
         * Mutator for the relative path of the file.
         * 
         * @param relFilePathStrPtr relative path to the file.
         */
        void setRelFilePathStrPtr(QString* relFilePathStrPtr);
        
        /**
         * Accessor of the file's relative path.
         * 
         * @return relFilePathStrPtr.
         */
        QString* getRelFilePathStrPtr();
        
        /**
         * Mutator of the reference to the physical (backend) file connected
         * to this frontend textedit.
         * 
         * @param parallelFileGuiPtr the physical file
         */
        void setParallelFileGuiPtr(FileGui* parallelFileGuiPtr);
        
        /**
         * Accessor of the physical file connected to the GUI.
         * 
         * @return parallelFileGuiPtr.
         */
        FileGui* getParallelFileGuiPtr();
        
        /**
         * Determines the status of the file.
         * 
         * @return true if the file is open with read privileges.
         */
        bool openRdFile();
        
        /**
         * Determines the status of the file.
         * 
         * @return true if the file is open with write privileges.
         */
        bool openWrFile();
        
        /**
         * Determines the of the file.
         * 
         * @return true if the file is open with read and write privileges.
         */
        bool openRdWrFile();
        
        /**
         * Reads all the file's contents.
         * 
         * @return the file's contents.
         */
        QString* readFile();
        
        /**
         * Writes to the end of the file.
         * 
         * @param text data to be stored in the file.
         * @return true if the operation was completed successfully.
         */
        bool writeFile(QString* text);
        
        /**
         * Closes the file.
         * 
         * @return true if the operation was completed successfully.
         */
        bool closeFile();
        
        /**
         * Classic toString method.
         * 
         * @return data of the class.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~RFile();
};

#endif	/* RIDE_FILE_H */