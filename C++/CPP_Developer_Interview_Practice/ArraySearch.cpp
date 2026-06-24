#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };

    int x;
    cout << "Enter the element to search: ";
    cin >> x;
    // i need to return the index of the element if found, otherwise return -1
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }

    cout << "Index of the element: " << index << endl;
}