#include<iostream>
using namespace std;


int main() {
    int m, n;
    cin >> m >> n;

    int areaRectangularBoard = m * n; // Calculate the area of the rectangular board

    int areaDomino = 2; // Each Domino covers an area of 2

    int numberOfDominos = areaRectangularBoard / areaDomino; // Calculate the number of dominos needed

    cout << numberOfDominos << endl;

    return 0;
}