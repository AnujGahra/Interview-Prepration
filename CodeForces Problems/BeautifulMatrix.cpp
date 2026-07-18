#include<iostream>
using namespace std;


int main() {
    int matrix[5][5];
    int row, col;

    // Read the 5x5 matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row = i; // 1
                col = j; //4
            }
        }
    }

    // Calculate the number of moves to bring the '1' to the center (2,2)
    int moves = abs(row - 2) + abs(col - 2);

    cout << moves << endl;

    return 0;
}