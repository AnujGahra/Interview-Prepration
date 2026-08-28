#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n))
        return 0;

    vector<int> a(n);
    int max_val = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max_val)
        {
            max_val = a[i];
        }
    }

    long long total_spent = 0;
    for (int i = 0; i < n; i++)
    {
        total_spent += (max_val - a[i]);
    }

    cout << total_spent << "\n";

    return 0;
}