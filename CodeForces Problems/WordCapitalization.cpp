#include<iostream>
using namespace std;


int main() {
    string input;
    cin >> input;

    // Capitalize the first letter of each word
    // bool capitalizeNext = true;
    // for (char &ch : input) {
    //     if (ch == ' ') {
    //         capitalizeNext = true;
    //     } else if (capitalizeNext) {
    //         ch = toupper(ch);
    //         capitalizeNext = false;
    //     }
    // }

    // cout << input << endl;

    // my approach is extract only first letter of each word using index like str[0] and then capitalize it and then print it.

    input[0] = toupper(input[0]);
    cout << input << endl;

    return 0;
}