#include "WestTab.h"


WestTab::WestTab(TabType tabType, QWidget* parent) : QWidget(parent)
{
    newFileLstWidItemPtrVecPtr = new QVector<QListWidgetItem*>();
    oldFileLstWidItemPtrVecPtr = new QVector<QListWidgetItem*>();
    initTab(tabType);

    newFileLstWidPtr = new QListWidget();
    newFileLstWidPtr->setSelectionMode(QAbstractItemView::SingleSelection);
    for(size_t i = 0; i < newFileLstWidItemPtrVecPtr->size(); i++)
    {
        newFileLstWidPtr->addItem(newFileLstWidItemPtrVecPtr->at(i) );
    }
    
    oldFileLstWidPtr = new QListWidget();
    oldFileLstWidPtr->setSelectionMode(QAbstractItemView::SingleSelection);
    for(size_t i = 0; i < oldFileLstWidItemPtrVecPtr->size(); i++)
    {
        oldFileLstWidPtr->addItem(oldFileLstWidItemPtrVecPtr->at(i) );
    }
 
    
    connect(newFileLstWidPtr, SIGNAL(itemClicked(QListWidgetItem* )), this, SLOT(handleNewFileSlot(QListWidgetItem* )));
    connect(oldFileLstWidPtr, SIGNAL(itemClicked(QListWidgetItem* )), this, SLOT(handleOldFileSlot(QListWidgetItem* )));
    
    
    outerLayout = new QVBoxLayout();
    outerLayout->addWidget(newFileLstWidPtr);
    outerLayout->addWidget(oldFileLstWidPtr);
    

    this->setLayout(outerLayout);
}


void WestTab::handleNewFileSlot(QListWidgetItem* itemSelected)
{
    cout << "@ Configure::WestTab::handleNewFileSlot()" << endl;
    
    /*
     * The loop should only run once, since we are using SingleSelection mode.
     */
    QModelIndexList indexLst = newFileLstWidPtr->selectionModel()->selectedIndexes();
    for(size_t i = 0; i < indexLst.size(); i++)
    {
        cout << "\tindex: " << indexLst.at(i).row() << endl;
        QModelIndex index = indexLst.at(i);
        oldFileLstWidPtr->item(indexLst.at(i).row() )->setSelected(true);
    }
}


void WestTab::handleOldFileSlot(QListWidgetItem* itemSelected)
{
    cout << "@ Configure::WestTab::handleOldFileSlot()" << endl;
    
    /*
     * The loop should only run once, since we are using SingleSelection mode.
     */
    QModelIndexList indexLst = oldFileLstWidPtr->selectionModel()->selectedIndexes();
    for(size_t i = 0; i < indexLst.size(); i++)
    {
        cout << "\tindex: " << indexLst.at(i).row() << endl;
        QModelIndex index = indexLst.at(i);
        newFileLstWidPtr->item(indexLst.at(i).row() )->setSelected(true);
    }
}


void WestTab::initTab(TabType tabType)
{
    switch(tabType)
    {
        case MAKE:
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "rosmake.png"), "CMakeLists.txt") );
            newFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/CMakeLists.txt");
            
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hammer_vert.png"), "Makefile") );
            oldFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/Makefile");
            break;
        case BUILD:
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "rosgear.png"), "package.xml") );
            newFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/package.xml");
            
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "gear.png"), "manifest.xml") );
            oldFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/manifest.xml");
            break;
        case HEADER:
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hh.png"), "ObjSeg.hpp") );
            newFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/ObjSeg.hpp");
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hh.png"), "Border.hpp") );
            newFileLstWidItemPtrVecPtr->at(1)->setToolTip("/home/james/catkin_ws/src/night_hawk/Border.hpp");
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hh.png"), "MsgParser.hpp") );
            newFileLstWidItemPtrVecPtr->at(2)->setToolTip("/home/james/catkin_ws/src/laser_detection/msgParser.hpp");
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hh.png"), "MyLex.hpp") );
            newFileLstWidItemPtrVecPtr->at(3)->setToolTip("/home/james/catkin_ws/src/network_config/MyLex.hpp");
            
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hh.png"), "ObjSeg.hpp") );
            oldFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/ObjSeg.hpp");
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hh.png"), "Border.hpp") );
            oldFileLstWidItemPtrVecPtr->at(1)->setToolTip("/home/james/catkin_ws/src/night_hawk/Border.hpp");
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hh.png"), "MsgParser.hpp") );
            oldFileLstWidItemPtrVecPtr->at(2)->setToolTip("/home/james/catkin_ws/src/laser_detection/MsgParser.hpp");
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "hh.png"), "MyLex.hpp") );
            oldFileLstWidItemPtrVecPtr->at(3)->setToolTip("/home/james/catkin_ws/src/network_config/MyLex.hpp");
            break;
        case SOURCE:
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cc.png"), "ObjSeg.cpp") );
            newFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/ObjSeg.cpp");
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cc.png"), "Border.cpp") );
            newFileLstWidItemPtrVecPtr->at(1)->setToolTip("/home/james/catkin_ws/src/night_hawk/Border.cpp");
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cc.png"), "MsgParser.cpp") );
            newFileLstWidItemPtrVecPtr->at(2)->setToolTip("/home/james/catkin_ws/src/laser_detection/msgParser.cpp");
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cc.png"), "MyLex.cpp") );
            newFileLstWidItemPtrVecPtr->at(3)->setToolTip("/home/james/catkin_ws/src/network_config/MyLex.cpp");
            
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cc.png"), "ObjSeg.cpp") );
            oldFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/ObjSeg.cpp");
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cc.png"), "Border.cpp") );
            oldFileLstWidItemPtrVecPtr->at(1)->setToolTip("/home/james/catkin_ws/src/night_hawk/Border.cpp");
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cc.png"), "MsgParser.cpp") );
            oldFileLstWidItemPtrVecPtr->at(2)->setToolTip("/home/james/catkin_ws/src/laser_detection/MsgParser.cpp");
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "cc.png"), "MyLex.cpp") );
            oldFileLstWidItemPtrVecPtr->at(3)->setToolTip("/home/james/catkin_ws/src/network_config/MyLex.cpp");
            break;
        case PYTHON:
            ;
            break;
        case MISC:
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "file.png"), "README.md") );
            newFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/README.md");
            newFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "file.png"), "Log.txt") );
            newFileLstWidItemPtrVecPtr->at(1)->setToolTip("/home/james/catkin_ws/src/test_node/Log.txt");
            
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "file.png"), "README.md") );
            oldFileLstWidItemPtrVecPtr->at(0)->setToolTip("/home/james/catkin_ws/src/test_node/README.md");
            oldFileLstWidItemPtrVecPtr->push_back(new QListWidgetItem(QIcon(RosEnv::imagesInstallLoc + "file.png"), "Log.txt") );
            oldFileLstWidItemPtrVecPtr->at(1)->setToolTip("/home/james/catkin_ws/src/test_node/Log.txt");
            break;
        default:
            cerr << "Invalid case @ Configure::WestTab::initTab(...)" << endl;
    }
}


void WestTab::setOldFileLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* cmakeLstWidItemPtrVecPtr)
{
    this->oldFileLstWidItemPtrVecPtr = cmakeLstWidItemPtrVecPtr;
}


QVector<QListWidgetItem*>* WestTab::getOldFileLstWidItemPtrVecPtr()
{
    return oldFileLstWidItemPtrVecPtr;
}


void WestTab::setNewFileLstWidItemPtrVecPtr(QVector<QListWidgetItem*>* packageLstWidItemPtrVecPtr)
{
    this->newFileLstWidItemPtrVecPtr = packageLstWidItemPtrVecPtr;
}


QVector<QListWidgetItem*>* WestTab::getNewFileLstWidItemPtrVecPtr()
{
    return newFileLstWidItemPtrVecPtr;
}


void WestTab::setOldFileLstWidPtr(QListWidget* cmakeLstWidPtr)
{
    this->oldFileLstWidPtr = cmakeLstWidPtr;
}


QListWidget* WestTab::getOldFileLstWidPtr()
{
    return oldFileLstWidPtr;
}


void WestTab::setNewFileLstWidPtr(QListWidget* packageLstWidPtr)
{
    this->newFileLstWidPtr = packageLstWidPtr;
}


QListWidget* WestTab::getNewFileLstWidPtr()
{
    return newFileLstWidPtr;
}


void WestTab::setOuterLayout(QVBoxLayout* outerLayout)
{
    this->outerLayout = outerLayout;
}


QVBoxLayout* WestTab::getQVBoxLayout()
{
    return outerLayout;
}


QString* WestTab::toString()
{
    return new QString("***METHOD STUB***");
}


WestTab::~WestTab()
{
    ;
}