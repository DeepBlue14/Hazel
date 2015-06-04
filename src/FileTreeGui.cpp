#include "FileTreeGui.h"


QTreeWidget* FileTreeGui::trueTree;
QSplitter* FileTreeGui::splitter;
   
QString* FileTreeGui::projectRootAbsPathStrPtr;


FileTreeGui::FileTreeGui(QWidget* parent) : QWidget(parent)
{
    projectRootAbsPathStrPtr = new QString("");
    
    splitter = new QSplitter();
    trueTree = new QTreeWidget(splitter);
    //list = new QListView(splitter);
    
    //--------------------------
    QTreeWidgetItem* headerItem = new QTreeWidgetItem();
    headerItem->setText(0, QString("File Name") );
    trueTree->setHeaderItem(headerItem);
    
    QDir* rootDir = new QDir(*getProjectRootAbsPathStrPtr() );
    QFileInfoList filesList = rootDir->entryInfoList();
    
    foreach(QFileInfo fileInfo, filesList)
    {
        if(fileInfo.fileName() != "." && fileInfo.fileName() != "..")
        {
            QTreeWidgetItem* item = new QTreeWidgetItem();
            item->setText(0, fileInfo.fileName());
        
            if(fileInfo.isFile())
            {
                item->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/file.png")));
            }
        
            if(fileInfo.isDir())
            {
                item->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/projects.jpg")));
                addChildren(item, fileInfo.filePath());
            }
        
            trueTree->addTopLevelItem(item);
        }
    }

    trueTree->setContextMenuPolicy(Qt::CustomContextMenu);
    
    connect(trueTree, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(handleRightClickSlot(const QPoint&)));
    connect(trueTree, SIGNAL(itemClicked(QTreeWidgetItem*, int)), this, SLOT(handleShowDirectorySlot(QTreeWidgetItem*, int)));

    splitter->setOrientation(Qt::Vertical);
  
    outerLayout = new QGridLayout();
    outerLayout->addWidget(splitter, 0, 0);
  
    this->setLayout(outerLayout);
}


void FileTreeGui::addChildren(QTreeWidgetItem* item, QString filePath)
{
    QDir* rootDir = new QDir(filePath);
    QFileInfoList filesList = rootDir->entryInfoList();
    
    foreach(QFileInfo fileInfo, filesList)
    {
        if(fileInfo.fileName() != "." && fileInfo.fileName() != "..")
        {
            QTreeWidgetItem* child = new QTreeWidgetItem();
            child->setText(0, fileInfo.fileName());
        
            if(fileInfo.isFile())
            {
                child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/file.png")));
            }
        
            if(fileInfo.isDir())
            {
                child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/projects.jpg")));
            }
        
            item->addChild(child);
        }
    }
}


void FileTreeGui::handleShowDirectorySlot(QTreeWidgetItem* item, int column)
{
    //cout << "Selected: " << item->text(0).toStdString() << endl;
    QDir* rootDir = new QDir(item->text(0));
    QFileInfoList filesList = rootDir->entryInfoList();
    
    foreach(QFileInfo fileInfo, filesList)
    {
        if(fileInfo.fileName() != "." && fileInfo.fileName() != "..")
        {
            QTreeWidgetItem* child = new QTreeWidgetItem();
            child->setText(0, fileInfo.fileName());
        
            if(fileInfo.isFile())
            {
                child->setIcon(0, *(new QIcon("/home/james/NetBeansProjects/ride/images/projects.jpg")));
            }
        
            item->addChild(child);
        }
    }
    
    
}


void FileTreeGui::handleRightClickSlot(const QPoint& pos)
{
    cout << "right clicked !!!" << endl;
    
    QPoint globalPos = trueTree->mapToGlobal(pos);
    
    QMenu myMenu;
    myMenu.addAction("Open");
    myMenu.addAction("Delete");
    myMenu.addAction("Rename...");
    myMenu.addAction("Git");
    myMenu.addAction("Properties");
    
    QAction* selectedItem = myMenu.exec(globalPos);
    if(selectedItem)
    {
        cout << selectedItem->text().toStdString() << endl;
        //getMasterTabWidgetPtr()->addTab()
    }
    else
    {
        cout << selectedItem->text().toStdString() << endl;
    }
    
    //change treeview to treewidget, and then use code from
    //https://github.com/DeepBlue14/Software_Engineer_91.411_2/blob/master/2_DataAggregator/Code/src/DevicesGui.cpp

}


void FileTreeGui::setProjectRootAbsPathStrPtr(QString* projectRootAbsPathStrPtr)
{
    FileTreeGui::projectRootAbsPathStrPtr = projectRootAbsPathStrPtr;
}


QString* FileTreeGui::getProjectRootAbsPathStrPtr()
{
    return projectRootAbsPathStrPtr;
}


void FileTreeGui::refresh()
{
    ;
    //tree->setModel(model);
    //tree->setRootIndex(model->index(*getProjectRootAbsPathStrPtr() ));
    //tree->setColumnHidden(1, true);
    //tree->setColumnHidden(2, true);
    //tree->setColumnHidden(3, true);
    
    //tree->hideColumn(1);
    //tree->hideColumn(2);
    //tree->hideColumn(3);
    //tree->header()->hide();
    
    
    //list->setModel(model);
    //list->setRootIndex(model->index(*getProjectRootAbsPathStrPtr() ));
    splitter->setOrientation(Qt::Vertical);
}


void FileTreeGui::setMasterTabWidgetPtr(QTabWidget* masterTabWidgetPtr)
{
    this->masterTabWidgetPtr = masterTabWidgetPtr;
}


QTabWidget* FileTreeGui::getMasterTabWidgetPtr()
{
    return masterTabWidgetPtr;
}


FileTreeGui::~FileTreeGui()
{
    ;
}