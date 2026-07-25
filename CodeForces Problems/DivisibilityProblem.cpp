#include<iostream>
using namespace std;



int main() {

    int t, n, d;
    cin >> t;

    int move = 0;
    for(int i = 0; i<t; i++) {
        cin >> n >> d;

        if(n % d == 0){
            cout << 0 << endl;
        } else {
            int reminder = n % d;
            cout << d - reminder << endl;
        }
    }



    return 0;
}