/* 
 * File:   FTPropertiesGui.h
 * Module: 
 * Author: james, jkuczyns@cs.uml.edu
 * Maintainer: james, jkuczyns@cs.uml.edu
 * File Description: Properties GUI for configuring compiler and linker
 *                   options, etc.
 *
 * Created on January 6, 2016, 2:54 PM
 * Last Modified on January 6, 2016, 2:54 PM
 */

#ifndef FT_PROPERTIES_GUI_H
#define	FT_PROPERTIES_GUI_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QListWidget>
#include <QGridLayout>

class FTPropertiesGui : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent class.
     */
    explicit FTPropertiesGui(QWidget* parent = 0);

    /**
     * Destructor.
     */
    virtual ~FTPropertiesGui();
    
    
private slots:
    ;
    
    
private:
    QStringList* pagesStrLstPtr;
    QListWidget* pagesLwPtr;
    QGridLayout* outerLayout;
};

#endif	/* FT_PROPERTIES_GUI_H */