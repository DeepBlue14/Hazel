#C/C++


###**Build & Run**



####**Build**

compile library (no flags required)
To perform this operation in NetBeans, select "Open Project...", select the "cct" directory, and then press the "build" button.

Link this library as you would any static library.  Here are instructions for doing so with NetBeans:
- Right-click your project directory
- select "Properties"
- "linker"
- at "libraries", select the "..." button
- "add library file..."
- select library file (.a in Linux) "/path/to/UnixConsoleText/uct_cpp/dist/Debug/GNU-Linux-x86/libuct_cpp.a", or something similar
- "ok"
- "Compiler
- at "include directories", select the "..." button
- "add
- select directory containing .h file(s): /path/to/UnixConsoleText/uct_cpp/src
- "ok"


####**Run**

Here is an example program using the UnixConsoleText library.

```cpp
#include <iostream>
#include <UnixConsoleText>

using namespace std;
using namespace uct;


int main(int argc, char** argv)
{

    cout << uct::RED + uct::BOLD + "Hello UnixConsoleText!" << uct::RESET << endl;
    
    return 0;
}
```
