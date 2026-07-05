// C++ program to check if a given
// character is vowel or consonant.
#include <iostream>
using namespace std;

// Function to check whether a
// character is vowel or not

int isVowel(char ch) {
    string str = "aeiouAEIOU";
    for (int i = 0; i < str.length(); i++) {
        if (ch == str[i]) {
            return 1;
        }
    }
    return 0;
}

void vowelOrConsonant(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'A' || x == 'E' || x == 'I'
        || x == 'O' || x == 'U')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;
}

// Driver code
int main()
{
    vowelOrConsonant('c');
    vowelOrConsonant('E');

    if(isVowel('c'))
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;
    return 0;
}