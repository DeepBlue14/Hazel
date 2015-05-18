/* 
 * File:   PhysicalAttribLog.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file will organize and store pointers to the current
 *                   open project, its directories, and files.
 *
 * Created on May 17, 2015, 2:07 PM
 */

#ifndef PHYSICAL_ATTRIB_LOG_H
#define	PHYSICAL_ATTRIB_LOG_H

#include <QWidget>
#include <QFile>
#include <QDir>
#include <QVector>

class PhysicalAttribLog : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    public:
        PhysicalAttribLog(QWidget* parent = 0);
        ~PhysicalAttribLog();
};

#endif	/* PHYSICAL_ATTRIB_LOG_H */