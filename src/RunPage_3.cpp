#include "RunPage_3.h"


RunPage_3::RunPage_3(QWidget* parent) : QWidget(parent)
{
    cmdsEnteredStrList = new QStringList();
    cmdsLePtr = new QLineEdit();
    addToListBtnPtr = new QPushButton("->", this);
    addToListBtnPtr->setToolTip("Add rosrun command");
    cmdsEnteredTypeLw = new QListWidget();
    rmFromListBtnPtr = new QPushButton();
    rmFromListBtnPtr->setIcon(QIcon("/home/james/NetBeansProjects/Hazel/images/RecycleBin.png"));
    rmFromListBtnPtr->setIconSize(QSize(50, 50));
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(cmdsLePtr, 0, 0);
    outerLayout->addWidget(addToListBtnPtr, 0, 1);
    outerLayout->addWidget(cmdsEnteredTypeLw, 0, 2);
    outerLayout->addWidget(rmFromListBtnPtr, 1, 2);
    
    connect(addToListBtnPtr, SIGNAL(released() ), this, SLOT(handleAddToListBtnPtrSlot() ) );
    connect(rmFromListBtnPtr, SIGNAL(released() ), this, SLOT(handleRmFromListBtnPtrSlot() ) );
    
    this->setLayout(outerLayout);
}


void RunPage_3::handleAddToListBtnPtrSlot()
{
    //dependsLePtr->selectedText()
    if(cmdsLePtr->text() == "")
    {
        return;
    }
    
    QString* tmp = new QString();
    *tmp = cmdsLePtr->text();
    cmdsLePtr->setText("");
    *tmp = tmp->simplified();
    tmp->replace(" ", "");
    
    for(size_t i = 0; i < cmdsEnteredStrList->length(); i++)
    {
        if(tmp == cmdsEnteredStrList->at(i) )
        {
            return; //if match is found, don't re-add it
        }
    }

    cmdsEnteredStrList->push_back(*tmp);
    cmdsEnteredTypeLw->addItem(*tmp);
}


void RunPage_3::handleRmFromListBtnPtrSlot()
{
    //cout << dependsEnteredTypeLw->selectedItems().at(0)->text().toStdString() << endl;
    QListWidgetItem* tmp = cmdsEnteredTypeLw->selectedItems().at(0);
    cmdsEnteredTypeLw->removeItemWidget(tmp);
    
    for(size_t i = 0; i < cmdsEnteredStrList->length(); i++)
    {
        if(cmdsEnteredStrList->at(i) == tmp->text() )
        {
            cmdsEnteredStrList->removeAt(i);
        }
    }
    
    delete tmp;
}


QStringList* RunPage_3::getCmdsEnteredStrList()
{
    return cmdsEnteredStrList;
}


QString* RunPage_3::toString()
{
    QString* tmp = new QString("ROS Depends:");
    
    for(size_t i = 0; i < cmdsEnteredStrList->size(); i++)
    {
        tmp->append("\n\t");
        tmp->append(cmdsEnteredStrList->at(i) );
    }
    
    return tmp;
}


RunPage_3::~RunPage_3()
{
    ;
}