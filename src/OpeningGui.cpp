#include "OpeningGui.h"

OpeningGui::OpeningGui(QWidget* parent) : QWidget(parent)
{
    //organizationNameLabelPtr = new QLabel("<b>K-Engineering</b>", this);
    
    QFont* titleFont = new QFont("Serif");
    titleFont->setBold(true);
    titleFont->setPointSize(16);
    
    applicationNameLabelPtr = new QLabel("<i>RIDE</i>", this);
    applicationNameLabelPtr->setFont(*titleFont);
    applicationNameIconLabelPtr = new QLabel();
    
    QPixmap applicationLogoPixmapPtr("/home/james/NetBeansProjects/ride/images/icon.jpg");
    
    appLabelPtr = new QLabel();
    QFont* subheaderFont = new QFont("Serif");
    subheaderFont->setPointSize(14);
    appLabelPtr->setText("<p align=\"center\"><b>R</b>OS <b>I</b>ntegrated <b>D</b>evelopment <b>E</b>nvironment</p>"
    "<p align=\"center\"><i>Developer: put some very long quote or something line that about ROS here!</i></p>");
    
    applicationNameIconLabelPtr->setPixmap(applicationLogoPixmapPtr.scaled(195, 166, Qt::IgnoreAspectRatio, Qt::FastTransformation) );
    
    //QLabel::setOpenExternalLinks(true); //this is Qt > 4.2?
    githubLabelPtr = new QLabel("<a href=\"https://github.com/DeepBlue14/ride\">RIDE Git Repository</a>");
    githubLabelPtr->setTextFormat(Qt::RichText);
    githubLabelPtr->setTextInteractionFlags(Qt::TextBrowserInteraction);
    githubLabelPtr->setOpenExternalLinks(true);
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(applicationNameLabelPtr, 0, 0, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(appLabelPtr, 1, 0, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(githubLabelPtr, 2, 0, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(applicationNameIconLabelPtr, 3, 0, Qt::AlignHCenter);
    
    this->setLayout(outerLayoutPtr);
}


QString* OpeningGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


OpeningGui::~OpeningGui()
{
    ;
}