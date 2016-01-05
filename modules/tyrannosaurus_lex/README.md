
Run the following commands:
```
wget -O - http://llvm.org/apt/llvm-snapshot.gpg.key|sudo apt-key add -
apt-get install clang-3.6 lldb-3.6
apt-get install clang-3.6 clang-3.6-doc libclang-common-3.6-dev libclang-3.6-dev libclang1-3.6 libclang1-3.6-dbg libllvm-3.6-ocaml-dev libllvm3.6 libllvm3.6-dbg lldb-3.6 llvm-3.6 llvm-3.6-dev llvm-3.6-doc llvm-3.6-examples llvm-3.6-runtime clang-modernize-3.6 clang-format-3.6 python-clang-3.6 lldb-3.6-dev

sudo apt-get install libedit-dev
sudo apt-get install libncurses-dev
```

**Run commands:**
```
make
./dist/main src/test.cpp --
```


**NOTE**
On my lab machine, the program couldn't find stdarg.h or stddef.h, so I ran
```
sudo cp /usr/include/c++/4.8/clang_defaults/stdarg.h /usr/include/stdarg.h
sudo cp /usr/include/c++/4.8/clang_defaults/stddef.h /usr/include/stddef.h
```
This fixed the issue.