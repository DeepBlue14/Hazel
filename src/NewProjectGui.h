/* 
 * File:   NewProject.h
 * Author: james
 *
 * Created on April 22, 2015, 12:25 AM
 */

#ifndef NEWPROJECT_H
#define	NEWPROJECT_H

#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QStringList>
#include <QIcon>
#include <QString>
#include <QGridLayout>
#include <QHBoxLayout>

class NewProjectGui : public QWidget
{
    Q_OBJECT
            
private:
    QStringList* projectTypeStrList;
    QListWidget* projectTypeLw; //maxVisibleItems : int
    
    QPushButton* backBtn;
    QPushButton* nextBtn;
    QPushButton* finishBtn;
    QPushButton* helpBtn;
    QPushButton* cancelBtn;
    
    QGridLayout* outerLayout;
    QHBoxLayout* buttonLayout;
    
private slots:
    ;
    
public:
    NewProjectGui(QWidget* parent = 0);
    void initProjectTypeLw();
    void initBtns();
    ~NewProjectGui();
    
};

#endif	/* NEWPROJECT_H */

