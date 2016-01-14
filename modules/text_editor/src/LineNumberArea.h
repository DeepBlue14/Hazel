/* 
 * File:   LineNumberArea.h
 * Module: PrettySyntax
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class handles the area along the left margin which
 *                   contains the line numbers.
 * 
 * Created on May 11, 2015, 11:21 AM
 * Last Modified: 1/13/2016
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

using std::cout;
using std::endl;

class LineNumberArea : public QWidget
{
    Q_OBJECT 

public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit LineNumberArea(FileGui* parent = 0);

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


    void setFileGuiPtr(FileGui* fileGuiPtr);


    FileGui* getFileGuiPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* toString();

    /**
     * 
     */
    virtual ~LineNumberArea();


protected slots:
    /**
     * 
     * see: http://doc.qt.io/qt-4.8/qplaintextedit.html
     * 
     * @param e
     */
    void mousePressEvent(QMouseEvent* e);


private:
    FileGui* fileGuiPtr;
    
    
};

#endif	/* LINENUMBERAREA_H */