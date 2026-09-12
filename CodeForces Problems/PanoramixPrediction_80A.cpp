#include <iostream>
#include <string>
#include <set>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> unique_chars(s.begin(), s.end());
    int total_balloons = n + unique_chars.size();

    cout << total_balloons << "\n";
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