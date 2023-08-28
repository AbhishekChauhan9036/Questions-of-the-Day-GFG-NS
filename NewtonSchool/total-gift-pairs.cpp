#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> gifts(n);
    for (int i = 0; i < n; i++) {
        cin >> gifts[i];
    }
    int couponNumber;
    cin >> couponNumber;

    vector<int> remainderCount(couponNumber, 0);
    for (int cost : gifts) {
        int remainder = cost % couponNumber;
        remainderCount[remainder]++;
    }
    int totalCount = 0;
    for (int i = 0; i <= couponNumber / 2; i++) {
        int other = (couponNumber - i) % couponNumber;
        if (i == other) {
            totalCount += remainderCount[i] * (remainderCount[i] - 1) / 2; 
        } else {
            totalCount += remainderCount[i] * remainderCount[other];
        }
    }
    cout << totalCount << endl;

    return 0;
}
