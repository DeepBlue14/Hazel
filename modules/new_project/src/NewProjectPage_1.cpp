#include "NewProjectPage_1.h"


NewProjectPage_1::NewProjectPage_1(QWidget* parent) : QWidget(parent)
{
    titlePtr = new QLabel("<b>Select a ROS distribution</b>");
    
    rosVersionStrPtr = new QString("null");
    newOrFromExStrPtr = new QString("null");
    
    rosVersionsStrLstPtr = new QVector<QListWidgetItem*>();
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "fuerte.png"), "Fuerte"));
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "groovy.png"), "Groovy"));
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hydro.png"), "Hydro"));
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "indigo.png"), "Indigo"));
    rosVersionsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "jade.png"), "Jade"));
    
    newOrFromExStrLstPtr = new QVector<QListWidgetItem*>();
    newOrFromExStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "icon.jpg"), "New"));
    newOrFromExStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "rosv2.png"), "From existing sources"));
    
    rosVersionsLwPtr = new QListWidget();
    newOrFromExLwPtr = new QListWidget();
    
    //rosVersionsLwPtr->addItems(*rosVersionsStrLstPtr);
    for(size_t i = 0; i < rosVersionsStrLstPtr->size(); i++)
    {
        rosVersionsLwPtr->addItem(rosVersionsStrLstPtr->at(i) );
    }
    
    for(size_t i = 0; i < newOrFromExStrLstPtr->size(); i++)
    {
        newOrFromExLwPtr->addItem(newOrFromExStrLstPtr->at(i) );
    }
    
    rosVersionsLwPtr->setSelectionMode(QAbstractItemView::SingleSelection);
    rosVersionsLwPtr->item(3)->setSelected(true);
    
    newOrFromExLwPtr->setSelectionMode(QAbstractItemView::SingleSelection);
    newOrFromExLwPtr->item(1)->setSelected(true);
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(titlePtr, 0, 0, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(rosVersionsLwPtr, 1, 0);
    outerLayoutPtr->addWidget(newOrFromExLwPtr, 1, 1);
    
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


void NewProjectPage_1::setNewOrFromExStrPtr()
{
    if(newOrFromExLwPtr->selectedItems().size() != 0)
    {
        newOrFromExStrPtr = new QString(newOrFromExLwPtr->currentItem()->text().toLower() );
    }
    else
    {
        cerr << "Invalid input at NewProjectPage_1::setRosVersionStrPtr()" << endl;
    }
}
    

QString* NewProjectPage_1::getNewOrFromExStrPtr()
{
    return newOrFromExStrPtr;
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