/* 
 * File:   MsgDat.h
 * Module: MsgManip
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
        /**
         * Constructor.
         */
        MsgFieldDat();
        
        /**
         * Mutator of a pointer to a ROS message field type in QString* form.
         * 
         * @param fieldTypeStrPtr contains a ROS message field type.
         */
        void setFieldTypeStrPtr(QString* fieldTypeStrPtr);
        
        /**
         * Accessor of a ROS message field type in QString* form.
         * 
         * @return fieldTypeStrPtr a ROS message field type in QString* form.
         */
        QString* getFieldTypeStrPtr();
        
        /**
         * Mutator of a ROS field name in QString* form.
         * 
         * @param fieldNameStrPtr a ROS message field name in QString* form.
         */
        void setFieldNameStrPtr(QString* fieldNameStrPtr);
        
        /**
         * Accessor of the ROS field name in QString* form.
         * 
         * @return fieldNameStrPtr a ROS message field name in QString* form.
         */
        QString* getFieldNameStrPtr();
        
        /**
         * Mutator to store a ROS message field comment in QString* form.
         * 
         * @param fieldCommentsStrPtr a ROS message field comment in QString*
         *        form.
         */
        void setFieldCommentsStrPtr(QString* fieldCommentsStrPtr);
        
        /**
         * Accessor of a ROS message field comment in QString* form.
         * 
         * @return fieldCOmmentsStrPtr a ROS message field comment in QString*
         *         form.
         */
        QString* getFieldCommentsStrPtr();
        
        /**
         * toString method.
         * 
         * @return returns a QString* to data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~MsgFieldDat();
};

#endif	/* MSG_DAT_H */