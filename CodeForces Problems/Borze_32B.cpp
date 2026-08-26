#include <iostream>
#include <string>

using namespace std;

int main() {
    
    
    string s;
    cin >> s;
    
    string result = "";
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            result += '0';
        } else if (s[i] == '-' && i + 1 < n && s[i + 1] == '.') {
            result += '1';
            i++; // Skip the next character as it forms '(-.)'
        } else if (s[i] == '-' && i + 1 < n && s[i + 1] == '-') {
            result += '2';
            i++; // Skip the next character as it forms '(--)'
        }
    }
    
    cout << result << "\n";
    
    return 0;
}