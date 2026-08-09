#include <iostream>

using namespace std;

int main() {
    

    int k, r;
    if (!(cin >> k >> r)) return 0;

    for (int i = 1; i <= 10; i++) {
        int totalCost = i * k;
        
        if (totalCost % 10 == 0 || totalCost % 10 == r) {
            cout << i << "\n";
            break;
        }
    }

    return 0;

}


