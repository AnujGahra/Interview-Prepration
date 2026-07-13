#include <iostream>
using namespace std;

void func()
{
    // Allocate memory
    int *ptr = new int[10];

    // Memory is never released
    return;
}

int main()
{
    func();
    return 0;
}