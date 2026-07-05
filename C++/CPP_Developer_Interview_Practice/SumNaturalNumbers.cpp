#include<iostream>
using namespace std;

int findSum(int n) {
    int sum = 0;
    for(int i = 0; i<=n; i++) {
        sum += i;
    }
    return sum;
}


int findSumRecursive(int n) {
    if(n == 0) {
        return 0;
    }
    return n + findSumRecursive(n-1);
}
// using formula n(n+1)/2
int findSumFormula(int n) {
    return n*(n+1)/2;
}

int main() {
    int n = 10;
    cout << "Sum of first " << n << " natural numbers is: " << findSum(n);

    cout << "\nSum of first " << n << " natural numbers using recursion is: " << findSumRecursive(n);

    // using formula
    cout << "\nSum of first " << n << " natural numbers using formula is: " << findSumFormula(n);
    return 0;

}