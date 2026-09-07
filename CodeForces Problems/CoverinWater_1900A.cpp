#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int dot_count = 0;
    bool has_three = false;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            dot_count++;
            if (i + 2 < n && s[i + 1] == '.' && s[i + 2] == '.')
            {
                has_three = true;
            }
        }
    }

    if (has_three)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << dot_count << "\n";
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