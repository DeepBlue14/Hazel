#include "RunPanelGui.h"


RunPanelGui::RunPanelGui(QWidget* parent) : QWidget(parent)
{
    tableWidgetPtr = new QTableWidget();
    runablesTblWidItmPtrVecPtr = new QVector<QTableWidgetItem*>();

    cout << "adding table widgets" << endl;
    tableWidgetPtr->setRowCount(5);
    tableWidgetPtr->setColumnCount(2);
    tableWidgetPtr->setHorizontalHeaderItem(0, new QTableWidgetItem("Execution Command") );
    tableWidgetPtr->setHorizontalHeaderItem(1, new QTableWidgetItem("Order") );

    QTableWidgetItem* item = new QTableWidgetItem("rosrun test_node test_node");
    item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
    item->setCheckState(Qt::Checked);
    
    tableWidgetPtr->setItem(0, 0, item);
    tableWidgetPtr->setCellWidget(0, 1, new QSpinBox() );
    
    westTabWidgetPtr = new QTabWidget();
    //tableWidgetPtr->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    outerLayout = new QGridLayout();
    outerLayout->addWidget(tableWidgetPtr, 0, 0, 1, 0);

    this->setLayout(outerLayout);
}


void RunPanelGui::loadData()
{
    ;
}


void RunPanelGui::setWestTabWidgetPtr(QTabWidget* westTabWidgetPtr)
{
    this->westTabWidgetPtr = westTabWidgetPtr;
}


QTabWidget* RunPanelGui::getWestTabWidgetPtr()
{
    return westTabWidgetPtr;
}


QString* RunPanelGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


RunPanelGui::~RunPanelGui()
{
    ;
}