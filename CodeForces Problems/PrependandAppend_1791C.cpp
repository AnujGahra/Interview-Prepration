#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int l = 0, r = n - 1;
    int len = n;
    
    while (l < r) {
        if (s[l] != s[r]) {
            len -= 2;
            l++;
            r--;
        } else {
            break;
        }
    }
    
    cout << len << "\n";
}

int main() {
    
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}