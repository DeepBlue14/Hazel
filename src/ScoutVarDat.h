/* 
 * File:   ScoutVarDat.h
 * Author: James Kuczysnki
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 2, 2015, 11:33 PM
 */

#ifndef SCOUT_VAR_DAT_H
#define	SCOUT_VAR_DAT_H

#include <QWidget>
#include <QString>

class ScoutVarDat : public QWidget
{
    private:
        QString* varNmStrPtr;
        QString* varTypeStrPtr;
        
    public:
        ScoutVarDat(QWidget* parent = 0);
        void setVarNmStrPtr(QString* varNmStrPtr);
        QString* getVarNmStrPtr();
        void setVarTypeStrPtr(QString* varTypeStrPtr);
        QString* getVarTypeStrPtr();
        QString* toString();
        ~ScoutVarDat();
};

#endif	/* SCOUTVARDAT_H */