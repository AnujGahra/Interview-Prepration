#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int min_pos = min({x1, x2, x3});
    int max_pos = max({x1, x2, x3});

    int min_distance = max_pos - min_pos;

    cout << min_distance << "\n";

    return 0;
}