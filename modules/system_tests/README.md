#system_tests

=====

###Project Synopsis

Tests system calls, launching processes, etc.  This is important since ROS depends on a significant number of environment variables and other configuration-specific details.

Added ```source /opt/ros/indigo/setup.bash``` to /home/james/netbeans-8.1/etc/netbeans.conf,
and change the .desktop launcher:
```Exec=/bin/sh "/home/james/netbeans-8.1/bin/netbeans"```
to
```Exec=/bin/bash "/home/james/netbeans-8.1/bin/netbeans"```

I got partial success.  However, this should be set to the ....../devel/setup.bash of the **current** catkin workspace.
