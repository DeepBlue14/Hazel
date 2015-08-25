#include "NewProjectPage_1.h"


NewProjectPage_1::NewProjectPage_1(QWidget* parent) : QWidget(parent)
{
    rosVersionStrPtr = new QString("null");
    
    rosVersionsStrLstPtr = new QVector<QListWidgetItem*>();
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon("/home/james/NetBeansProjects/ride/images/fuerte.jpg"), "Fuerte"));
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon("/home/james/NetBeansProjects/ride/images/groovy.jpg"), "Groovy"));
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon("/home/james/NetBeansProjects/ride/images/hydro.png"), "Hydro"));
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon("/home/james/NetBeansProjects/ride/images/indigo.png"), "Indigo"));
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon("/home/james/NetBeansProjects/ride/images/jade.png"), "Jade"));
    
    rosVersionsLwPtr = new QListWidget();
    //rosVersionsLwPtr->addItems(*rosVersionsStrLstPtr);
    for(size_t i = 0; i < rosVersionsStrLstPtr->size(); i++)
    {
        rosVersionsLwPtr->addItem(rosVersionsStrLstPtr->at(i) );
    }
    
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