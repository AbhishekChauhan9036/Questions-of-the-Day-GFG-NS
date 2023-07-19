#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
    long long k2, k3;
    cin >> k2 >> k3;
    long long k4 = 0;
    if (k2 % 2 == 0 && k3 % 2 != 0) {
        k4 = (k2 * k3) / k3;
    } else {
        k4 = (k2 + k3 - 1) / k3;
    }
    cout << k4 << endl;
    return 0;
}
