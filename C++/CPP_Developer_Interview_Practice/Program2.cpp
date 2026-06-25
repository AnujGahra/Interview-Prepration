#include<iostream>
using namespace std;

int main() {
    if(false) {
        cout << "Hello" << endl;
    } else if(false) {
        cout << "world" << endl;
    } else {
        if(false) cout << "!!" << endl;
        else {
            cout << "Tricky" << endl;
        }
    }

    return 0;
}