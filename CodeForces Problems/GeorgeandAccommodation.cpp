#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int p, c;

    int count = 0;
    for(int i = 0; i<n; i++) {
        cin >> p >> c;
        if(c - p >= 2) count++;
    }
    cout << count << endl;

    return 0;
}