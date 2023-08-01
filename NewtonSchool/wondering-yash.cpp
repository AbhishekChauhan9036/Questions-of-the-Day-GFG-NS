#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int k1;
    cin >> k1;
    int k4 = 0;
    for (int k2 = 1; k2 <= k1; k2++) {
        if (k1 % k2 == 0) {
            k4++;
        }
    }
    cout << k4 << endl;
    return 0;
}
