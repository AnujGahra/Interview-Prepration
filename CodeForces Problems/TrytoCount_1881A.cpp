#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int ops = 0;
    bool found = false;

    for (int i = 0; i <= 5; i++)
    {
        if (x.find(s) != string::npos)
        {
            found = true;
            break;
        }
        x += x;
        ops++;
    }

    // If not found yet, try one more time (6th operation) to cover edge constraints safely
    if (!found)
    {
        if (x.find(s) != string::npos)
        {
            found = true;
        }
    }

    if (found)
    {
        cout << ops << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
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