#include<iostream>
using namespace std;

class MyVector{
    int *arr; // pointer to the dynamic array
    int capacity; // total capacity of the vector
    int size; // current size of the vector


    public:
        MyVector() {
            capacity = 1; // initial capacity
            size = 0; // initial size
            arr = new int[capacity]; // allocate memory for the array
        }

    void push(int val) {
        if(size == capacity) {
            int *temp = new int[2*capacity]; // create a new array with double the capacity

            for(int i = 0; i < size; i++) {
                temp[i] = arr[i]; // copy old elements to the new array
            }

            delete[] arr; // free the old array
            arr = temp; // point to the new array
            capacity *= 2; // update the capacity
        }

        arr[size] = val; // add the new element
        size++; // increase the size
    }

    void print() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " "; // print each element
        }
        cout << endl;
    }

    // size of the vector
    int getSize() {
        return size;
    }

    //  capacity of the vector
    int getCapacity() {
        return capacity;
    }

    ~MyVector() {
        delete[] arr; // free the allocated memory
    }

};

int main() {
    MyVector v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40); // This will trigger a resize
    v.push(50); // This will trigger another resize
    v.print(); // Output: 10 20 30 40

    // capacity of the vector
    
    cout << "Size of vector: " << v.getSize() << endl; // Output: Size of vector: 4
    cout << "Capacity of vector: " << v.getCapacity() << endl; // Output: Capacity of vector: 4

    return 0;
}