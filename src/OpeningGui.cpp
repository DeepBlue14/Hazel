#include "OpeningGui.h"

OpeningGui::OpeningGui(QWidget* parent) : QWidget(parent)
{
    //organizationNameLabelPtr = new QLabel("<b>K-Engineering</b>", this);
    
    QFont* font = new QFont("Serif");
    font->setBold(true);
    font->setPointSize(14);
    
    applicationNameLabelPtr = new QLabel("Ride", this);
    applicationNameLabelPtr->setFont(*font);
    applicationNameIconLabelPtr = new QLabel();
    
    //QPixmap organizationLogoPixmapPtr("/home/james/NetBeansProjects/Hazel/images/cs.xpm");
    //QPixmap applicationLogoPixmapPtr("/home/james/NetBeansProjects/Hazel/images/hazel.xpm");
    
    //organizationNameLabelPtr->setPixmap(organizationLogoPixmapPtr);
    //;
    //applicationNameIconLabelPtr->setPixmap(applicationLogoPixmapPtr.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::FastTransformation) );
    
    //QLabel::setOpenExternalLinks(true); //this is Qt > 4.2?
    githubLabelPtr = new QLabel("<u><a href=\"http://www.qtcentre.org\">QtCentre</a></u>");
    
    outerLayoutPtr = new QGridLayout();
    outerLayoutPtr->addWidget(applicationNameLabelPtr, 0, 0, Qt::AlignHCenter);
    outerLayoutPtr->addWidget(applicationNameIconLabelPtr, 1, 0, Qt::AlignHCenter);
    
    this->setLayout(outerLayoutPtr);
}


OpeningGui::~OpeningGui()
{
    ;
}