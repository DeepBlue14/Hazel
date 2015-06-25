/* 
 * File:   terminal.h
 * Author: james
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
	QXTerm(QWidget * = 0);
	~QXTerm();

	int isRunning();

public slots:
	int start();

signals:
	void exited();

private:
	int cols, rows;
	QProcess *termProcess;
};

#endif