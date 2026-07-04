#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 11;

    // Finding the largest by comparing using
    // relational operators with if-else
    if (a >= b)
    {
        if (a >= c)
            cout << a;
        else
            cout << c;
    }
    else
    {
        if (b >= c)
            cout << b;
        else
            cout << c;
    }
    return 0;
}