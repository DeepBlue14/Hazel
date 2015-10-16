/* 
 * File:   SearchType.h
 * Module: Run
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This custom type contains a string (the abs path to a
 *                   file, and a QPair<int, int>. The type is only used by
 *                   file/class SearchWidget
 *      
 *
 * Created on August 21, 2015, 2:51 PM
 */

#ifndef SEARCH_TYPE_H
#define	SEARCH_TYPE_H

#include <QString>
#include <QPair>

class SearchType
{
    private:
        QString* absPathToFileStrPtr;
        int lineNum;
        int colNum;
        
    public:
        SearchType();
        void setAbsPathToFile(QString* absPathToFileStrPtr);
        QString* getAbsPathToFile(QString* absPathToFileStrPtr);
        void setLineNum(int lineNum);
        int getLineNum();
        void setColNum(int colNum);
        int getColNum();
        QString* toString();
        ~SearchType();
};

#endif	/* SEARCH_TYPE_H */