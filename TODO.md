**TODO**
*List of features not yet fully implemented*


- Finish implementing RosReconfig frontend
- Implement code folding: https://ui.netbeans.org/docs/ui/code_folding/cf_uispec.html
- Implement warning/error
- Implement movable widgets: http://doc.qt.io/qt-5/qtwidgets-mainwindows-dockwidgets-example.html
- Implement xml parsing: http://3gfp.com/2015/01/qt-xml-parsing-continued/
- Implement CMakeLists parsing/insertion
- Finish modifing "run" button; see: http://www.walletfox.com/course/customqtoolbutton.php
& finish refactoring the "master" files (have separate master actions for toolbar?)
- Finish messing with the FileTreeGui module
- Un-hardcode @ NewFilePage_3 "add" slot
- Implement Tyranosaurus Lex
- Add debug toolbar (connected to output widget?)
- For pkg_manager on RIDE, use QFuture<> thread



**Notes**
MasterGui->passMasterTabWidgetPtr ---> CentralGui->passMasterTabWidgetPtr ---> FileTreeGui->setMasterTabWidgetPtr()
