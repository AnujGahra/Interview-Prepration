#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    int* p1 = &a;
    int* p2 = &b;

    int* p3 = &p1 + *p2; // ERROR

    cout << p3 << endl;
    return 0;
}