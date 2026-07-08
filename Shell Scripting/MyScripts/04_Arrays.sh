#!/bin/bash
#Array
myArray=(1 20 30.5 Hello "Hey Buddy!!" )
echo "Value of first Index: ${myArray[0]}"
#Print all Array Values
echo "All the values in array are ${myArray[*]}"

#How to get Specific values?
echo "${myArray[*]:1}"
echo "${myArray[*]:1:2}"

#Update our array with new Values
myArray+=(New 50 60 )
echo "Values of new array are ${myArray[*]}"
