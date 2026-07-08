#!/bin/bash
# How to store the key values pairs
declare -A myArray
myArray=(
    [name]="Anuj Kumar"
    [age]=22
    [city]="Hyderabad"
)

echo " Name is ${myArray[name]}"
echo "Age is ${myArray[age]}"
