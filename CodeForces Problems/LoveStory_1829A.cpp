#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    string target = "codeforces";
    int diff = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] != target[i])
        {
            diff++;
        }
    }
    cout << diff << "\n";
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