#include<iostream>
using namespace std;


int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    int asciiValue = int(c);
    cout << "The ASCII value of '" << c << "' is: " << asciiValue << endl;

    // using static_cast to convert char to int
    int asciiValueStaticCast = static_cast<int>(c);
    cout << "The ASCII value of '" << c << "' using static_cast is: " << asciiValueStaticCast << endl;

    return 0;
}