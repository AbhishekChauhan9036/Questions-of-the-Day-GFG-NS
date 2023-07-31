#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    int k1;
    cin >> k1;
    int k2 = 0;
    for (int k3 = 2; k3 <= sqrt(k1); k3++) {
        if (k1 % k3 == 0) {
            if (k3 % 2 == 0) {
                k2 ^= k3;
            }
            if ((k1 / k3) % 2 == 0 && k3 != k1 / k3) {
                k2 ^= (k1 / k3);
            }
        }
    }
    if (k1 % 2 == 0) {
        k2 ^= k1;
    }
    cout << k2 << endl;
    return 0;
}
