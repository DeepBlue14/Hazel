#include "FileTreeGui.h"


FileTreeGui::FileTreeGui(QWidget* parent) : QWidget(parent)
{
    splitter = new QSplitter();
    
    QFileSystemModel* model = new QFileSystemModel();
    model->setRootPath(QDir::currentPath());
    
    tree = new QTreeView(splitter);
    tree->setModel(model);
    tree->setRootIndex(model->index(QDir::currentPath()));
    tree->setColumnHidden(1, true);
    tree->setColumnHidden(2, true);
    tree->setColumnHidden(3, true);
    
    tree->hideColumn(1);
    tree->hideColumn(2);
    tree->hideColumn(3);
    tree->header()->hide();
    
    list = new QListView(splitter);
    list->setModel(model);
    list->setRootIndex(model->index(QDir::currentPath()));
    splitter->setOrientation(Qt::Vertical);
  
  outerLayout = new QGridLayout();
  outerLayout->addWidget(splitter, 0, 0);
  
  this->setLayout(outerLayout);
}


FileTreeGui::~FileTreeGui()
{
    ;
}