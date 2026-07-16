#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    string s;

    // Loop n times to process each statement
    for (int i = 0; i < n; i++) {
        cin >> s; // Automatically skips newlines and reads the next word
        
        // Note: Codeforces typically uses uppercase 'X' (e.g., "++X" or "X++")
        if (s == "++X" || s == "X++" || s == "++x" || s == "x++") {
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;
    return 0;
}