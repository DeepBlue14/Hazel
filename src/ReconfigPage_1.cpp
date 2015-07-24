#include <qt4/QtGui/qmessagebox.h>

#include "ReconfigPage_1.h"


ReconfigPage_1::ReconfigPage_1(QWidget* parent) : QWidget(parent)
{
    vanillaPkgLocLePtr = new QLineEdit();
    vanillaPkgLocLePtr->setPlaceholderText("/path/to/original/package");
    vanillaPkgLocLePtr->setReadOnly(true);
    rosPkgLocLePtr = new QLineEdit();
    rosPkgLocLePtr->setPlaceholderText("/path/to/rosiffied/version/");
    rosPkgLocLePtr->setReadOnly(true);
    vanillaPkgLocFdPtr = new QFileDialog();
    rosPkgLocFdPtr = new QFileDialog();
    vanillaPkgLocPbPtr = new QPushButton("Select...");
    rosPkgLocPbPtr = new QPushButton("Select...");
    vanillaPkgLocStrPtr = new QString("null");
    rosPkgLocStrPtr = new QString("null");
    
    connect(vanillaPkgLocPbPtr, SIGNAL(released()), this, SLOT(handleVanillaPkgLocPbPtrSlot()));
    connect(rosPkgLocPbPtr, SIGNAL(released()), this, SLOT(handleRosPkgLocPbPtrPb()));
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(vanillaPkgLocLePtr, 0, 0);
    outerLayout->addWidget(vanillaPkgLocPbPtr, 0, 1);
    outerLayout->addWidget(rosPkgLocLePtr, 1, 0);
    outerLayout->addWidget(rosPkgLocPbPtr, 1, 1);
    
    this->setLayout(outerLayout);
}


void ReconfigPage_1::handleVanillaPkgLocPbPtrSlot()
{
    QString fileName = vanillaPkgLocFdPtr->getExistingDirectory(this, tr("&Open Directory"), "/home");
    vanillaPkgLocLePtr->setText(fileName);
}


void ReconfigPage_1::handleRosPkgLocPbPtrPb()
{
    QString* fileName = new QString(rosPkgLocFdPtr->getExistingDirectory(this, tr("&Open Directory"), "/home"));
    if(isValidRosWs(fileName) )
    {
        rosPkgLocLePtr->setText(*fileName);
    }
    
}


bool ReconfigPage_1::isValidRosWs(QString* absPathToWs)
{
    QDir ws(*absPathToWs);
    ws.cd("devel");
    QString file = "null";
    if(ws.entryList(QStringList("setup.bash"),QDir::Files, QDir::Name).size() >= 1)
    {
        return true;
    }
    else
    {
        QMessageBox invalidRosWsMb;
        invalidRosWsMb.setText("Invalid catkin workspace");
        invalidRosWsMb.setIcon(QMessageBox::Critical);
        invalidRosWsMb.exec();
        return false;
    }
  
}


QString* ReconfigPage_1::toString()
{
    
}


ReconfigPage_1::~ReconfigPage_1()
{
    ;
}