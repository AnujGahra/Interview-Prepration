#include <iostream>
#include <vector>
using namespace std;

void AddTwoVec(vector<int> &v1, vector<int> &v2)
{
    int n = v1.size();
    int m = v2.size();

    if (n != m)
    {
        cout << "Vectors must be of same size!" << endl;
        return;
    }

    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        result.push_back(v1[i] + v2[i]);
    }

    cout << "Sum of vectors: ";
    for (int x : result)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {5, 6, 7, 8};

    // function calling

    AddTwoVec(v1, v2);
    AddTwoVec(v1, v2);

    return 0;
}