/* 
 * File:   NewFilePage_4.h
 * Module: new_file
 * Author: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainer: James Kuczynski, jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 15, 2015, 2:56 PM
 * Last Modified: 1/05/2016
 */

#ifndef NEW_FILE_PAGE_4_H
#define	NEW_FILE_PAGE_4_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QFileDialog>
#include <QFormLayout>
#include <QGridLayout>

#include <iostream>

#include "RosEnv.h"
#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using std::cout;
using std::cerr;
using std::endl;

class NewFilePage_4 : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit NewFilePage_4(QWidget* parent = 0);

    /**
     * Initialize core components of this class
     */
    void initCore();

    /**
     * 
     */
    void setFileNameStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getFileNameStrPtr();

    /**
     * 
     */
    void setFileExtStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getFileExtStrPtr();

    /**
     * 
     */
    void setProjectStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getProjectStrPtr();

    /**
     * 
     */
    void setLocStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getLocStrPtr();

    /**
     * 
     */
    void setFolderStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getFolderStrPtr();

    /**
     * 
     */
    void setCreatedFileStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getCreatedFileStrPtr();

    /**
     * 
     */
    void triggerMutators();

    /**
     * Classic toString method.
     * 
     * @return data.
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~NewFilePage_4();
    
    
private slots:
    /**
     * 
     */
    void handleFolderPbPtrSlot();
    
    
private:
    QLabel* titlePtr;
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
    QString* fileExtStrPtr;
    QString* projectStrPtr;
    QString* locStrPtr;
    QString* folderStrPtr;
    QString* createdFileStrPtr;
        
};

#endif	/* NEW_FILE_PAGE_4_H */