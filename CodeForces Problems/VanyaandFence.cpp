// The first line of the input contains two integers n and h (1 ≤ n ≤ 1000, 1 ≤ h ≤ 1000) — the number of friends and the height of the fence, respectively.

// The second line contains n integers ai (1 ≤ ai ≤ 2h), the i-th of them is equal to the height of the i-th person.




#include<iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int total_width = 0;
    for (int i = 0; i < n; ++i) {
        int height;
        cin >> height;
        if (height > h) {
            total_width += 2; // Person is taller than the fence, takes 2 units
        } else {
            total_width += 1; // Person is shorter than or equal to the fence, takes 1 unit 
    
        }
    }
    cout << total_width << endl;


}