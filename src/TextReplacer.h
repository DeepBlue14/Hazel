/* 
 * File:   TextReplacer.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Reference: http://doc.qt.io/qt-4.8/qstring.html#replace
 *            http://doc.qt.io/qt-4.8/qstring.html#indexOf
 * 
 * Created on June 12, 2015, 5:17 PM
 */

#ifndef TEXT_REPLACER_H
#define	TEXT_REPLACER_H

#include <QWidget>
#include <QFile>
#include <QString>

#include <iostream>

#include "RFile.h"

using namespace std;

class TextReplacer
{
    private:
        ;
        
    public:
        TextReplacer();
        void replaceEveryOccurenceOf(RFile* file, QString* oldToken, QString* newToken);
        QString* toString();
        ~TextReplacer();
};

#endif	/* TEXT_REPLACER_H */