#include<iostream>
#include<set>
using namespace std;

int main() {

    

    set<int> unique_colors;
    
    for (int i = 0; i < 4; ++i) {
        int color;
        cin >> color;
        unique_colors.insert(color); // Set will only keep unique values
    }
    
    // Total needed (4) minus unique colors available
    cout << 4 - unique_colors.size() << endl;



    return 0;
}