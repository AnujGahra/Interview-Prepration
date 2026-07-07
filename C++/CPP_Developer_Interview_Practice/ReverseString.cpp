#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin>> str;
    int n = str.length();

    // for(int i = n - 1; i>=0; i--) {
    //     cout << str[i];
    // }

    // Two pointer approach
    int left = 0;
    int right = n - 1;

    // while(left < right) {
    //     int temp = str[left];
    //     str[left] = str[right];
    //     str[right] = temp;
    //     left++;
    //     right--;
    // }


    // while(left < right) {
    //     swap(str[left], str[right]);
    //     left++;
    //     right--;
    // }

    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;


    return 0;
}