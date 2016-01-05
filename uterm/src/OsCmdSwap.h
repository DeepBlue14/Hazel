/* 
 * File:   OsCmdSwap.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class places the commands native to the operating
 *                   system are in the "first" position.
 *
 * Created on July 27, 2015, 10:08 PM
 */

#ifndef OS_CMD_SWAP_H
#define	OS_CMD_SWAP_H

#include <QVector>
#include <QString>
#include <QPair>

#include <iostream>

using std::cout;
using std::endl;

class OsCmdSwap
{
    
public:
    explicit OsCmdSwap();
    QString* swap(QString* userCmd);
    void setParallels(QVector<QPair<QString*, QString*>*>* parallels);
    QVector<QPair<QString*, QString*>*>* getParallels();
    virtual ~OsCmdSwap();

    
private:
    QVector<QPair<QString*, QString*>*>* parallels/*VecPtrPairPtrStrPtr*/;


};

#endif	/* OS_CMD_SWAP_H */