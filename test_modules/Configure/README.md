#Configure

This module implements automated or assistive migration (the later case is the only option currently for make projects) from make, cmake, or rosbuild projects to catkin-style ROS packages.  It also supports partial migration from catkin to the ROS2 format.

**WARNING: Most of this module is not even in development phase yet, so DO NOT USE!**

**Why "Assistive"?**

You may find it strange that "assistive" is currently the only mode available for convertion form GNU Make to CMake/ROS.  However, this in nessisary for several reasons.  Make makes system-based assumtions.  CMake, on the other hand, is a cross-platform build system, adding a level of complexity.  It should be noted that CMake is not designed as a substitute for Make, but rather *to add a level of abstraction to the build process*.  Hence, not only would it be difficult to create a automated Make --> CMake converter, but take away a measure of choice from the developer.


**Configure**
    - make      <--> catkin
    - cmake     <--> catkin
    - rosbuild  <--> catkin
    - catkin    <--> ROS2
    
   
**Cascading Reconfiguration Tree**
make
   |
   cmake------------
       |           |
       rosbuild OR catkin
              |         |
              catkin    ROS2
                   |
                   ROS2
                    
                    

-------------------------------------------------------

**catkin --> ROS2**

- ...
- ...


**rosbuild --> catkin**
- ...
- ...


**cmake --> catkin**
- map project structure and contents
- find CMakeLists.txt files
- find source files
- insert ROS lines to CMakeLists.txt files
- insert package.xml files @ locations of CMakeLists.txt files
- insert ROS lines to source files
- generate Ros_ip_bridge files @ source file locations


**make --> cmake**
- map project structure and contents
- find Makefile files
- find source files
- generate CMakeLists.txt files && convert Makefile --> CMakeLists.txt
- Now we are cmake-ed




