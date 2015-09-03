#include "NewFilePage_2.h"


NewFilePage_2::NewFilePage_2(QWidget* parent) : QWidget(parent)
{
    msgCatagoryStrPtr = new QString("");
    specificMsgStrPtr = new QString("");
    
    msgCatagoryStrLstPtr = new QStringList();
    msgCatagoryStrLstPtr->push_back("std_msgs");
    msgCatagoryStrLstPtr->push_back("sensor_msgs");
    msgCatagoryStrLstPtr->push_back("geometry_msgs");

    typesEnteredStrLstPtr = new QStringList();
    
    QStringList* std_msgsStrLstPtr = new QStringList();
    std_msgsStrLstPtr->push_back("char");
    std_msgsStrLstPtr->push_back("std_string");
    
    QStringList* sensor_msgsStrLstPtr = new QStringList();
    sensor_msgsStrLstPtr->push_back("image");
    sensor_msgsStrLstPtr->push_back("pointcloud");
    sensor_msgsStrLstPtr->push_back("pointcloud2");
    sensor_msgsStrLstPtr->push_back("imu");
    
    QStringList* geometry_msgsStrLstPtr = new QStringList();
    geometry_msgsStrLstPtr->push_back("vector2");
    geometry_msgsStrLstPtr->push_back("vector3");

    specificMsgStrLstVec.push_back(std_msgsStrLstPtr);
    specificMsgStrLstVec.push_back(sensor_msgsStrLstPtr);
    specificMsgStrLstVec.push_back(geometry_msgsStrLstPtr);
    
    msgCatagoryLwPtr = new QListWidget();
    msgCatagoryLwPtr->addItems(*msgCatagoryStrLstPtr);
    connect(msgCatagoryLwPtr, SIGNAL(itemSelectionChanged()), this, SLOT(handleSwapOptionsSlot()));
    specificMsgLwPtr = new QListWidget();
    specificMsgLwPtr->addItems(*(specificMsgStrLstVec.at(0)) ); // default: first option
    
    addedLwPtr = new QListWidget();
    custBtnPtr = new QPushButton("Custom");
    addBtnPtr = new QPushButton("Add");
    removeBtnPtr = new QPushButton("Remove");
    
    btnLayout = new QHBoxLayout();
    btnLayout->addWidget(addBtnPtr);
    btnLayout->addWidget(removeBtnPtr);
    
    customMsgsGuiPtr = new CustomMsgsGui();
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(msgCatagoryLwPtr, 0, 0);
    outerLayoutPtr->addWidget(custBtnPtr, 1, 0);
    outerLayoutPtr->addWidget(specificMsgLwPtr, 0, 1);
    outerLayoutPtr->addWidget(addedLwPtr, 0, 2);
    outerLayoutPtr->addLayout(btnLayout, 1, 2);
    
    connect(custBtnPtr, SIGNAL(released() ), this, SLOT(handleCustBtnPtrSlot() ) );
    connect(addBtnPtr, SIGNAL(released() ), this, SLOT(handleAddBtnPtrSlot() ) );
    connect(removeBtnPtr, SIGNAL(released() ), this, SLOT(handleRemoveBtnPtrSlot() ) );
    
    this->setLayout(outerLayoutPtr);
}


void NewFilePage_2::handleSwapOptionsSlot()
{
    cout << "swapping!" << endl;
    specificMsgLwPtr->clear();
    cout << "\tcleared selection" << endl;
    specificMsgLwPtr->addItems(*(specificMsgStrLstVec.at(msgCatagoryLwPtr->currentRow()) ) ); // currentIndex() returns qt specific type
    cout << "\tadding list at index:" << msgCatagoryLwPtr->currentRow() << endl;
}


void NewFilePage_2::handleCustBtnPtrSlot()
{
    customMsgsGuiPtr->show();
    cout << "custom btn activated but not fully implemented at NewFilePage_2::handleCustBtnPtrSlot()" << endl;
}


void NewFilePage_2::handleAddBtnPtrSlot()
{
    if(msgCatagoryLwPtr->selectedItems().size() == 1 && specificMsgLwPtr->selectedItems().size() == 1)
    {
        QString* tmp = new QString();
        *tmp = msgCatagoryLwPtr->selectedItems().front()->text() + "/" + specificMsgLwPtr->selectedItems().front()->text();
        
        for(size_t i = 0; i < typesEnteredStrLstPtr->size(); i++)
        {
            if(tmp == typesEnteredStrLstPtr->at(i) )
            {
                return; //if match is found, don't re-add it
            }
        }
        
        typesEnteredStrLstPtr->push_back(*tmp);
        addedLwPtr->addItem(*tmp);
        cout << "added to list: " << tmp->toStdString() << endl;
    }
    else
    {
        cerr << "no msg type selected" << endl;
    }
}


void NewFilePage_2::handleRemoveBtnPtrSlot()
{
    QListWidgetItem* tmp = addedLwPtr->selectedItems().front();
    addedLwPtr->removeItemWidget(tmp);
    
    for(size_t i = 0; i < typesEnteredStrLstPtr->size(); i++)
    {
        if(typesEnteredStrLstPtr->at(i) == tmp->text() )
        {
            typesEnteredStrLstPtr->removeAt(i);
        }
    }
    
    delete tmp;
}


void NewFilePage_2::setMsgCatagoryStrPtr()
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


QString* NewFilePage_2::getMsgCatagoryStrPtr()
{
    return msgCatagoryStrPtr;
}


void NewFilePage_2::setSpecificMsgStrPtr()
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


QString* NewFilePage_2::getSpecificMsgStrPtr()
{
    return specificMsgStrPtr;
}


void NewFilePage_2::triggerMutators()
{
    setMsgCatagoryStrPtr();
    setSpecificMsgStrPtr();
}


QString* NewFilePage_2::toString()
{
    QString* tmp = new QString("Msg Catagory: ");
    tmp->append(getMsgCatagoryStrPtr() );
    tmp->append("Specific Msg: ");
    tmp->append(specificMsgStrPtr);
    
    return tmp;
}


NewFilePage_2::~NewFilePage_2()
{
    ;
}