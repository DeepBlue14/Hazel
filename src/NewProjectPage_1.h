/* 
 * File:   NewProjectPage_1.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 17, 2015, 11:20 PM
 */

#ifndef NEW_PROJECT_PAGE_1_H
#define	NEW_PROJECT_PAGE_1_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QListWidget>
#include <QGridLayout>

class NewProjectPage_1 : public QWidget
{
    Q_OBJECT
            
    private:
        QStringList* rosVersionsStrLstPtr;
        QListWidget* rosVersionsLwPtr;
        
        QGridLayout* outerLayoutPtr;
        
        QString* rosVersionStrPtr;
    private slots:
        ;
        
    public:
        NewProjectPage_1(QWidget* parent = 0);
        void setRosVersionStrPtr();
        QString* getRosVersionStrPtr();
        QString* toString();
        ~NewProjectPage_1();
};

#endif	/* NEW_PROJECT_PAGE_1_H */

