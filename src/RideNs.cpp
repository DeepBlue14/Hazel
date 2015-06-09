#include "RideNs.h"


void RideNs::initPtrs()
{
    pkgPathStrPtr = new QString();
    argsLstPtr = new QStringList();
    processPtr = new QProcess();

    pkgPtrVecPtr = new QVector<QDir*>();
}


void RideNs::setPkgPathPtr(QString* dirPathPtr)
{
    pkgPathStrPtr = dirPathPtr;
}


QString* RideNs::getPkgPathPtr()
{
    return pkgPathStrPtr;
}


void RideNs::setArgsLstPtr(QStringList* argsLstPtr)
{
    argsLstPtr = argsLstPtr;
}


QStringList* RideNs::getArgsLstPtr()
{
    return argsLstPtr;
}


void RideNs::genRideProjConfigs()
{
    //mkdir .rideProject //at catkin_ws/src/project_name
    //mkdir resources    //at .rideProject/
    //...
    QStringList* tmp = new QStringList();
    tmp->append(".rideProject");
    tmp->append(*getPkgPathPtr() );
    processPtr->execute("mkdir", *tmp);
    
    tmp->clear();
    tmp->append("resources");
    tmp->append(*getPkgPathPtr() + "/" + ".rideProject/");
    processPtr->execute("mkdir", *tmp);
    
    tmp->clear();
    tmp->append("project");
    tmp->append(*getPkgPathPtr() + "/" + ".rideProject/resources/");
    processPtr->execute("mkdir", *tmp);
    
    tmp->clear();
    tmp->append("configurations.xml");
    tmp->append(*getPkgPathPtr() + "/" + ".rideProject/resources/project/");
    processPtr->execute("touch", *tmp);
    
    tmp->clear();
    tmp->append("scout");
    tmp->append(*getPkgPathPtr() + "/" + ".rideProject/resources/");
    processPtr->execute("mkdir", *tmp);
    
    tmp->clear();
    tmp->append("libraries");
    tmp->append(*getPkgPathPtr() + "/" + ".rideProject/scout/");
    processPtr->execute("mkdir", *tmp);
    
    tmp->clear();
    tmp->append("project");
    tmp->append(*getPkgPathPtr() + "/" + ".rideProject/scout/");
    processPtr->execute("mkdir", *tmp);
    
    
    tmp->clear();
    tmp->append("scout.qrc");
    tmp->append(*getPkgPathPtr() + "/" + ".rideProject/scout/");
    processPtr->execute("touch", *tmp);



    
    
}


bool RideNs::sourceEnv()
{
    processPtr->setWorkingDirectory(*pkgPathStrPtr);
    processPtr->start("source", *(new QStringList("devel/setup.bash")));
    
    return true; // ***CODE STUB--REPLACE ME ***
}


bool RideNs::initRosPkg()
{
    processPtr->setWorkingDirectory(*pkgPathStrPtr);
    processPtr->start("catkin_create_pkg", *argsLstPtr);
    
    return true; // *** CODE STUB--REPLACE ME ***
}


bool RideNs::testRosPkg()
{
    if(processPtr->state() == QProcess::NotRunning)
    {
        processPtr->start("source", *(new QStringList("devel/setup.bash")));
        processPtr->start("catkin_make", *(new QStringList(argsLstPtr->at(0))));
    }
    else
    {
        cerr << "Sorry, but the process is busy creating the pkg" << endl;
    }

    return true; // *** CODE STUB--REPLACE ME ***
}


bool RideNs::catkin_make()
{
    processPtr->setWorkingDirectory(*pkgPathStrPtr);
    processPtr->execute("source", *(new QStringList("devel/setup.bash")));
    processPtr->start("catkin_make");
}