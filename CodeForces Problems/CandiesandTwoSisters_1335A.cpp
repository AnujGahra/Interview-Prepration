#include<iostream>
using namespace std;


int main() {

    int t;
    cin >> t;

    while( t != 0) {
        int n;
        cin >> n;
        int result = (n - 1)/2;
        cout << result << endl; 
        t--;
    }


    return 0;
}