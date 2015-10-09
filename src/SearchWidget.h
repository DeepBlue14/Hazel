/* 
 * File:   SearchGui.h
 * Module: Run
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on June 6, 2015, 3:38 PM
 */

#ifndef SEARCH_WIDGET_H
#define	SEARCH_WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QString>
#include <QVector>
#include <QPair>

#include <iostream>

#include "SearchType.h"

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

class SearchWidget : public QLineEdit
{
    Q_OBJECT
            
    private:
        QString* searchInputStrPtr;
        //QVector<QPair<int, int>*>* searchWordLocVec;
    
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        SearchWidget(QWidget* parent = 0);
        
        /**
         * Searches the file connected to the tab currently being focused on
         * for all instances of the given word.
         * 
         * @param word the word to search for.
         * @return a vector of locations where the word was found (line number, 
         *         collumn number).
         */
        QVector<QPair<int, int>*>* searchCurrFileFor(QString* word);
        
        /**
         * Searches all files open in tabs in the IDE for all instances of the
         * given word.
         * 
         * @param word the word to search for.
         * @return 
         */
        QVector<SearchType*>* searchAllOpenFilesFor(QString* word);
        
        /**
         * Searches all source files in the entire project for all instances of
         * the given word.
         * 
         * @param word the word to search for.
         * @return 
         */
        QVector<SearchType*>* searchAllSrcFilesInProjFor(QString* word);
        
        /**
         * Searches all files (NOT including object files or binary files) for
         * all instances of the given word.
         * 
         * @param word the word to search for.
         * @return 
         */
        QVector<SearchType*>* searchAllFilesInProjFor(QString* word);
        
        /**
         * 
         */
        void setSearchInputStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* getSearchInputStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * 
         */
        ~SearchWidget();
};

#endif	/* SEARCH_WIDGET_H */