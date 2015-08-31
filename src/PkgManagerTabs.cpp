#include "PkgManagerTabs.h"


PkgManagerTabs::PkgManagerTabs(QWidget* parent) : QWidget(parent)
{
    pkgNamesLstWidPtr = new QListWidget();
    pkgDescLstWidPtr = new QListWidget();
    
    pkgNamesStrLstPtr = new QStringList();
    pkgDescStrLstPtr = new QStringList();
    
    fetchWebSourcePtr = new FetchWebSource();
    
    outerLayout = new QGridLayout();
    
    outerLayout->addWidget(pkgNamesLstWidPtr, 0, 0);
    outerLayout->addWidget(pkgDescLstWidPtr, 0, 1);
    
    this->setLayout(outerLayout);
}


void PkgManagerTabs::load(QString rosDistro, int fetchOrFind)
{
    if(rosDistro == "indigo" && fetchOrFind == 0)
    {
        cout << "loading" << endl;
        fetchWebSourcePtr->loadPage();
        *pkgNamesStrLstPtr = *fetchWebSourcePtr->getRosPkgStrLstPtr();
        //cout << "^^^: " << pkgNamesStrLstPtr->at(0).toStdString() << endl;
        pkgNamesLstWidPtr->addItems(*pkgNamesStrLstPtr);
    }
    else
    {
        ;
    }
}


QString* PkgManagerTabs::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


PkgManagerTabs::~PkgManagerTabs()
{
    ;
}