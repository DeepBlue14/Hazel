/* 
 * File:   MsgDir.h
 * Module: MsgManip
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains data of a msg directory.
 *
 * Created on June 15, 2015, 3:07 PM
 */

#ifndef MSG_DIR_DAT_H
#define	MSG_DIR_DAT_H

#include <QString>
#include <QVector>
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
        QString* msgDirStrPtr;
        QVector<MsgFileDat*> msgFileDatPtrVecPtr;
        
    public:
        /**
         * Constructor.
         */
        MsgDirDat();
        
        /**
         * Mutator method to set the absolute path of a ROS message directory.
         * 
         * @param msgDirStrPtr path in QString* form.
         */
        void setMsgDirStrPtr(QString* msgDirStrPtr);
        
        /**
         * Accessor method to get the absolute path of a ROS message directory.
         * 
         * @return msgDirStrPtr the path in QStringI form.
         */
        QString* getMsgDirStrPtr();
        
        /**
         * Pushes a MsgFileDat* to the back of the vector.
         * @see msgFileDatPtrVecPtr.
         * @see MsgFileDat
         * 
         * @param msgFileDatPtr MsgFileDat* object.
         */
        void pushToMsgFileDatPtrVecPtr(MsgFileDat* msgFileDatPtr);
        
        /**
         * Pops the MsgFileDat* from the back of the vector.
         * @see msgFileDatPtrVecPtr.
         * @see MsgFileDat 
         * 
         * @return the popped pointer.
         */
        MsgFileDat* popFromMsgFileDatPtrVecPtr();
        
        /**
         * Accessor method for a pointer to the vector of MsgFileDat*
         * @see msgFileDatPtrVecPtr;
         * 
         * @return the vector msgFileDatPtrVecPtr
         */
        QVector<MsgFileDat*> getMsgFileDatPtrVecPtr();
        
        /**
         * toString method.
         * 
         * @return QString* of data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~MsgDirDat();
};

#endif	/* MSG_DIR_DAT_H */
