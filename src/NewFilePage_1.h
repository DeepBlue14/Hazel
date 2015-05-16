/* 
 * File:   NewFilePage_1.h
 * Author: james
 *
 * Created on May 15, 2015, 9:24 AM
 */

#ifndef NEWFILEPAGE_1_H
#define	NEWFILEPAGE_1_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QListWidget>
#include <QTextEdit>
#include <QGridLayout>

class NewFilePage_1 : public QWidget
{
    Q_OBJECT
            
    private:
        QStringList* langsStrLstPtr;
        QListWidget* langsLwPtr;
        
        QGridLayout* outerLayoutPtr;
        
    private slots:
        ;
        
    public:
        NewFilePage_1(QWidget* parent = 0);
        ~NewFilePage_1();
};

#endif	/* NEWFILEPAGE_1_H */

