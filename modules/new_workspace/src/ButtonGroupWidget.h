/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ButtonGroupWidget.h
 * Author: James
 * Email:
 * File Description: This widget is passed at QButtonGroup, and it inserts the
 *                   buttons of the group into this.  This is useful because
 *                   you cannot put a QButtonGroup directly into a layout
 *                   (you have to put the individual buttons into the layout).
 *                   See new_workspace::NewWorkspacePage_1 to see an example
 *                   of it in action.
 * 
 * Ref: http://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
 *
 * Created on January 28, 2016, 7:15 PM
 */

#ifndef BUTTON_GROUP_WIDGET_H
#define BUTTON_GROUP_WIDGET_H

#include <QWidget>
#include <QButtonGroup>
#include <QRadioButton>
#include <QVector>
#include <QString>
#include <QVBoxLayout>

template<class AbsBtnType>
class ButtonGroupWidget : public QWidget
{
//    Q_OBJECT
            
public:
    explicit ButtonGroupWidget(QWidget* parent = 0);
    ButtonGroupWidget(QList<AbsBtnType*> btnLst, QWidget* parent = 0);
    void setButtonGroup(QList<AbsBtnType*> btnLst);
    QButtonGroup* getButtonGroup();
    QString* toString();
    virtual ~ButtonGroupWidget();
        
private:
    ;
    QVBoxLayout* outerLayout;

    
};

#include "ButtonGroupWidget.tpp"

#endif /* BUTTON_GROUP_WIDGET_H */