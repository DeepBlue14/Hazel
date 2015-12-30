#include "ConvOptPage.h"


ConvOptPage::ConvOptPage(QWidget* parent) : QWidget(parent)
{
    rosPkgStrLstPtr = new QStringList();
    initRosPkgStrLstPtr();
            
    rosPkgLwPtr = new QListWidget();
    QListWidgetItem* item;
    for(size_t i = 0; i < rosPkgStrLstPtr->size(); i++)
    {
        item = new QListWidgetItem(rosPkgStrLstPtr->at(i), rosPkgLwPtr);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
        item->setCheckState(Qt::Unchecked);
    }

    customPkgsGuiPtr = new CustomPkgsGui();
    advOptionsGuiPtr = new AdvOptionsGui();
    
    customPkgsPbStr = new QPushButton("Custom");
    customPkgsPbStr->setToolTip("Custom pkgs");
    advancedOptionsPbStr = new QPushButton("Advanced");
    advancedOptionsPbStr->setToolTip("Advanced options");
    
    connect(customPkgsPbStr, SIGNAL(released()), this, SLOT(handleCustomPkgsPbStr()));
    connect(advancedOptionsPbStr, SIGNAL(released()), this, SLOT(handleAdvancedOptionsPbStr()));
    connect(customPkgsGuiPtr, SIGNAL(updateListSig()), this, SLOT(handleAddPkgTypeSlot()));
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(rosPkgLwPtr, 0, 0);
    outerLayout->addWidget(customPkgsPbStr, 1, 0, Qt::AlignRight);
    outerLayout->addWidget(advancedOptionsPbStr, 2, 0, Qt::AlignRight);
    
    this->setLayout(outerLayout);
}


void ConvOptPage::handleCustomPkgsPbStr()
{
    customPkgsGuiPtr->show();
}


void ConvOptPage::handleAdvancedOptionsPbStr()
{
    advOptionsGuiPtr->show();
}


void ConvOptPage::initRosPkgStrLstPtr()
{
    rosPkgStrLstPtr->push_back("actionlib_msgs");
    rosPkgStrLstPtr->push_back("diagnostic_msgs");
    rosPkgStrLstPtr->push_back("geometry_msgs");
    rosPkgStrLstPtr->push_back("nav_msgs");
    rosPkgStrLstPtr->push_back("sensor_msgs");
    rosPkgStrLstPtr->push_back("shape_msgs");
    rosPkgStrLstPtr->push_back("std_msgs");
    rosPkgStrLstPtr->push_back("stereo_msgs");
    rosPkgStrLstPtr->push_back("trajectory_msgs");
    rosPkgStrLstPtr->push_back("visualization_msgs");
}


void ConvOptPage::handleAddPkgTypeSlot()
{
    cout << "SIGNAL triggered @ Configure::ConvOptPage::handleAddPkgTypeSlot()" << endl;
    QListWidgetItem* item;
    for(size_t i = 0; i < customPkgsGuiPtr->getDependsEnteredStrList()->size(); i++)
    {
        // Don't add duplicates
        if(!rosPkgStrLstPtr->contains(customPkgsGuiPtr->getDependsEnteredStrList()->at(i), Qt::CaseSensitive) )
        {
            rosPkgStrLstPtr->push_back(customPkgsGuiPtr->getDependsEnteredStrList()->at(i) );
            item = new QListWidgetItem(rosPkgStrLstPtr->back(), rosPkgLwPtr);
            item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
            item->setCheckState(Qt::Checked);
        }
    }
    
    // This is debug info
    /*cout << "list: " << endl;
    for(size_t i = 0; i < rosPkgStrLstPtr->size(); i++)
    {
        cout << "\t- " << rosPkgStrLstPtr->at(i).toStdString() << endl;
    }*/
}


QString* ConvOptPage::toString()
{
    QString* str = new QString("*_msgs list:");
    
    for(size_t i = 0; i < rosPkgStrLstPtr->size(); i++)
    {
        str->append("\n\t-" + rosPkgStrLstPtr->at(i) );
    }
    
    return str;
}


ConvOptPage::~ConvOptPage()
{
    ;
}