#include <iostream>
#include <climits>
using namespace std;

int main() {
    int num = INT_MAX; // Maximum value of int

    cout << "Before overflow: " << num << endl;

    num = num + 1; // Overflow occurs

    cout << "After overflow: " << num << endl;

    return 0;
}