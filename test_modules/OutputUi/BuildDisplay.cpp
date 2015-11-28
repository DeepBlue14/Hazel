#include "BuildDisplay.h"


BuildDisplay::BuildDisplay(QMainWindow* parent) : QMainWindow(parent)
{
    setup();
    
    this->setCentralWidget(tabWidgetPtr);
}


void BuildDisplay::setup()
{
    tabWidgetPtr = new QTabWidget();
    textEditPtr = new QTextEdit();
    textEditPtr->setHtml("<p>Running: catkin_make<br>"
            "Source space: /home/james/catkin_ws/src<br>"
            "Build space: /home/james/catkin_ws/build<br>"
            "Devel space: /home/james/catkin_ws/devel<br>"
            "Install space: /home/james/catkin_ws/install<br>"
            "<font color=\"blue\">####<br>"
            "#### Running command: <b>\"make cmake_check_build_system\"</b> in <b>\"/home/james/catkin_ws/build\"</b><br>"
            "####</font><br>"
            "-- Using CATKIN_DEVEL_PREFIX: /home/james/catkin_ws/devel<br>"
            "-- Using CMAKE_PREFIX_PATH: /home/james/catkin_ws/devel;/opt/ros/indigo<br>"
            "-- This workspace overlays: /home/james/catkin_ws/devel;/opt/ros/indigo<br>"
            "-- Using PYTHON_EXECUTABLE: /usr/bin/python<br>"
            "-- Using Debian Python package layout<br>"
            "-- Using empy: /usr/bin/empy<br>"
            "-- Using CATKIN_ENABLE_TESTING: ON<br>"
            "-- Call enable_testing()<br>"
            "-- Using CATKIN_TEST_RESULTS_DIR: /home/james/catkin_ws/build/test_results<br>"
            "-- Found gtest sources under '/usr/src/gtest': gtests will be built<br>"
            "-- Using Python nosetests: /usr/bin/nosetests-2.7<br>"
            "-- catkin 0.6.16<br>"
            "-- BUILD_SHARED_LIBS is on<br>"
            "-- <font color=\"purple\"> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~</font><br>"
            "-- <font color=\"purple\"> ~~ </font> traversing 1 packages in topological order:</font><br>"
            "-- <font color=\"purple\"> ~~ </font> - <font color=\"blue\"><b>turtlebot_teleop_sub</b></font><br>"
            "-- <font color=\"purple\"> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~</font><br>"
            "-- <font color=\"green\"><b>+++</b></font> processing catkin package: '<font color=\"blue\"><b>turtlebot_teleop_sub</b></font>'<br>"
            "-- <font color=\"blue\"><b>==></b></font> add_subdirectory(turtlebot_teleop_sub)<br>"
            "-- Using these message generators: gencpp;genlisp;genpy<br>"
            "-- Configuring done<br>"
            "-- Generating done<br>"
            "-- Build files have been written to: /home/james/catkin_ws/build<br>"
            "<font color=\"blue\"><b>####</b></font><br>"
            "<font color=\"blue\">#### Running command:<b>\"make -j4 -l4\"</b> in <b>\"/home/james/catkin_ws/build\"</b></font><br>"
            "<font color=\"blue\"><b>####</b></font><br>"
            "<font color=\"purple\"><b>Scanning dependencies of target turtlebot_teleop_sub<b></font><br>"
            "[100%] [100%] <font color=\"green\">Building CXX object turtlebot_teleop_sub/CMakeFiles/turtlebot_teleop_sub.dir/src/DriveRobot.cpp.o</font><br>"
            "<font color=\"green\">Building CXX object turtlebot_teleop_sub/CMakeFiles/turtlebot_teleop_sub.dir/src/DriveRobotMain.cpp.o</font><br>"
            "<font color=\"red\"><b>Linking CXX executable /home/james/catkin_ws/devel/lib/turtlebot_teleop_sub/turtlebot_teleop_sub</b></font><br>"
            "[100%] Built target turtlebot_teleop_sub</p>");
    runDisplayPtr = new RunDisplay();
    tabWidgetPtr->addTab(textEditPtr, "Build");
    tabWidgetPtr->addTab(runDisplayPtr, "Run");
}


QString* BuildDisplay::toString()
{
    return new QString("***METHOD STUB***");
}


BuildDisplay::~BuildDisplay()
{
    ;
}