#include "OpeningGui.h"

OpeningGui::OpeningGui(QWidget* parent) : QWidget(parent)
{
    //organizationNameLabelPtr = new QLabel("<b>K-Engineering</b>", this);
    
    QFont* titleFont = new QFont("Serif");
    titleFont->setBold(true);
    titleFont->setPointSize(16);
    
    applicationNameLabelPtr = new QLabel("<i>Ride</i>", this);
    applicationNameLabelPtr->setFont(*titleFont);
    applicationNameIconLabelPtr = new QLabel();
    
    //QPixmap organizationLogoPixmapPtr("/home/james/NetBeansProjects/Hazel/images/cs.xpm");
    QPixmap applicationLogoPixmapPtr("/home/james/NetBeansProjects/ride/images/ride0.jpg");
    
    appLabelPtr = new QLabel();
    QFont* subheaderFont = new QFont("Serif");
    subheaderFont->setPointSize(14);
    appLabelPtr->setText("----------<b>R</b>OS <b>I</b>ntegrated <b>D</b>evelopment <b>E</b>nvironment----------");
    
    //organizationNameLabelPtr->setPixmap(organizationLogoPixmapPtr);
    applicationNameIconLabelPtr->setPixmap(applicationLogoPixmapPtr.scaled(250, 200, Qt::IgnoreAspectRatio, Qt::FastTransformation) );
    
    //QLabel::setOpenExternalLinks(true); //this is Qt > 4.2?
    githubLabelPtr = new QLabel("<u><a href=\"http://www.qtcentre.org\">QtCentre</a></u>");
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(applicationNameLabelPtr, 0, 0, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(appLabelPtr, 1, 0, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(applicationNameIconLabelPtr, 2, 0, Qt::AlignHCenter);
    
    this->setLayout(outerLayoutPtr);
}


OpeningGui::~OpeningGui()
{
    ;
}