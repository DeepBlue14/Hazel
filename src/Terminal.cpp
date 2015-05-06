#include "Terminal.h"


Terminal::Terminal(QWidget *parent):
	QWidget(parent), cols(80), rows(30), termProcess(0)
{
    ;
}


int Terminal::isRunning()
{
	return termProcess && termProcess->state() == QProcess::Running;
}


int Terminal::start()
{
	if(!termProcess)
		termProcess = new QProcess;

	QStringList args;
	args << "-sb" << "-geometry" << QString("%1x%2").arg(cols).arg(rows) << "-j" << "-into" << QString::number(winId());

	qDebug() << "Starting terminal with arguments '" << args.join(" ") << "'";
	termProcess->start(XTERM_CMD, args);
	
	
	int success;
	if (termProcess->waitForStarted()) {
		success = 0;
		qDebug() << "process started";
	} else
		success = -1;
		
	
	if(success == 0) {		
		/* Wait for the xterm window to be opened and resize it
		 * to our own widget size.
		 */
		Display *dsp = XOpenDisplay(NULL);
		Window wnd = winId();

		int childFound = 0;
		while(!childFound && termProcess->state() == QProcess::Running) {
			Window root, parent, *children;
			uint numwin;
			XQueryTree(dsp, wnd, &root, &parent, &children, &numwin);
			childFound = (children != NULL);
			
			if(childFound) {
				XResizeWindow(dsp, *children, width(), height());
				XFree(children);
			}
		}

		if(!childFound)
			success = -2;
	}
	
	return success == 0;
}


Terminal::~Terminal()
{
	close();
}