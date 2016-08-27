#include "Env.h"


namespace env
{
    QString absPathToRosWs;
    QString rideInstallLoc;
    QString imagesInstallLoc;
    QString sigilHome;
    QString username;

    void init()
    {
        QProcess process;
        process.start("bash", QStringList() << "-c" << "echo $USER");
        process.waitForFinished(-1);
        QByteArray bt = process.readAllStandardOutput();
        process.close();
        QString str(bt);
        username = str;
        
        process.start("bash", QStringList() << "-c" << "echo $HOME");
        process.waitForFinished(-1);
        bt = process.readAllStandardOutput();
        process.close();
        str = bt;
        sigilHome = str;
        
        
        process.start("bash", QStringList() << "-c" << "pwd");
        process.waitForFinished(-1);
        bt = process.readAllStandardOutput();
        process.close();
        str = bt;
        cout << "HERE (0): " << str.toStdString() << endl;
        QStringList pieces = str.split("/");
        rideInstallLoc = "";
        
        const int OFFSET = 2;
        for(size_t i = 0; i < pieces.size()-OFFSET; i++)
        {
            
            rideInstallLoc.append(pieces.at(i) );
            rideInstallLoc.append("/");
        }
        rideInstallLoc.remove(rideInstallLoc.size()-1, 1);
        imagesInstallLoc = rideInstallLoc + "/res/images";
    }
}