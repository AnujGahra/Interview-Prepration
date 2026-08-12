// Polycarp has guessed three positive integers 𝑎
// , 𝑏
//  and 𝑐
// . He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — their pairwise sums (three numbers) and sum of all three numbers (one number). So, there are four numbers on a board in random order: 𝑎+𝑏
// , 𝑎+𝑐
// , 𝑏+𝑐
//  and 𝑎+𝑏+𝑐
// .

// You have to guess three numbers 𝑎
// , 𝑏
//  and 𝑐
//  using given numbers. Print three guessed integers in any order.

// Pay attention that some given numbers 𝑎
// , 𝑏
//  and 𝑐
//  can be equal (it is also possible that 𝑎=𝑏=𝑐
// ).




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
    
    

    vector<long long> x(4);
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }
    
    sort(x.begin(), x.end());
    
    long long a = x[3] - x[2];
    long long b = x[3] - x[1];
    long long c = x[3] - x[0];
    
    cout << a << " " << b << " " << c << "\n";
    
    return 0;
    



    return 0;
}