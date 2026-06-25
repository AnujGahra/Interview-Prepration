// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

#include<iostream>
using namespace std;

int main() {

    // int arr[] = {12, 35, 1, 10, 34, 1};
    int arr[] = {10, 10, 10, 10, 10, 10};
    int n = sizeof(arr)/sizeof(arr[0]);


    // sort(arr, arr+n);

    // cout << arr[n-2] << endl;

    int firstLarg = INT_MIN;

    for(int i = 0; i<n; i++) {
        if(arr[i]> firstLarg){
            firstLarg = arr[i];
        }
    }

    // cout << firstLarg << endl;

    int secondLarge = -1;
    for(int i = 0; i<n; i++) {
        if(arr[i] > secondLarge && arr[i] != firstLarg) {
            secondLarge = arr[i];
        }
    }

    cout << "Second Largest Element of array: " << secondLarge << endl;

    return 0;
}