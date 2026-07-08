#!/bin/bash

echo "Enter your age:"
read age

if ! [ $age -ge 18 ]
then
    echo "You are a Minor."
else
    echo "You are an Adult."
fi
