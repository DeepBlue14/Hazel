#include "NewProjectPage_3.h"


NewProjectPage_3::NewProjectPage_3(QWidget* parent) : QWidget(parent)
{
    authorNameStrPtr = new QString("");
    authorEmailStrPtr = new QString("");
    licenseStrPtr = new QString("");
    
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
        
    formLayout = new QFormLayout();
    formLayout->addRow(tr("&Author's Name"), authorNameLePtr);
    formLayout->addRow(tr("&Author's Email"), authorEmailLePtr);
    formLayout->addRow(tr("&License"), licenseCbPtr);
    formLayout->addRow("", licenseLePtr);
    
    outerLayout = new QGridLayout();
    outerLayout->addLayout(formLayout, 0, 0, Qt::AlignCenter);
    
    this->setLayout(outerLayout);
}


void NewProjectPage_3::handleOtherLicenseSlot()
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


void NewProjectPage_3::setAuthorNameStrPtr()
{
    authorNameStrPtr = new QString(authorNameLePtr->text() );
}


QString* NewProjectPage_3::getAuthorNameStrPtr()
{
    return authorNameStrPtr;
}


void NewProjectPage_3::setAuthorEmailStrPtr()
{
    authorEmailStrPtr = new QString(authorEmailLePtr->text() );
}


QString* NewProjectPage_3::getAuthorEmailStrPtr()
{
    return authorEmailStrPtr;
}


void NewProjectPage_3::setLicenseStrPtr()
{
    licenseStrPtr = new QString(licenseCbPtr->currentText() );
}


QString* NewProjectPage_3::getLicenseStrPtr()
{
    return licenseStrPtr;
}


QString* NewProjectPage_3::toString()
{
    QString* tmp = new QString("Author's Name: ");
    tmp->append(getAuthorNameStrPtr() );
    tmp->append("\nAuthor's Email: ");
    tmp->append(getAuthorEmailStrPtr() );
    tmp->append("\nLicense: ");
    tmp->append(getLicenseStrPtr() );
    
    return tmp;
}


void NewProjectPage_3::triggerMutators()
{
    setAuthorNameStrPtr();
    setAuthorEmailStrPtr();
    setLicenseStrPtr();
}


NewProjectPage_3::~NewProjectPage_3()
{
    ;
}