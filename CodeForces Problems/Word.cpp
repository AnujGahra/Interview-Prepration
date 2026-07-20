#include<iostream>
using namespace std;

int main() {

    string s;
    cin >> s;

    // if string contain uppercase letter  > lower case letter then convert all letter to uppercase otherwise convert all letter to lowercase and if uppercase == lowercase then convert all letter to lowercase
    int upperCaseCount = 0;
    int lowerCaseCount = 0;

    for(int i = 0; i < s.length(); i++) {
        if(isupper(s[i])) {
            upperCaseCount++;
        } else {
            lowerCaseCount++;
        }
    }


    if(upperCaseCount > lowerCaseCount) {
        for(int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for(int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}