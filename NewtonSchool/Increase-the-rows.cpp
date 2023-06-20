#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int numRows, numCols, extraRows;
    cin >> numRows >> numCols >> extraRows;
    int initialCells = numRows * numCols;
    int finalRows = numRows + extraRows;
    int finalCells = finalRows * numCols;
    cout << finalCells << endl;
    return 0;
}
