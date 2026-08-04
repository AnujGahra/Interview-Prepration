#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    for (char &c : s) {
        c = tolower(c);
    }
    
    if (s == "yes") {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}