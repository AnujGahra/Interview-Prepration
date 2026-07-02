#include<iostream>
using namespace std;


int checkNeon(int num) {
    int sqr = num * num;


    int sum = 0;
    while(sqr != 0) {
        sum += sqr % 10;
        sqr /= 10;
    }
    return (sum == num);
}

int main() {


     // Printing Neon Numbers upto 10000
    for (int i = 1; i <= 10000; i++) 
        if (checkNeon(i))
            cout << i << " "; 

    return 0;
}