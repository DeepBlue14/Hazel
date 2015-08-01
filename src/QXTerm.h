/* 
 * File:   QXTerm.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class allows a XTerm application to be embedded into
 *                   a QWidget.  
 *
 * Created on April 29, 2015, 11:25 AM
 */

#ifndef __TERMINAL_H__
#define __TERMINAL_H__
#define XTERM_CMD "/usr/bin/xterm"

#include <QWidget>
#include <QProcess>
#include <QtGui>

#include <X11/Xlib.h>

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

class QXTerm : public QWidget
{
	Q_OBJECT

public:
        /**
        * Constructor.
        * 
        * @param Reference to parent type QWidget.
        */
	QXTerm(QWidget * = 0);
        
        /**
         * Destructor.
         */
	~QXTerm();

        /**
         * Contains the XTerms execution status.
         * 
         * @return the status.
         */
	int isRunning();

public slots:
        /**
         * Triggers the execution of the XTerm application.
         * 
         * @return the applications initial execution status. 
         */
	int start();

signals:
        /**
         * Terminates the XTerm application.
         */
	void exited();

private:
	int cols, rows;
	QProcess *termProcess;
};

#endif