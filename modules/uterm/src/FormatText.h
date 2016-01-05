/* 
 * File:   FormatText.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file handles formatting the output text.
 *
 * Created on July 24, 2015, 12:55 PM
 */

#ifndef FORMATTEXT_H
#define	FORMATTEXT_H

#include <QWidget>
#include <QDir>
#include <QFile>
#include <QVector>
#include <QString>

#include <iostream>

using namespace std;

class FormatText
{
    
public:
    FormatText();
    QVector<QString*> formatLsOutput(QString* outputStrPtr);
    ~FormatText();
    
    
private:
    ;


};

#endif	/* FORMATTEXT_H */