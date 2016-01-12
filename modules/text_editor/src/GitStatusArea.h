/* 
 * File:   GitStatusArea.h
 * Module: text_editor
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: green = new, red = deleted, blue = modified.
 *
 * Created on January 12, 2016, 5:13 PM
 * Last Modified on January 12, 2016, 5:13 PM
 */

#ifndef GIT_STATUS_AREA_H
#define GIT_STATUS_AREA_H

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

class GitStatusArea : public QWidget
{
    Q_OBJECT
    
public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit GitStatusArea(FileGui* parent = 0);

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


    /**
     * 
     * 
     * @param file
     */
    void setFileGuiPtr(FileGui* file);


    /**
     * 
     * 
     * @return 
     */
    FileGui* getFileGuiPtr() const;

    /**
     * 
     * 
     * @return 
     */
    QString* toString();

    /**
     * 
     */
    virtual ~GitStatusArea();


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

#endif /* GIT_STATUS_AREA_H */