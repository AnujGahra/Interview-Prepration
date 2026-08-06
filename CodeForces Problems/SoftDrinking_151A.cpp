#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toasts_from_drink = (k * l) / nl;
    int toasts_from_limes = c * d;
    int toasts_from_salt = p / np;

    int total_toasts = min({toasts_from_drink, toasts_from_limes, toasts_from_salt});

    int toasts_per_friend = total_toasts / n;

    cout << toasts_per_friend << "\n";

    return 0;
}