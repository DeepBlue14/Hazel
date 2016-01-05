#include "NewProjectPage_4.h"


NewProjectPage_4::NewProjectPage_4(QWidget* parent) : QWidget(parent)
{
    titlePtr = new QLabel("<b>Select ROS dependencies</b>");
    
    dependsEnteredStrList = new QStringList();
    dependsLePtr = new QLineEdit();
    addToListBtnPtr = new QPushButton("->", this);
    addToListBtnPtr->setToolTip("Add ros depend");
    dependsEnteredTypeLw = new QListWidget();
    rmFromListBtnPtr = new QPushButton();
    rmFromListBtnPtr->setIcon(QIcon(RosEnv::imagesInstallLoc + "RecycleBin.png"));
    rmFromListBtnPtr->setIconSize(QSize(50, 50));
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(titlePtr, 0, 0, Qt::AlignHCenter);
    outerLayout->addWidget(dependsLePtr, 1, 0);
    outerLayout->addWidget(addToListBtnPtr, 1, 1);
    outerLayout->addWidget(dependsEnteredTypeLw, 1, 2);
    outerLayout->addWidget(rmFromListBtnPtr, 2, 2);
    
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


QStringList* NewProjectPage_4::getDependsEnteredStrList()
{
    return dependsEnteredStrList;
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