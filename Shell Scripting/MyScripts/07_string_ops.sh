#!/bin/bash

myVar="Hey Buddy, How are you?"
myVarLength=${#myVar}
echo "Length of my String: $myVarLength"
echo "Uppercase: ${myVar^^}"
echo "Lowercase: ${myVar,,}"
