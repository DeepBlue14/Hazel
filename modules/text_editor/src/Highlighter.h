/* 
 * File:   Highlighter.h
 * Module: text_editor
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This module highlights the line the cursor is on.
 *
 * Created on April 20, 2015, 11:41 PM
 * Last Modified: 1/13/2016
 */

#ifndef HIGHLIGHTER_H
#define HIGHLIGHTER_H

#include <QtGui>
#include <QSyntaxHighlighter>
#include <QHash>
#include <QTextCharFormat>
#include <QString>

#include <iostream>

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using std::cout;
using std::endl;

class QTextDocument;

class Highlighter : public QSyntaxHighlighter
{
    Q_OBJECT
     
public:
    /**
     * Constructor.
     * 
     * @param parent reference to parent type.
     */
    explicit Highlighter(QTextDocument* parent = 0);
    
    /**
     * 
     */
    void loadLang();
    
    
    void addTempTarget(const QString& text);
    
    /**
     * Classic toString method.
     * 
     * @return class data. 
     */
    QString* toString();
    
    /**
     * Destructor.
     */
    virtual ~Highlighter();
    
    
protected:
    /**
     * 
     * 
     * @param text
     */
    void highlightBlock(const QString& text);

    
private:
    struct HighlightingRule
    {
        QRegExp pattern;
        QTextCharFormat format;
    };
    QVector<HighlightingRule> highlightingRules;

    HighlightingRule rule;
    
    QRegExp commentStartExpression;
    QRegExp commentEndExpression;

    QTextCharFormat keywordFormat;
    QTextCharFormat classFormat;
    QTextCharFormat singleLineCommentFormat;
    QTextCharFormat multiLineCommentFormat;
    QTextCharFormat quotationFormat;
    QTextCharFormat functionFormat;
    
    
};

#endif /* HIGHLIGHTER_H */