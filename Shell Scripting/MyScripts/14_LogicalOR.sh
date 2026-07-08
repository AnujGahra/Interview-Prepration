#!/bin/bash

echo "Enter your marks:"
read marks

if [ $marks -ge 90 ] || [ $marks -lt 33 ]
then
    echo "Special Case!"
else
    echo "Normal Result"
fi
