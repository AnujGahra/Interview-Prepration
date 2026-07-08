#!/bin/bash

echo "Enter your age:"
read age

if [ $age -ge 18 ] && [ $age -le 60 ]
then
    echo "You are eligible to work."
else
    echo "You are not eligible."
fi
