/* 
 * File:   MsgParser.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class parses ROS message files.
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
        MsgDirDat msgDirDat;
        MsgFileDat* currentMsgFileDat;
        
    public:
        /**
         * Constructor.
         */
        MsgParser();
        
        /**
         * Parses the ROS messages from all the files found in a specified
         * directory.  (It will not search for subdirectories).
         * 
         * @param msgDirAbsPathStrPtr is a absolute path to the directory. 
         * @return a pointer to an object containing the parsed data.
         * @see MsgDirDat
         */
        MsgDirDat* parseDir(QString* msgDirAbsPathStrPtr);
        
        /**
         * Parses a ROS message file.
         * 
         * @param msgFileAbsPathStrPtr the absolute path of the file.
         * @return the parsed data.
         */
        MsgFileDat parseFile(QString msgFileAbsPathStrPtr);
        
        /**
         * Extracts the field type, name, and comment (if any) of a given line,
         * and stores it in the MsgFieldDat parameter.
         * 
         * @param line a line in a ROS message file.
         * @param msgFieldDat a pointer to a MsgFieldDat object which will be
         *                    filled with the extracted data.
         * @return msgFieldDat.
         */
        MsgFieldDat extractAttributes(QString line, MsgFieldDat msgFieldDat);
        
        /**
         * Formats data to facilitate being stored in a text file.
         */
        void toTxtFile(QString* data);
        
        /**
         * Formats data to facilitate being stored in a XML file.
         */
        void toXmlFile(QString* data);
        
        /**
         * Formats data to facilitate being stored in a JSON file.
         */
        void toJsonFile(QString* data);
        
        /**
         * toString method.
         * 
         * @return data of this class.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~MsgParser();
};

#endif	/* MSG_PARSER_H */