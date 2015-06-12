#include "SaveAll.h"


QVector<RFile*> SaveAll::rideFilePtrVec;


void SaveAll::pushToRideFilePtrVec(RFile* rideFilePtr)
{
    rideFilePtrVec.push_back(rideFilePtr);
}


void SaveAll::removeFromRideFileVec(RFile* rideFilePtr)
{
    for(size_t i = 0; i < rideFilePtr->size(); i++)
    {
        
        if(*rideFilePtrVec.at(i)->getFileNameStrPtr() == *rideFilePtr->getFileNameStrPtr() )
        {
            rideFilePtrVec.at(i)->remove();
        }
        
    }
    
}


QVector<RFile*> SaveAll::getRideFilePtrVec()
{
    return rideFilePtrVec;
}


void SaveAll::save()
{
    for(size_t i = 0; i < rideFilePtrVec.size(); i++)
    {
        if(!rideFilePtrVec.at(i)->openRdWrFile() )
        {
            cerr << "Failed to open file for rd wr" << endl;
        }
        QTextStream out(rideFilePtrVec.at(i) );
        rideFilePtrVec.at(i)->resize(0);
        out << rideFilePtrVec.at(i)->getParallelFileGuiPtr()->toPlainText() << endl;
    }
    
}