#include "EnvCmds.h"


EnvCmds::EnvCmds(QWidget* parent) : QWidget(parent)
{
    argsLstPtr = new QStringList();
    genRosPkgProcessPtr = new QProcess();
}


void EnvCmds::setPkgPathPtr(QString* dirPathPtr)
{
    this->pkgPathPtr = dirPathPtr;
}


QString* EnvCmds::getPkgPathPtr()
{
    return pkgPathPtr;
}


void EnvCmds::setArgsLstPtr(QStringList* argsLstPtr)
{
    this->argsLstPtr = argsLstPtr;
}


QStringList* EnvCmds::getArgsLstPtr()
{
    return argsLstPtr;
}


bool EnvCmds::initRosPkg()
{
    genRosPkgProcessPtr->setWorkingDirectory(*pkgPathPtr);
    genRosPkgProcessPtr->start("catkin_create_pkg", *argsLstPtr);
    
    return true; // *** CODE STUB--REPLACE ME ***
}


bool EnvCmds::testRosPkg()
{
    if(genRosPkgProcessPtr->state() == QProcess::NotRunning)
    {
        genRosPkgProcessPtr->start("source", *(new QStringList("devel/setup.bash")));
        genRosPkgProcessPtr->start("catkin_make", *(new QStringList(argsLstPtr->at(0))));
    }
    else
    {
        cerr << "Sorry, but the process is busy creating the pkg" << endl;
    }

    return true; // *** CODE STUB--REPLACE ME ***
}

EnvCmds::~EnvCmds()
{
    ;
}