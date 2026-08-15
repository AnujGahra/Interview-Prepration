#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        total_sum += a;
    }
    
    if (total_sum % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}