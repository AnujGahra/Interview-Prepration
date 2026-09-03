#include <iostream>

using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        cout << "First\n";
    } else if (b > a) {
        cout << "Second\n";
    } else {
        if (c % 2 == 1) {
            cout << "First\n";
        } else {
            cout << "Second\n";
        }
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