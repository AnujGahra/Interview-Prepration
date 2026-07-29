#include<iostream>
using namespace std;


int main() {

    int n;
    cin >> n;

    while(n != 0) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b + c || b == a + c || c == a+b) cout << "Yes" << endl;
        else cout << "No" << endl;

        n--;
    }



    return 0;
}