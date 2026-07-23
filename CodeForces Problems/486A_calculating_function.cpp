#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 == 0) {
        // Even numbers
        cout << n / 2 << endl;
    } else {
        // Odd numbers
        cout << -(n + 1) / 2 << endl;
    }

    return 0;
}