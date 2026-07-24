#include<iostream>
#include<vector>
using namespace std;


int main() {
    int n;
    cin>>n;

    vector<int> result(n + 1); 

    for (int giver = 1; giver <= n; ++giver) {
        int receiver;
        cin >> receiver;
        result[receiver] = giver; // Store who gave the gift to this receiver
    }

    for (int i = 1; i <= n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}