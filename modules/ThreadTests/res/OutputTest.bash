#!/bin/bash

###############################################################################
##                                                                           ##
## File:    OutputTest.bash                                                  ##
## Module: ThreadTests                                                       ##
## Author: James Kuczynski                                                   ##
## Email: jkuczyns@cs.uml.edu                                                ##
## File Description: This file outputs text to stdout with pauses.  It is    ##
##                   used to test reading output from a process to a GUI.    ##
##                                                                           ##
## Created: 1/01/2016                                                        ##
## Last Modified: 1/01/2016                                                  ##
##                                                                           ##
###############################################################################


COUNTER=0
while [ $COUNTER -lt 10 ]; do
    echo The counter is $COUNTER
    let COUNTER=COUNTER+1 #let is bash-specific, and Ubuntu's default sh is dash
    sleep 1
done

echo -en "\e[31;1mEnd of shellscript\e[39;0m\n"
