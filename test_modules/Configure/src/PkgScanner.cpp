#include "PkgScanner.h"


PkgScanner::PkgScanner()
{
    ;
}


void PkgScanner::scan()
{
    QString dirStr("/home/james/catkin_ws/src/test_node");
    QDirIterator it(dirStr, QStringList() << "*.cpp", QDir::Files, QDirIterator::Subdirectories);
    while(it.hasNext() )
    {
        qDebug() << it.next();
    }
}


void PkgScanner::setPkgRootStrPtr(QString* pkgRootStrPtr)
{
    this->pkgRootStrPtr = pkgRootStrPtr;
}


QString* PkgScanner::getPkgRootStrPtr()
{
    return pkgRootStrPtr;
}


QString* PkgScanner::toString()
{
    return new QString("***METHOD STUB***");
}


PkgScanner::~PkgScanner()
{
    ;
}