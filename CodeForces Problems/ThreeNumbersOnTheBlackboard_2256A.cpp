#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    vector<long long> arr = {a, b, c};
    sort(arr.begin(), arr.end());
    a = arr[0];
    b = arr[1];
    c = arr[2];
    if (c > a + b) {
        cout << b << "\n";
    } else {
        cout << c - a << "\n";
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