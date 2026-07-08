#!/bin/bash

a=20
b=10

echo "Addition       : $((a + b))"
echo "Subtraction    : $((a - b))"
echo "Multiplication : $((a * b))"
echo "Division       : $((a / b))"
echo "Modulus        : $((a % b))"



let sum=a+b
let sub=a-b
let mul=a*b
let div=a/b
let mod=a%b

echo "Addition       : $sum"
echo "Subtraction    : $sub"
echo "Multiplication : $mul"
echo "Division       : $div"
echo "Modulus        : $mod"
