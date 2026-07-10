#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    // char ch;
    // int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    // cout << "Enter character to find: ";
    // cin >> ch;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] == ch)
    //     {
    //         count++;
    //     }
    // }

    // cout << "Occurrence of '" << ch << "' = " << count << endl;

    unordered_map<char, int> freq;

    for (char ch : str)
    {
        freq[ch]++;
    }

    cout << "\nCharacter Occurrences:\n";
    for (auto it : freq)
    {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}