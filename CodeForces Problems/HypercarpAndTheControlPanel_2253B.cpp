#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<pair<int, int>> runs;
    for (int i = 0; i < n; i++) {
        if (runs.empty() || runs.back().first != a[i]) {
            runs.push_back({a[i], 1});
        } else {
            runs.back().second++;
        }
    }
    
    int m = runs.size();
    bool can_plus_2 = false;
    for (int i = 0; i < m - 1; i++) {
        if (runs[i].second >= 2 && runs[i + 1].second >= 2) {
            can_plus_2 = true;
            break;
        }
    }
    
    if (can_plus_2) {
        cout << m + 2 << "\n";
        return;
    }
    
    bool can_plus_1 = false;
    for (int i = 0; i < m; i++) {
        if (runs[i].second >= 2) {
            if (i + 1 < m) {
                if (i + 2 >= m || runs[i].first != runs[i + 2].first) {
                    can_plus_1 = true;
                    break;
                }
            }
            if (i - 1 >= 0) {
                if (i - 2 < 0 || runs[i].first != runs[i - 2].first) {
                    can_plus_1 = true;
                    break;
                }
            }
        }
    }
    
    if (can_plus_1) {
        cout << m + 1 << "\n";
    } else {
        cout << m << "\n";
    }
}

int main() {
    
    int TestsNumT;
    if (cin >> TestsNumT) {
        while (TestsNumT--) {
            solve();
        }
    }
    return 0;
}