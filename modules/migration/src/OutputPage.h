/* 
 * File:   ReconfigPage_4.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This "page" displays what the program is doing during
 *                   run-time (i.e. searching the old project for makefiles,
 *                   creating a new project, etc.).
 *
 * Created on July 20, 2015, 5:11 PM
 * Last Modified: 
 */

#ifndef RECONFIG_PAGE_4_H
#define	RECONFIG_PAGE_4_H

#include <QWidget>
#include <QLabel>
#include <QTextEdit>
#include <QString>
#include <QGridLayout>

class OutputPage : public QWidget
{
    Q_OBJECT
            
    private:
        QLabel* titleLblPtr;
        QTextEdit* outputTe;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        OutputPage(QWidget* parent = 0);
        
        
        void setTitleLblPtr(QLabel* titleLblPtr);
        
        
        QLabel* getTitleLblPtr();
        
        
        void setTitleLblText(QString* text);
        
        
        QString* getTitleLblText();
        
        
        QString* toString();
        
        /**
         * Destructor.
         */
        ~OutputPage();
};

#endif	/* RECONFIG_PAGE_4_H */