#include <iostream>
using namespace std;

// custom function for concatination of two strings
string concatenate(string str1, string str2)
{
    return str1 + " " + str2; // Concatenating with a space in
}

// custom function for comparing two strings
bool compare(string str1, string str2)
{
    return str1 == str2; // Returns true if strings are equal, false otherwise
}

// custom logic for find string length
// int stringLength(string str) {
//     int length = 0;
//     for (char c : str) {
//         length++;
//     }
//     return length;
// }

int stringLength(string str)
{
    int length = 0;
    for (int i = 0; i < str.size(); i++)
    {
        length++;
    }
    return length;
}

// custom at() method to access character at a specific index
char charAt(string str, int index)
{
    if (index >= 0 && index < str.size())
    {
        return str[index]; // Accessing character at the specified index
    }
    else
    {
        throw out_of_range("Index out of range"); // Throwing an exception for invalid index
    }
}

int main()
{
    string str1 = "Hello";
    string str2 = "World";

    cout << str1[0] << endl; // Accessing the first character of str1
    cout << str2[0] << endl; // Accessing the first character of str2

    string str3 = str1.append(str2); // Using the built-in concatenate function
    cout << "Built-in Concatenated String: " << str3 << endl;

    // Concatenating str1 and str2
    string result = concatenate(str1, str2);
    cout << "Concatenated String: " << result << endl;

    // Finding length of str1 and str2
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);
    cout << "Length of String 1: " << len1 << endl;
    cout << "Length of String 2: " << len2 << endl;

    // Comparing str1 and str2
    if (compare(str1, str2))
    {
        cout << "The strings are equal." << endl;
    }
    else
    {
        cout << "The strings are not equal." << endl;
    }
    return 0;

    // Accessing character at a specific index

    char ch = charAt(str2, 1); // Accessing the second character of
    cout << "Character at index 1 of str1: " << ch << endl;
}