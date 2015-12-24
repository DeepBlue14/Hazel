/* 
 * File:   QCellWidget.h
 * MOdule: 
 * Author: james
 * Email:
 * File Description: 
 *
 * Notes: Change the QLabel to a more generic templated type of "entity".
 * 
 * Created on December 23, 2015, 4:17 PM
 */

#ifndef QCELL_WIDGET_H
#define QCELL_WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QString>

#include "RosEnv.h"

class QCellWidget : public QWidget
{
    Q_OBJECT
            
    private:
        QLabel* labelPtr;
        QHBoxLayout* layoutPtr;
        
    public:
        QCellWidget(QWidget* parent = 0);
        void defaultInit();
        void setLayoutPtr(QHBoxLayout* layoutPtr);
        QHBoxLayout* getLayoutPtr() const;
        void setLabelPtr(QLabel* labelPtr);
        QLabel* getLabelPtr() const;
        QString* toString();
        ~QCellWidget();
};

#endif /* QCELL_WIDGET_H */