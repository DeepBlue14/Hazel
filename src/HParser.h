/* 
 * File:   HParser.h
 * Author: james
 *
 * Created on June 23, 2015, 1:45 PM
 */

#ifndef HPARSER_H
#define	HPARSER_H

#include <QDir>
#include <QFileInfoList>
#include <QString>

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

class HParser
{
    private:
        //const QStringList* RETURN_TYPES;
        //const QStringList* DIRECTIVES;
        //const QStringList* ACCESS_MODIFIERS;
        
        
        bool containsOneOrMore(QString* str, QStringList* options);
    public:
        HParser();
        void parseDir(QString* msgDirAbsPathStrPtr);
        void parseFile(QString msgFileAbsPathStrPtr);
        
        //rules
        bool isVariable(QString* line);
        bool isEnum(QString* line);
        bool isFunction(QString* line);
        bool isTypedef(QString* line);
        
        void toTxtFile();
        void toXmlFile();
        void toJsonFile();
        QString* toString();
        ~HParser();
};

#endif	/* HPARSER_H */