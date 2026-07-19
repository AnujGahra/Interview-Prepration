#include<iostream>
using namespace std;

int main() {
    string username;
    cin >> username;

    int count = 0;

    for(int i = 0; i < username.length(); i++) {
        bool isUnique = true;
        for(int j = 0; j < i; j++) {
            if(username[i] == username[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            count++;
        }
    }

    if(count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}
