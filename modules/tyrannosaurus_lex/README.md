#tyrannosaurus_lex

###**Index**
- [Dependencies](#dependencies)
- [Build & Run](#build_and_run)

###**Dependencies**

Install Code::Blocks IDE: http://www.codeblocks.org/downloads/26

Run the following commands:
```
wget -O - http://llvm.org/apt/llvm-snapshot.gpg.key|sudo apt-key add -

sudo apt-get install clang-3.6
sudo apt-get install clang-3.6-doc
sudo apt-get install libclang-common-3.6-dev
sudo apt-get install libclang-3.6-dev
sudo apt-get install libclang1-3.6
sudo apt-get install libclang1-3.6-dbg
sudo apt-get install libllvm-3.6-ocaml-dev
sudo apt-get install libllvm3.6
sudo apt-get install libllvm3.6-dbg
sudo apt-get install lldb-3.6
sudo apt-get install llvm-3.6
sudo apt-get install llvm-3.6-dev
sudo apt-get install llvm-3.6-doc
sudo apt-get install llvm-3.6-examples
sudo apt-get install llvm-3.6-runtime
sudo apt-get install clang-modernize-3.6
sudo apt-get install clang-format-3.6
sudo apt-get install python-clang-3.6
sudo apt-get install lldb-3.6-dev

sudo apt-get install libedit-dev
sudo apt-get install libncurses-dev
```

**NOTE**
On my lab machine, the program couldn't find stdarg.h or stddef.h, so I ran
```
sudo cp /usr/include/c++/4.8/clang_defaults/stdarg.h /usr/include/stdarg.h
sudo cp /usr/include/c++/4.8/clang_defaults/stddef.h /usr/include/stddef.h
```
This fixed the issue.


###**Build & Run**

**make version**
```
make
cd dist
./tyrannosaurus_lex ./res/test.cpp --
```

**cmake version**
```
cmake ..
make
./tyrannosaurus_lex ../res/test.cpp --
```

**cmake + CodeBlocks**
```
#https://cmake.org/Wiki/CMake_Generator_Specific_Information
cd ~/my_path/tyrannosaurus_lex
cmake . -G "CodeBlocks - Unix Makefiles"
```
- Open it in CodeBlocks IDE
- You can compile it in the CodeBlocks IDE
- Run it by pressing the "run" button
(Try these if the "run" fails to output data)
 - You can parse a different file by going to Project --> Set programs arguments...
 - Select "all" from the menu, check the "This target provides the project's main executable" checkbox
 - in the "Program Arguments", enter "./res/test.cpp --"
 - in the "Host application:" choose "./tyrannosaurus_lex"
 - check the "Run host in terminal" checkbox
 - press "OK"

Ref: http://clang.llvm.org/docs/LibASTMatchersReference.html
