#include "NewProjectPage_2.h"


NewProjectPage_2::NewProjectPage_2(QWidget* parent) : QWidget(parent)
{
    authorNameLePtr = new QLineEdit();
    authorEmailLePtr = new QLineEdit();
    licenseListPtr = new QStringList();
    licenseListPtr->push_back("BSD");
    licenseListPtr->push_back("MIT");
    licenseListPtr->push_back("GPL2");
    licenseListPtr->push_back("Other");
    licenseCbPtr = new QComboBox();
    licenseCbPtr->addItems(*licenseListPtr);
    connect (licenseCbPtr, SIGNAL(currentIndexChanged(const QString&)), this, SLOT(handleOtherLicenseSlot()));
    licenseLePtr = new QLineEdit();
    licenseLePtr->setVisible(false);
    licenseLePtr->setEnabled(false);
        
    dependsLePtr = new QLineEdit();
    dependsEnteredStrList = new QStringList();
    dependsEnteredTypeLw = new QListWidget();
        
    formLayout = new QFormLayout();
    formLayout->addRow(tr("&Author's Name"), authorNameLePtr);
    formLayout->addRow(tr("&Author's Email"), authorEmailLePtr);
    formLayout->addRow(tr("&License"), licenseCbPtr);
    formLayout->addRow("", licenseLePtr);
    
    outerLayout = new QGridLayout();
    outerLayout->addLayout(formLayout, 0, 0, Qt::AlignCenter);
    
    this->setLayout(outerLayout);
}


void NewProjectPage_2::handleOtherLicenseSlot()
{
    //cout << "calling" << endl;
    if(licenseCbPtr->currentText() == "Other")
    {
        cout << "display!" << endl;
        licenseLePtr->setVisible(true);
        licenseLePtr->setEnabled(true);
    }
    else
    {
        cout << "hide!" << endl;
        licenseLePtr->setVisible(false);
        licenseLePtr->setEnabled(false);
    }
}


NewProjectPage_2::~NewProjectPage_2()
{
    ;
}