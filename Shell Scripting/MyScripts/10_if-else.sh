#!/bin/bash

#echo "Enter your marks:"
#read marks
read -p "Enter your marks: " marks

if [ $marks -ge 90 ]
then
    echo "Grade: A+"
elif [ $marks -ge 80 ]
then
    echo "Grade: A"
elif [ $marks -ge 70 ]
then
    echo "Grade: B"
elif [ $marks -ge 60 ]
then
    echo "Grade: C"
elif [ $marks -ge 33 ]
then
    echo "Grade: D"
else
    echo "Fail"
fi
