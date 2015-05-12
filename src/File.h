/* 
 * File:   File.h
 * Author: james
 *
 * Created on May 12, 2015, 12:28 AM
 */

#ifndef FILE_H
#define	FILE_H

#include <QWidget>
#include <QFile>

class File
{
    private:
        enum FileTypes
        {
            DOT_H,
            DOT_C,
            DOT_HPP,
            DOT_CPP,
            DOT_PY,
            DOT_CFG,
            DOT_XML,
            DOT_JSON,
            DOT_LAUNCH,
            DOT_JAVA,
            DOT_LISP
            
            
        };
        
    public:
        File();
        void createFile();
        ~File();
};

#endif	/* FILE_H */

