#include<iostream>
using namespace std;

union Student {
    int rollNo;     // 4 bytes
    char name[4];   // 4 bytes
};

int main() {
    int arr[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50; 
    
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl; 



    // union
    Student s;
    s.rollNo = 123;
    cout << "Roll No: " << s.rollNo << endl;
    s.name[0] = 'A';
    s.name[1] = 'n';
    s.name[2] = 'u';
    s.name[3] = 'j';
    s.name[4] = 'K'; 


    cout << "Name: " << s.name[0] << endl;
    cout << "Name: " << s.name[1] << endl;
    cout << "Name: " << s.name[2] << endl;
    cout << "Name: " << s.name[3] << endl;
    cout << "Name: " << s.name[4] << endl; // This will

    return 0;
}