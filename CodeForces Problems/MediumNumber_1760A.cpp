#include<iostream>
using namespace std;


int main() {


    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // medium number is the one that is neither the maximum nor the minimum among the three numbers.
        if((a > b && a < c) || (a < b && a > c)) {
            cout << a << endl;
        } else if((b > a && b < c) || (b < a && b > c)) {
            cout << b << endl;
        } else {
            cout << c << endl;  
        }
    }


    return 0;
}