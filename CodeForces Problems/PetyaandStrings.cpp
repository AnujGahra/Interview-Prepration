// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.


#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int count = 0; // Initialize a counter to track the number of differing characters

    // Iterate through each character in the strings
    for (int i = 0; i < s1.length(); i++) {
        // Compare characters at the same position in both strings
        if (tolower(s1[i]) != tolower(s2[i])) {
            // count++; // Increment the counter if characters differ
            if (tolower(s1[i]) < tolower(s2[i])) {
                cout << "-1" << endl; // First string is less than the second
                return 0;
            } else {
                cout << "1" << endl; // Second string is less than the first
                return 0;
            }
        }
    }

    cout << "0" << endl; // Strings are equal

    return 0;
}

