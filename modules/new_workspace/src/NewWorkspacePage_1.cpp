#include "NewWorkspacePage_1.h"


NewWorkspacePage_1::NewWorkspacePage_1(QWidget* parent) : QWidget(parent)
{
    titlePtr = new QLabel("<b>Select a ROS workspace type</b>");
    
    rosVersionStrPtr = new QString("null");
    newOrFromExStrPtr = new QString("null");
    
//    rosVersionStrLstPtr = new QVector<QListWidgetItem*>();
//    rosVersionStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "fuerte.png"), "Fuerte"));
//    rosVersionStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "groovy.png"), "Groovy"));
//    rosVersionStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hydro.png"), "Hydro"));
//    rosVersionStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "indigo.png"), "Indigo"));
//    rosVersionStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "jade.png"), "Jade"));
    ros1RadBtnPtr = new QRadioButton("ROS v1");
    ros1RadBtnPtr->setChecked(true);
    ros2RadBtnPtr = new QRadioButton("ROS v2");
    rosVersionBtnGroupPtr = new QButtonGroup();
    QList<QRadioButton*> btnLst;
    btnLst.push_back(ros1RadBtnPtr);
    btnLst.push_back(ros2RadBtnPtr);
    rosVersionBtnGroupPtr->addButton(ros1RadBtnPtr);
    rosVersionBtnGroupPtr->addButton(ros2RadBtnPtr);
    btnGroupWidPtr = new ButtonGroupWidget<QRadioButton>(btnLst);

    
    //if ROS v1
    ros1DistroStrLstPtr = new QVector<QListWidgetItem*>();
    ros1DistroStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "fuerte.png"), "Fuerte"));
    ros1DistroStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "groovy.png"), "Groovy"));
    ros1DistroStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hydro.png"), "Hydro"));
    ros1DistroStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "indigo.png"), "Indigo"));
    ros1DistroStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "jade.png"), "Jade"));
    
//    rosVersionsLwPtr = new QListWidget();
    rosDistroLwPtr = new QListWidget();
    
    //rosVersionsLwPtr->addItems(*rosVersionsStrLstPtr);
//    for(size_t i = 0; i < rosVersionStrLstPtr->size(); i++)
//    {
//        rosVersionsLwPtr->addItem(rosVersionStrLstPtr->at(i) );
//    }
    
    for(size_t i = 0; i < ros1DistroStrLstPtr->size(); i++)
    {
        rosDistroLwPtr->addItem(ros1DistroStrLstPtr->at(i) );
    }
    
//    rosVersionsLwPtr->setSelectionMode(QAbstractItemView::SingleSelection);
//    rosVersionsLwPtr->item(3)->setSelected(true);
    
    rosDistroLwPtr->setSelectionMode(QAbstractItemView::SingleSelection);
    rosDistroLwPtr->item(1)->setSelected(true);
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(titlePtr, 0, 0, Qt::AlignHCenter);
//    outerLayoutPtr->addWidget(rosVersionsLwPtr, 1, 0);
//    outerLayoutPtr->addWidget(ros1RadBtnPtr, 0, 0, Qt::AlignHCenter);
//    outerLayoutPtr->addWidget(ros2RadBtnPtr, 1, 0, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(btnGroupWidPtr, 1, 0, Qt::AlignVCenter);
    outerLayoutPtr->addWidget(rosDistroLwPtr, 1, 1);
    
    this->setLayout(outerLayoutPtr);
}


void NewWorkspacePage_1::setRosVersionStrPtr()
{
//    if(rosVersionsLwPtr->selectedItems().size() != 0)
//    {
//        rosVersionStrPtr = new QString(rosVersionsLwPtr->currentItem()->text().toLower() );
//    }
//    else
//    {
//        cerr << "Invalid input at NewWorkspacePage_1::setRosVersionStrPtr()" << endl;
//    }
}


QString* NewWorkspacePage_1::getRosVersionStrPtr()
{
    return rosVersionStrPtr;
}


void NewWorkspacePage_1::setNewOrFromExStrPtr()
{
    if(rosDistroLwPtr->selectedItems().size() != 0)
    {
        newOrFromExStrPtr = new QString(rosDistroLwPtr->currentItem()->text().toLower() );
    }
    else
    {
        cerr << "Invalid input at NewWorkspacePage_1::setRosVersionStrPtr()" << endl;
    }
}
    

QString* NewWorkspacePage_1::getNewOrFromExStrPtr()
{
    return newOrFromExStrPtr;
}


QString* NewWorkspacePage_1::toString()
{
    QString* tmp = new QString("Ros Version: ");
    tmp->append(getRosVersionStrPtr() );
    
    return tmp;
}


void NewWorkspacePage_1::triggerMutators()
{
    setRosVersionStrPtr();
}


NewWorkspacePage_1::~NewWorkspacePage_1()
{
    ;
}
