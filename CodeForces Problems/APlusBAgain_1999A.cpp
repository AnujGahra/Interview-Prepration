#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        int b = x % 10; // second digit
        int a = x / 10; // first digit
        cout << a + b << endl;
    }
    return 0;
}