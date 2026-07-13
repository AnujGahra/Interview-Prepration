#include <iostream>
using namespace std;

inline int getSum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 5, num2 = 10;

    int result = getSum(num1, num2);
    cout << "Sum: " << result << endl;
    return 0;
}