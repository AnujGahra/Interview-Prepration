#include <iostream>
using namespace std;

int main()
{
    int n = 756345;

    int reversedNumber = 0;
    while (n != 0)
    {
        reversedNumber = reversedNumber * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed Number is: " << reversedNumber;

    return 0;
}