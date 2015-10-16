/* 
 * File:   Inventory.h
 * Module: Reconfig
 * Author: james
 * Email: 
 * File Description: This class searches through the file tree of the old,
 *                   original project, and records where it found relevant
 *                   files.
 * 
 * Find:
 *      Source files
 *      make/cmake files to be swapped
 * 
 * Assumptions:
 * 
 * Gottchas:
 *      New locs
 *      Find src files from the references to them in the make files? but
 *      what about headers?
 *
 * Created on October 15, 2015, 6:56 PM
 */

#ifndef INVENTORY_H
#define	INVENTORY_H

#include <QObject>
#include <QString>
#include <QFile>
#include <QVector>

class Inventory : QObject
{
    Q_OBJECT
            
    private:
        /**
         * Each inner vector will contain a list of source files found at the
         * same location.
         */
        //QVector<QVector<QFile*>*>* srcFilePtrVecPtrVecPtr;
        QVector<QFile*>* xmakeFilePtrVecPtr;/** find all make/cmake files */
        
    public:
        Inventory(QObject* parent = 0);
        QString* toString();
        ~Inventory();
};

#endif	/* INVENTORY_H */