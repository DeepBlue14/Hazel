####**Naming Conventions**

Alternatively, you may append the whole name off the type to the variable.  For other types not mentioned here, use a similar process as shown below (i.e. append a 2-4 character abbreviation to the end of the variable name) or use the aforementioned method.  Thus, for example,
a variable of type QVector<QString*>* could be named userNameStrPtrVecPtr.  Yeah, it's sort of long, but not nearly as bad as it would be if we were using Hungarian notation.

|  Data Type           | Convention | Library |
|:--------------------:|:----------:|:-------:|
| ```int```            | Int        | *(STL)* |
| ```float```          | Flt        | *(STL)* |
| ```double```         | Dbl        | *(STL)* |
| ```string```         | Str        | *(STL)* |
| ```pointer```        | Ptr        | *(STL)* |
| ```vector<string>``` | StrVec     | *(STL)* |
| ```QLabel```         | Lbl        | *(QT)*  |
| ```QLineEdit```      | Le         | *(QT)*  |
| ```QComboBox```      | Cb         | *(QT)*  |
| ```QTextEdit```      | Te         | *(QT)*  |
| ```QPushButton```    | Pb OR Btn  | *(QT)*  |
| ```QVector```        | Vec        | *(QT)*  |
| ```QStringList```    | StrLst     | *(QT)*  |
| ```QString```        | Str        | *(QT)*  |
| ```QHBoxLayout```    | HLay       | *(QT)*  |
| ```QVBoxLayout```    | VLay       | *(QT)*  |
| ```QGridLayout```    | GLay       | *(QT)*  |
| ```QFormLayout```    | FLay       | *(QT)*  |
| ```QAction```        | Act        | *(QT)*  |
| ```QRadioButton```   | Rb         | *(QT)*  |
| ```QDir```           | Dir        | *(QT)*  |
| ```QFile```          | File       | *(QT)*  |
| ```QProcess```       | Process    | *(QT)*  |

- Counters may consist of a single character.  Otherwise, they should end with the word "count".
- File names should begin with a capital letter.
- Class names should be the same as the file name.
- Do **NOT** put method bodies in header files.
- Do **NOT** put multiple classes in the same file.
- Slots: ```handle[name of variable]Slot()```
- Signals: ```handle[name of variable]Signal()```

**Structure of Frontend class:

```C++
private:
    //QT GUI stuff
    //Layout stuff
    //Variables which will be set/get

private slots:
    ;

public:
    ;
```
