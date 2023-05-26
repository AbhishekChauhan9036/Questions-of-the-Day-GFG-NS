#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int numElements;
    cin >> numElements;
    vector<int> array(numElements);
    for (int i = 0; i < numElements; i++)
        cin >> array[i];

    int operations = 0;
    while (true) {
        int maxIndex1 = -1, maxIndex2 = -1;
        for (int i = 0; i < numElements; i++) {
            if (maxIndex1 == -1 || array[i] > array[maxIndex1]) {
                maxIndex2 = maxIndex1;
                maxIndex1 = i;
            } else if (maxIndex2 == -1 || array[i] > array[maxIndex2]) {
                maxIndex2 = i;
            }
        }
        if (array[maxIndex1] == 0) {
            break;
        }
        if (array[maxIndex1] == array[maxIndex2]) {
            array[maxIndex1] = 0;
            array[maxIndex2] = 0;
        } else {
            array[maxIndex1] = array[maxIndex2];
            array[maxIndex2] = 0;
        }
        operations++;
    }

    cout << operations << endl;
    return 0;
}
