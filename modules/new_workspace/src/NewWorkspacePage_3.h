/* 
 * File:   NewWorkspacePage_2.h
 * Module: NewWorkspace
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: for package.xml data
 *
 * Created on May 5, 2015, 11:14 AM
 */

#ifndef NEW_WORDSPACE_PAGE_3_H
#define	NEW_WORDSPACE_PAGE_3_H

#include <QWidget>
#include <QLineEdit>
#include <QStringList>
#include <QLabel>
#include <QString>
#include <QListWidget>
#include <QComboBox>
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

using std::cout;
using std::cerr;
using std::endl;

class NewWorkspacePage_3 : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit NewWorkspacePage_3(QWidget* parent = 0);

    /**
     * 
     */
    void setAuthorNameStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getAuthorNameStrPtr();

    /**
     * 
     */
    void setAuthorEmailStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getAuthorEmailStrPtr();

    /**
     * 
     */
    void setLicenseStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getLicenseStrPtr();

    /**
     * 
     */
    void triggerMutators();

    /**
     * Classic toString method.
     * 
     * @return class data.
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~NewWorkspacePage_3();
    
    
private slots:
    /**
     * 
     */
    void handleOtherLicenseSlot();
    
    
private:
    QLabel* titlePtr;
    QLineEdit* authorNameLePtr;
    QLineEdit* authorEmailLePtr;
    QStringList* licenseListPtr;
    QComboBox* licenseCbPtr;
    QLineEdit* licenseLePtr;

    QFormLayout* formLayout;
    QGridLayout* outerLayout;

    QString* authorNameStrPtr;
    QString* authorEmailStrPtr;
    QString* licenseStrPtr;
    
    
};

#endif	/* NEW_WORDSPACE_PAGE_3_H */
