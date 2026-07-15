// Story

// 3 friends hain:

// Petya
// Vasya
// Tonya

// Ye programming contest me participate karte hain.

// Contest me n problems hain.

// Har problem ke liye pata hai ki kaun-kaun us problem ka solution janta hai.

// Rule:

// Agar kam se kam 2 friends ko solution aata hai, to wo problem solve karenge.

// Tumhe batana hai ki total kitni problems solve karenge.




#include<iostream>
using namespace std;


int main() {

    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;

}