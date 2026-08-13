#include <iostream>

using namespace std;

int main()
{

    int t;
    if (!(cin >> t))
        return 0;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "+\n";
        }
        else
        {
            cout << "-\n";
        }
    }

    return 0;
}