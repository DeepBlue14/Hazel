#include "LineNumberArea.h"


LineNumberArea::LineNumberArea(FileGui* file) : QWidget(file)
{
    this->file = file;
    
}


void LineNumberArea::mousePressEvent(QMouseEvent* e)
{
    cout << "Detected mouse press event at LineNumberArea::mousePressEvent(...)" << endl;
    /*if(codeFoldArea->contentsRect().contains(e->pos()) )
    {
        cout << "\n\nat FileGui::mousePressEvent(...)\n\n" << endl;
    }
    else
    {
        highlightCurrentLine();
    }*/
    
}


QSize LineNumberArea::sizeHint() const
{
    return QSize(file->lineNumberAreaWidth(), 0);
}
       

void LineNumberArea::paintEvent(QPaintEvent* event)
{
    file->lineNumberAreaPaintEvent(event);
    //file->codeFoldingAreaPaintEvent(event);
}


void LineNumberArea::setFile(FileGui* file)
{
    this->file = file;
}


FileGui* LineNumberArea::getFile()
{
    return file;
}


QString* LineNumberArea::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


LineNumberArea::~LineNumberArea()
{
    ;
}