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
        /**
         * Constructor.
         */
        MsgFileDat();
        
        /**
         * Mutator of a ROS message file name in QString* form.
         * 
         * @param msgFileNameStrPtr ROS message field name.
         */
        void setMsgFileNameStrPtr(QString msgFileNameStrPtr);
        
        /**
         * Accessor of the ROS message file name.
         * 
         * @return ROS message file name.
         */
        QString getMsgFileNameStrPtr();
        
        /**
         * Mutator of a ROS message file header.
         * 
         * @param msgFileHeaderStrPtr a ROS message file header.
         */
        void setMsgFileHeaderStrPtr(QString* msgFileHeaderStrPtr);
        
        /**
         * Accessor of the ROS message file header.
         * 
         * @return msgFileHeaderStrPtr ROS message file header.
         */
        QString* getMsgFileHeaderStrPtr();
        
        /**
         * Push a pointer to a MsgFieldDat object to the back of the vector
         * msgFieldDatPtrVecPtr.
         * @see MsgFieldDat.
         * @see msgFieldDatPtrVecPtr.
         * 
         * @param msgFieldDatPtr a MsgFieldDat*.
         */
        void pushToMsgFieldDatPtrVecPtr(MsgFieldDat* msgFieldDatPtr);
        
        /**
         * Pop the pointer to a MsgFieldDat object from the back of the vector
         * msgFieldDatPtrVecPtr.
         * @see MsgFieldDat.
         * @see msgFieldDatPtrVecPtr.
         * 
         * @return the pointer removed from the back of the vector.
         */
        MsgFieldDat* popFromMsgFieldDatPtrVecPtr();
        
        /**
         * Accessor method to get a pointer to the vector of pointers to
         * MsgFieldDat objects.
         * @see MsgFieldDat.
         * @see msgFieldDatPtrVecPtr.
         * 
         * @return msgFieldDatPtrVecPtr.
         */
        QVector<MsgFieldDat*> getMsgFieldDatPtrVecPtr();
        
        /**
         * toString method.
         * 
         * @return data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~MsgFileDat();
};

#endif	/* MSG_TYPE_DAT_H */