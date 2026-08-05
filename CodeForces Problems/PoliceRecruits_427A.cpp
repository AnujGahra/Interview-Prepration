#include<iostream>
using namespace std;


int main() {



    int n;
    if (!(cin >> n)) return 0;

    int available_officers = 0;
    int untreated_crimes = 0;

    for (int i = 0; i < n; ++i) {
        int event;
        cin >> event;

        if (event == -1) {
            if (available_officers > 0) {
                available_officers--;
            } else {
                untreated_crimes++;
            }
        } else {
            available_officers += event;
        }
    }

    cout << untreated_crimes << "\n";

    return 0;
}