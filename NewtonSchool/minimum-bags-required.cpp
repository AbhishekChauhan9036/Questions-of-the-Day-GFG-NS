

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin >> n;

    int totalWeight;
    cin >> totalWeight;

    int *wt = new int[n];
    int capacity = 0;

    for (int i = 0; i < n; i++) {
        cin >> wt[i];
        capacity += wt[i];
    }

    if (capacity < totalWeight) {
        cout << -1 << endl;
    } else {
        sort(wt, wt + n);
        int minBags = 0;
        capacity = 0;

        for (int i = n - 1; i >= 0; i--) {
            capacity += wt[i];
            minBags++;

            if (capacity >= totalWeight) {
                cout << minBags << endl;
                delete[] wt;
                return 0;
            }
        }
    }

    delete[] wt;
    return 0;
}

