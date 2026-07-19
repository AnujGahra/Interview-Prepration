// Rearrange like input 3+2+1 and output 1+2+3, and input 1+1+3+1+3 , output 1+1+1+3+3 only sort number not operators

#include<iostream>
using namespace std;



int main() {
    string input;
    cin >> input;

    int n = input.length();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(input[j] > input[j + 1] && input[j] != '+' && input[j + 1] != '+') {
                swap(input[j], input[j + 1]);
            }
        }
    }
    


    

    cout << input << endl;
}