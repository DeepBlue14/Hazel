/* 
 * File:   NewFilePage_5.h
 * Module: NewFile
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 15, 2015, 2:56 PM
 */

#ifndef NEW_FILE_PAGE_5_H
#define	NEW_FILE_PAGE_5_H

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

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class NewFilePage_4 : public QWidget
{
    Q_OBJECT
            
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

    private slots:
        /**
         * 
         */
        void handleFolderPbPtrSlot();
    
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        NewFilePage_4(QWidget* parent = 0);
        
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
        ~NewFilePage_4();
        
};

#endif	/* NEW_FILE_PAGE_5_H */