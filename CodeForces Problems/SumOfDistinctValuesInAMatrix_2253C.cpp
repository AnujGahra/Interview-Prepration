#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Element {
    long long val;
    int type;
};

long long solve_greedy(const vector<Element>& elements, int R_max, int C_max, int x, int y) {
    R_max = min(x, R_max);
    C_max = min(y, C_max);
    long long sum = 0;
    int cntA = 0, cntB = 0, cntAB = 0;
    int total_cap = R_max + C_max;
    for (const auto& el : elements) {
        if (cntA + cntB + cntAB == total_cap) break;
        if (el.type == 1) {
            if (cntA < R_max) {
                cntA++;
                sum += el.val;
            }
        } else if (el.type == 2) {
            if (cntB < C_max) {
                cntB++;
                sum += el.val;
            }
        } else {
            cntAB++;
            sum += el.val;
        }
    }
    return sum;
}

void solve() {
    int n, m, x, y;
    if (!(cin >> n >> m >> x >> y)) return;
    vector<long long> a(x), b(y);
    for (int i = 0; i < x; i++) cin >> a[i];
    for (int i = 0; i < y; i++) cin >> b[i];

    vector<Element> elements;
    int i = x - 1, j = y - 1;
    while (i >= 0 || j >= 0) {
        if (i >= 0 && j >= 0 && a[i] == b[j]) {
            elements.push_back({a[i], 3});
            i--;
            j--;
        } else if (i >= 0 && (j < 0 || a[i] > b[j])) {
            elements.push_back({a[i], 1});
            i--;
        } else {
            elements.push_back({b[j], 2});
            j--;
        }
    }

    long long ans1 = solve_greedy(elements, n - 1, m, x, y);
    long long ans2 = solve_greedy(elements, n, m - 1, x, y);
    cout << max(ans1, ans2) << "\n";
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