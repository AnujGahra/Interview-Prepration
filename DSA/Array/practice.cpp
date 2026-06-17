#include <iostream>
using namespace std;

class MyVector
{
    int *arr;
    int capacity;
    int size;

public:
    MyVector()
    {
        capacity = 1;
        size = 0;
        arr = new int[capacity];
    }

    void push(int val)
    {
        if (size == capacity)
        {
            int *temp = new int[capacity * 2];

            for (int i = 0; i < size; i++)
            {
                temp[i] = arr[i];
            }

            delete[] arr;
            arr = temp;
            capacity *= 2;
        }

        arr[size] = val;
        size++;
    }

    void pop()
    {
        if (size > 0)
        {
            size--;
        }

        if (size <= capacity / 4)
        {
            shrink();
        }
    }

    void shrink()
    {
        if (capacity > 2 && size <= capacity / 4)
        {
            int *temp = new int[capacity / 2];

            for (int i = 0; i < size; i++)
            {
                temp[i] = arr[i];
            }

            delete[] arr;
            arr = temp;
            capacity /= 2;
        }
    }

    void print()
    {
        cout << "Element: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    int getSize()
    {
        return size;
    }

    int getCapacity()
    {
        return capacity;
    }
};

int main()
{
    MyVector vector;
    vector.push(10);
    vector.push(20);
    vector.push(30);
    vector.push(40);

    vector.print();

    cout << endl;

    cout << "Capacity: " << vector.getCapacity()<< endl;
    cout << "Size: " << vector.getSize()<< endl;


    vector.pop();
    vector.pop();
    vector.pop();
    vector.push(70);

    vector.print();
    cout << endl;
    cout << "Capacity: " << vector.getCapacity()<< endl;
    cout << "Size: " << vector.getSize()<< endl;
}