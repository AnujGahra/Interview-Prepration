#include <iostream>
using namespace std;

union Student {
    int rollNo;     // 4 bytes
    char name[4];   // 4 bytes
};

int main() {
    cout << "Size of union Student = "
         << sizeof(Student)
         << " bytes" << endl;

         Student s;
            s.rollNo = 123;
    cout << "Roll No: " << s.rollNo << endl;
    s.name[0] = 'A';
    s.name[1] = 'n';
    s.name[2] = 'u';
    s.name[3] = 'j';
    cout << "Name: " << s.name[0] << endl;

    s.name[5] = 'B';
    cout << "Name: " << s.name[5] << endl;

    cout << "Roll No: " << s.name << endl; // This will likely print garbage value due to memory overlap

    cout << s.rollNo << endl; // This will also likely print garbage value due to memory overlap


    return 0;
}