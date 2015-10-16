#include "RunSetupPage_2.h"


QString RunSetupPage_2::fileStrPtr;
QString RunSetupPage_2::pkgStrPtr;


RunSetupPage_2::RunSetupPage_2(QWidget* parent) : QWidget(parent)
{
    launchFileAbsPathLePtr = new QLineEdit();
    pkgLePtr = new QLineEdit();
    pkgLePtr->setEnabled(false);
    fileLePtr = new QLineEdit();
    fileLePtr->setEnabled(false);
    launchFileDialogPtr = new QFileDialog();
    selectLaunchFilePbPtr = new QPushButton("Select...");
        
    connect(selectLaunchFilePbPtr, SIGNAL(released()), this, SLOT(handleSelectLaunchFilePbPtrSlot()));
    
    formLayoutPtr = new QFormLayout();
    formLayoutPtr->addRow(tr("&Pkg"), pkgLePtr);
    formLayoutPtr->addRow(tr("&File"), fileLePtr);
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(launchFileAbsPathLePtr, 0, 0);
    outerLayoutPtr->addWidget(selectLaunchFilePbPtr, 0, 1);
    outerLayoutPtr->addLayout(formLayoutPtr, 1, 0/*, Qt::AlignLeft*/);
    
    this->setLayout(outerLayoutPtr);
}


void RunSetupPage_2::handleSelectLaunchFilePbPtrSlot()
{
    QString fileAbsPathStr = launchFileDialogPtr->getOpenFileName(this, tr("&Open Directory"), "/home");
    launchFileAbsPathLePtr->setText(fileAbsPathStr);
    
   QString fileName(fileAbsPathStr.right(fileAbsPathStr.size() - (fileAbsPathStr.lastIndexOf("/") + 1)) );
   QString pkgName = fileAbsPathStr.left(fileAbsPathStr.size() - (fileAbsPathStr.size() - (fileAbsPathStr.lastIndexOf("/"))));
   pkgName = pkgName.left(pkgName.size() - (pkgName.size() - (pkgName.lastIndexOf("/"))));
   pkgName = pkgName.right(pkgName.size() - (pkgName.lastIndexOf("/") + 1));

    pkgLePtr->setText(pkgName);
    setPkgStrPtr(pkgName);
    fileLePtr->setText(fileName);
    setFileStrPtr(fileName);
}


void RunSetupPage_2::setLaunchFileStrPtr()
{
    launchFileStrPtr = new QString(launchFileAbsPathLePtr->text() );
}


QString* RunSetupPage_2::getLaunchFileStrPtr()
{
    return launchFileStrPtr;
}


void RunSetupPage_2::setPkgStrPtr(QString pkgStrPtr)
{
    RunSetupPage_2::pkgStrPtr = pkgStrPtr;
}


QString RunSetupPage_2::getPkgStrPtr()
{
    return pkgStrPtr;
}


void RunSetupPage_2::setFileStrPtr(QString fileStrPtr)
{
    RunSetupPage_2::fileStrPtr = fileStrPtr;
}


QString RunSetupPage_2::getFileStrPtr()
{
    return fileStrPtr;
}


QString* RunSetupPage_2::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


RunSetupPage_2::~RunSetupPage_2()
{
    ;
}