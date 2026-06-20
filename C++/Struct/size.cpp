#include<iostream>
using namespace std;

struct Product {
    double price;
    char name[20];
    float volume;
};

int main() {
    struct Product p;

    cout << sizeof(p) << endl;
}

