#include<iostream>
using namespace std;

int main() {

    // int arr[] = {20, 30, 40, 50 , 60};

    // int n = sizeof(arr)/sizeof(arr[0]);

    // int largestElement = INT_MIN;

    // for(int i = 0; i< n; i++) {
    //     if(arr[i] > largestElement) {
    //         // largestElement = i; // for return index
    //         largestElement = arr[i]; // for return element
    //     }
    // }

    // cout << largestElement << endl;


    int arr[] = {40, 10, 90, 70, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);

    cout << arr[n-1] << endl;


    return 0;
}