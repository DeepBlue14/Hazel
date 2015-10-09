/* 
 * File:   LineNumberArea.h
 * Module: PrettySyntax
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class handles the area along the left margin which
 *                   contains the line numbers.
 * 
 * Created on May 11, 2015, 11:21 AM
 */

#ifndef LINE_NUMBER_AREA_H
#define	LINE_NUMBER_AREA_H

#include <QWidget>
#include <QPaintEvent>
#include <QSize>
#include <QString>

#include <iostream>

#include "FileGui.h"
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

class LineNumberArea : public QWidget
{
    private:
        FileGui* file;
        
    protected slots:
        /**
         * 
         * see: http://doc.qt.io/qt-4.8/qplaintextedit.html
         * 
         * @param e
         */
        void mousePressEvent(QMouseEvent* e);
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        LineNumberArea(FileGui* parent = 0);
        
        /**
         * 
         * 
         * @return 
         */
        QSize sizeHint() const;
        
        /**
         * 
         * 
         * @param event
         */
        void paintEvent(QPaintEvent* event);
        
        
        void setFile(FileGui* file);
        
        
        FileGui* getFile();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~LineNumberArea();
};

#endif	/* LINENUMBERAREA_H */