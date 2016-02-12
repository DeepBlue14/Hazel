/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RHostInfo.h
 * Author: csrobot
 *
 * Created on February 11, 2016, 5:59 PM
 */

#ifndef R_HOST_INFO_H
#define R_HOST_INFO_H

#include <QHostInfo>

class RHostInfo : public QHostInfo
{
    
public:
    explicit RHostInfo(QHostInfo* parent = 0);
    QString* toString();
    //virtual ~RHostInfo();
    
    
private:
    ;
        
};

#endif /* R_HOST_INFO_H */