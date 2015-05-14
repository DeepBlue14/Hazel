- file/class Directories.cpp only has a framework so far
- clean up splitters in CentralGui.cpp *(right now they are declared as well as instantiated in that class, instead of declared in header file as instance variables)*.
- use ```size()``` instead of ```length()```, since the later only works for QT > 4.8


####**Nameing Conventions**

**STD Types:**
- int = int
- float = flt
- char = ch
- string = str
- address = addr
- Pointer = ptr

**QT Types:**
- QLabel = Lbl
- QLineEdit = Le
- QPushButton = Pb
- 
