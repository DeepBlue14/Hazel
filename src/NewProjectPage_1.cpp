#include "NewProjectPage_1.h"


NewProjectPage_1::NewProjectPage_1(QWidget* parent) : QWidget(parent)
{
    rosVersionStrPtr = new QString("");
    
    rosVersionsStrLstPtr = new QStringList();
    rosVersionsStrLstPtr->push_back("Fuerte");
    rosVersionsStrLstPtr->push_back("Groovy");
    rosVersionsStrLstPtr->push_back("Hydro");
    rosVersionsStrLstPtr->push_back("Indigo");
    rosVersionsStrLstPtr->push_back("Jade");
    
    rosVersionsLwPtr = new QListWidget();
    rosVersionsLwPtr->addItems(*rosVersionsStrLstPtr);
    rosVersionsLwPtr->setSelectionMode(QAbstractItemView::SingleSelection);
    rosVersionsLwPtr->item(3)->setSelected(true);
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(rosVersionsLwPtr);
    
    this->setLayout(outerLayoutPtr);
}


void NewProjectPage_1::setRosVersionStrPtr()
{
    if(rosVersionsLwPtr->selectedItems().size() != 0)
    {
        rosVersionStrPtr = new QString(rosVersionsLwPtr->currentItem()->text().toLower() );
    }
    else
    {
        cerr << "Invalid input at NewProjectPage_1::setRosVersionStrPtr()" << endl;
    }
}


QString* NewProjectPage_1::getRosVersionStrPtr()
{
    return rosVersionStrPtr;
}


QString* NewProjectPage_1::toString()
{
    QString* tmp = new QString("Ros Version: ");
    tmp->append(getRosVersionStrPtr() );
    
    return tmp;
}


void NewProjectPage_1::triggerMutators()
{
    setRosVersionStrPtr();
}


NewProjectPage_1::~NewProjectPage_1()
{
    ;
}