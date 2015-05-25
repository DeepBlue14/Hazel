/* 
 * File:   File.h
 * Author: james
 * Email: 
 * Created on May 2, 2015, 10:47 PM
 */

#ifndef FILE_H
#define	FILE_H

#include <QWidget>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QTextObject>
#include <QPainter>
#include <QCompleter>
#include <QTextCursor>
#include <QAbstractItemView>
#include <QScrollBar>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QSize>

#include <iostream>

using namespace std;

class FileGui : public QPlainTextEdit
{
    Q_OBJECT
    
    private:
        QWidget* lineNumberArea;
        
        QCompleter* c;
        
        QString textUnderCursor() const;
        
    private slots:
        void insertCompletion(const QString& completion);
        
        void updateLineNumberAreaWidth(int newBlockCount);
        void highlightCurrentLine();
        void updateLineNumberArea(const QRect&, int);
        
    protected:
        void keyPressEvent(QKeyEvent* e);
        
    public:
        FileGui(QWidget* parent = 0);
        void setCompleter(QCompleter* c);
        QCompleter* completer() const;
        void lineNumberAreaPaintEvent(QPaintEvent* event);
        int lineNumberAreaWidth();
        void resizeEvent(QResizeEvent* event);
        ~FileGui();
        
};

#endif	/* FILE_H */

