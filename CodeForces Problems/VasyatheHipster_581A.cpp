#include <iostream>
using namespace std;

int main()
{
    int r, b;
    cin >> r >> b;

    int differentSocks = min(r, b);
    int sameSocks = abs(r - b) / 2;

    cout << differentSocks << " " << sameSocks << endl;
    return 0;
}