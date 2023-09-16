

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> dishCount;
    int maxCount = 0;
    int mostCravedDish = -1;

    for (int i = 0; i < n; i++) {
        int dishID;
        cin >> dishID;
        dishCount[dishID]++;
        if (dishCount[dishID] > maxCount) {
            maxCount = dishCount[dishID];
            mostCravedDish = dishID;
        }
    }
    cout << mostCravedDish << endl;
    return 0;
}
