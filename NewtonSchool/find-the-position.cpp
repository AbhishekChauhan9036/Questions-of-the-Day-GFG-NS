#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int rowCount, colCount;
    cin >> rowCount >> colCount;
    vector<vector<int>> matrix(rowCount, vector<int>(colCount));
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            cin >> matrix[i][j];
        }
    }
    int maxSum = INT_MIN;
    int posX = 1, posY = 1;
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            int sum = 0;

            for (int k = 0; k < colCount; k++) {
                if (k != j) {
                    sum += matrix[i][k];
                }
            }

            for (int k = 0; k < rowCount; k++) {
                if (k != i) {
                    sum += matrix[k][j];
                }
            }
            if (sum > maxSum) {
                maxSum = sum;
                posX = i + 1;
                posY = j + 1;
            } else if (sum == maxSum) {
                if (i + 1 < posX || (i + 1 == posX && j + 1 < posY)) {
                    posX = i + 1;
                    posY = j + 1;
                }
            }
        }
    }
    cout << posX << " " << posY << endl;
    return 0;
}
