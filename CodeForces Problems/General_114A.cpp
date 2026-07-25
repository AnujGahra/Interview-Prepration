#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> height(n);

    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    // Find leftmost maximum
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (height[i] > height[maxIndex]) {
            maxIndex = i;
        }
    }

    // Find rightmost minimum
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (height[i] <= height[minIndex]) {
            minIndex = i;
        }
    }

    int moves = maxIndex + (n - 1 - minIndex);

    // If maximum is after minimum
    if (maxIndex > minIndex) {
        moves--;
    }

    cout << moves << endl;

    return 0;
}