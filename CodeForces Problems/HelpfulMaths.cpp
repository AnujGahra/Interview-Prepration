#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;

    string numbers = "";

    // Extract only the numbers
    for (char ch : input) {
        if (ch != '+') {
            numbers += ch;
        }
    }

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    // Print in required format
    for (int i = 0; i < numbers.length(); i++) {
        cout << numbers[i];
        if (i != numbers.length() - 1) {
            cout << "+";
        }
    }

    return 0;
}