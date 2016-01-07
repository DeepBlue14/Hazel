/* 
 * File:   NewFilePage_3.h
 * Module: new_file
 * Author: James Kuczynski, jkuczyns@cs.uml.edu
 * Maintainer: James Kuczynski, jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on May 15, 2015, 10:53 PM
 * Last Modified: 1/05/2015
 */

#ifndef NEW_FILE_PAGE_2_H
#define	NEW_FILE_PAGE_2_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QStringList>
#include <QListWidget>
#include <QGridLayout>

#include <iostream>

#include "RideEnv.h"
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
using std::endl;

class NewFilePage_2 : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent pointer to object of parent type.
     */
    explicit NewFilePage_2(QWidget* parent = 0);

    /**
     * 
     */
    void triggerMutators();

    /**
     * Loads the template list for the language selected by the user
     * on the previous UI fragment into the UI.
     */
    void pushLangTemplatesToUi(RideEnv::Lang lang, RideEnv::FileType fileType); // !!!???should this be a slot!!!???

    void pushCTemplatesToUi(RideEnv::FileType fileType);
    void pushCppTemplatesToUi(RideEnv::FileType fileType);
    void pushPythonTemplatesToUi(RideEnv::FileType fileType);
    void pushJavaTemplatesToUi(RideEnv::FileType fileType);
    void pushLispTemplatesToUi(RideEnv::FileType fileType);
    void pushShellTemplatesToUi(RideEnv::FileType fileType);
    void pushOtherTemplatesToUi(RideEnv::FileType fileType);

    /**
     * 
     * 
     * @param selectedTemplateStrPtr
     */
    void setSelectedTemplateStrPtr(QString* selectedTemplateStrPtr);

    /**
     * 
     * 
     * @return 
     */
    QString* getSelectedTemplateStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~NewFilePage_2();
    
    
private:
    QLabel* titlePtr;
    QVector<QListWidgetItem*>* cHeaderTemplateStrLst;
    QVector<QListWidgetItem*>* cSourceTemplateStrLst;
    QVector<QListWidgetItem*>* cppHeaderTemplateStrLst;
    QVector<QListWidgetItem*>* cppSourceTemplateStrLst;
    QVector<QListWidgetItem*>* pySourceTemplateStrLst;
    QVector<QListWidgetItem*>* jSourceTemplateStrLst;
    QVector<QListWidgetItem*>* lispSourceTemplateStdrLst;

    QListWidget* templatesLstWidPtr;
    QGridLayout* outerLayout;

    QString* selectedTemplateStrPtr;
    
    
};

#endif	/* NEW_FILE_PAGE_2_H */