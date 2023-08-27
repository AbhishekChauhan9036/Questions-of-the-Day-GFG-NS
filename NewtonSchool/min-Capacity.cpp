#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin >> n;
    int k1[n];
    int k2[n];
    for (int i = 0; i < n; i++) {
        cin >> k1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> k2[i];
    }
    int minCapacity = 0;
    int entryIndex = 0;
    int exitIndex = 0;
    int currentCapacity = 0;
    sort(k1, k1 + n);
    sort(k2, k2 + n);
    while (entryIndex < n) {
        if (k1[entryIndex] <= k2[exitIndex]) {
            currentCapacity++;
            entryIndex++;
            minCapacity = max(minCapacity, currentCapacity);
        } else {
            currentCapacity--;
            exitIndex++;
        }
    }
    cout << minCapacity << endl;
    return 0;
}
