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
#include <QStringListModel>
#include <QVector>
#include <QListWidget>
#include <QTextEdit>
#include <QGridLayout>

class NewFilePage_1 : public QWidget
{
    Q_OBJECT
            
    private:
        QStringList* langsStrLstPtr;
        QVector<QStringList*> fileTypeStrLstPtrVec;
        QListWidget* langsLwPtr;
        QListWidget* fileTypeLwPtr;
        
        QGridLayout* outerLayoutPtr;
        
    private slots:
        void handleSwapOptionsSlot();
        
    public:
        NewFilePage_1(QWidget* parent = 0);
        QString* getLangStrPtr();
        QString* getFileTypeStrPtr();
        QString* toString();
        ~NewFilePage_1();
};

#endif	/* NEWFILEPAGE_1_H */

