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

#include <QString>
#include <QVector>
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
        QString msgFileNameStrPtr;
        QString* msgFileHeaderStrPtr;
        QVector<MsgFieldDat*> msgFieldDatPtrVecPtr;
        
    public:
        MsgFileDat();
        void setMsgFileNameStrPtr(QString msgFileNameStrPtr);
        QString getMsgFileNameStrPtr();
        void setMsgFileHeaderStrPtr(QString* msgFileHeaderStrPtr);
        QString* getMsgFileHeaderStrPtr();
        void pushToMsgFieldDatPtrVecPtr(MsgFieldDat* msgFieldDatPtr);
        MsgFieldDat* popFromMsgFieldDatPtrVecPtr();
        QVector<MsgFieldDat*> getMsgFieldDatPtrVecPtr();
        QString* toString();
        ~MsgFileDat();
};

#endif	/* MSG_TYPE_DAT_H */

