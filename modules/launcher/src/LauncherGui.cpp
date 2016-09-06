//drag&drop ref: http://doc.qt.io/qt-4.8/qabstractitemview.html

#include "LauncherGui.h"


LauncherGui::LauncherGui(QWidget* parent) : QWidget(parent)
{
    numOfNodes = 0;
    tableWidgetPtr = new QTableWidget();
    
    tableWidgetPtr->setDragEnabled(true);
    tableWidgetPtr->setDragDropMode(QAbstractItemView::InternalMove);
    tableWidgetPtr->setSelectionMode(QAbstractItemView::SingleSelection);
    tableWidgetPtr->setSelectionBehavior(QAbstractItemView::SelectRows);
    
    runablesTblWidItmPtrVecPtr = new QVector<QTableWidgetItem*>();

    cout << "adding table widgets" << endl;
    tableWidgetPtr->setRowCount(5);
    tableWidgetPtr->setColumnCount(2);
    tableWidgetPtr->setHorizontalHeaderItem(0, new QTableWidgetItem("Execution Command") );
    tableWidgetPtr->setHorizontalHeaderItem(1, new QTableWidgetItem("Delay") );

    QTableWidgetItem* item = new QTableWidgetItem("rosrun test_node test_node");
    item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
    item->setCheckState(Qt::Checked);
    
    tableWidgetPtr->setItem(0, 0, item);
    
    /*
    QSpinBox* spinBoxPtr = new QSpinBox();
    spinBoxPtr->setMaximum(numOfNodes);
    tableWidgetPtr->setCellWidget(0, 1, spinBoxPtr);
    */
    
    westTabWidgetPtr = new QTabWidget();
    
#if(QT_VERSION < 0x050000)
    tableWidgetPtr->horizontalHeader()->setResizeMode(0, QHeaderView::Stretch);
#else
    tableWidgetPtr->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
#endif

    outerLayout = new QGridLayout();
    outerLayout->addWidget(tableWidgetPtr, 0, 0, 1, 0);

    this->setLayout(outerLayout);
}


void LauncherGui::loadData()
{
    ;
}


void LauncherGui::setRunablesTblWidItmPtrVecPtr(QVector<QTableWidgetItem*>* runablesTblWidItmPtrVecPtr)
{
    this->runablesTblWidItmPtrVecPtr = runablesTblWidItmPtrVecPtr;
}
        

QVector<QTableWidgetItem*>* LauncherGui::getRunablesTblWidItmPtrVecPtr()
{
    return runablesTblWidItmPtrVecPtr;
}


void LauncherGui::setWestTabWidgetPtr(QTabWidget* westTabWidgetPtr)
{
    this->westTabWidgetPtr = westTabWidgetPtr;
}


QTabWidget* LauncherGui::getWestTabWidgetPtr()
{
    return westTabWidgetPtr;
}


QString* LauncherGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


LauncherGui::~LauncherGui()
{
    ;
}