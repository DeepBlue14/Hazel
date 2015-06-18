/* 
 * File:   MsgParser.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 * 
 * Status: extracting of type and name is functional, but extracting the
 *         header and comments appears to have issues.
 *
 * Created on June 10, 2015, 2:10 PM
 */

#ifndef MSG_PARSER_H
#define	MSG_PARSER_H

#include <QDir>
#include <QFileInfoList>
#include <QString>

#include <iostream>

#include "MsgDirDat.h"
#include "MsgFileDat.h"
#include "MsgFieldDat.h"
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

class MsgParser
{
    private:
        MsgFileDat* currentMsgFileDat;
        
    public:
        MsgParser();
        MsgDirDat* parseDir(QString* msgDirAbsPathStrPtr);
        MsgFileDat* parseFile(QString* msgFileAbsPathStrPtr);
        QString trim(QString myQString);
        void extractAttributes(QString line, MsgFieldDat msgFieldDat);
        void toTxtFile();
        void toXmlFile();
        void toJsonFile();
        QString* toQString();
        ~MsgParser();
};

#endif	/* MSG_PARSER_H */
