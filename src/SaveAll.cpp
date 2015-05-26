#include "SaveAll.h"


QVector<RideFile*> rideFilePtrVec;


void SaveAll::pushToRideFilePtrVec(RideFile* rideFilePtr)
{
    rideFilePtrVec.push_back(rideFilePtr);
}


void SaveAll::removeFromRideFileVec(RideFile* rideFilePtr)
{
    for(size_t i = 0; i < rideFilePtr->size(); i++)
    {
        
        if(*rideFilePtrVec.at(i)->getFileNameStrPtr() == *rideFilePtr->getFileNameStrPtr() )
        {
            rideFilePtrVec.at(i)->remove();
        }
        
    }
    
}


QVector<RideFile*> SaveAll::getRideFilePtrVec()
{
    return rideFilePtrVec;
}


void SaveAll::save()
{
    ;
}