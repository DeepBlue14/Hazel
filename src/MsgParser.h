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

#include <iostream>
#include <fstream>
#include <string>

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
        MsgFileDat* parse(string* msgFileAbsPathStrPtr);
        string* trim(string* myString);
        string* extractType(string* line);
        string* extractName(string* line);
        string* extractComment(string* line);
        void toTxtFile();
        void toXmlFile();
        void toJsonFile();
        string* toString();
        ~MsgParser();
};

#endif	/* MSG_PARSER_H */