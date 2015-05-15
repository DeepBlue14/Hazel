/* 
 * File:   NewFilePage_3.h
 * Author: james
 *
 * Created on May 15, 2015, 2:56 PM
 */

#ifndef NEWFILEPAGE_3_H
#define	NEWFILEPAGE_3_H

#include <QWidget>
#include <QString>
#include <QLineEdit>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QFileDialog>
#include <QFormLayout>
#include <QGridLayout>


class NewFilePage_3 : public QWidget
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
    
    QString* fileNameStrPtr;
    QString* projectStrPtr;
    QString* locStrPtr;
    QString* folderStrPtr;
    QString* createdFileStrPtr;
    
    QGridLayout* folderLayoutPtr;
    QFormLayout* formLayoutPtr;
    QGridLayout* outerLayoutPtr;

private slots:
    void handleFolderPbPtrSlot();
    
public:
    NewFilePage_3(QWidget* parent = 0);
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
    ~NewFilePage_3();
        
};

#endif	/* NEWFILEPAGE_3_H */

