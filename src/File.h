/* 
 * File:   File.h
 * Author: james
 *
 * Created on May 2, 2015, 10:47 PM
 */

#ifndef FILE_H
#define	FILE_H

#include <QWidget>
#include <QTextEdit>

#include <iostream>

using namespace std;

class File : public QTextEdit
{
    Q_OBJECT
    
    private:
        ;
         
    public:
        File(QTextEdit* parent = 0);
        ~File();
        
};

#endif	/* FILE_H */

