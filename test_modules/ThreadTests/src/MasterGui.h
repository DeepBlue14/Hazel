/* 
 * File:   MasterGui.h
 * Module: 
 * Author: james
 * Email: 
 * File Description:
 *
 * Created on December 31, 2015, 11:40 PM
 * Last Modified: 
 */

#ifndef MASTER_GUI_H
#define MASTER_GUI_H

#include <QWidget>
#include <QTextEdit>
#include <QGridLayout>
#include <QString>
#include <QDebug>

class MasterGui : public QWidget
{
Q_OBJECT

public:
    explicit MasterGui(QWidget* parent = 0);
    QString* toString();
    virtual ~MasterGui();
    
private:
    QTextEdit* outputTePtr;
    QGridLayout* outerLayout;
    
};

#endif /* MASTER_GUI_H */