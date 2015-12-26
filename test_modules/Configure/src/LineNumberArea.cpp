#include "LineNumberArea.h"


LineNumberArea::LineNumberArea(FileGui* file) : QWidget(file)
{
    this->fileGuiPtr = file;
    
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
    return QSize(fileGuiPtr->lineNumberAreaWidth(), 0);
}
       

void LineNumberArea::paintEvent(QPaintEvent* event)
{
    fileGuiPtr->lineNumberAreaPaintEvent(event);
    //file->codeFoldingAreaPaintEvent(event);
}


void LineNumberArea::setFileGuiPtr(FileGui* file)
{
    this->fileGuiPtr = file;
}


FileGui* LineNumberArea::getFileGuiPtr()
{
    return fileGuiPtr;
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