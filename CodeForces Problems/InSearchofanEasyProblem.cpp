#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int p;

    bool isProblem = true;

    for(int i = 0; i<n; i++) {
        cin >> p;
        if(p == 1){
             isProblem = false;
             break;
        }
    }

    if(isProblem){
        cout << "Easy" << endl;
    } else {
        cout << "Hard" << endl;
    }

    return 0;
}