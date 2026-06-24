#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 77;
    

    int& ref = a; // reference variable
    int* ptr = &a; // pointer variable

    cout << "ref: " << ref << endl; // prints 10
    cout << "ptr: " << *ptr << endl; // prints 10

    *ptr = 20; // changing the value of a using pointer
    cout << "ref: " << ref << endl; // prints 20
    cout << "ptr: " << *ptr << endl; // prints 20

    ref = 30; // changing the value of a using reference
    cout << "ref: " << ref << endl; // prints 30
    cout << "ptr: " << *ptr << endl; // prints 30


    ref = b; // 

    return 0;
}