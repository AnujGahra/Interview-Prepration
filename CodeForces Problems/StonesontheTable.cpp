// Stones on the Table
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    string stones;
    cin >> stones;

    int count = 0;

    for(int i = 0; i<n-1; i++) {
        if(stones[i] == stones[i + 1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}