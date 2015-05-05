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

class QProcess;


class Terminal : public QWidget
{
	Q_OBJECT

public:
	Terminal(QWidget * = 0);
	~Terminal();

	bool isRunning();

public slots:
	bool start();

signals:
	void exited();

private:
	int cols, rows;
	QProcess *termProcess;
};

#endif