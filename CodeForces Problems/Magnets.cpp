#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    string s;
    int group = 0;

    for(int i = 0; i<n; i++) {
        cin >> s;

        if(s[i] != s[i - 1]) group++;
        

        else s[i - 1] = s[i];

    }

    cout << group << endl;

    return 0;
}