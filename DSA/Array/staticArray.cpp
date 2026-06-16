#include <iostream>
using namespace std;

int main()
{
    int arr[5]; // fixed size array of 5 integers

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i]; // taking input for each element of the array
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }


}