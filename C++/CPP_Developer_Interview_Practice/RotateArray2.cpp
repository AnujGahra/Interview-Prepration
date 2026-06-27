#include<iostream>
using namespace std;


void rotateArr(vector<int>& arr, int d) {
    int n = sizeof(arr)/sizeof(arr[0]);
     d = d % n;

    vector<int> temp;

    for(int i = d; i<n; i++) {
        temp.push_back(arr[i]);
    }

    for(int i = 0; i<d; i++) {
        temp.push_back(arr[i]);
    }

    arr = temp;
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;
    rotateArr(arr, d);
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}