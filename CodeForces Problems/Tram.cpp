#include<iostream>
using namespace std;

int main() {
    int n;
    int a, b;
    cin >> n;

    int capacityTram = 0;
    int ans = 0;

    for(int i = 1; i<=n; i++) {
        cin >> a >> b;

        // Print a single integer denoting the minimum possible capacity of the tram (0 is allowed).

        capacityTram = capacityTram - a + b;

        ans = max(ans, capacityTram);
    }

    cout << ans << endl;

    return 0;
}