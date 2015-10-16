#include "Build.h"


Build::Build() : PKG_OPTION_STR_PTR(new QString("--pkg"))
{
    buildProcessPtr = new QProcess();
    pkgStrLstPtr = new QStringList();
    pkgStrLstPtr->push_front(*PKG_OPTION_STR_PTR);
}


void Build::runBuildCmd()
{
    buildProcessPtr->start("catkin_make", *pkgStrLstPtr);
    qDebug() << buildProcessPtr->errorString() << endl;
}


Build::~Build()
{
    ;
}