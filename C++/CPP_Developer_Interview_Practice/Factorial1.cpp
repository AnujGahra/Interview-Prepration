#include<iostream>
using namespace std;


int fact(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n*fact(n-1);
}



int main() {
    int n = 5;
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial;

    // using recursion
    cout << "\nFactorial of " << n << " using recursion is: " << fact(n);
    return 0;
}