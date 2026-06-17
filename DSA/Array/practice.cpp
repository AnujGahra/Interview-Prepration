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

    // Search Element
    void getElement(int target)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == target)
                cout << "Element Founded at Index: " << i << endl;

            else
                cout << "Element Not Founded" << endl;
        }
    }

    // isEmplty
    string isEmpty()
    {
        if (size == capacity)
            return "false";
        else
            return "true";
    }

    
};

int main()
{
    MyVector vector;
    vector.push(10);
    vector.push(20);
    vector.push(30);
    vector.push(40);
    vector.push(70);
    vector.push(80);
    vector.push(90);
    // vector.push(95);

    // vector.print();

    // cout << endl;

    // cout << "Capacity: " << vector.getCapacity()<< endl;
    // cout << "Size: " << vector.getSize()<< endl;

    // vector.pop();
    // vector.pop();
    // vector.pop();

    // vector.print();
    // cout << endl;
    cout << "Capacity: " << vector.getCapacity()<< endl;
    cout << "Size: " << vector.getSize()<< endl;

    // vector.getElement(70);

    cout << vector.isEmpty() << endl;
}