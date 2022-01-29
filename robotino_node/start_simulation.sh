#!/bin/bash
 
 gnome-terminal -- roslaunch robotino_node robotino_node.launch
 sleep 3s
 gnome-terminal -- rosrun robotino_node simple_navigation_goals
