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


bool SaveAll::save()
{
    for(size_t i = 0; i < rideFilePtrVec.size(); i++)
    {
        if(!rideFilePtrVec.at(i)->openRdWrFile() )
        {
            cerr << "Failed to open file for rd wr" << endl;
            return false;
        }
        QTextStream out(rideFilePtrVec.at(i) );
        rideFilePtrVec.at(i)->resize(0);
        out << rideFilePtrVec.at(i)->getParallelFileGuiPtr()->toPlainText() << endl;
    }
    
    return true;
}


bool SaveAll::save(int tabIndex)
{
    if(!rideFilePtrVec.at(tabIndex)->openRdWrFile() )
    {
        cerr << "Failed to open file for rd wr" << endl;
        return false;
    }
    QTextStream out(rideFilePtrVec.at(tabIndex) );
    rideFilePtrVec.at(tabIndex)->resize(0);
    out << rideFilePtrVec.at(tabIndex)->getParallelFileGuiPtr()->toPlainText() << endl;
    
    return true;
}