#include <iostream>
using namespace std;

class MyVector {
    int* arr;
    int size;
    int capacity;

public:
    MyVector() {
        capacity = 2;
        size = 0;
        arr = new int[capacity];
    }

    void push(int value) {
        if (size == capacity) {
            int* temp = new int[capacity * 2];

            for (int i = 0; i < size; i++) {
                temp[i] = arr[i];
            }

            delete[] arr;
            arr = temp;
            capacity *= 2;
        }

        arr[size] = value;
        size++;
    }

    void pop() {
        if (size > 0) {
            size--;

            // shrink condition
            if (size <= capacity / 4) {
                shrink();
            }
        }
    }

    void shrink() {
        if (capacity > 2 && size <= capacity / 4) {
            int* temp = new int[capacity / 2];

            for (int i = 0; i < size; i++) {
                temp[i] = arr[i];
            }

            delete[] arr;
            arr = temp;
            capacity /= 2;
        }
    }

    void print() {
        cout << "Elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    ~MyVector() {
        delete[] arr;
    }
};

int main() {
    MyVector v;

    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    v.push(60);

    v.print();

    cout << "Size: " << v.getSize() << endl;
    cout << "Capacity: " << v.getCapacity() << endl;

    v.pop();
    v.pop();
    v.pop();
    v.pop(); // triggers shrink

    v.print();

    cout << "After pop -> Size: " << v.getSize() << endl;
    cout << "After pop -> Capacity: " << v.getCapacity() << endl;

    return 0;
}