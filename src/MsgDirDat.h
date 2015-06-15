/* 
 * File:   MsgDir.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains data of a msg directory.
 *
 * Created on June 15, 2015, 3:07 PM
 */

#ifndef MSG_DIR_DAT_H
#define	MSG_DIR_DAT_H

#include <string>
#include <vector>
#include <iostream>

#include "MsgFileDat.h"
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

class MsgDirDat
{
    private:
        string* msgDirStrPtr;
        vector<MsgFileDat*>* msgFileDatPtrVecPtr;
        
    public:
        MsgDirDat();
        void setMsgDirStrPtr(string* msgDirStrPtr);
        string* getMsgDirStrPtr();
        void pushToMsgFileDatPtrVecPtr(MsgFileDat* msgFileDatPtr);
        MsgFileDat* popFromMsgFileDatPtrVecPtr();
        vector<MsgFileDat*>* getMsgFileDatPtrVecPtr();
        string* toString();
        ~MsgDirDat();
};

#endif	/* MSG_DIR_DAT_H */