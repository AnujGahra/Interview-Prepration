#!/bin/bash

FREE_SPACE=$(free -mt | awk '/^Total:/ {print $4}')
TH=500

if [ "$FREE_SPACE" -lt "$TH" ]
then
    echo "WARNING: RAM is running low!"
else
    echo "RAM space is sufficient - ${FREE_SPACE} MB"
fi
