#!/bin/bash

for ((i=1; i<=10; i++))
do
    if [ $i -eq 6 ]
    then
        break
    fi

    echo "$i"
done



#sleep a specific time

echo "Script Started"
sleep 5
echo "Script Resumed After 5 Seconds"
