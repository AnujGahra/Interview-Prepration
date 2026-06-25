#include<iostream>
using namespace std;


int main() {
    int arr[6] = {2, 3, 4, 5, 6, 7};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = n-1; i>=0; i--) {
        cout << arr[i] << " ";
    }


    return 0;
}