#include <iostream>
#include <vector>

using namespace std;

int main() {
    

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;
        int placeValue = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                ans.push_back(digit * placeValue);
            }
            n /= 10;
            placeValue *= 10;
        }

        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}