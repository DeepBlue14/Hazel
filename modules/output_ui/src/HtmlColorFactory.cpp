#include "HtmlColorFactory.h"


HtmlColorFactory::HtmlColorFactory()
{
    ;
}


QString& HtmlColorFactory::toHtml(QString& textRef, Color color, Effect effect)
{
    ;
}


void HtmlColorFactory::debugDisplay(QString& htmlTextRef)
{
    QTextEdit* textEditPtr = new QTextEdit();
    textEditPtr->setHtml(htmlTextRef);
    textEditPtr->show();
}


QString* HtmlColorFactory::toString()
{
    return new QString("***METHOD STUB***");
}


HtmlColorFactory::~HtmlColorFactory()
{
    ;
}