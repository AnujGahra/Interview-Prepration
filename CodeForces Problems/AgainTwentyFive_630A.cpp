#include<iostream>
#include <cmath>
using namespace std;

int power(int n) {
    
    int square = pow(5, n);

    // now i need only last 2 digits of the square
    return square % 100;
}


int main() {

    int n;
    cin >> n;
    cout << power(n) << "\n";

    return 0;
}