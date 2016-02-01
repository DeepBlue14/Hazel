#include "NewWorkspacePage_3.h"


NewWorkspacePage_3::NewWorkspacePage_3(QWidget* parent) : QWidget(parent)
{
    titlePtr = new QLabel("<b>Enter data for custom package.xml file</b>");
    
    authorNameStrPtr = new QString("null");
    authorEmailStrPtr = new QString("null");
    licenseStrPtr = new QString("null");
    
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
    outerLayout->addWidget(titlePtr, 0, 0, Qt::AlignHCenter);
    outerLayout->addLayout(formLayout, 1, 0, Qt::AlignCenter);
    
    this->setLayout(outerLayout);
}


void NewWorkspacePage_3::handleOtherLicenseSlot()
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


void NewWorkspacePage_3::setAuthorNameStrPtr()
{
    if(authorNameLePtr->text() != "")
    {
        authorNameStrPtr = new QString(authorNameLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewWorkspacePage_3::setAuthorNameStrPtr()" << endl;
    }
}


QString* NewWorkspacePage_3::getAuthorNameStrPtr()
{
    return authorNameStrPtr;
}


void NewWorkspacePage_3::setAuthorEmailStrPtr()
{
    if(authorEmailLePtr->text() != "")
    {
        authorEmailStrPtr = new QString(authorEmailLePtr->text() );
    }
    else
    {
        cerr << "Invalid input at NewWorkspacePage_3::setAuthorEmailStrPtr()" << endl;
    }
}


QString* NewWorkspacePage_3::getAuthorEmailStrPtr()
{
    return authorEmailStrPtr;
}


void NewWorkspacePage_3::setLicenseStrPtr()
{
    if(licenseCbPtr->currentText() != "")
    {
        licenseStrPtr = new QString(licenseCbPtr->currentText() );
    }
    else
    {
        cerr << "Invalid input at NewWorkspacePage_3::setLicenseStrPtr()" << endl;
    }
}


QString* NewWorkspacePage_3::getLicenseStrPtr()
{
    return licenseStrPtr;
}


QString* NewWorkspacePage_3::toString()
{
    QString* tmp = new QString("Author's Name: ");
    tmp->append(getAuthorNameStrPtr() );
    tmp->append("\nAuthor's Email: ");
    tmp->append(getAuthorEmailStrPtr() );
    tmp->append("\nLicense: ");
    tmp->append(getLicenseStrPtr() );
    
    return tmp;
}


void NewWorkspacePage_3::triggerMutators()
{
    setAuthorNameStrPtr();
    setAuthorEmailStrPtr();
    setLicenseStrPtr();
}


NewWorkspacePage_3::~NewWorkspacePage_3()
{
    ;
}
