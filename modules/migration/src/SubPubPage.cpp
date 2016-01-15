#include "SubPubPage.h"


SubPubPage::SubPubPage(QWidget* parent) : QWidget(parent)
{
    titlePtr = new QLabel();
    
    msgCatagoryStrPtr = new QString("");
    specificMsgStrPtr = new QString("");
    
    msgCatagoryStrLstPtr = new QVector<QListWidgetItem*>();
    msgCatagoryStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "msg2.png"),
                                                        "std_msgs") );
    msgCatagoryStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "msg2.png"),
                                                        "sensor_msgs") );
    msgCatagoryStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "msg2.png"),
                                                        "geometry_msgs") );

    typesEnteredStrLstPtr = new QVector<QListWidgetItem*>();
    
    // !!!Load this stuff from an xml res file!!!
    QVector<QListWidgetItem*>* std_msgsStrLstPtr = new QVector<QListWidgetItem*>();
    std_msgsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                     "Char") );
    std_msgsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                     "String") );
    
    QVector<QListWidgetItem*>* sensor_msgsStrLstPtr = new QVector<QListWidgetItem*>();
    sensor_msgsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                        "Image") );
    sensor_msgsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                        "PointCloud") );
    sensor_msgsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                        "PointCloud2") );
    sensor_msgsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                        "Imu") );
    
    QVector<QListWidgetItem*>* geometry_msgsStrLstPtr = new QVector<QListWidgetItem*>();
    geometry_msgsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                        "vector2") );
    geometry_msgsStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                        "vector3") );

    specificMsgStrLstVec = new QVector<QVector<QListWidgetItem*>*>();
    specificMsgStrLstVec->push_back(std_msgsStrLstPtr);
    specificMsgStrLstVec->push_back(sensor_msgsStrLstPtr);
    specificMsgStrLstVec->push_back(geometry_msgsStrLstPtr);
    
    msgCatagoryLwPtr = new QListWidget();
    //msgCatagoryLwPtr->addItems(*msgCatagoryStrLstPtr);
    for(size_t i = 0; i < msgCatagoryStrLstPtr->size(); i++)
    {
        msgCatagoryLwPtr->addItem(new QListWidgetItem(*msgCatagoryStrLstPtr->at(i)) );
    }
    connect(msgCatagoryLwPtr, SIGNAL(itemSelectionChanged()), this, SLOT(handleSwapOptionsSlot()));
    specificMsgLwPtr = new QListWidget();
    //specificMsgLwPtr->addItems(*(specificMsgStrLstVec.at(0)) ); // default: first option
    for(size_t i = 0; i < specificMsgStrLstVec->at(0)->size(); i++)
    {
        specificMsgLwPtr->addItem(new QListWidgetItem(*specificMsgStrLstVec->at(0)->at(i)) );
    }
    
    addedLwPtr = new QListWidget();
    custBtnPtr = new QPushButton("Custom");
    addBtnPtr = new QPushButton("Add");
    removeBtnPtr = new QPushButton("Remove");
    
    btnLayout = new QHBoxLayout();
    btnLayout->addWidget(addBtnPtr);
    btnLayout->addWidget(removeBtnPtr);
    
    customMsgsGuiPtr = new CustomMsgsPage();
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(titlePtr, 0, 0, 1, 3, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(msgCatagoryLwPtr, 1, 0);
    outerLayoutPtr->addWidget(custBtnPtr, 2, 0);
    outerLayoutPtr->addWidget(specificMsgLwPtr, 1, 1);
    outerLayoutPtr->addWidget(addedLwPtr, 1, 2);
    outerLayoutPtr->addLayout(btnLayout, 2, 2);
    
    connect(custBtnPtr, SIGNAL(released() ), this, SLOT(handleCustBtnPtrSlot() ) );
    connect(addBtnPtr, SIGNAL(released() ), this, SLOT(handleAddBtnPtrSlot() ) );
    connect(removeBtnPtr, SIGNAL(released() ), this, SLOT(handleRemoveBtnPtrSlot() ) );
    
    this->setLayout(outerLayoutPtr);
}


void SubPubPage::handleSwapOptionsSlot()
{
    cout << "swapping!" << endl;
    specificMsgLwPtr->clear();
    cout << "\tcleared selection" << endl;
    //specificMsgLwPtr->addItems(*(specificMsgStrLstVec.at(msgCatagoryLwPtr->currentRow()) ) ); // currentIndex() returns qt specific type
    for(size_t i = 0; i < specificMsgStrLstVec->at(msgCatagoryLwPtr->currentRow())->size(); i++)
    {
        specificMsgLwPtr->addItem(new QListWidgetItem(*specificMsgStrLstVec->at(msgCatagoryLwPtr->currentRow())->at(i)) );
    }
    cout << "\tadding list at index:" << msgCatagoryLwPtr->currentRow() << endl;
}


void SubPubPage::handleCustBtnPtrSlot()
{
    customMsgsGuiPtr->show();
    cout << "custom btn activated but not fully implemented at NewFilePage_3::handleCustBtnPtrSlot()" << endl;
}


void SubPubPage::handleAddBtnPtrSlot()
{
    if(msgCatagoryLwPtr->selectedItems().size() == 1 && specificMsgLwPtr->selectedItems().size() == 1)
    {
        QString* tmp = new QString();
        *tmp = msgCatagoryLwPtr->selectedItems().front()->text() + "/" + specificMsgLwPtr->selectedItems().front()->text();
        
        for(size_t i = 0; i < typesEnteredStrLstPtr->size(); i++)
        {
            if(tmp == typesEnteredStrLstPtr->at(i)->text() )
            {
                return; //if match is found, don't re-add it
            }
        }
        
        // Add selection to list
        typesEnteredStrLstPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                     msgCatagoryLwPtr->selectedItems().at(0)->text() +
                                                     "::" +
                                                     specificMsgLwPtr->selectedItems().at(0)->text()) );
        
        // Add selection to GUI
        /*addedLwPtr->addItem(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                     msgCatagoryLwPtr->selectedItems().at(0)->text() +
                                                     "::" +
                                                     specificMsgLwPtr->selectedItems().at(0)->text()) );*/
        addedLwPtr->addItem(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "data_type.png"),
                                                     typesEnteredStrLstPtr->back()->text()) );
        cout << "added to list: " << tmp->toStdString() << endl;
    }
    else
    {
        cerr << "no msg type selected" << endl;
    }
}


void SubPubPage::handleRemoveBtnPtrSlot()
{
    QListWidgetItem* tmp = addedLwPtr->selectedItems().front();
    addedLwPtr->removeItemWidget(tmp);
    
    for(size_t i = 0; i < typesEnteredStrLstPtr->size(); i++)
    {
        if(typesEnteredStrLstPtr->at(i)->text() == tmp->text() )
        {
            typesEnteredStrLstPtr->remove(i);
        }
    }
    
    delete tmp;
}


void SubPubPage::setTitlePtrText(QString* titleText)
{
    titlePtr->setText(*titleText);
}


QString* SubPubPage::getTitlePtrText()
{
    return new QString(titlePtr->text() );
}


void SubPubPage::setMsgCatagoryStrPtr()
{
    if(msgCatagoryLwPtr->selectedItems().size() != 0)
    {
        msgCatagoryStrPtr = new QString(msgCatagoryLwPtr->currentItem()->text() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_3::setMsgCatagoryStrPtr()" << endl;
    }
}


QString* SubPubPage::getMsgCatagoryStrPtr()
{
    return msgCatagoryStrPtr;
}


void SubPubPage::setSpecificMsgStrPtr()
{
    if(specificMsgLwPtr->selectedItems().size() != 0)
    {
        specificMsgStrPtr = new QString(specificMsgLwPtr->currentItem()->text() );
    }
    else
    {
        cerr << "Invalid input at NewFilePage_3::setSpecificMsgStrPtr()" << endl;
    }
}


QString* SubPubPage::getSpecificMsgStrPtr()
{
    return specificMsgStrPtr;
}


void SubPubPage::triggerMutators()
{
    setMsgCatagoryStrPtr();
    setSpecificMsgStrPtr();
}


QString* SubPubPage::toString()
{
    QString* tmp = new QString("Msg Catagory: ");
    tmp->append(getMsgCatagoryStrPtr() );
    tmp->append("Specific Msg: ");
    tmp->append(specificMsgStrPtr);
    
    return tmp;
}


SubPubPage::~SubPubPage()
{
    ;
}