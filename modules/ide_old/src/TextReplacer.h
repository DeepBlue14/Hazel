/* 
 * File:   TextReplacer.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Primitive (non-compiler oriented) text replace/refactoring
 *                   engine.
 * @deprecated
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

class TextReplacer
{
    private:
        ;
        
    public:
        /**
         * Constructor.
         */
        TextReplacer();
        
        /**
         * 
         * @deprecated
         * 
         * @param file
         * @param oldToken
         * @param newToken
         */
        void replaceEveryOccurenceOf(RFile* file, QString* oldToken, QString* newToken);
        
        /**
         * 
         * @deprecated
         * 
         * @param oldToken
         * @param newToken
         */
        void refactor(QString* oldToken, QString* newToken);
        
        /**
         * Classic toString method.
         * 
         * @return class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~TextReplacer();
};

#endif	/* TEXT_REPLACER_H */