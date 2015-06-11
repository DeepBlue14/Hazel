/* 
 * File:   highlighter.h
 * Author: james
 *
 * Created on April 20, 2015, 11:41 PM
 */

#ifndef HIGHLIGHTER_H
#define HIGHLIGHTER_H

#include <QtGui>
#include <QSyntaxHighlighter>
#include <QHash>
#include <QTextCharFormat>

#include <iostream>

using namespace std;

class QTextDocument;

class Highlighter : public QSyntaxHighlighter
{
    Q_OBJECT

private:
    struct HighlightingRule
    {
        QRegExp pattern;
        QTextCharFormat format;
    };
    QVector<HighlightingRule> highlightingRules;

    QRegExp commentStartExpression;
    QRegExp commentEndExpression;

    QTextCharFormat keywordFormat;
    QTextCharFormat classFormat;
    QTextCharFormat singleLineCommentFormat;
    QTextCharFormat multiLineCommentFormat;
    QTextCharFormat quotationFormat;
    QTextCharFormat functionFormat;
     
protected:
    void highlightBlock(const QString &text);
     
public:
    Highlighter(QTextDocument* parent = 0);
};

#endif /* HIGHLIGHTER_H */