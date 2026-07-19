// In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.


#include<iostream>
using namespace std;


int main() {

    int n;
    cin >> n;
    
    int steps = n / 5; // Number of full 5-steps
    if(n % 5 != 0) {
        steps++; // If there's a remainder, we need one more step
    }

    cout << steps << endl;

    return 0;
}