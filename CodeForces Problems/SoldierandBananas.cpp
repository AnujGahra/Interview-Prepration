#include<iostream>
using namespace std;


int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = k * (w * (w + 1)) / 2; // Total cost of bananas
    int amountToBorrow = totalCost - n; // Amount Limak needs to borrow

    cout << (amountToBorrow > 0 ? amountToBorrow : 0) << endl; 
    

    return 0;
}