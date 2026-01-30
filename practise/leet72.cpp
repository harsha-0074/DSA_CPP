#include<iostream>
using namespace std;

void setZeroes(int matrix[][3], int n) {
    bool firstRowZero = false, firstColZero = false;

    // Step 1: Check first row
    for (int j = 0; j < n; j++)
        if (matrix[0][j] == 0)
            firstRowZero = true;

    // Step 2: Check first column
    for (int i = 0; i < n; i++)
        if (matrix[i][0] == 0)
            firstColZero = true;

    // Step 3: Mark rows & columns
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Step 4: Zero marked rows
    for (int i = 1; i < n; i++) {
        if (matrix[i][0] == 0) {
            for (int j = 1; j < n; j++)
                matrix[i][j] = 0;
        }
    }

    // Step 5: Zero marked columns
    for (int j = 1; j < n; j++) {
        if (matrix[0][j] == 0) {
            for (int i = 1; i < n; i++)
                matrix[i][j] = 0;
        }
    }

    // Step 6: Zero first row if needed
    if (firstRowZero) {
        for (int j = 0; j < n; j++)
            matrix[0][j] = 0;
    }

    // Step 7: Zero first column if needed
    if (firstColZero) {
        for (int i = 0; i < n; i++)
            matrix[i][0] = 0;
    }
}



int main() {
    int matrix[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix, 3);

    cout << "Matrix after setting zeroes:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


