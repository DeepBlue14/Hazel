#include "Highlighter.h"

Highlighter::Highlighter(QTextDocument *parent) : QSyntaxHighlighter(parent)
{
    HighlightingRule rule;

    
    keywordFormat.setForeground(Qt::blue);
    //keywordFormat.setFontWeight(QFont::Bold);
    
    //http://en.cppreference.com/w/cpp/keyword
    QStringList cPlusPlusKeywordPatterns;
    cPlusPlusKeywordPatterns << "alignas"      << "else"            << "requires"
                             << "alignof"      << "enum"             << "return"
                             << "and"          << "explicit"         << "short"
                             << "and_eq"       << "export"           << "signed"
                             << "asm"          << "extern"           << "sizeof"
                             << "auto"         << "false"            << "static"
                             << "bitand"       << "float"            << "static_assert"
                             << "bitor"        << "for"              << "static_cast"
                             << "bool"         << "friend"           << "struct"
                             << "break"        << "goto"             << "switch"
                             << "case"         << "if"               << "template"
                             << "catch"        << "inline"           << "this"
                             << "char"         << "int"              << "thread_local"
                             << "char16_t"     << "long"             << "throw"
                             << "char32_t"     << "mutable"          << "true"
                             << "class"        << "namespace"        << "try"
                             << "compl"        << "new"              << "typedef"
                             << "concept"      << "noexcept"         << "typeid"
                             << "const"        << "not"              << "typename"
                             << "constexpr"    << "not_eq"           << "union"
                             << "const_cast"   << "nullptr"          << "unsigned"
                             << "continue"     << "operator"         << "using"
                             << "decltype"     << "or"               << "virtual"
                             << "default"      << "or_eq"            << "void"
                             << "delete"       << "private"          << "volatile"
                             << "do"           << "protected"        << "wchar_t"
                             << "double"       << "public"           << "while"
                             << "dynamic_cast" << "register"         << "xor"
                                                     << "reinterpret_cast" << "xor_eq";
    QStringList cPlusPlusIdentifiers;
    cPlusPlusIdentifiers     << "override"    << "final";
    
    QStringList cPlusPlusPreprocessorCmds;
    cPlusPlusPreprocessorCmds << "#elif"         << "#ifdef"            << "#include"
                              << "#endif"        << "#ifndef"           << "#line"
                              << "#defined"      << "#define"           << "#error"
                                                      << "#undef"            << "#pragma";
    
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
    
    keywordFormat.setForeground(Qt::red);
    //keywordFormat.setBackground(Qt::darkYellow);
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
            int length = expression.matchedLength();
            setFormat(index, length, rule.format);
            index = expression.indexIn(text, index + length);
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