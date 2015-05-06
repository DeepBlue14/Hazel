#include "FileTreeGui.h"


FileTreeGui::FileTreeGui(QWidget* parent) : QWidget(parent)
{
    tree = new QTreeView();
    splitter = new QSplitter();
    splitter->addWidget(tree);
    
    
    
  QStandardItemModel model( 5, 2 );
  for( int r=0; r<5; r++ ) 
    for( int c=0; c<2; c++) 
    {
      QStandardItem *item = new QStandardItem( QString("Row:%0, Column:%1").arg(r).arg(c) );
      
      if( c == 0 )
        for( int i=0; i<3; i++ )
        {
          QStandardItem *child = new QStandardItem( QString("Item %0").arg(i) );
          child->setEditable( false );
          item->appendRow( child );
        }
      
      model.setItem(r, c, item);
    }

  model.setHorizontalHeaderItem( 0, new QStandardItem( "Foo" ) );
  model.setHorizontalHeaderItem( 1, new QStandardItem( "Bar-Baz" ) );

  tree->setModel( &model );
}


FileTreeGui::~FileTreeGui()
{
    ;
}