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
        // !!!
        /*if(rideFilePtrVec.at(i).)
        {
            ;
        }*/
        
    }
    
}


QVector<RideFile*> SaveAll::getRideFilePtrVec()
{
    ;
}


void SaveAll::save()
{
    ;
}