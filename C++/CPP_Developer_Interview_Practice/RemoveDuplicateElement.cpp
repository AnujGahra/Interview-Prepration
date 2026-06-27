#include<iostream>
using namespace std;


 vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        
        if(n == 0) return arr;
        
        int j = 0;
        
        for(int i = 1; i<n; i++) {
            if(arr[i] != arr[j]) {
                j++;
                arr[j] = arr[i];
            }
        }
        
        arr.resize(j + 1);
        
        
        return arr;
        
    }

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