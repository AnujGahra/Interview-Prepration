#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    
    int ops = 0;

    while (x.length() < 2 * m + s.length()) {
        if (x.find(s) != string::npos) {
            cout << ops << "\n";
            return;
        }
        x += x;
        ops++;
    }
    
    if (x.find(s) != string::npos) {
        cout << ops << "\n";
    } else {
        cout << -1 << "\n";
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