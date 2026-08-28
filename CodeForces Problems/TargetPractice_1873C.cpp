#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int total_points = 0;
    for (int i = 0; i < 10; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < 10; j++)
        {
            if (row[j] == 'X')
            {
                // Determine the ring layer (0-indexed from outside to inside)
                int r = min({i, 9 - i, j, 9 - j});
                total_points += (r + 1);
            }
        }
    }
    cout << total_points << "\n";
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