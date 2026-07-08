#!/bin/bash

for i in {1..10}
do
    echo "$i"
done



for name in Raju Sham Baburao
do
	echo "Name is $name"
done



# For loop with array
fruits=("Apple" "Banana" "Mango" "Orange")

for fruit in "${fruits[@]}"
do
    echo "$fruit"
done


# print file name
for file in *.sh
do
    echo "$file"
done
