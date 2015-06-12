/* 
 * File:   MsgDat.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 10, 2015, 2:12 PM
 */

#ifndef MSG_DAT_H
#define	MSG_DAT_H

#include <iostream>
#include <string>

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

class MsgFieldDat
{
    private:
        string* fieldTypeStrPtr;
        string* fieldNameStrPtr;
        string* fieldCommentsStrPtr;
        
    public:
        MsgFieldDat();
        void setFieldTypeStrPtr(string* fieldTypeStrPtr);
        string* getFieldTypeStrPtr();
        void setFieldNameStrPtr(string* fieldNameStrPtr);
        string* getFieldNameStrPtr();
        void setFieldCommentsStrPtr(string* fieldCommentsStrPtr);
        string* getFieldCommentsStrPtr();
        string* toString();
        ~MsgFieldDat();
};

#endif	/* MSG_DAT_H */

