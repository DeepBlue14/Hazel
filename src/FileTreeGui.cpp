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
    
    
    //list->setModel(model);
    //list->setRootIndex(model->index(*getProjectRootAbsPathStrPtr() ));
    splitter->setOrientation(Qt::Vertical);
  
    outerLayout = new QGridLayout();
    outerLayout->addWidget(splitter, 0, 0);
  
    this->setLayout(outerLayout);
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


FileTreeGui::~FileTreeGui()
{
    ;
}