#!/bin/bash

echo "========= MENU ========="
echo "a. Display Current Date"
echo "b. List All Shell Scripts"
echo "c. Display Current Working Directory"
echo "d. Display Current User"
echo "========================"

echo "Enter your choice (a/b/c/d):"
read choice

case $choice in
    a)
        echo "Current Date:"
        date
        ;;
    b)
        echo "Shell Script Files:"
        ls *.sh
        ;;
    c)
        echo "Current Working Directory:"
        pwd
        ;;
    d)
        echo "Current User:"
        whoami
        ;;
    *)
        echo "Invalid Choice! Please select a, b, c, or d."
        ;;
esac
