#include "ReconfigDashboard.h"


ReconfigDashboard::ReconfigDashboard(QWidget* parent) : QWidget(parent)
{
    /*
    historyPixmapVecPtr = new QVector<QPixmap*>();
    historyPixmapVecPtr->push_back(new QPixmap(RosEnv::imagesInstallLoc + "null.png") );
    historyPixmapVecPtr->at(0)->scaled(20, 20, Qt::IgnoreAspectRatio, Qt::FastTransformation);
    historyPixmapVecPtr->push_back(new QPixmap(RosEnv::imagesInstallLoc + "null.png") );
    historyPixmapVecPtr->at(1)->scaled(20, 20, Qt::IgnoreAspectRatio, Qt::FastTransformation);
    historyPixmapVecPtr->push_back(new QPixmap(RosEnv::imagesInstallLoc + "null.png") );
    historyPixmapVecPtr->at(2)->scaled(20, 20, Qt::IgnoreAspectRatio, Qt::FastTransformation);
    
    historyLblVecPtr = new QVector<QLabel*>();
    
    QVBoxLayout* iconLayoutPtr = new QVBoxLayout();
    
    QLabel* lbl;
    for(size_t i = 0; i < historyPixmapVecPtr->size(); i++)
    {
        lbl = new QLabel();
        lbl->setFixedSize(20, 20);
        lbl->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        lbl->setScaledContents(true);
        lbl->setPixmap(RosEnv::imagesInstallLoc + "null.png");
        historyLblVecPtr->push_back(lbl);
        iconLayoutPtr->addWidget(historyLblVecPtr->at(i), Qt::AlignTop);
    }


    iconLayoutPtr->addWidget(lbl, 0, 0);
    
    
    historyLstWidPtr = new QListWidget();
    
    QStringList* historyStrLstPtr = new QStringList();
    historyStrLstPtr->push_back("test_node");
    historyStrLstPtr->push_back("laser_detection");
    historyStrLstPtr->push_back("night_hawk");
    historyLstWidPtr->addItems(*historyStrLstPtr);

    historyLstWidPtr->item(0)->setToolTip("/home/james/catkin_ws/src/test_node");
    historyLstWidPtr->item(1)->setToolTip("/home/james/frankenscooter_ws/src/laser_detection");
    historyLstWidPtr->setBackgroundRole(QPalette::Highlight);
    */
    
    historyTblWidPtr = new QTableWidget();
    historyTblWidPtr->setRowCount(5);
    historyTblWidPtr->setColumnCount(3);
    historyTblWidPtr->setHorizontalHeaderItem(0, new QTableWidgetItem("Status") );
    historyTblWidPtr->setHorizontalHeaderItem(1, new QTableWidgetItem("Op") );
    historyTblWidPtr->setHorizontalHeaderItem(2, new QTableWidgetItem("Node") );
    

    
    //----------------------------------------------------------------
    /*
    QWidget* pWidget0 = new QWidget();
    QLabel* lbl0 = new QLabel();
    lbl0->setFixedSize(20, 20);
    lbl0->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    lbl0->setScaledContents(true);
    lbl0->setPixmap(RosEnv::imagesInstallLoc + "bar_mark.png");
    lbl0->setAlignment(Qt::AlignCenter);
    QHBoxLayout* pLayout0 = new QHBoxLayout(pWidget0);
    pLayout0->addWidget(lbl0);
    pLayout0->setAlignment(Qt::AlignCenter);
    pLayout0->setContentsMargins(0, 0, 0, 0);
    pWidget0->setLayout(pLayout0);
    */
    QCellWidget* pWidget0 = new QCellWidget();
    pWidget0->defaultInit();
    //----------------------------------------------------------------
    
    //----------------------------------------------------------------
    QWidget* pWidget1 = new QWidget();
    QLabel* lbl1 = new QLabel();
    lbl1->setFixedSize(20, 20);
    lbl1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    lbl1->setScaledContents(true);
    lbl1->setPixmap(RosEnv::imagesInstallLoc + "searchAndTransform.png");
    lbl1->setAlignment(Qt::AlignCenter);
    QHBoxLayout* pLayout1 = new QHBoxLayout(pWidget1);
    pLayout1->addWidget(lbl1);
    pLayout1->setAlignment(Qt::AlignCenter);
    pLayout1->setContentsMargins(0, 0, 0, 0);
    pWidget1->setLayout(pLayout1);
    //-----------------------------------------------------------------
    
    //----------------------------------------------------------------
    //QTableWidgetItem* item1 = new QTableWidgetItem();
    //item1->setIcon(QIcon(RosEnv::imagesInstallLoc + "null.png") );
    //QTableWidgetItem* item2 = new QTableWidgetItem("test_node");
    QWidget* pWidget2 = new QWidget();
    QLabel* lbl2 = new QLabel();
    lbl2->setText("test_node");
    lbl2->setToolTip("/home/james/catkin_ws/src/test_node");
    lbl2->setAlignment(Qt::AlignCenter);
    QHBoxLayout* pLayout2 = new QHBoxLayout(pWidget2);
    pLayout2->addWidget(lbl2);
    pLayout2->setAlignment(Qt::AlignCenter);
    pLayout2->setContentsMargins(0, 0, 0, 0);
    pWidget2->setLayout(pLayout2);
    //-----------------------------------------------------------------

    
    
    historyTblWidPtr->setCellWidget(0, 0, pWidget0);
    historyTblWidPtr->setCellWidget(0, 1, pWidget1);
    historyTblWidPtr->setCellWidget(0, 2, pWidget2);


#if(QT_VERSION < 0x050000)
    historyTblWidPtr->horizontalHeader()->setResizeMode(2, QHeaderView::Stretch);
#else
    tableWidgetPtr->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
#endif

    historyTblWidPtr->verticalHeader()->hide();
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(new QLabel("History"), 0, 0);
    outerLayout->addWidget(historyTblWidPtr, 1, 0);
    
    this->setLayout(outerLayout);
}


QString* ReconfigDashboard::toString()
{
    return new QString("***METHOD STUB***");
}


ReconfigDashboard::~ReconfigDashboard()
{
    ;
}