#include "FetchWebSource.h"


FetchWebSource::FetchWebSource(QWidget* parent) : QWidget(parent)
{
    attributeValStrLstPtr = new QStringList();
    rosPkgStrLstPtr = new QStringList();
    
    //view.load(QUrl("http://www.ros.org/browse/list.php?package_type=package&distro=indigo") );
    connect(&view, SIGNAL(loadFinished(bool)), this, SLOT(doStuff()) );
}


void FetchWebSource::doStuff()
{
    //QString html = view.page()->currentFrame()->toHtml();
    QWebElement elem = view.page()->currentFrame()->documentElement();
    examineChildElements(elem);
    //cout << view.page()->currentFrame()->toHtml().toStdString() << endl;
    
    
    extractRosPkgs();
}


void FetchWebSource::loadPage()
{
    view.load(QUrl("http://www.ros.org/browse/list.php?package_type=package&distro=indigo") );
}


void FetchWebSource::examineChildElements(const QWebElement& parentElement)
{
    QWebElement element = parentElement.firstChild();
    
    while(!element.isNull() )
    {
        QString* item = new QString();
        *item = element.tagName();

        if(!element.attribute("href").toLatin1().isEmpty() )
        {
            //cout << "    " << element.attribute("href").toStdString() << endl;
            attributeValStrLstPtr->push_back(element.attribute("href") );
        }
        
        examineChildElements(element);
        
        element = element.nextSibling();
    }
}


void FetchWebSource::extractRosPkgs()
{
    int index;
    QString rosPkg;
    for(size_t i = 0; i < attributeValStrLstPtr->size(); i++)
    {
        index = attributeValStrLstPtr->at(i).indexOf("=");
        index = attributeValStrLstPtr->at(i).indexOf("=", index+1);
        rosPkg = attributeValStrLstPtr->at(i).mid(index+1, attributeValStrLstPtr->at(i).size()-index );
        cout << "Pkg: " << rosPkg.toStdString() << endl;
        addToRosPkgStrLstPtr(new QString(rosPkg) );
    }
}


void FetchWebSource::setRosPkgStrLstPtr(QStringList* rosPkgStrLstPtr)
{
    this->rosPkgStrLstPtr = rosPkgStrLstPtr;
}


void FetchWebSource::addToRosPkgStrLstPtr(QString* rosPkgStrPtr)
{
    rosPkgStrLstPtr->push_back(*rosPkgStrPtr);
}


QStringList* FetchWebSource::getRosPkgStrLstPtr()
{
    return rosPkgStrLstPtr;
}


QString* FetchWebSource::toString()
{
    QString* tmp = new QString("------Ros pkgs------");
    
    for(size_t i = 0; i < rosPkgStrLstPtr->size(); i++)
    {
        tmp->append("\n");
        tmp->append(rosPkgStrLstPtr->at(i) );
    }
    
    return tmp;
}


FetchWebSource::~FetchWebSource()
{
    ;
}