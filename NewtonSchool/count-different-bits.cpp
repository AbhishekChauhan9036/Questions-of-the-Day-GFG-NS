#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int k1, k2;
    cin >> k1 >> k2;
    int k3 = 0;
    int k4 = k1 ^ k2; 
    while (k4 != 0) {
        if (k4 & 1) {
            k3++;
        }
        k4 >>= 1;
    }
    cout << k3 << endl;
    return 0;
}
