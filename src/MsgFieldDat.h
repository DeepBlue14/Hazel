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
#include <QString>

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
        QString* fieldTypeStrPtr;
        QString* fieldNameStrPtr;
        QString* fieldCommentsStrPtr;
        
    public:
        MsgFieldDat();
        void setFieldTypeStrPtr(QString* fieldTypeStrPtr);
        QString* getFieldTypeStrPtr();
        void setFieldNameStrPtr(QString* fieldNameStrPtr);
        QString* getFieldNameStrPtr();
        void setFieldCommentsStrPtr(QString* fieldCommentsStrPtr);
        QString* getFieldCommentsStrPtr();
        QString* toQString();
        ~MsgFieldDat();
};

#endif	/* MSG_DAT_H */

