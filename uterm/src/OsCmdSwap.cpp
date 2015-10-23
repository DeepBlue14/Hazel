#include "OsCmdSwap.h"


OsCmdSwap::OsCmdSwap()
{
    ;
}


QString* OsCmdSwap::swap(QString* userCmd)
{
    for(size_t i = 0; i < parallels->size(); i++)
    {cout << "comparing: \"" << userCmd->toStdString() << "\"with \"" << parallels->at(i)->second->toStdString() << "\"" << endl;
        if(userCmd->toLatin1() == parallels->at(i)->second->toLatin1() )
        {
            return parallels->at(i)->first;
        }
    }

    return userCmd;
}


void OsCmdSwap::setParallels(QVector<QPair<QString*, QString*>*>* parallels)
{
    this->parallels = parallels;
}


QVector<QPair<QString*, QString*>*>* OsCmdSwap::getParallels()
{
    return parallels;
}


OsCmdSwap::~OsCmdSwap()
{
    ;
}