/* 
 * File:   MsgTypeDat.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 10, 2015, 3:47 PM
 */

#ifndef MSG_TYPE_DAT_H
#define	MSG_TYPE_DAT_H

#include <string>
#include <vector>
#include <iostream>

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

class MsgFileDat
{
    private:
        string* msgFileNameStrPtr;
        string* msgFileHeaderStrPtr;
        vector<MsgFieldDat*>* msgFieldDatPtrVecPtr;
        
    public:
        MsgFileDat();
        void setMsgFileNameStrPtr(string* msgFileNameStrPtr);
        string* getMsgFileNameStrPtr();
        void setMsgFileHeaderStrPtr(string* msgFileHeaderStrPtr);
        string* getMsgFileHeaderStrPtr();
        void pushToMsgFieldDatPtrVecPtr(MsgFieldDat* msgFieldDatPtr);
        MsgFieldDat* popFromMsgFieldDatPtrVecPtr();
        vector<MsgFieldDat*>* getMsgFieldDatPtrVecPtr();
        string* toString();
        ~MsgFileDat();
};

#endif	/* MSG_TYPE_DAT_H */

