#include<iostream>

namespace myNamespace
{
    int x = 100;
} 

using namespace std;
using namespace myNamespace;


int main() {
    
    cout << x << endl;
    
}

