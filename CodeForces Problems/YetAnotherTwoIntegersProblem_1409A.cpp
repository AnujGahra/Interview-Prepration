#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    
    long long diff = abs(a - b);
    long long moves = (diff + 9) / 10;
    
    cout << moves << "\n";
}

int main() {
    
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}