#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int max_dist = a[0];
    
    for (int i = 0; i < n - 1; i++) {
        max_dist = max(max_dist, a[i+1] - a[i]);
    }
    
    max_dist = max(max_dist, 2 * (x - a[n-1]));
    
    cout << max_dist << "\n";
}

int main() {
  
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}