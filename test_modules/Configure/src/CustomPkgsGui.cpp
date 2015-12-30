#include "CustomPkgsGui.h"


CustomPkgsGui::CustomPkgsGui(QWidget* parent) : QWidget(parent)
{
    dependsEnteredStrList = new QStringList();
    dependsLePtr = new QLineEdit();
    addToListBtnPtr = new QPushButton("->", this);
    addToListBtnPtr->setToolTip("Add ros depend");
    dependsEnteredTypeLw = new QListWidget();
    rmFromListBtnPtr = new QPushButton();
    rmFromListBtnPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "RecycleBin.png"));
    rmFromListBtnPtr->setIconSize(QSize(50, 50));
    
    okBtnPtr = new QPushButton("OK");
    cancelBtnPtr = new QPushButton("Cancel");
    btnLayout = new QHBoxLayout();
    btnLayout->addWidget(okBtnPtr);
    btnLayout->addWidget(cancelBtnPtr);
    
    connect(okBtnPtr, SIGNAL(released() ), this, SLOT(handleOkBtnSlot() ) );
    connect(cancelBtnPtr, SIGNAL(released() ), this, SLOT(handleCancelBtnSlot() ) );
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(dependsLePtr, 0, 0);
    outerLayout->addWidget(addToListBtnPtr, 0, 1);
    outerLayout->addWidget(dependsEnteredTypeLw, 0, 2);
    outerLayout->addWidget(rmFromListBtnPtr, 1, 2);
    outerLayout->addLayout(btnLayout, 2, 2, Qt::AlignRight);
    
    connect(addToListBtnPtr, SIGNAL(released() ), this, SLOT(handleAddToListBtnPtrSlot() ) );
    connect(rmFromListBtnPtr, SIGNAL(released() ), this, SLOT(handleRmFromListBtnPtrSlot() ) );
    
    this->setLayout(outerLayout);
}


void CustomPkgsGui::handleAddToListBtnPtrSlot()
{
    cout << "@ Configure::CustomPkgsGui::handleAddToListBtnPtrSlot()" << endl;
    
    //dependsLePtr->selectedText()
    if(dependsLePtr->text() == "")
    {
        return;
    }
    
    QString* tmp = new QString();
    *tmp = dependsLePtr->text();
    dependsLePtr->setText("");
    *tmp = tmp->simplified();
    tmp->replace(" ", "");
    
    for(size_t i = 0; i < dependsEnteredStrList->length(); i++)
    {
        if(tmp == dependsEnteredStrList->at(i) )
        {
            return; //if match is found, don't re-add it
        }
    }

    dependsEnteredStrList->push_back(*tmp);
    dependsEnteredTypeLw->addItem(*tmp);
}


void CustomPkgsGui::handleRmFromListBtnPtrSlot()
{
    cout << "@ Configure::CustomPkgsGui::handleRmFromListBtnPtrSlot()" << endl;
    
    //cout << dependsEnteredTypeLw->selectedItems().at(0)->text().toStdString() << endl;
    QListWidgetItem* tmp = dependsEnteredTypeLw->selectedItems().at(0);
    dependsEnteredTypeLw->removeItemWidget(tmp);
    
    for(size_t i = 0; i < dependsEnteredStrList->length(); i++)
    {
        if(dependsEnteredStrList->at(i) == tmp->text() )
        {
            dependsEnteredStrList->removeAt(i);
        }
    }
    
    delete tmp;
}


void CustomPkgsGui::handleOkBtnSlot()
{
    cout << "@ Configure::CustomPkgsGui::handleOkBtnSlot()" << endl;
    cout << cct::yellow("TODO!!!implement me (above line is addr)!!!") << endl;
    
    for(size_t i = 0; i < dependsEnteredStrList->size(); i++)
    {
        cout << "\t" << dependsEnteredStrList->at(i).toStdString() << endl;
    }
    
    
    
    if(this->close() )
    {
        emit updateListSig();
    }
}
        

void CustomPkgsGui::handleCancelBtnSlot()
{
    cout << "@ Configure::CustomPkgsGui::handleOkBtnSlot()" << endl;
    cout << cct::yellow("TODO!!!implement me (above line is addr)!!!") << endl;
    
    
}


QStringList* CustomPkgsGui::getDependsEnteredStrList()
{
    return dependsEnteredStrList;
}


QString* CustomPkgsGui::toString()
{
    QString* tmp = new QString("ROS Depends:");
    
    for(size_t i = 0; i < dependsEnteredStrList->size(); i++)
    {
        tmp->append("\n\t");
        tmp->append(dependsEnteredStrList->at(i) );
    }
    
    return tmp;
}


CustomPkgsGui::~CustomPkgsGui()
{
    ;
}