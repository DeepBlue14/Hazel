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
#undef Bool

//class QProcess;


class Terminal : public QWidget
{
	Q_OBJECT

    public:
	Terminal(QWidget* parent = 0);
	bool isRunning();
        ~Terminal();

    public slots:
	bool start();
	bool tryTerminate();

    protected slots:
	void termProcessExited();

    signals:
	void exited();

    protected:
	void closeEvent(QCloseEvent *);
	void resizeEvent(QResizeEvent *);

    private:
	int cols, rows;
	QProcess *termProcess;
};

#endif