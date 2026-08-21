#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int common_val;
    if (a[0] == a[1] || a[0] == a[2])
    {
        common_val = a[0];
    }
    else
    {
        common_val = a[1];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != common_val)
        {
            cout << i + 1 << "\n";
            return;
        }
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