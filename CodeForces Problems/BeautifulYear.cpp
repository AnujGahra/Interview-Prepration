#include<iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    while (true) {
        year++;
        int y = year;
        bool unique = true;
        bool digits[10] = {false};

        while (y > 0) {
            int digit = y % 10;
            if (digits[digit]) {
                unique = false;
                break;
            }
            digits[digit] = true;
            y /= 10;
        }

        if (unique) {
            cout << year << endl;
            break;
        }
    }

    return 0;
}