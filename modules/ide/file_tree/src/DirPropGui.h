/* 
 * File:   DirPropGui.h
 * Module: Properties
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This UI opens when the user right-clicks on a directory
 *                   (not including a project root directory) in the file tree
 *                   and selects "properties" from the menu.
 *
 * Created on October 4, 2015, 3:36 PM
 */

#ifndef DIR_PROP_GUI_H
#define	DIR_PROP_GUI_H

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

class DirPropGui : public QWidget
{
    Q_OBJECT
    
public:
    explicit DirPropGui(QWidget* parent = 0);
    void fillUiComponents();
    void setDirNameStrPtr(QString* dirNameStrPtr);
    QString* getDirNameStrPtr();
    void setDirLocStrPtr(QString* dirLocStrPtr);
    QString* getDirLocStrPtr();
    void setLastModdedStrPtr(QString* lastModdedStrPtr);
    QString* getLastModdedStrPtr();
    QString* toString();
    virtual ~DirPropGui();
    
    
private slots:
    ;
      

private:
    QLabel* fileNameLblPtr;
    QLabel* fileLocLblPtr;
    QLabel* lastModdedLblPtr;
    QLineEdit* fileNameLePtr;
    QLineEdit* fileLocLePtr;
    QLineEdit* lastModdedLePtr;

    QString* dirNameStrPtr;
    QString* dirLocStrPtr;
    QString* lastModdedStrPtr;

    QFileSystemModel* childrenModelPtr;
    QTreeView* treeViewPtr;
    QPushButton* okBtnPtr;

    QGridLayout* outerLayout;
        
};

#endif	/* DIR_PROP_GUI_H */