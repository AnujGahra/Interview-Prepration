#!/bin/bash
#Script to show how to use variable 
a = 10
name = "Anuj Kumar"
age = 22

echo "My name is $name and age is $age"
echo "$name"

#Var to store the output of a command 
HOSTNAME = $(hostname)
echo "Name of this machine is $HOSTNAME"
