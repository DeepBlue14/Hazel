/* 
 * File:   NewFilePage_1.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 15, 2015, 9:24 AM
 */

#ifndef NEW_FILE_PAGE_1_H
#define	NEW_FILE_PAGE_1_H

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
        
        QString* langStrPtr;
        QString* fileTypeStrPtr;
        
    private slots:
        void handleSwapOptionsSlot();
        
    public:
        NewFilePage_1(QWidget* parent = 0);
        void setLangStrPtr();
        QString* getLangStrPtr();
        void setFileTypeStrPtr();
        QString* getFileTypeStrPtr();
        void triggerMutators();
        QString* toString();
        ~NewFilePage_1();
};

#endif	/* NEW_FILE_PAGE_1_H */

