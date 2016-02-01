#include "Highlighter.h"

Highlighter::Highlighter(QTextDocument *parent) : QSyntaxHighlighter(parent)
{
    //HighlightingRule rule;

    
    keywordFormat.setForeground(Qt::blue);
    //keywordFormat.setFontWeight(QFont::Bold);
    
    //http://en.cppreference.com/w/cpp/keyword
    QStringList cPlusPlusKeywordPatterns;
    cPlusPlusKeywordPatterns << "\\balignas\\b"      << "\\belse\\b"            << "\\brequires\\b"
                             << "\\balignof\\b"      << "\\benum\\b"             << "\\breturn\\b"
                             << "\\band\\b"          << "\\bexplicit\\b"         << "\\bshort\\b"
                             << "\\band_eq\\b"       << "\\bexport\\b"           << "\\bsigned\\b"
                             << "\\basm\\b"          << "\\bextern\\b"           << "\\bsizeof\\b"
                             << "\\bauto\\b"         << "\\bfalse\\b"            << "\\bstatic\\b"
                             << "\\bbitand\\b"       << "\\bfloat\\b"            << "\\bstatic_assert\\b"
                             << "\\bbitor\\b"        << "\\bfor\\b"              << "\\bstatic_cast\\b"
                             << "\\bbool\\b"         << "\\bfriend\\b"           << "\\bstruct\\b"
                             << "\\bbreak\\b"        << "\\bgoto\\b"             << "\\bswitch\\b"
                             << "\\bcase\\b"         << "\\bif\\b"               << "\\btemplate\\b"
                             << "\\bcatch\\b"        << "\\binline\\b"           << "\\bthis\\b"
                             << "\\bchar\\b"         << "\\bint\\b"              << "\\bthread_local\\b"
                             << "\\bchar16_t\\b"     << "\\blong\\b"             << "\\bthrow\\b"
                             << "\\bchar32_t\\b"     << "\\bmutable\\b"          << "\\btrue\\b"
                             << "\\bclass\\b"        << "\\bnamespace\\b"        << "\\btry\\b"
                             << "\\bcompl\\b"        << "\\bnew\\b"              << "\\btypedef\\b"
                             << "\\bconcept\\b"      << "\\bnoexcept\\b"         << "\\btypeid\\b"
                             << "\\bconst\\b"        << "\\bnot\\b"              << "\\btypename\\b"
                             << "\\bconstexpr\\b"    << "\\bnot_eq\\b"           << "\\bunion\\b"
                             << "\\bconst_cast\\b"   << "\\bnullptr\\b"          << "\\bunsigned\\b"
                             << "\\bcontinue\\b"     << "\\boperator\\b"         << "\\busing\\b"
                             << "\\bdecltype\\b"     << "\\bor\\b"               << "\\bvirtual\\b"
                             << "\\bdefault\\b"      << "\\bor_eq\\b"            << "\\bvoid\\b"
                             << "\\bdelete\\b"       << "\\bprivate\\b"          << "\\bvolatile\\b"
                             << "\\bdo\\b"           << "\\bprotected\\b"        << "\\bwchar_t\\b"
                             << "\\bdouble\\b"       << "\\bpublic\\b"           << "\\bwhile\\b"
                             << "\\bdynamic_cast\\b" << "\\bregister"         << "\\bxor\\b"
                             << "\\breinterpret_cast\\b" << "\\bxor_eq";
    QStringList cPlusPlusIdentifiers;
    cPlusPlusIdentifiers     << "\\boverride\\b"    << "\\bfinal\\b";
    
    QStringList cPlusPlusPreprocessorCmds;
    cPlusPlusPreprocessorCmds << "\\b#elif\\b"         << "\\b#ifdef\\b"            << "\\b#include\\b"
                              << "\\b#endif\\b"        << "\\b#ifndef\\b"           << "\\b#line\\b"
                              << "\\b#defined\\b"      << "\\b#define\\b"           << "\\b#error\\b"
                              << "#undef\\b"           << "\\b#pragma\\b";
    
    //QStringList cmakeKeywords;
    //cmakeKeywords            << "cmake_minimum_requried" << "VERSION" << "project"  
    //                         << "find_package" << "add_executable" << "target_link_libraries";
    
    QStringList javaKeywordPatterns;
    javaKeywordPatterns      << "abstract"      << "assert"           << "boolean"
                             << "break"         << "byte"             << "case"
                             << "catch"         << "char"             << "class"
                             << "const"         << "continue"         << "default"
                             << "do"            << "double"           << "else"
                             << "enum"          << "extends"          << "final" 
                             << "finally"       << "float"            << "for"
                             << "goto"          << "if"               << "implements"
                             << "import"        << "instanceof"       << "int"
                             << "interface"     << "long"             << "native" 
                             << "new"           << "package"          << "private"
                             << "protected"     << "public"           << "return"
                             << "short"         << "static"           << "strictfp"
                             << "super"         << "switch"           << "synchronized"
                             << "this"          << "throw"            << "throws"
                             << "transient"     << "try"              << "void"
                             << "volatile"      << "while";
            
    QStringList pythonKeywordPatterns;
    pythonKeywordPatterns    << "False"         << "None"             << "True"
                             << "and"           << "as"               << "assert"
                             << "break"         << "class"            << "continue"
                             << "def"           << "del"              << "elif"
                             << "else"          << "except"           << "finally"
                             << "for"           << "from"             << "global"
                             << "if"            << "import"           << "in"
                             << "is"            << "lambda"           << "nonlocal"
                             << "not"           << "or"               << "pass"
                             << "raise"         << "return"           << "try"
                             << "while"         << "with"             << "yield";
    
    
    QStringList mirrorKeyCharPatterns;
    mirrorKeyCharPatterns    << "\\("             << "\\{"                << "\\["
                             << "\\)"             << "\\}"                << "\\]";
            
            
    foreach (const QString &pattern, cPlusPlusKeywordPatterns)
    {
        rule.pattern = QRegExp(pattern);
        rule.format = keywordFormat;
        highlightingRules.append(rule);
    }
    
    keywordFormat.setForeground(Qt::blue);
    //keywordFormat.setFontWeight(QFont::Bold);
    foreach (const QString &pattern, cPlusPlusIdentifiers)
    {
        rule.pattern = QRegExp(pattern);
        rule.format = keywordFormat;
        highlightingRules.append(rule);
    }
    
    QColor pur(200, 200, 100);
    keywordFormat.setForeground(pur);
    //keywordFormat.setFontWeight(QFont::Bold);
    foreach (const QString &pattern, cPlusPlusPreprocessorCmds)
    {
        rule.pattern = QRegExp(pattern);
        rule.format = keywordFormat;
        highlightingRules.append(rule);
    }
    
    keywordFormat.setForeground(Qt::darkYellow);
    //keywordFormat.setBackground(Qt::yellow);
    //keywordFormat.setFontWeight(QFont::Bold);
    foreach (const QString &pattern, mirrorKeyCharPatterns)
    {
        rule.pattern = QRegExp(pattern);
        rule.format = keywordFormat;
        highlightingRules.append(rule);
    }
    

    //classFormat.setFontWeight(QFont::Bold);
    classFormat.setForeground(Qt::darkMagenta);
    
    //find QT specific types (or at least type beginning with 'Q').
    rule.pattern = QRegExp("Q[A-Za-z]+");
    rule.format = classFormat;
    highlightingRules.append(rule);

    singleLineCommentFormat.setForeground(Qt::blue);
    rule.pattern = QRegExp("//[^\n]*");
    rule.format = singleLineCommentFormat;
    highlightingRules.append(rule);

    multiLineCommentFormat.setForeground(Qt::blue);

    quotationFormat.setForeground(Qt::red);
    rule.pattern = QRegExp("\".*\"");
    rule.format = quotationFormat;
    highlightingRules.append(rule);

    //functionFormat.setFontItalic(true);
    functionFormat.setFontWeight(QFont::Bold);
    //QColor purple(147, 112, 219);
    //functionFormat.setForeground(purple);
    rule.pattern = QRegExp("[A-Za-z0-9_]+(?=\\()");
    rule.format = functionFormat;
    highlightingRules.append(rule);

    commentStartExpression = QRegExp("/\\*");
    commentEndExpression = QRegExp("\\*/");
}


void Highlighter::highlightBlock(const QString &text)
{
    foreach (const HighlightingRule &rule, highlightingRules)
    {
        QRegExp expression(rule.pattern);
        int index = expression.indexIn(text);
        while (index >= 0)
        {
            cout << cct::boldRed("stuck in an infinite loop @ text_editor::Highlighter::highlightBlock(...)") << endl;
            int length = expression.matchedLength();
            setFormat(index, length, rule.format);
            index = expression.indexIn(text, index + length);
            cout << "index: " << index << endl;
        }
    }
    setCurrentBlockState(0);

    int startIndex = 0;
    if(previousBlockState() != 1)
        startIndex = commentStartExpression.indexIn(text);

    while (startIndex >= 0)
    {
        int endIndex = commentEndExpression.indexIn(text, startIndex);
        int commentLength;
        if (endIndex == -1)
        {
            setCurrentBlockState(1);
            commentLength = text.length() - startIndex;
        }
        else
        {
            commentLength = endIndex - startIndex
                            + commentEndExpression.matchedLength();
        }
        setFormat(startIndex, commentLength, multiLineCommentFormat);
        startIndex = commentStartExpression.indexIn(text, startIndex + commentLength);
    }
}


void Highlighter::addTempTarget(const QString& text)
{
    cout << "@ text_editor::Highlighter::addTempTarget(...)" << endl;
    keywordFormat.setForeground(Qt::red);
    rule.pattern = QRegExp(text);
    rule.format = keywordFormat;
    highlightingRules.append(rule);
}


QString* Highlighter::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


Highlighter::~Highlighter()
{
    ;
}