![Logo](https://github.com/DeepBlue14/rqt_ide/blob/master/ide/res/images/icon.jpg)

#**rqt_ide**
*An integrated development environment for ROS*

*Author/Maintainer:* James Kuczynski,  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Undergraduate Researcher,  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Robotics Laboratory][1],  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[University of Massachusetts Lowell][2].  
*Email:* jkuczyns@cs.uml.edu

=====

###**WARNING**
**The project is--and will continue to be--under serious renovation during the month of January 2016, as we have recently put into effect a new coding standard.  Then one which we will be using is a less-rigid subversion of the Lockheed Martin Corporation's C++ Coding Standards for Joint Strike Fighter Air Vehicle System Development and Demonstration Programs.  Thank you for your patience.**


###**Index**

Subcategories in the *"Modules"* list marked with a US flag :us: can be run as independent programs or libraries.

- [Project Synopsis](#project-synopsis)
- [Introduction](#introduction)
- [Modules](#modules)
  - [core](#core) *(core components)*
  - [gui](#gui) *(frontend user interface)*
  - [editor](#editor) *(advanced embedded text ui)*
  - [backend](#backend) *(backend components; FIXME: this module may need to be divided)*
  - [version_control](#version-control) *(version control)*
  - [web_engine](#web-engine) *(for viewing plugins)*
  - [qt_bridge](#qt-bridge) *(allows QT-based programs to be dynamically embedded into the IDE)*
  - [xml](#xml) *(parser for package.xml and manifest.xml files)*
  - [configure](#configure) *(ROS-ification/migration)* :us:
  - [mind_games](#mind-games) *(controls saving/updating physical files and "remembers" previous session data)*
  - [tyrannosaurus_lex](#tyrannosaurus_lex) *(auto-suggest)* :us:
  - [parsnip](#parsnip) *(refactor)*
  - [project_apollo](#project-apollo) *(build/run/debug backend)*
  - [skylab](#skylab) *(GUI for displaying/launching output/terminals--see project_apollo)*
  - [roaring_fork](#roaring-fork) *(std stream text-->adds colors/effects)*
  - [console_color_text](#console-color-text) :us:
  - [uterm](#uterm) *(universal OS terminal)* :us:
  - [bell](#bell) *(custom language)* :us:
  - [help](#help) *(man pages and more)*
- [Dependencies](#dependencies)
- [Install](#install)
- [Future Work](#future-work)

###**Project Synopsis**

This project is an IDE **specifically** for [ROS][3].  It has only been in development for several weeks, so many features have not yet been implemented, or have only been partially been implemented.  Features will (or in some cases already do) include templates for various publishers and subscribers, refactoring, reconfiguring non-ros/rosbuild projects to catkin projects, syntax highlighting, code compilation, debugging and execution, etc.


###**Introduction**

rqt_ide is devided into several main components: the IDE itself, which contains the core elements, custom ROS node templates, etc., and UI, tyrannosaurus_lex, the program which handles the code-competion and refactoring backend, AST building, etc., Output-South, which enables effortless compilation and execution of ROS executable types, and UTerm, a cross-shell terminal which can swap UNIX <--> Windows commands.  rqt_ide may be compiled and run without it.  This program will be intended to run with both ROS 1 and ROS 2.  However, as ROS 2 is stull very much under development, no ROS 2 features, migration, or compatability has been implimented yet.

Since ROS--and robotics in general--covers the entire range from low-level to high-level development, our philosophy is to make this IDE with the maximum flexability.  Components can be modified, added, and removed at will to suit the needs of individual developers.

:skull: :skull: **WARNING: This project is currently pre-alpha, so we do NOT advise attempting to use it yet.** :skull: :skull:


###**Modules**

This project is divided into a series of modules to facilitate easier testing, modification, etc.  This section will probably not be of interest to you unless you wish to modifiy the program.


####**core**

This module contains the core components of the IDE.


####**gui**

Frontend components.

####**editor**

The text-editor is an independent module becuase of the number and complexity of features required.  These include syntax highlighting, underlining of errors, tooltips for reconfiguration of build files, etc.


####**backend**

Backend components, including
- package creation
- file creation
- thread and process controll ("Houston")
- etc.

This module may be split into multiple sub-modules in the future.


####**version_control**

Allows the user to utalize version control systems such as git within the IDE.


####**web_engine**

In order to allow GUI-facilitated instalation of ROS packages/plugins, rqt_ide must be able to query online resources in the form of websites.  This module implements this functionality.


####**xml**

Since ROS utalizes XML in its manifest (package.xml) files, this module handles XML parsing and lexical analysis.


####**configure**

This module implements automated or assistive migration (the later case is the only option currently for make projects) from make, cmake, or rosbuild projects to catkin-style ROS packages.  It also supports partial migration from catkin to the ROS2 format.


####**mind_games**

Mind Games controls saving data to disk.  This includes saving files modified in the GUI, as well as saving data about the last session, so that the next time the program is run it "remembers" which projects/files where open, what user preferences were on, etc.


####**tyrannosaurus_lex**

Tyrannosaurus Lex is an auto-suggest program for the IDE.


####**parsnip**

This module consists of a refactoring program.


####**project_apollo**

This module handles the various types of execution--rosrun, launch, as well as "regular" executions.


####**skylab**

Skylab is the GUI output console and terminal container widget.  It is the frontend of project_apollo (see #project-apollo).


####**roaring_fork**

As the name may suggest, **roaring_fork** involves data streams (the original Roaring Fork is a famous American trout stream).  Specifically, this module is consered with taking string/byte array data which originated in a data stream, and add colors and/or text effects before displaying it in a Qt widget.

NOTE: This differs from #console_color_test in that the later formats code to be printed *in a terminal*, while roaring_fork modifies text *from a stream* to pretty-print in a GUI.


####**console_color_text**

This module handles the colorization of text printed out to the terminal(s).  This module can be used as a stand-alone library as well.  It currently supports the following languages:
- C++
- Java
- Ruby
- Lua
- BASH


####**uterm**

UTerm stands for **U**niversal **Term**inal.  It is a terminal emulator which will translate Windows and UNIX commands.  For example, if you are running it on Windows, and enter a UNIX command, it will run the appropriate Windows variant of this same command.  The reverse senario will also work.


####**Bell**

This module is my attempt to create my own computer language--more for fun then any practical reason.  The grammar takes (in my opinion) the best of C++ and Java.  My trans-compiler converts the Bell files to C++, so it can use any existing C/C++ library.


####**help**

The help module implements a GUI with instructions and hints for using this program, as well as references to online Doxygen-generated documentation.


###**Dependencies**

This project utalizes *(or will utalize)* the follow libraries:
- [ROS][3] >= electric *(tested with indigo)*
- [QT][4] >= 4 *(tested with 4.8 and 5.5)*
- [C++X11][5]-dev libraries *(recomended)*
- [XTerm][6] *(optional)*
- [LLVM/Clang][7] 3.6 *(required for tyrannosaurus_lex only)*


###**Install**

This project is currently pre-alpha, so no installation instructions have been included yet.


###**Future Work**

Since the project is currently pre-alpha, this section is redundent at for the time being.


<!--links-->

[1]: http://robotics.cs.uml.edu/
[2]: http://www.uml.edu/
[3]: http://www.ros.org/
[4]: http://www.qt.io/
[5]: http://en.wikipedia.org/wiki/C%2B%2B11
[6]: http://invisible-island.net/xterm/
[7]: http://llvm.org/

