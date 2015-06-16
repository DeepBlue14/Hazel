/* 
 * File:   File.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class inherits from class QPlainTextEdit.  It
 *                   provides dynamic highlighting and auto-insertion of text
 *                   into the GUI representation of the file.
 * 
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

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

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
        QString* toString();
        ~FileGui();
        
};

#endif	/* FILE_H */

