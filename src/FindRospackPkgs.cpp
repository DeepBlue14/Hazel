#include "FindRospackPkgs.h"


FindRospackPkgs::FindRospackPkgs()
{
    ;
}


void FindRospackPkgs::findPkgs()
{
    /*
     * !!!This won't work; I need to source the ws environment ???OR???!!!
     * !!!source /opt/[rosversion]/setup.bash (hence, this!!!
     * !!!will require RProcess)!!!
     */
    QProcess proc;
    proc.start("rospack", QStringList("list-names") );
    proc.waitForFinished(-1);
    QByteArray output = proc.readAll();
    
    cout << "at FindRospackPkgs::findPkgs(): " << output.data() << endl;
    
}


QString* FindRospackPkgs::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


FindRospackPkgs::~FindRospackPkgs()
{
    ;
}