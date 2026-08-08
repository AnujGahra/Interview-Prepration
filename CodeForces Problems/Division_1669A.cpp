// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399


#include <iostream>
using namespace std;

int main() {
    int t, rating;
    cin >> t;
    while (t--) {
        cin >> rating;
        if (rating >= 1900) {
            cout << "Division 1\n";
        } else if (rating >= 1600) {
            cout << "Division 2\n";
        } else if (rating >= 1400) {
            cout << "Division 3\n";
        } else {
            cout << "Division 4\n";
        }
    }

    return 0;
}
