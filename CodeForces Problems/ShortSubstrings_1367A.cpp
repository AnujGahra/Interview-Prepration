#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string b;
    cin >> b;
    string a = "";
    a += b[0];
    for (int i = 1; i < b.length(); i += 2)
    {
        a += b[i];
    }
    cout << a << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}