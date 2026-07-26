#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool visited[101] = {false};

    int p;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        visited[level] = true;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        visited[level] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}