#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main() {
    
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int d = 2;

    // Reverse first d elements
    // reverse(arr.begin(), arr.begin() + d);
    reverse(arr, arr+d);


    // Reverse remaining elements

    reverse(arr+d, arr);

    // reverse full array
    reverse(arr, arr+n);

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }


    return 0;

}