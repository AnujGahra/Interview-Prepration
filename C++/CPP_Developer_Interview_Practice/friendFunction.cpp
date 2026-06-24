#include <iostream>
using namespace std;

class Test {
private:
    int x;

public:
    Test() {
        x = 100;
    }

    // Declaring friend function
    friend void display(Test obj);
};

// Friend function definition
void display(Test obj) {
    // Accessing private member directly
    cout << "Value of x = " << obj.x << endl;
}

int main() {
    Test t;
    display(t);

    return 0;
}