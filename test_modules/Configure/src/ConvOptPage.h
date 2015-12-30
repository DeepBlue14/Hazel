/* 
 * File:   ReconfigPage_2.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains a "page" which allows the user to
 *                   select the various msgs which will be linked against
 *                   during compile-time, as well as buttons for "custom" msgs
 *                   and "advanced" options for compiler, linker, environment
 *                   variables, etc.
 *
 * Created on July 20, 2015, 5:11 PM
 * Last Modified: 
 */

#ifndef RECONFIG_PAGE_2_H
#define	RECONFIG_PAGE_2_H

#include <QWidget>
#include <QStringList>
#include <QListWidget>
#include <QPushButton>
#include <QDir>
#include <QFile>
#include <QGridLayout>

#include "CustomPkgsGui.h"
#include "AdvOptionsGui.h"

class ConvOptPage : public QWidget
{
    Q_OBJECT

    private:
        QStringList* rosPkgStrLstPtr;
        QListWidget* rosPkgLwPtr;
        QPushButton* customPkgsPbStr;
        QPushButton* advancedOptionsPbStr;
        QGridLayout* outerLayout;
        
        CustomPkgsGui* customPkgsGuiPtr;
        AdvOptionsGui* advOptionsGuiPtr;
        
        //
        
    private slots:
        /**
         * Starts the "Custom Pkgs" GUI.
         */
        void handleCustomPkgsPbStr();
        
        /**
         * Starts the "Advanced Options" GUI.
         */
        void handleAdvancedOptionsPbStr();
        
        /**
         * Updates this class object's *_msgs list and *_msgs list widget when
         * the user presses the "OK" button on the custom msgs dialog window.
         * @see #rosPkgStrLstPtr
         * @see #rosPkgLwPtr
         */
        void handleAddPkgTypeSlot();
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        ConvOptPage(QWidget* parent = 0);
        
        /**
         * Populates the list widget with the types of ROS's *_msgs.
         * TODO: Currently, this is hard-coded, but it would be better to
         * read them from a configuration file, or query them from the ROS
         * instalation on the localhost.
         */
        void initRosPkgStrLstPtr();
        
        /**
         * Classic toString method.
         * 
         * @return class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~ConvOptPage();
};

#endif	/* RECONFIG_PAGE_2_H */