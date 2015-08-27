#include "PkgManagerTabs.h"


PkgManagerTabs::PkgManagerTabs(QWidget* parent) : QWidget(parent)
{
    pkgNamesLstWidPtr = new QListWidget();
    pkgDescLstWidPtr = new QListWidget();
    
    pkgNamesStrLstPtr = new QStringList();
    pkgDescStrLstPtr = new QStringList();
    
    outerLayout = new QGridLayout();
    
    outerLayout->addWidget(pkgNamesLstWidPtr, 0, 0);
    outerLayout->addWidget(pkgDescLstWidPtr, 0, 1);
    
    this->setLayout(outerLayout);
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