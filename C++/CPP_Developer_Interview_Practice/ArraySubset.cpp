#include<iostream>

using namespace std;


int main() {
    int a[] = {11, 7, 1, 13, 21, 3, 7, 3};
    int b[] = {11, 3, 7, 1, 7};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);


    sort(a, a+n);
    sort(b, b+m);

    int i = 0, j = 0;
    while (i < n && j<m) {
        if(a[i] == b[j]) {
            i++;
            j++;
        } else {
            i++;
        }
    
    }

    if(j == m) cout << "True" << endl;
    else cout << "False" << endl;
}
