/* 
 * File:   Directory.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class stores data of a given directory.
 *
 * Created on May 8, 2015, 10:37 PM
 */

#ifndef DIRECTORY_H
#define	DIRECTORY_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QFile>
#include <QVector>
#include <QProcess>

#include <iostream>

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

class Directory : public QWidget
{
    Q_OBJECT
            
    private:
        enum DirType
        {
            NODE,
            SRC,
            INCLUDE,
            BUILD,
            DEVEL,
            OTHER
        };
        
        QDir* dirPtr;
        DirType* dirTypePtr;
        QVector<QDir*> childDirsPtrVec;
        QVector<QFile*> childFilesPtrVec;
        
    private slots:
        ;
        
        
    public:
        /**
         * Constructor.
         * 
         * @param parent pointer to instance of parent type QWidget
         */
        Directory(QWidget* parent = 0);
        
        /**
         * Mutator of pointer to directory.
         * 
         * @param dirPtr a directory.
         */
        void setDirPtr(QDir* dirPtr);
        
        /**
         * Accessor of a directory.
         * 
         * @return dirPtr Dir*.
         */
        QDir* getDirPtr();
        
        /**
         * Mutator to set the type of directory.
         * @see DirType.
         * 
         * @param dirTypePtr
         */
        void setDirTypePtr(DirType* dirTypePtr);
        
        /**
         * Accessor of the directory type.
         * 
         * @return dirTypePtr.
         */
        DirType* getDirTypePtr();
        
        /**
         * Pushes a subdirectory pointer to the back of the vector.
         * 
         * @param dir pointer to a subdirectory.
         */
        void pushBackToChildDirsPtrVec(QDir* dir);
        
        /**
         * Accessor for the vector of subdirectories.
         * 
         * @return childDirsPtrVec vector of child directories.
         */
        QVector<QDir*> getChildDirsPtrVec();
        
        /**
         * Pushes a reference to a file contained in this directory to a vector.
         * 
         * @param file the file added to the vector.
         */
        void pushBackToChildFilesPtrVec(QFile* file);
        
        /**
         * Accessor for a vector containing references to the files contained
         * within a directory.
         * 
         * @return childFilesPtrVec.
         */
        QVector<QFile*> getChildFilesPtrVec();
        
        /**
         * Classic toString method.
         * 
         * @return data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~Directory();
};

#endif	/* DIRECTORY_H */