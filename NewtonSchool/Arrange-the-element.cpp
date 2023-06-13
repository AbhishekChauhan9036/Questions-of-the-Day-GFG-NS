#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int numElements;
    cin >> numElements;

    vector<int> inputArr(numElements);
    vector<int> evenNums;
    vector<int> oddNums;

    for (int i = 0; i < numElements; i++) {
        cin >> inputArr[i];
        if (inputArr[i] % 2 == 0) {
            evenNums.push_back(inputArr[i]);
        } else {
            oddNums.push_back(inputArr[i]);
        }
    }

    int evenPtr = 0;
    int oddPtr = 0;

    for (int i = 0; i < numElements; i++) {
        if (evenPtr < evenNums.size()) {
            inputArr[i] = evenNums[evenPtr];
            evenPtr++;
        } else {
            inputArr[i] = oddNums[oddPtr];
            oddPtr++;
        }
    }
    for (int i = 0; i < numElements; i++) {
        cout << inputArr[i];
        if (i < numElements - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
