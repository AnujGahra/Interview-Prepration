#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int p;

    int sum = 0;

    for(int i = 0; i<n; i++) {
        cin >> p;

        sum += p;
    }

    double result = (double)sum / n;
    cout << result << endl;

    return 0;
}