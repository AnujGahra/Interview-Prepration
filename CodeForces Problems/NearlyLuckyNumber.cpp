#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = 0;

    // Count the lucky digits (4 and 7)
    for (char ch : n) {
        if (ch == '4' || ch == '7') {
            count++;
        }
    }

    // Check if count itself is a lucky number
    if (count == 0) {
        cout << "NO";
        return 0;
    }

    while (count > 0) {
        int digit = count % 10;

        if (digit != 4 && digit != 7) {
            cout << "NO";
            return 0;
        }

        count /= 10;
    }

    cout << "YES";

    return 0;
}