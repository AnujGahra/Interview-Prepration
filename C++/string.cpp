#include<iostream>
using namespace std;

// custom function for concatination of two strings
string concatenate(string str1, string str2) {
    return str1 + " " + str2; // Concatenating with a space in

}



int main() {
    string str1 = "Hello";
    string str2 = "World";

    string str3 = str1 + " " + str2; // Concatenation
    cout << str3 << endl; // Output: Hello World

    string str4 = "Hello";
    if (str1 == str4) {
        cout << "str1 and str4 are equal." << endl; // This will be printed
    }

    return 0;
}