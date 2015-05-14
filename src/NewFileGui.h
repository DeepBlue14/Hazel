/* 
 * File:   NewFile.h
 * Author: james
 *
 * Created on April 22, 2015, 12:25 AM
 */

#ifndef NEWFILEGUI_H
#define	NEWFILEGUI_H

#include <QWidget>
#include <QString>
#include <QLineEdit>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QFileDialog>
#include <QFormLayout>
#include <QGridLayout>


class NewFileGui : public QWidget
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
    NewFileGui(QWidget* parent = 0);
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
    ~NewFileGui();
        
};

#endif	/* NEWFILEGUI_H */

