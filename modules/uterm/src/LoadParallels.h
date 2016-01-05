/* 
 * File:   LoadParallels.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class loads the parallel commands from an XML file.
 *
 * Created on July 22, 2015, 6:45 PM
 */

#ifndef LOADPARALLELS_H
#define	LOADPARALLELS_H

#include <QWidget>
#include <QVector>
#include <QPair>
#include <QString>
#include <QFile>
#include <QXmlStreamReader>

#include <iostream>

using std::cout;
using std::cerr;
using std::endl;

class LoadParallels : public QWidget
{
    Q_OBJECT

public:
    explicit LoadParallels(QWidget* parent = 0);
    void load(QString* osStrPtr);
    QVector<QPair<QString*, QString*>*>* getDat();
    QString* toString();
    virtual ~LoadParallels();
    
    
private:
    QVector<QPair<QString*, QString*>*>* parallels/*VecPtrPairPtrStrPtr*/;


};

#endif	/* LOADPARALLELS_H */