#include "RunPage_2.h"


RunPage_2::RunPage_2(QWidget* parent) : QWidget(parent)
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


void RunPage_2::handleSelectLaunchFilePbPtrSlot()
{
    QString fileAbsPathStr = launchFileDialogPtr->getOpenFileName(this, tr("&Open Directory"), "/home");
    launchFileAbsPathLePtr->setText(fileAbsPathStr);
    
   QString fileName(fileAbsPathStr.right(fileAbsPathStr.size() - (fileAbsPathStr.lastIndexOf("/") + 1)) );
   QString pkgName = fileAbsPathStr.left(fileAbsPathStr.size() - (fileAbsPathStr.size() - (fileAbsPathStr.lastIndexOf("/"))));
   pkgName = pkgName.left(pkgName.size() - (pkgName.size() - (pkgName.lastIndexOf("/"))));
   pkgName = pkgName.right(pkgName.size() - (pkgName.lastIndexOf("/") + 1));

    pkgLePtr->setText(pkgName);
    fileLePtr->setText(fileName);
}


void RunPage_2::setLaunchFileStrPtr()
{
    launchFileStrPtr = new QString(launchFileAbsPathLePtr->text() );
}


QString* RunPage_2::getLaunchFileStrPtr()
{
    return launchFileStrPtr;
}


QString* RunPage_2::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


RunPage_2::~RunPage_2()
{
    ;
}