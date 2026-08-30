#include <iostream>

using namespace std;

void solve() {
    int k;
    cin >> k;
    int current = 0;
    int count = 0;
    while (count < k) {
        current++;
        if (current % 3 != 0 && current % 10 != 3) {
            count++;
        }
    }
    cout << current << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}