#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return;
    int m = matrix[0].size();

    vector<bool> rowZero(n, false);
    vector<bool> colZero(m, false);

    // 1. Mark rows and columns that have zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                rowZero[i] = true;
                colZero[j] = true;
            }
        }
    }

    // 2. Set entire rows to zero
    for (int i = 0; i < n; i++) {
        if (rowZero[i]) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // 3. Set entire columns to zero
    for (int j = 0; j < m; j++) {
        if (colZero[j]) {
            for (int i = 0; i < n; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 0},
        {4, 5, 6},
        {7, 0, 9}
    };

    setZeroes(matrix);

    // Print the matrix
    for (auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
