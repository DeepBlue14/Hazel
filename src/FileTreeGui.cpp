#include <qt5/QtWidgets/qmenu.h>

#include "FileTreeGui.h"

QTreeView* FileTreeGui::tree;
QListView* FileTreeGui::list;
QSplitter* FileTreeGui::splitter;
QFileSystemModel* FileTreeGui::model;
   
QString* FileTreeGui::projectRootAbsPathStrPtr;


FileTreeGui::FileTreeGui(QWidget* parent) : QWidget(parent)
{
    projectRootAbsPathStrPtr = new QString("");
    
    splitter = new QSplitter();
    model = new QFileSystemModel();
    tree = new QTreeView(splitter);
    list = new QListView(splitter);
    
    model->setRootPath(*getProjectRootAbsPathStrPtr()/*QDir::currentPath()*/);
    
    
    //tree->setModel(model);
    //tree->setRootIndex(model->index(*getProjectRootAbsPathStrPtr() ));
    tree->setColumnHidden(1, true);
    tree->setColumnHidden(2, true);
    tree->setColumnHidden(3, true);
    
    tree->hideColumn(1);
    tree->hideColumn(2);
    tree->hideColumn(3);
    tree->header()->hide();
    
    tree->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(tree, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(handleRightClickSlot(const QPoint&)));
    
    //list->setModel(model);
    //list->setRootIndex(model->index(*getProjectRootAbsPathStrPtr() ));
    splitter->setOrientation(Qt::Vertical);
  
    outerLayout = new QGridLayout();
    outerLayout->addWidget(splitter, 0, 0);
  
    this->setLayout(outerLayout);
}


void FileTreeGui::handleRightClickSlot(const QPoint& pos)
{
    cout << "right clicked !!!" << endl;
    QPoint globalPos = tree->mapToGlobal(pos);
    
    QMenu myMenu;
    myMenu.addAction("Open");
    myMenu.addAction("Delete");
    
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
    tree->setModel(model);
    tree->setRootIndex(model->index(*getProjectRootAbsPathStrPtr() ));
    tree->setColumnHidden(1, true);
    tree->setColumnHidden(2, true);
    tree->setColumnHidden(3, true);
    
    tree->hideColumn(1);
    tree->hideColumn(2);
    tree->hideColumn(3);
    tree->header()->hide();
    
    
    list->setModel(model);
    list->setRootIndex(model->index(*getProjectRootAbsPathStrPtr() ));
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