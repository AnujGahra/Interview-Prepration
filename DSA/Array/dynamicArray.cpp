#include <iostream>
using namespace std;

class DynamicArray
{
    int *arr;     // pointer to the dynamic array
    int capacity; // total capacity of the array
    int size;     // current size of the array

public:
    DynamicArray(int cap)
    {
        capacity = cap;
        size = 0;
        arr = new int[capacity]; // allocate memory for the array
    }

    void push(int value)
    {
        if (size == capacity)
        {
            cout << "Overflow, resizing not handled here\n";
            return;
        }
        arr[size] = value;
        size++;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~DynamicArray() { 
        delete[] arr; 
    }
};

int main()
{
    DynamicArray da(3);
    da.push(10);
    da.push(20);
    da.push(30);
    da.push(40); // This will show overflow message
    da.print();
}