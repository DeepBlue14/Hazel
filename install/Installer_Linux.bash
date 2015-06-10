#########################################################
# File: Installer_Linux.bash
# Author: James Kuczynski
# Email: jkuczyns@cs.uml.edu
# File Description: Installer script for RIDE.
#
# Last Modified 06/10/2015
#
#########################################################

#!/bin/bash


#
echo "Would you like this script to install the dependencies? (Y/n)"
read CHOICE

if [ "$CHOICE" == "Y" ] || ["$CHOICE" == "y" ] || [ "$CHOICE" == "" ]; then
    echo "Installing QT4..."
    sudo apt-get install libqt4-*
    echo "Installing XTerm...."
    sudo apt-get install xterm
fi


#
echo "Where would you like to install the package? (default: /usr)"
read CHOICE

if [ "$CHOICE" == "" ]; then
    echo "Installing to /usr..."
    cd /usr
    git clone https://github.com/DeepBlue14/ride.git
    xrdb ./ride/config/.Xresources
fi

#
#ROS="$(ls /opt)
#if []; then

#
echo "Would you like to create a desktop shortcut? (Y/n)"
read CHOICE

if [ "$CHOICE" == "Y" ] || [ "$CHOICE" == "y" ] || [ "$CHOICE" == "" ]; then
    mv ./ride/install/Ride.desktop ~/Desktop/Ride.desktop
fi    


#
echo "Installation complete!"

