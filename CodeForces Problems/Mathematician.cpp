#include<iostream>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int n = str1.length();

    
    int x = stoi(str1, nullptr, 2);
    int y = stoi(str2, nullptr, 2);

    int result = x | y;

    
    cout << "Decimal: " << result << endl;

    // Output in binary (e.g., 8-bit format)
    cout << "Binary: " << bitset<n>(result) << endl;

    return 0;
}