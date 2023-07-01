#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define int long long

signed main() {
    int k1,k2=0;
    cin >> k1;
    if (k1 == 0) {
        cout << "0" << endl;
    } else {
        if ((k1 + 1) % 2 == 0) {
            k2 = (k1 + 1) / 2;
        } else {
            k2 = k1 + 1;
        }

        cout << k2 << endl;
    }
    return 0;
}
