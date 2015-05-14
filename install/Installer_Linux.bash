#########################################################
# File: Installer_Linux.bash
# Author: James Kuczynski
# Email: jkuczyns@cs.uml.edu
# File Description:
#
# Last Modified 05/14/2015
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
    git clone https://github.com/DeepBlue14/Hazel.git
    xrdb ./Hazel/config/.Xresources
fi


#
echo "Would you like to create a desktop shortcut? (Y/n)"
read CHOICE

if [ "$CHOICE" == "Y" ] || [ "$CHOICE" == "y" ] || [ "$CHOICE" == "" ]; then
    mv ./Hazel/install/Hazel.desktop ~/Desktop/Hazel.desktop
fi    


#
echo "Instalation complete!"

