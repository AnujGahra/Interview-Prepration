#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = 1;
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            count++;
        else
            count = 1;

        ans = max(ans, count);
    }

    cout << ans << endl;
}