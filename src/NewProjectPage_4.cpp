#include "NewProjectPage_4.h"


NewProjectPage_4::NewProjectPage_4(QWidget* parent) : QWidget(parent)
{
    dependsEnteredStrList = new QStringList();
    dependsLePtr = new QLineEdit();
    addToListBtnPtr = new QPushButton("->", this);
    addToListBtnPtr->setToolTip("Add ros depend");
    dependsEnteredTypeLw = new QListWidget();
    rmFromListBtnPtr = new QPushButton();
    rmFromListBtnPtr->setIcon(QIcon("/home/james/NetBeansProjects/Hazel/images/RecycleBin.png"));
    rmFromListBtnPtr->setIconSize(QSize(50, 50));
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(dependsLePtr, 0, 0);
    outerLayout->addWidget(addToListBtnPtr, 0, 1);
    outerLayout->addWidget(dependsEnteredTypeLw, 0, 2);
    outerLayout->addWidget(rmFromListBtnPtr, 1, 2);
    
    connect(addToListBtnPtr, SIGNAL(released() ), this, SLOT(handleAddToListBtnPtrSlot() ) );
    connect(rmFromListBtnPtr, SIGNAL(released() ), this, SLOT(handleRmFromListBtnPtrSlot() ) );
    
    this->setLayout(outerLayout);
}


void NewProjectPage_4::handleAddToListBtnPtrSlot()
{
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


void NewProjectPage_4::handleRmFromListBtnPtrSlot()
{
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


QString* NewProjectPage_4::toString()
{
    QString* tmp = new QString("ROS Depends:");
    
    for(size_t i = 0; i < dependsEnteredStrList->size(); i++)
    {
        tmp->append("\n\t");
        tmp->append(dependsEnteredStrList->at(i) );
    }
    
    return tmp;
}


NewProjectPage_4::~NewProjectPage_4()
{
    ;
}