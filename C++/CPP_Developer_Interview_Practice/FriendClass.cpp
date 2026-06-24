#include <iostream>
using namespace std;

class A {
private:
    int secret;

public:
    A() {
        secret = 42;
    }

    // Making class B a friend
    friend class B;
};

class B {
public:
    void show(A obj) {
        // Accessing private member of A
        cout << "Secret = " << obj.secret << endl;
    }
};

int main() {
    A a;
    B b;

    b.show(a);

    return 0;
}