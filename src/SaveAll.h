/* 
 * File:   SaveAll.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This namespace saves all changes in the UI files to the
 *                   physical files.
 *
 * Created on May 25, 2015, 3:12 PM
 */

#ifndef SAVE_ALL_H
#define	SAVE_ALL_H

#include <QDir>
#include <QFile>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QTextStream>
#include <QVector>

#include <iostream>

#include "RFile.h"
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

namespace SaveAll
{
    extern QVector<RFile*> rideFilePtrVec;
    
    /**
     * Add file to the vector of those which are updatable.
     * 
     * @param rideFilePtr reference to file.
     */
    void pushToRideFilePtrVec(RFile* rideFilePtr);
    
    /**
     * Remove specified file from the vector of those currently updatable.
     * 
     * @param rideFilePtr reference to file.
     */
    void removeFromRideFileVec(RFile* rideFilePtr);
    
    /**
     * Reference to vector of updatable files in the project(s).
     * 
     * @return the vector.
     */
    QVector<RFile*> getRideFilePtrVec();
    
    /**
     * saves all changes in the UI files to the physical files.
     */
    bool save();
    
    
    bool save(int tabIndex);
};

#endif	/* SAVE_ALL_H */