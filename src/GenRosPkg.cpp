#include "GenRosPkg.h"


GenRosPkg::GenRosPkg(QWidget* parent) : QWidget(parent), PKG_NAME_LOC(0)
{
    argsLstPtr = new QStringList();
    genRosPkgProcessPtr = new QProcess();
}


void GenRosPkg::setDirPathPtr(QString* dirPathPtr)
{
    this->dirPathPtr = dirPathPtr;
}


QString* GenRosPkg::getDirPathPtr()
{
    return dirPathPtr;
}


void GenRosPkg::setArgsLstPtr(QStringList* argsLstPtr)
{
    this->argsLstPtr = argsLstPtr;
}


QStringList* GenRosPkg::getArgsLstPtr()
{
    return argsLstPtr;
}


bool GenRosPkg::initRosPkg()
{
    genRosPkgProcessPtr->setWorkingDirectory(*dirPathPtr);
    genRosPkgProcessPtr->start("catkin_create_pkg", *argsLstPtr);
    
    return true; // *** CODE STUB--REPLACE ME ***
}


bool GenRosPkg::testRosPkg()
{
    if(genRosPkgProcessPtr->state() == QProcess::NotRunning)
    {
        genRosPkgProcessPtr->start("source", *(new QStringList("devel/setup.bash")));
        genRosPkgProcessPtr->start("catkin_make", *(new QStringList(argsLstPtr->at(PKG_NAME_LOC))));
    }
    else
    {
        cerr << "Sorry, but the process is busy creating the pkg" << endl;
    }

    return true; // *** CODE STUB--REPLACE ME ***
}


GenRosPkg::~GenRosPkg()
{
    ;
}