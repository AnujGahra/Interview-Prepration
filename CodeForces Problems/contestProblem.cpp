#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    int *score = new int[n]; // Dynamically allocate an array to hold scores

    for(int i = 0; i < n; i++) {
        cin >> score[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(score[i] >= score[k - 1] && score[i] > 0) {
            count++;
        }
    }

    cout << count << endl;

    delete[] score; // Deallocate the dynamically allocated memory

    return 0;
}