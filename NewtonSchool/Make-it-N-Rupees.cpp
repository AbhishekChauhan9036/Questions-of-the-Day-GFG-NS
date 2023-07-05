#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    long long z1, z2;
    cin >> z1 >> z2;
    z1 -= (z1 / z2) * z2;
    if (z1 % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
