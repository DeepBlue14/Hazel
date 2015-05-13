/* 
 * File:   Files.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 12, 2015, 12:28 AM
 */

#ifndef FILES_H
#define	FILES_H

#include <QWidget>
#include <QFile>
#include <QDir>
#include <QByteArray>
#include <QString>
#include <QVector>

class Files
{
    private:
        enum FileTypes
        {
            DOT_H,      // C header file
            DOT_C,      // C source file
            DOT_HPP,    // C++ header file
            DOT_CPP,    //C++ source file
            DOT_PY,     //Python source file
            DOT_CFG,    //Python dynamic configuration file
            DOT_XML,    //XML file
            DOT_JSON,   //JSON file
            DOT_LAUNCH, //ROS Launch file
            DOT_JAVA,   //Java source file
            DOT_LISP,   //Common Lisp source file
            DOT_DB      //Database file
        };
        
        QByteArray* toQByteArray(QString* string);
        //QString* fromQByteArray(QByteArray* byteArray);
        
    public:
        Files();
        QFile* createFile(QString* fileName, QString* fileExtention);
        bool openRdFile(QFile* file);
        bool openWrFile(QFile* file);
        bool openRdWrFile(QFile* file);
        QString* readFile(QFile* file);
        bool writeFile(QFile* file, QString* text);
        bool closeFile(QFile* file);
        bool deleteFile(QFile* file);
        
        bool addFileToVecPtr(QFile* file);
        bool subFileFromVecPtr(QFile* file);
        bool getFileVecPtr(QDir* dir);
        
        ~Files();
};

#endif	/* FILES_H */