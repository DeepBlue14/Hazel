**TODO**
*List of features not yet fully implemented*

- ???use a UniversalTypes file???
- use (**const** Obj obj) for params which will NOT be changed by the function
- add using...see ThreadTests
- add pre and post conditions / assertions
- all classes w/ virtual function **shall** have a *virtual* destructor
- copy SIGNAL stuff (Configure::CustomPkgsGui, Configure::ConvOptPage) --> (ide::...)
- make ALL constructors which do type conversions explicit
- Read this: https://google.github.io/styleguide/cppguide.html and make static vars constexpr
- Make QCellWidget (module Configure) more abstract
- NewProjectGui has stuff that relies on paths; test if this is still valid
- Finish implementing RosReconfig frontend
- Implement code folding: https://ui.netbeans.org/docs/ui/code_folding/cf_uispec.html
- Implement xml parsing: http://3gfp.com/2015/01/qt-xml-parsing-continued/
- Implement CMakeLists parsing/insertion
- Finish modifing "run" button backend; see: http://www.walletfox.com/course/customqtoolbutton.php
- Finish messing with the FileTreeGui module
- Un-hardcode @ NewFilePage_3 "add" slot
- Implement Tyranosaurus Lex
- Implement threading in all modules (see ThreadingTests)


Directory Hierarchy:

rqt_ide----------------------
      |         |
      0.1       docs
         |
         gcc_64




modules/hierarchy:
- core
- output
- tyrannosaurus_lex
- parsnip
- uterm
- cct
- rqt_bridge
- configure
    - roscpp
    - rospy
    - roslisp
    - rosjava
    -----------
    - make
    - cmake
    - rosbuild
    - catkin
    - ROS2
