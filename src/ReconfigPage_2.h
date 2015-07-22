/* 
 * File:   ReconfigPage_2.h
 * Author: james
 *
 * Created on July 20, 2015, 5:11 PM
 */

#ifndef RECONFIGPAGE_2_H
#define	RECONFIGPAGE_2_H

#include <QWidget>
#include <QStringList>
#include <QListWidget>
#include <QPushButton>
#include <QDir>
#include <QFile>
#include <QGridLayout>

class ReconfigPage_2 : public QWidget
{
    Q_OBJECT

    private:
        QStringList* rosPkgStrLstPtr;
        QListWidget* rosPkgLwPtr;
        QPushButton* advancedOptionsPbStr;
        QGridLayout* outerLayout;
        
    private slots:
        void handleAdvancedOptionsPbStr();
        
    public:
        ReconfigPage_2(QWidget* parent = 0);
        void initRosPkgStrLstPtr();
        QString* toString();
        ~ReconfigPage_2();
};

#endif	/* RECONFIGPAGE_2_H */