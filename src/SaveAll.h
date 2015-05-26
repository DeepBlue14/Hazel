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
#include <QVector>

#include <iostream>

#include "RideFile.h"

using namespace std;

namespace SaveAll
{
    QVector<RideFile*> rideFilePtrVec;
    
    void pushToRideFilePtrVec(RideFile* rideFilePtr);
    void removeFromRideFileVec(RideFile* rideFilePtr);
    QVector<RideFile*> getRideFilePtrVec();
    void save();
};

#endif	/* SAVE_ALL_H */