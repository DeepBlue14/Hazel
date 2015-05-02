#include "OpeningGui.h"

OpeningGui::OpeningGui(QWidget* parent) : QWidget(parent)
{
    organizationNameLabelPtr = new QLabel("<b>K-Engineering</b>", this);
    applicationNameLabelPtr = new QLabel("<b>Hazel IDE</b>", this);
    
    QPixmap organizationLogoPixmapPtr("/home/james/NetBeansProjects/Hazel/images/hazel.xpm");
    QPixmap applicationLogoPixmapPtr("/home/james/NetBeansProjects/Hazel/images/cs.xpm");
    
    organizationNameLabelPtr->setPixmap(organizationLogoPixmapPtr);
    applicationNameLabelPtr->setPixmap(applicationLogoPixmapPtr );
    //organizationLogoPixmapPtr.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation);
    
    //QLabel::setOpenExternalLinks(true); //this is Qt > 4.2?
    githubLabelPtr = new QLabel("<u><a href=\"http://www.qtcentre.org\">QtCentre</a></u>");
}


OpeningGui::~OpeningGui()
{
    ;
}