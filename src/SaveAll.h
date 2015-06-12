/* 
 * File:   SaveAll.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
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

using namespace std;

namespace SaveAll
{
    extern QVector<RFile*> rideFilePtrVec;
    
    void pushToRideFilePtrVec(RFile* rideFilePtr);
    void removeFromRideFileVec(RFile* rideFilePtr);
    QVector<RFile*> getRideFilePtrVec();
    void save();
};

#endif	/* SAVE_ALL_H */