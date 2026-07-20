
// Input
// The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not contain unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

// Output
// If the word t is a word s, written reversely, print YES, otherwise print NO.



#include<iostream>
using namespace std;


int main() {


    string s, t;
    cin >> s >> t;

    int n = s.length();
    int m = t.length();

    if (n != m) {
        cout << "NO";
        return 0;
    }   
    cout << (s == string(t.rbegin(), t.rend()) ? "YES" : "NO");


    return 0;
}