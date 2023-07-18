#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    long long k1;
    cin >> k1;
    int k2 = 0;
    long long k3 = 1;
    long long k4 = k1;
    while (k4 != 0) {
        int k5 = k4 % 10;
        k2 += k5;
        k3 *= k5;
        k4 /= 10;
    }
    cout<<((k1 % 2 != 0) ? k3 : k2);
    return 0;
}
