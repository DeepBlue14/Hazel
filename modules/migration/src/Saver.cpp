#include "Saver.h"


QVector<RFile*> Saver::rideFilePtrVec;


void Saver::pushToRideFilePtrVec(RFile* rideFilePtr)
{
    rideFilePtrVec.push_back(rideFilePtr);
}


void Saver::removeFromRideFileVec(RFile* rideFilePtr)
{
    for(size_t i = 0; i < rideFilePtr->size(); i++)
    {
        
        if(*rideFilePtrVec.at(i)->getFileNameStrPtr() == *rideFilePtr->getFileNameStrPtr() )
        {
            rideFilePtrVec.at(i)->remove();
        }
        
    }
    
}


QVector<RFile*> Saver::getRideFilePtrVec()
{
    return rideFilePtrVec;
}


bool Saver::save()
{
    for(size_t i = 0; i < rideFilePtrVec.size(); i++)
    {
        if(!rideFilePtrVec.at(i)->openRdWrFile() && !rideFilePtrVec.at(i)->isOpen() )
        {
            cerr << "Failed to open file for rd wr--unable to save to disk" << endl;
            return false;
        }
        QTextStream out(rideFilePtrVec.at(i) );
        rideFilePtrVec.at(i)->resize(0);
        out << rideFilePtrVec.at(i)->getParallelFileGuiPtr()->toPlainText() << endl;
    }
    
    return true;
}


bool Saver::save(int tabIndex)
{
    cout << "max size:" << rideFilePtrVec.size() << " and index is: " << tabIndex << endl;
    if(!rideFilePtrVec.at(tabIndex)->openRdWrFile() && !rideFilePtrVec.at(tabIndex)->isOpen() )
    {
        cerr << "Failed to open file for rd wr--unable to save to disk" << endl;
        return false;
    }
    QTextStream out(rideFilePtrVec.at(tabIndex) );
    rideFilePtrVec.at(tabIndex)->resize(0);
    out << rideFilePtrVec.at(tabIndex)->getParallelFileGuiPtr()->toPlainText() << endl;
    
    return true;
}