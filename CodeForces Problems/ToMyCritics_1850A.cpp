#include <iostream>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 10 || b + c >= 10 || a + c >= 10)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}