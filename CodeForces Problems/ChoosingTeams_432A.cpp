#include <iostream>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    int valid_count = 0;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        if (y + k <= 5)
        {
            valid_count++;
        }
    }

    cout << valid_count / 3 << "\n";

    return 0;
}