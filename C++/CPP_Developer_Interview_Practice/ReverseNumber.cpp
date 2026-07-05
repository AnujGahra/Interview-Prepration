#include <iostream>
using namespace std;




int main()
{
    // int n = 756345;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int org = n;

    int reversedNumber = 0;
    while (n != 0)
    {
        reversedNumber = reversedNumber * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed Number is: " << reversedNumber << endl;;
    cout << "Original Number is: " << org;


    if(org == reversedNumber) {
        cout << "\nThe number is a palindrome.";
    } else {
        cout << "\nThe number is not a palindrome.";
    }
    return 0;
}