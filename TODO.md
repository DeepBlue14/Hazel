**TODO**
*List of features not yet fully implemented*


- NewProjectGui has stuff that relies on paths; test if this is still valid
- Finish implementing RosReconfig frontend
- Implement code folding: https://ui.netbeans.org/docs/ui/code_folding/cf_uispec.html
- Implement xml parsing: http://3gfp.com/2015/01/qt-xml-parsing-continued/
- Implement CMakeLists parsing/insertion
- Finish modifing "run" button backend; see: http://www.walletfox.com/course/customqtoolbutton.php
    & finish refactoring the "master" files (have separate master actions for toolbar?)
- Finish messing with the FileTreeGui module
- Un-hardcode @ NewFilePage_3 "add" slot
- Implement Tyranosaurus Lex
- Add debug toolbar (connected to output widget?)
- Implement threading
- add/remove sequential_launch?


Ref this:
code BEGIN---------------------------------------------------------------------------------------
```
#include <QApplication>
#include <QWidget>
#include <QTime>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QThread>

#include <iostream>

using namespace std;

// Reference: http://www.qtcentre.org/threads/32416-Update-GUI-from-another-thread

class Calc : public QObject
{

    Q_OBJECT

    public slots:
        void doCalc()
        {
            for(int i = 1; i <= 10; ++i)
            {
                emit message(QString::number(i) );
                QTime t = QTime::currentTime();
                t = t.addSecs(2);
                while(t > QTime::currentTime() )
                {
                    //spinning...
                }
            }
            emit message("finished!");
        }

    signals:
        void message(QString);
};

int main(int argv, char **args)
{
    QApplication app(argv, args);

    // GUI
    QWidget w;
    QPushButton* runPb = new QPushButton("start", &w);
    QLabel* lbl = new QLabel(&w);
    QLineEdit* le = new QLineEdit(&w);
    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(lbl);
    layout->addWidget(runPb);
    layout->addWidget(le);
    w.setLayout(layout);
    w.show();

    // Thread
    Calc calcPtr;
    QThread thread;
    calcPtr.moveToThread(&thread);
    thread.start();

    // Connections
    QObject::connect(&calcPtr, SIGNAL(message(QString)), lbl, SLOT(setText(QString) ) );
    QObject::connect(runPb, SIGNAL(clicked()), &calcPtr, SLOT(doCalc() ) );

    return app.exec();
}

#include "main.moc"
```
code END---------------------------------------------------------------------------------------


**Notes**
MasterGui->passMasterTabWidgetPtr ---> CentralGui->passMasterTabWidgetPtr ---> FileTreeGui->setMasterTabWidgetPtr()
