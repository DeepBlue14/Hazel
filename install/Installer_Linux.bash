#!/bin/bash

#####################################################################
# File: Installer_Linux.bash                                        #
# Author: James Kuczynski                                           #
# Email: jkuczyns@cs.uml.edu                                        #
# File Description: Installer script for RIDE.                      #
#                                                                   #
# Reference: http://tldp.org/HOWTO/Bash-Prog-Intro-HOWTO.html#toc7  #
#                                                                   #
# Last Modified June 16, 2015 at 6:00pm                             #
#                                                                   #
#####################################################################




## Intro
echo "Welcome to the RIDE installer."
echo "You will be allowed to specify where certain tasks take place."
echo "However, we strongly suggest that you use the defaults, since"
echo "these have recieved the most vigorous testing."


## Array of ros distros which are catkin compatible
echo "Searching for ROS..."
ROS_DISTROS[0]="fuerte"
ROS_DISTROS[1]="groovy"
ROS_DISTROS[2]="hydro"
ROS_DISTROS[3]="indigo"
ROS_DISTROS[4]="jade"


## Search /opt/ros
ROS_INSTALLED=( $(ls /opt/ros) )

## Compare contents of /opt/ros with catkin compatible ros distros
D=0;
for i in $(ls /opt/ros); do
    C=0;
    for i in `seq 1 ${#ROS_DISTROS[@]}`; do
            if [ ${ROS_DISTROS[C]} = ${ROS_INSTALLED[D]} ]; then
                echo "Found valid ROS distro installed."
            fi
        ((C++))
    done
    C=0
    ((D++))
done


## Install dependencies 
echo "Would you like this script to install the dependencies? (Y/n)"
read CHOICE

if [ "$CHOICE" == "Y" ] || ["$CHOICE" == "y" ] || [ "$CHOICE" == "" ]; then
    echo "Installing QT4..."
    sudo apt-get install libqt4-*
    echo "Installing Xll..."
    sudo apt-get install libx11-dev
    echo "Installing XTerm...."
    sudo apt-get install xterm
fi


## Install RIDE
echo "Where would you like to install the package? (default: /usr)"
read CHOICE

if [ "$CHOICE" == "" ]; then
    echo "Installing to /usr..."
    cd /usr
    git clone https://github.com/DeepBlue14/ride.git
    xrdb ./ride/config/.Xresources
fi


## Choice location of tmp file activity see (RProcess) documentation for
## more details
echo "RIDE needs to create temporary files during use (which it immediately deletes)."
echo "Were would you like this activity to take place? (default: /tmp)"
echo "(NOTE: this action currently has no effect; the default will be used,"
echo "regardless of what you enter)"
read CHOICE
# write it to a tmp file, which RIDE will read, destroy, and add to configurations file.



## Create destkop shortcut
echo "Would you like to create a desktop shortcut? (Y/n)"
read CHOICE

if [ "$CHOICE" == "Y" ] || [ "$CHOICE" == "y" ] || [ "$CHOICE" == "" ]; then
    if [ perl < /dev/null > /dev/null 2>&1 ]; then
        echo "Perl instalation found"
    else
        echo "Perl must be installed for this action to take place."
        echo "Would you like it to be installed? (Y/n)"
        read CHOICE
        if [ "$CHOICE" == "Y" ] || [$"CHOCIE" == "y" ] || [ "$CHOICE" == "" ]; then
            sudo apt-get install perl
        else
            break; # will this actually break?
        fi
    fi
    
    perl -pi -e 's\path\$CHOICE/g' ~/ride/install.Ride.desktop
    mv ./ride/install/Ride.desktop ~/Desktop/Ride.desktop
fi    


##
echo "Installation complete!"

