/* 
 * File:   EnvCmds.h
 * Module: Properties
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file contains data specific to each "project", i.e.
 *                   the ROS catkin workspace the project is located in,
 *                   the absolute path to the project root directory, etc.
 * 
 * 
 *
 * Created on May 17, 2015, 9:51 PM
 */

#ifndef RIDE_ENV_H
#define	RIDE_ENV_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QVector>
#include <QProcess>

#include <iostream>

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

class RideEnv
{ 
    private:   
        /**
         * Absolute path to the ROS catkin workspace being used.
         */
        QString* catkinWsAbsPathStrPtr;
        
        /**
         * Absolute paths to the "root" directory of each node. 
         */
        QStringList* nodeAbsPathStrLstPtr;
        
        /**
         * Absolute path to the .rideProject directory of each node.
         */
        QStringList* rideProjDirAbsPathStrLstPtr;
    
    public:
        enum Lang
        {
            C,
            CPP,
            PYTHON,
            JAVA,
            LISP,
            SHELL,
            OTHER
        };
        
        enum FileType
        {
            HEADER,
            SOURCE,
            DYN_CONFIG,
            PACKAGE,
            CMAKELISTS,
            BASH_SHELL,
            BOURNE_SHELL,
            C_SHELL,
            KORN_SHELL,
            Z_SHELL,
            XML,
            JSON,
            DB,
            YAML,
            CSS,
            TEXT,
            EMPTY
        };
        
        /**
         * Constructor.
         */
        RideEnv();
        
        /**
         * Mutator of the catkin workspace currently used.
         * 
         * @param catkinWsAbsPathStrPtr catkin workspace.
         */
        void setCatkinWsAbsPathStrPtr(QString* catkinWsAbsPathStrPtr);
        
        /**
         * Accessor of the catkin workspace currently used.
         * 
         * @return catkinWsAbsPathStrPtr catkin workspace.
         */
        QString* getCatkinWsAbsPathStrPtr();
        
        /**
         * Push a reference to a ROS node to the back of a string list.
         * 
         * @param nodeAbsPathStr absolute path to a ROS node.
         */
        void pushToNodeAbsPathStrLstPtr(QString* nodeAbsPathStr);
        
        /**
         * Pop the reference to the ROS node at the back of the string list.
         * 
         * @return the popped reference.
         */
        QString* popFromNodeAbsPathStrLstPtr();
        
        /**
         * Accessor of the list of references to ROS nodes.
         * 
         * @return nodeAbsPathStrLstPtr.
         */
        QStringList* getNodeAbsPathStrLstPtr();
        
        /**
         * Push a reference to a RIDE project root directory to the back
         * of the string list rideProjDirAgsPathStrLstPtr.
         * 
         * @param rideProjDirAbsPathStr reference to RIDE project root dir.
         */
        void pushToRideProjDirAbsPathStrPtr(QString* rideProjDirAbsPathStr);
        
        /**
         * Pop the reference to the RIDE project at the back of the string list.
         * 
         * @return the popped reference.
         */
        QString* popFromRideProjDirAbsPathStrPtr();
        
        /**
         * Accessor of the string list of RIDE project root dirs.
         * 
         * @return ptr to the list.
         */
        QStringList* getRideProjDirAbsPathStrPtr();
        
        /**
         * Classic toString method.
         * 
         * @return the class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~RideEnv();
};

#endif	/* RIDE_ENV_H */