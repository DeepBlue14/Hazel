/* 
 * File:   ProjPropGui.h
 * Module: Properties
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This UI opens when the user right-clicks on a Projectory
 *                   (not including a project root Projectory) in the file tree
 *                   and selects "properties" from the menu.
 *
 * Created on October 4, 2015, 3:36 PM
 */

#ifndef PROJ_PROP_GUI_H
#define	PROJ_PROP_GUI_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTreeView>
#include <QFileSystemModel>
#include <QGridLayout>

#include <iostream>


using std::cout;
using std::endl;

class ProjPropGui : public QWidget
{
    Q_OBJECT
    
public:
    explicit ProjPropGui(QWidget* parent = 0);
    void fillUiComponents();
    void setProjNameStrPtr(QString* ProjNameStrPtr);
    QString* getProjNameStrPtr();
    void setProjLocStrPtr(QString* ProjLocStrPtr);
    QString* getProjLocStrPtr();
    void setLastModdedStrPtr(QString* lastModdedStrPtr);
    QString* getLastModdedStrPtr();
    QString* toString();
    virtual ~ProjPropGui();
    
    
private slots:
    ;
      

private:
    QLabel* fileNameLblPtr;
    QLabel* fileLocLblPtr;
    QLabel* lastModdedLblPtr;
    QLineEdit* fileNameLePtr;
    QLineEdit* fileLocLePtr;
    QLineEdit* lastModdedLePtr;

    QString* ProjNameStrPtr;
    QString* ProjLocStrPtr;
    QString* lastModdedStrPtr;

    QFileSystemModel* childrenModelPtr;
    QTreeView* treeViewPtr;
    QPushButton* okBtnPtr;

    QGridLayout* outerLayout;
        
};

#endif	/* PROJ_PROP_GUI_H */