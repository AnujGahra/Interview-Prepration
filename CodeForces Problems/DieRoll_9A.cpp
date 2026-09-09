#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{

    int y, w;
    cin >> y >> w;

    int max_val = max(y, w);
    int favorable = 6 - max_val + 1;
    int total = 6;

    int g = gcd(favorable, total);

    cout << (favorable / g) << "/" << (total / g) << "\n";

    return 0;
}