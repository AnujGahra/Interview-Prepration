#!/bin/bash


#until loop tab tak execute hota hai jab tak condition false hoti hai.
count=1

until [ $count -gt 10 ]
do
    echo "$count"
    ((count++))
done
