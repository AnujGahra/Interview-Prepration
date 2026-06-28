#include<iostream>
using namespace std;

int maxProfit(int price[], int n) {
    

    int maxProfit = 0, bestBuy = price[0];

    for(int i = 1; i<n; i++) {
        if(price[i] > bestBuy) {
            maxProfit = max(maxProfit, price[i] - bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }

    return maxProfit;
}

int main() {
    int arr[] = {7, 10, 1, 3, 6, 9, 2};

    int n = sizeof(arr)/sizeof(arr[0]);


    int result = maxProfit(arr, n);
    cout << "MaxProfit: " << result << endl;

    return 0;
}