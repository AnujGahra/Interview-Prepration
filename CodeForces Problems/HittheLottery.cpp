// The denominations for dollar bills are 1
// , 5
// , 10
// , 20
// , 100
// . What is the minimum number of bills Allen could receive after withdrawing his entire balance?

#include<iostream>
using namespace std;


int getMinCoins(int amount) {
    // Coins ko bade se chhote order mein rakha hai
    vector<int> coins = {100, 20, 10, 5, 1};
    int totalCoins = 0;

    for (int coin : coins) {
        if (amount == 0) break;

        int count = amount / coin;  // Is coin ke kitne lagenge
        totalCoins += count;        // Total count mein add kar do
        amount %= coin;             // Bacha hua amount update kar do
    }

    return totalCoins;
}

int main() {
    int n;
    cin >> n;

    

    cout << getMinCoins(n) << endl;


    return 0;
}