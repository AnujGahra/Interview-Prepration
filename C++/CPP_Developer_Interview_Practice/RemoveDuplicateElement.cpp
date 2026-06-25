#include<iostream>
using namespace std;

int main() {
    // int arr[] = {2, 2, 2, 2, 2, 3, 4, 5};
    int arr[] = {1, 2, 4};

    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    for(int i = 0; i<n; i++) {
        if(arr[i] == arr[i-1]){
            count++;
            continue;
        } else {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    cout << "Total Number of Duplicate Element: " << count << endl;

    return 0;
}