/* 
 * File:   NewFilePage_3.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 15, 2015, 2:56 PM
 */

#ifndef NEWFILEPAGE_4_H
#define	NEWFILEPAGE_4_H

#include <QWidget>
#include <QString>
#include <QLineEdit>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QFileDialog>
#include <QFormLayout>
#include <QGridLayout>


class NewFilePage_4 : public QWidget
{
    Q_OBJECT
            
private:
    QLineEdit* fileNameLePtr;
    QStringList* fileExtsStrLstPtr;
    QComboBox* fileExtCbPtr;
    QCheckBox* defaultFileExtChbPtr;
    QLineEdit* projectLePtr;
    QComboBox* locCbPtr;
    QLineEdit* folderLePtr;
    QFileDialog* folderDialogPtr;
    QPushButton* folderPbPtr;
    QLineEdit* createdFileLePtr;
    
    QGridLayout* folderLayoutPtr;
    QFormLayout* formLayoutPtr;
    QGridLayout* outerLayoutPtr;
    
    QString* fileNameStrPtr;
    QString* projectStrPtr;
    QString* locStrPtr;
    QString* folderStrPtr;
    QString* createdFileStrPtr;

private slots:
    void handleFolderPbPtrSlot();
    
public:
    NewFilePage_4(QWidget* parent = 0);
    void initCore();
    void setFileNameStrPtr(QString* fileNameStrPtr);
    QString* getFileNameStrPtr();
    void setProjectStrPtr(QString* projectStrPtr);
    QString* getProjectStrPtr();
    void setLocStrPtr(QString* locStrPtr);
    QString* getLocStrPtr();
    void setFolderStrPtr(QString* folderStrPtr);
    QString* getFolderStrPtr();
    void setCreatedFileStrPtr(QString* createdFileStrPtr);
    QString* getCreatedFileStrPtr();
    QString* toString();
    ~NewFilePage_4();
        
};

#endif	/* NEWFILEPAGE_4_H */

