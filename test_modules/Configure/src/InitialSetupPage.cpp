#include "InitialSetupPage.h"


InitialSetupPage::InitialSetupPage(QWidget* parent) : QWidget(parent)
{
    scanBtnPtr = new QRadioButton("Scan");
    scanBtnPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "search.png"));
    scanBtnPtr->setChecked(true);
    reconfigBtnPtr = new QRadioButton("Transform");
    reconfigBtnPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "searchAndTransform.png"));
    
    connect(scanBtnPtr, SIGNAL(released()), this, SLOT(handleScanMode()));
    connect(reconfigBtnPtr, SIGNAL(released()), this, SLOT(handleVerifyMode()));
    
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

    verifyCbPtr = new QCheckBox("Verify");
    buildCbPtr = new QCheckBox("Build");
    swapOptionMode(true);
    
    vanillaPkgAbsPathStr = new QString("null");
    rosPkgAbsPathStr = new QString("null");
    
    connect(vanillaPkgLocPbPtr, SIGNAL(released()), this, SLOT(handleVanillaPkgLocPbPtrSlot()));
    connect(rosPkgLocPbPtr, SIGNAL(released()), this, SLOT(handleRosPkgLocPbPtrPb()));
    
    btnLayout = new QGridLayout();
    btnLayout->addWidget(scanBtnPtr, 0, 0);
    btnLayout->addWidget(reconfigBtnPtr, 0, 1);
    
    outerLayout = new QGridLayout();
    outerLayout->addLayout(btnLayout, 0, 0, Qt::AlignCenter);
    outerLayout->addWidget(vanillaPkgLocLePtr, 1, 0);
    outerLayout->addWidget(vanillaPkgLocPbPtr, 1, 1);
    outerLayout->addWidget(rosPkgLocLePtr, 2, 0);
    outerLayout->addWidget(rosPkgLocPbPtr, 2, 1);
    outerLayout->addWidget(verifyCbPtr, 3, 0);
    outerLayout->addWidget(buildCbPtr, 4, 0);
    
    this->setLayout(outerLayout);
}


void InitialSetupPage::handleScanMode()
{
    swapOptionMode(true);
}


void InitialSetupPage::handleVerifyMode()
{
    swapOptionMode(false);
}


void InitialSetupPage::handleVanillaPkgLocPbPtrSlot()
{
    QString fileName = vanillaPkgLocFdPtr->getExistingDirectory(this, tr("&Open Directory"), "/home");
    vanillaPkgLocLePtr->setText(fileName);
}


void InitialSetupPage::handleRosPkgLocPbPtrPb()
{
    QString* fileName = new QString(rosPkgLocFdPtr->getExistingDirectory(this, tr("&Open Directory"), "/home"));
    if(isValidRosWs(fileName) )
    {
        rosPkgLocLePtr->setText(*fileName);
    }
    
}


void InitialSetupPage::swapOptionMode(bool isScanMode)
{
    switch(isScanMode)
    {
        case true:
            vanillaPkgLocLePtr->setEnabled(true);
            vanillaPkgLocLePtr->setVisible(true);
            vanillaPkgLocPbPtr->setEnabled(true);
            vanillaPkgLocPbPtr->setVisible(true);
            rosPkgLocLePtr->setEnabled(false);
            rosPkgLocLePtr->setVisible(false);
            rosPkgLocPbPtr->setEnabled(false);
            rosPkgLocPbPtr->setVisible(false);
            verifyCbPtr->setEnabled(false);
            verifyCbPtr->setVisible(false);
            buildCbPtr->setEnabled(true);
            buildCbPtr->setVisible(true);
            break;
        case false:
            vanillaPkgLocLePtr->setEnabled(true);
            vanillaPkgLocLePtr->setVisible(true);
            vanillaPkgLocPbPtr->setEnabled(true);
            vanillaPkgLocPbPtr->setVisible(true);
            rosPkgLocLePtr->setEnabled(true);
            rosPkgLocLePtr->setVisible(true);
            rosPkgLocPbPtr->setEnabled(true);
            rosPkgLocPbPtr->setVisible(true);
            verifyCbPtr->setEnabled(true);
            verifyCbPtr->setVisible(true);
            buildCbPtr->setEnabled(false);
            buildCbPtr->setVisible(false);
            break;
        default:
            ;
    }
    
}


void InitialSetupPage::setVanillaPkgAbsPathStr(QString* rosPkgAbsPathStr)
{
    this->vanillaPkgAbsPathStr = rosPkgAbsPathStr;
}


QString* InitialSetupPage::getVanillaPkgAbsPathStr()
{
    return vanillaPkgAbsPathStr;
}


void InitialSetupPage::setRosPkgAbsPathStr(QString* rosPkgAbsPathStr)
{
    this->rosPkgAbsPathStr = rosPkgAbsPathStr;
}


QString* InitialSetupPage::getRosPkgAbsPathStr()
{
    return rosPkgAbsPathStr;
}


bool InitialSetupPage::isValidRosWs(QString* absPathToWs)
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


QString* InitialSetupPage::toString()
{
    QString* tmp = new QString("***METHOD STUB***");
    
    return tmp;
}


InitialSetupPage::~InitialSetupPage()
{
    ;
}